/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#pragma once

#include "Matrix.h"
#include "MatrixD.h"
#include "RectD.h"
#include "RectD.h"
#include "Vec3D.h"
#include "CircleD.h"
#include "CollisionPrimitives.h"
#include <vector>

class CollisionUtil {

public:
    static bool checkRectCollision(const RectD &rect1, const RectD &rect2, int32_t addSpacing = 0) {
        return (rect1.x < (rect2.x + rect2.width + addSpacing)) &&
               ((rect1.x + rect1.width) > (rect2.x - addSpacing)) &&
               (rect1.y < (rect2.y + rect2.height + addSpacing)) &&
               ((rect1.y + rect1.height) > (rect2.y - addSpacing));
    }

    static bool checkCircleCollision(const CircleD &circle1, const CircleD &circle2, int32_t addSpacing = 0) {
        double dX = circle1.x - circle2.x;
        double dY = circle1.y - circle2.y;
        double distanceSq = dX * dX + dY * dY;
        double r = circle1.radius + circle2.radius + addSpacing;
        return distanceSq < (r * r);
    }

    static bool checkRectCircleCollision(const CollisionRectD &rect, const CircleD &circle, int32_t addSpacing = 0) {
        double minX = std::min(rect.x + rect.width, rect.x);
        double minY = std::min(rect.y + rect.height, rect.y);
        double closestX = std::max(minX, std::min(minX + rect.width, circle.x));
        double closestY = std::max(minY, std::min(minY + rect.height, circle.y));
        double dX = closestX - circle.x;
        double dY = closestY - circle.y;
        double r = circle.radius + addSpacing;
        return (dX * dX + dY * dY) < (r * r);
    }

    static bool checkRectCircleCollision(const RectD &rect, const CircleD &circle, int32_t addSpacing = 0) {
        double minX = std::min(rect.x + rect.width, rect.x);
        double minY = std::min(rect.y + rect.height, rect.y);
        double closestX = std::max(minX, std::min(minX + rect.width, circle.x));
        double closestY = std::max(minY, std::min(minY + rect.height, circle.y));
        double dX = closestX - circle.x;
        double dY = closestY - circle.y;
        double r = circle.radius + addSpacing;
        return (dX * dX + dY * dY) < (r * r);
    }

    static bool checkCirclesCollision(const std::vector<CircleD> &circles, const CircleD &circle2, int32_t addSpacing = 0) {
        for (const auto &circle1 : circles) {
            double dX = circle1.x - circle2.x;
            double dY = circle1.y - circle2.y;
            double distanceSq = dX * dX + dY * dY;
            double r = circle1.radius + circle2.radius + addSpacing;
            if (distanceSq < (r * r)) {
                return true;
            }
        }
        return false;
    }

    struct CollisionEnvironment {
        const std::vector<double> &vpMatrix;
        const bool is3d;
        std::vector<double> &temp1;
        std::vector<double> &temp2;
        const double halfWidth;
        const double halfHeight;
        const double sinNegGridAngle;
        const double cosNegGridAngle;
        const Vec3D &origin;

        CollisionEnvironment(
                             const std::vector<double>& vpMatrix,
                             const bool is3d,
                             std::vector<double>& temp1,
                             std::vector<double>& temp2,
                             const double halfWidth,
                             const double halfHeight,
                             const double sinNegGridAngle,
                             const double cosNegGridAngle,
                             const Vec3D &origin)
        : vpMatrix(vpMatrix),
        is3d(is3d),
        temp1(temp1),
        temp2(temp2),
        halfWidth(halfWidth),
        halfHeight(halfHeight),
        sinNegGridAngle(sinNegGridAngle),
        cosNegGridAngle(cosNegGridAngle),
        origin(origin)
        {}
    };

    static std::optional<CircleD> getProjectedCircle(const CollisionCircleD &circle,
                                      CollisionEnvironment &env) {
        if (env.is3d) {
            //earth center
            env.temp2[0] = 0.0 - env.origin.x;
            env.temp2[1] = 0.0 - env.origin.y;
            env.temp2[2] = 0.0;
            env.temp2[3] = 1.0;

            MatrixD::multiply(env.vpMatrix, env.temp2, env.temp1);

            double earthCenterZ = env.temp1[2] / env.temp1[3];


            env.temp2[0] = (double) (1.0 * sin(circle.y) * cos(circle.x)) - env.origin.x;
            env.temp2[1] = (double) (1.0 * cos(circle.y)) - env.origin.y;
            env.temp2[2] = (double) (-1.0 * sin(circle.y) * sin(circle.x)) - env.origin.z;
            env.temp2[3] = 1.0;

            MatrixD::multiply(env.vpMatrix, env.temp2, env.temp1);

            env.temp1[0] /= env.temp1[3];
            env.temp1[1] /= env.temp1[3];
            env.temp1[2] /= env.temp1[3];
            env.temp1[3] /= env.temp1[3];

            auto diffCenterZ = env.temp1[2] - earthCenterZ;

            if (diffCenterZ > 0) {
                return std::nullopt;
            }

            double originX = (env.temp1[0] * env.halfWidth + env.halfWidth);
            double originY = (env.temp1[1] * env.halfHeight + env.halfHeight);

            return CircleD {originX, originY,  circle.radius};

        } else {
            env.temp2[0] = circle.x - env.origin.x;
            env.temp2[1] = circle.y - env.origin.y;
            env.temp2[2] = 0.0;
            env.temp2[3] = 1.0;
            MatrixD::multiply(env.vpMatrix, env.temp2, env.temp1);
            double originX = ((env.temp1[0] / env.temp1[3]) * env.halfWidth + env.halfWidth);
            double originY = ((env.temp1[1] / env.temp1[3]) * env.halfHeight + env.halfHeight);
            env.temp2[0] = circle.radius;
            env.temp2[1] = circle.radius;
            env.temp2[2] = 0.0;
            env.temp2[3] = 0.0;
            MatrixD::multiply(env.vpMatrix, env.temp2, env.temp1);
            env.temp1[0] = env.temp1[0] * env.halfWidth;
            env.temp1[1] = env.temp1[1] * env.halfHeight;
            double iRadius = std::sqrt(env.temp1[0] * env.temp1[0] + env.temp1[1] * env.temp1[1]);
            return CircleD {originX, originY, iRadius};
        }
    }

