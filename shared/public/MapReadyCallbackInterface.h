// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

enum class LayerReadyState;

class MapReadyCallbackInterface {
public:
    virtual ~MapReadyCallbackInterface() {}

    virtual void stateDidUpdate(LayerReadyState state) = 0;
};
