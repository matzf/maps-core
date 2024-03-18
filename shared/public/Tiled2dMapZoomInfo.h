// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#pragma once

#include <cstdint>
#include <utility>

struct Tiled2dMapZoomInfo final {
    /** this factor is applied to the the scale */
    float zoomLevelScaleFactor;
    int32_t numDrawPreviousLayers;
    int32_t numDrawPreviousOrLaterTLayers;
    /**
     * if this flag is set to true the map is scaled according to the wmts scaledenominator (https://gis.stackexchange.com/questions/315881/what-is-wmts-scaledenominator)
     * and the screen ppi
     */
    bool adaptScaleToScreen;
    bool maskTile;
    bool underzoom;
    bool overzoom;

    Tiled2dMapZoomInfo(float zoomLevelScaleFactor_,
                       int32_t numDrawPreviousLayers_,
                       int32_t numDrawPreviousOrLaterTLayers_,
                       bool adaptScaleToScreen_,
                       bool maskTile_,
                       bool underzoom_,
                       bool overzoom_)
    : zoomLevelScaleFactor(std::move(zoomLevelScaleFactor_))
    , numDrawPreviousLayers(std::move(numDrawPreviousLayers_))
    , numDrawPreviousOrLaterTLayers(std::move(numDrawPreviousOrLaterTLayers_))
    , adaptScaleToScreen(std::move(adaptScaleToScreen_))
    , maskTile(std::move(maskTile_))
    , underzoom(std::move(underzoom_))
    , overzoom(std::move(overzoom_))
    {}
};
