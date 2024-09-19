/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#include "MapScene.h"
#ifdef __linux__
#include "ThreadPoolSchedulerImpl.h"
#include "sys/prctl.h"
#include "sys/resource.h"
#endif
#if __ANDROID__
#include "AndroidSchedulerCallback.h"
#endif

std::shared_ptr<MapInterface> MapInterface::create(const std::shared_ptr<::GraphicsObjectFactoryInterface> &graphicsFactory,
                                                   const std::shared_ptr<::ShaderFactoryInterface> &shaderFactory,
                                                   const std::shared_ptr<::RenderingContextInterface> &renderingContext,
                                                   const MapConfig &mapConfig,
                                                   const std::shared_ptr<::SchedulerInterface> &scheduler, float pixelDensity) {
    auto scene = SceneInterface::create(graphicsFactory, shaderFactory, renderingContext);
    return std::make_shared<MapScene>(scene, mapConfig, scheduler, pixelDensity);
}

std::shared_ptr<MapInterface> MapInterface::createWithOpenGl(const MapConfig &mapConfig,
                                                             float pixelDensity) {
#if __ANDROID__
    auto scheduler = std::make_shared<ThreadPoolSchedulerImpl>(std::make_shared<AndroidSchedulerCallback>());
    return std::make_shared<MapScene>(SceneInterface::createWithOpenGl(), mapConfig, scheduler, pixelDensity);
#elif __linux__
    // FIXME -- this seems to be the wrong place for this; we should set the scheduler from outside, otherwise we have to make this library depend on JNI.
    struct NopThreadPoolCallbacks : ThreadPoolCallbacks {
        ~NopThreadPoolCallbacks() = default;
        std::string getCurrentThreadName() override {
            char name[32] = "";
            prctl(PR_GET_NAME, name);
            return name;
        }

        void setCurrentThreadName(const std::string &name) override {
            prctl(PR_SET_NAME, name.c_str());
        }
        void setThreadPriority(TaskPriority priority) override {
          int p = 0;
          switch (priority) {
              case TaskPriority::HIGH:
                  // THREAD_PRIORITY_FOREGROUND
                  p = -2;
                  break;
              case TaskPriority::NORMAL:
                  // THREAD_PRIORITY_DEFAULT
                  p = 0;
                  break;
              case TaskPriority::LOW:
                  // THREAD_PRIORITY_BACKGROUND
                  p = 10;
                  break;
          }
          setpriority(PRIO_PROCESS, 0, p);
        }

        void attachThread() override {}
        void detachThread() override {}
    };
    auto scheduler = std::make_shared<ThreadPoolSchedulerImpl>(std::make_shared<NopThreadPoolCallbacks>());
    return std::make_shared<MapScene>(SceneInterface::createWithOpenGl(), mapConfig, scheduler, pixelDensity);
#else
    // "not-null
    return nullptr;
#endif
}
