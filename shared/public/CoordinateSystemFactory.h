// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#pragma once

struct MapCoordinateSystem;

class CoordinateSystemFactory {
public:
    virtual ~CoordinateSystemFactory() = default;

    static MapCoordinateSystem getEpsg2056System();

    static MapCoordinateSystem getEpsg3857System();

    static MapCoordinateSystem getEpsg4326System();

    static MapCoordinateSystem getEpsg21781System();

    static MapCoordinateSystem getUnitSphereSystem();
};