    static std::optional<RectD> getProjectedRectangle(const CollisionRectD &rectangle,
                                       CollisionEnvironment &env) {
        if (env.is3d) {

            //earth center
            env.temp2[0] = 0.0 - env.origin.x;
            env.temp2[1] = 0.0 - env.origin.y;
            env.temp2[2] = 0.0;
            env.temp2[3] = 1.0;

            MatrixD::multiply(env.vpMatrix, env.temp2, env.temp1);

            double earthCenterZ = env.temp1[2] / env.temp1[3];


            env.temp2[0] = (double) (1.0 * sin(rectangle.anchorY) * cos(rectangle.anchorX)) - env.origin.x;
            env.temp2[1] = (double) (1.0 * cos(rectangle.anchorY)) - env.origin.y;
            env.temp2[2] = (double) (-1.0 * sin(rectangle.anchorY) * sin(rectangle.anchorX)) - env.origin.z;
            env.temp2[3] = 1.0;

            MatrixD::multiply(env.vpMatrix, env.temp2, env.temp1);

            env.temp1[0] /= env.temp1[3];
            env.temp1[1] /= env.temp1[3];
            env.temp1[2] /= env.temp1[3];
            env.temp1[3] /= env.temp1[3];

            auto diffCenterZ = env.temp1[2] - earthCenterZ;

            if (diffCenterZ > 0) {
                return std::nullopt;
            }


            double originX = ((env.temp1[0]) * env.halfWidth + env.halfWidth);
            double originY = ((env.temp1[1]) * env.halfHeight + env.halfHeight);

            double w = rectangle.width;
            double h = rectangle.height;

            return RectD {double(originX - w / 2.0) , double(originY - h / 2.0), std::abs(w), std::abs(h)};
        } else {

            env.temp2[0] = (rectangle.x - env.origin.x) - rectangle.anchorX; // move x to the anchor
            env.temp2[1] = (rectangle.y - env.origin.y) - rectangle.anchorY;
            env.temp2[2] = env.temp2[0] * env.cosNegGridAngle - env.temp2[1] * env.sinNegGridAngle; // rotate x
            env.temp2[3] = env.temp2[0] * env.sinNegGridAngle + env.temp2[1] * env.cosNegGridAngle;
            env.temp2[0] = env.temp2[2] + rectangle.anchorX; // move rotated x to correct location relative to the anchor
            env.temp2[1] = env.temp2[3] + rectangle.anchorY;
            env.temp2[2] = 0.0;
            env.temp2[3] = 1.0;
            MatrixD::multiply(env.vpMatrix, env.temp2, env.temp1);
            double originX = ((env.temp1[0] / env.temp1[3]) * env.halfWidth + env.halfWidth);
            double originY = ((env.temp1[1] / env.temp1[3]) * env.halfHeight + env.halfHeight);
            env.temp2[0] = rectangle.width * env.cosNegGridAngle;
            env.temp2[1] = rectangle.width * env.sinNegGridAngle;
            env.temp2[2] = 0.0;
            env.temp2[3] = 0.0;
            MatrixD::multiply(env.vpMatrix, env.temp2, env.temp1);
            double w = env.temp1[0];
            double h = env.temp1[1];
            env.temp2[0] = -rectangle.height * env.sinNegGridAngle;
            env.temp2[1] = rectangle.height * env.cosNegGridAngle;
            env.temp2[2] = 0.0;
            env.temp2[3] = 0.0;
            MatrixD::multiply(env.vpMatrix, env.temp2, env.temp1);
            w += env.temp1[0];
            h += env.temp1[1];
            double width = (w * env.halfWidth); // by assumption aligned with projected space
            double height = (h * env.halfHeight); // by assumption aligned with projected space
            originX = std::min(originX, originX + width);
            originY = std::min(originY, originY + height);
            // Rectangle origin is chosen as the min/min corner with width/height always positive
            return RectD {originX, originY, std::abs(width), std::abs(height)};
        }
    }
};
