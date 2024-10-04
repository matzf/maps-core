// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from polygon.djinni

package io.openmobilemaps.mapscore.shared.map.layers.polygon

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class PolygonMaskObjectInterface {

    companion object {
        @JvmStatic
        external fun create(graphicsObjectFactory: io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface, conversionHelper: io.openmobilemaps.mapscore.shared.map.coordinates.CoordinateConversionHelperInterface, is3d: Boolean): PolygonMaskObjectInterface
    }

    abstract fun setPolygons(polygons: ArrayList<io.openmobilemaps.mapscore.shared.map.coordinates.PolygonCoord>, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3F)

    abstract fun setPolygon(polygon: io.openmobilemaps.mapscore.shared.map.coordinates.PolygonCoord, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3F)

    abstract fun getPolygonObject(): io.openmobilemaps.mapscore.shared.graphics.objects.Polygon2dInterface

    private class CppProxy : PolygonMaskObjectInterface {
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

        override fun setPolygons(polygons: ArrayList<io.openmobilemaps.mapscore.shared.map.coordinates.PolygonCoord>, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3F) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPolygons(this.nativeRef, polygons, origin)
        }
        private external fun native_setPolygons(_nativeRef: Long, polygons: ArrayList<io.openmobilemaps.mapscore.shared.map.coordinates.PolygonCoord>, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3F)

        override fun setPolygon(polygon: io.openmobilemaps.mapscore.shared.map.coordinates.PolygonCoord, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3F) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPolygon(this.nativeRef, polygon, origin)
        }
        private external fun native_setPolygon(_nativeRef: Long, polygon: io.openmobilemaps.mapscore.shared.map.coordinates.PolygonCoord, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3F)

        override fun getPolygonObject(): io.openmobilemaps.mapscore.shared.graphics.objects.Polygon2dInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getPolygonObject(this.nativeRef)
        }
        private external fun native_getPolygonObject(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.objects.Polygon2dInterface
    }
}
