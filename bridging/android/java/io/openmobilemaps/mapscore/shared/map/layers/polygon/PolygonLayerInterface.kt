// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from polygon.djinni

package io.openmobilemaps.mapscore.shared.map.layers.polygon

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class PolygonLayerInterface {

    companion object {
        @JvmStatic
        external fun create(): PolygonLayerInterface
    }

    abstract fun setPolygons(polygons: ArrayList<PolygonInfo>, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3F)

    abstract fun getPolygons(): ArrayList<PolygonInfo>

    abstract fun remove(polygon: PolygonInfo)

    abstract fun add(polygon: PolygonInfo)

    abstract fun addAll(polygons: ArrayList<PolygonInfo>)

    abstract fun clear()

    abstract fun setCallbackHandler(handler: PolygonLayerCallbackInterface)

    abstract fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface

    abstract fun resetSelection()

    abstract fun setLayerClickable(isLayerClickable: Boolean)

    abstract fun setRenderPassIndex(index: Int)

    private class CppProxy : PolygonLayerInterface {
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

        override fun setPolygons(polygons: ArrayList<PolygonInfo>, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3F) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPolygons(this.nativeRef, polygons, origin)
        }
        private external fun native_setPolygons(_nativeRef: Long, polygons: ArrayList<PolygonInfo>, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3F)

        override fun getPolygons(): ArrayList<PolygonInfo> {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getPolygons(this.nativeRef)
        }
        private external fun native_getPolygons(_nativeRef: Long): ArrayList<PolygonInfo>

        override fun remove(polygon: PolygonInfo) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_remove(this.nativeRef, polygon)
        }
        private external fun native_remove(_nativeRef: Long, polygon: PolygonInfo)

        override fun add(polygon: PolygonInfo) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_add(this.nativeRef, polygon)
        }
        private external fun native_add(_nativeRef: Long, polygon: PolygonInfo)

        override fun addAll(polygons: ArrayList<PolygonInfo>) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_addAll(this.nativeRef, polygons)
        }
        private external fun native_addAll(_nativeRef: Long, polygons: ArrayList<PolygonInfo>)

        override fun clear() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_clear(this.nativeRef)
        }
        private external fun native_clear(_nativeRef: Long)

        override fun setCallbackHandler(handler: PolygonLayerCallbackInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setCallbackHandler(this.nativeRef, handler)
        }
        private external fun native_setCallbackHandler(_nativeRef: Long, handler: PolygonLayerCallbackInterface)

        override fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asLayerInterface(this.nativeRef)
        }
        private external fun native_asLayerInterface(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.LayerInterface

        override fun resetSelection() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_resetSelection(this.nativeRef)
        }
        private external fun native_resetSelection(_nativeRef: Long)

        override fun setLayerClickable(isLayerClickable: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setLayerClickable(this.nativeRef, isLayerClickable)
        }
        private external fun native_setLayerClickable(_nativeRef: Long, isLayerClickable: Boolean)

        override fun setRenderPassIndex(index: Int) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setRenderPassIndex(this.nativeRef, index)
        }
        private external fun native_setRenderPassIndex(_nativeRef: Long, index: Int)
    }
}
