// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

package io.openmobilemaps.mapscore.shared.map.coordinates

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class CoordinateSystemIdentifiers {

    companion object {
        @JvmStatic
        external fun RENDERSYSTEM(): Int

        @JvmStatic
        external fun EPSG3857(): Int

        @JvmStatic
        external fun EPSG4326(): Int

        @JvmStatic
        external fun EPSG2056(): Int

        @JvmStatic
        external fun EPSG21781(): Int

        @JvmStatic
        external fun UnitSphere(): Int

        @JvmStatic
        external fun fromCrsIdentifier(identifier: String): Int

        @JvmStatic
        external fun unitToMeterFactor(coordinateSystemIdentifier: Int): Double
    }

    public class CppProxy : CoordinateSystemIdentifiers {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
            NativeObjectManager.register(this, nativeRef)
        }

        companion object {
            @JvmStatic
            external fun nativeDestroy(nativeRef: Long)
        }
    }
}
