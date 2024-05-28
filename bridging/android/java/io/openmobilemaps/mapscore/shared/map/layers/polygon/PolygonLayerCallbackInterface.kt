// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from polygon.djinni

package io.openmobilemaps.mapscore.shared.map.layers.polygon

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class PolygonLayerCallbackInterface {

    abstract fun onClickConfirmed(polygon: PolygonInfo): Boolean

    abstract fun onClickUnconfirmed(polygon: PolygonInfo): Boolean

    private class CppProxy : PolygonLayerCallbackInterface {
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

        override fun onClickConfirmed(polygon: PolygonInfo): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onClickConfirmed(this.nativeRef, polygon)
        }
        private external fun native_onClickConfirmed(_nativeRef: Long, polygon: PolygonInfo): Boolean

        override fun onClickUnconfirmed(polygon: PolygonInfo): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onClickUnconfirmed(this.nativeRef, polygon)
        }
        private external fun native_onClickUnconfirmed(_nativeRef: Long, polygon: PolygonInfo): Boolean
    }
}
