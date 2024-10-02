/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#include <metal_stdlib>
#include "DataStructures.metal"
using namespace metal;

struct TextInstancedVertexOut {
  float4 position [[ position ]];
  float2 uv;
  float4 texureCoordinates;
  uint16_t styleIndex;
    float alpha;
};

vertex TextInstancedVertexOut
unitSphereTextInstancedVertexShader(const VertexIn vertexIn [[stage_in]],
                          constant float4x4 &vpMatrix [[buffer(1)]],
                          constant float4x4 &mMatrix [[buffer(2)]],
                          constant float2 *positions [[buffer(3)]],
                          constant float2 *scales [[buffer(4)]],
                          constant float *rotations [[buffer(5)]],
                          constant float4 *texureCoordinates [[buffer(6)]],
                          constant uint16_t *styleIndices [[buffer(7)]],
                          constant float2 *referencePositions [[buffer(8)]],
                          uint instanceId [[instance_id]])
{
    const float2 referencePosition = referencePositions[instanceId];
    const float2 offset = positions[instanceId];
    const float2 scale = scales[instanceId];
    const float rotation = rotations[instanceId];

    const float angle = rotation * M_PI_F / 180.0;

    float4 newVertex = mMatrix * float4(referencePosition, 1.0, 1.0);

    const float x = newVertex.z * sin(newVertex.y) * cos(newVertex.x);
    const float y = newVertex.z * cos(newVertex.y);
    const float z = -newVertex.z * sin(newVertex.y) * sin(newVertex.x);

    float4 earthCenter = vpMatrix * float4(0,0,0, 1.0);
    float4 screenPosition = vpMatrix * float4(x,y,z, 1.0);

    earthCenter /= earthCenter.w;
    screenPosition /= screenPosition.w;

    auto diffCenter = screenPosition - earthCenter;

    float alpha = 1.0;

    if (diffCenter.z > 0) {
        alpha = 0.0;
    }

    float sinAngle = sin(angle);
    float cosAngle = cos(angle);

    const float2 p = (vertexIn.position.xy);
    auto pRot = float2(p.x * cosAngle + p.y * sinAngle, -p.x * sinAngle + p.y * cosAngle);
    pRot = float2(pRot.x * scale.x, pRot.y * scale.y);
    auto position = float4(screenPosition.xy + offset + pRot, 0, 1.0);

    TextInstancedVertexOut out {
      .position = position,
      .uv = vertexIn.uv,
      .texureCoordinates = texureCoordinates[instanceId],
      .styleIndex = styleIndices[instanceId],
      .alpha = alpha
    };

    return out;
}

fragment float4
unitSphereTextInstancedFragmentShader(TextInstancedVertexOut in [[stage_in]],
                       constant float *styles [[buffer(1)]],
                       texture2d<float> texture0 [[ texture(0)]],
                       sampler textureSampler [[sampler(0)]])
{
    const float2 uv = in.texureCoordinates.xy + in.texureCoordinates.zw * float2(in.uv.x, in.uv.y);
    const int styleOffset = in.styleIndex * 9;
    float4 color = float4(styles[styleOffset + 0], styles[styleOffset + 1], styles[styleOffset + 2], styles[styleOffset + 3]);
    const float4 haloColor = float4(styles[styleOffset + 4], styles[styleOffset + 5], styles[styleOffset + 6], styles[styleOffset + 7]);
    const float haloWidth = styles[styleOffset + 8];

    if (in.alpha == 0 || (color.a == 0 && haloColor.a == 0.0)) {
        discard_fragment();
    }

    float4 dist = texture0.sample(textureSampler, uv);

    float median = max(min(dist.r, dist.g), min(max(dist.r, dist.g), dist.b)) / dist.a;
    float w = fwidth(median);
    float alpha = smoothstep(0.5 - w, 0.5 + w, median);

    float4 mixed = mix(haloColor, color, alpha);

    if(haloWidth > 0) {
      float start = (0.0 + 0.5 * (1.0 - haloWidth)) - w;
      float end = start + w;
      float a2 = smoothstep(start, end, median) * color.a;
      return float4(mixed.r * a2, mixed.g * a2, mixed.b * a2, a2);
    } else {
      float a2 = alpha * color.a;
      return float4(mixed.r * a2, mixed.g * a2, mixed.b * a2, a2);
    }
}

