// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from camera.djinni

package io.openmobilemaps.mapscore.shared.map.camera

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class MapCamera2dListenerInterface {

    abstract fun onVisibleBoundsChanged(visibleBounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, zoom: Double)

    abstract fun onRotationChanged(angle: Float)

    abstract fun onMapInteraction()

    private class CppProxy : MapCamera2dListenerInterface {
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

        override fun onVisibleBoundsChanged(visibleBounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, zoom: Double) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_onVisibleBoundsChanged(this.nativeRef, visibleBounds, zoom)
        }
        private external fun native_onVisibleBoundsChanged(_nativeRef: Long, visibleBounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, zoom: Double)

        override fun onRotationChanged(angle: Float) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_onRotationChanged(this.nativeRef, angle)
        }
        private external fun native_onRotationChanged(_nativeRef: Long, angle: Float)

        override fun onMapInteraction() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_onMapInteraction(this.nativeRef)
        }
        private external fun native_onMapInteraction(_nativeRef: Long)
    }
}
