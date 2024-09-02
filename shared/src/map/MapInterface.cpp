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
        std::string getCurrentThreadName() override { return ""; };
        void setCurrentThreadName(const std::string &name) override {}
        void setThreadPriority(TaskPriority priority) override {}
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