vertex TextInstancedVertexOut
textInstancedVertexShader(const VertexIn vertexIn [[stage_in]],
                          constant float4x4 &vpMatrix [[buffer(1)]],
                          constant float4x4 &mMatrix [[buffer(2)]],
                          constant float2 *positions [[buffer(3)]],
                          constant float2 *scales [[buffer(4)]],
                          constant float *rotations [[buffer(5)]],
                          constant float4 *texureCoordinates [[buffer(6)]],
                          constant uint16_t *styleIndices [[buffer(7)]],
                          constant float2 *referencePositions [[buffer(8)]],
                          uint instanceId [[instance_id]])
{
    const float2 position = positions[instanceId];

    const float2 scale = scales[instanceId];
    const float rotation = rotations[instanceId];

    const float angle = rotation * M_PI_F / 180.0;

    const float4x4 model_matrix = float4x4(
                                              float4(cos(angle) * scale.x, -sin(angle) * scale.x, 0, 0),
                                              float4(sin(angle) * scale.y, cos(angle) * scale.y, 0, 0),
                                              float4(0, 0, 0, 0),
                                              float4(position.x, position.y, 0.0, 1)
                                              );

    const float4x4 matrix = vpMatrix * model_matrix;

    TextInstancedVertexOut out {
      .position = matrix * float4(vertexIn.position.xy, 0.0, 1.0),
      .uv = vertexIn.uv,
      .texureCoordinates = texureCoordinates[instanceId],
      .styleIndex = styleIndices[instanceId]
    };

    return out;
}

struct TextInstanceStyle {
    packed_float4 color;
    packed_float4 haloColor;
    float haloWidth;
    float haloBlur;
} __attribute__((__packed__));

fragment float4
textInstancedFragmentShader(TextInstancedVertexOut in [[stage_in]],
                            constant TextInstanceStyle *styles [[buffer(1)]],
                            constant bool &isHalo [[buffer(2)]],
                       texture2d<float> texture0 [[ texture(0)]],
                       sampler textureSampler [[sampler(0)]])
{
    constant TextInstanceStyle *style = (constant TextInstanceStyle *)(styles + in.styleIndex);


    if (style->color.a == 0 || style->haloColor.a == 0.0) {
        discard_fragment();
    }

    const float2 uv = in.texureCoordinates.xy + in.texureCoordinates.zw * float2(in.uv.x, 1 - in.uv.y);
    const float4 dist = texture0.sample(textureSampler, uv);

    const float median = max(min(dist.r, dist.g), min(max(dist.r, dist.g), dist.b)) / dist.a;
    const float w = fwidth(median);

    const float fillStart = 0.5 - w;
    const float fillEnd = 0.5 + w;

    const float innerFallOff = smoothstep(fillStart, fillEnd, median);

    float edgeAlpha = 0.0;

    if (isHalo) {
        float halfHaloBlur = 0.5 * style->haloBlur;

        if (style->haloWidth == 0.0 && halfHaloBlur == 0.0) {
            discard_fragment();
        }

        const float start = max(0.0, fillStart - (style->haloWidth + halfHaloBlur));
        const float end = max(0.0, fillStart - max(0.0, style->haloWidth - halfHaloBlur));

        const float sideSwitch = step(median, end);
        const float outerFallOff = smoothstep(start, end, median);

        // Combination of blurred outer falloff and inverse inner fill falloff
        edgeAlpha = (sideSwitch * outerFallOff + (1.0 - sideSwitch) * (1.0 - innerFallOff)) * style->haloColor.a;

        return style->haloColor * edgeAlpha;
    } else {
        edgeAlpha = innerFallOff * style->haloColor.a;

        return style->color * edgeAlpha;
    }
}
