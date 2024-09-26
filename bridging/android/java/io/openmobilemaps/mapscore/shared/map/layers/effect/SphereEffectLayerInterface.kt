// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from sphere_effect.djinni

package io.openmobilemaps.mapscore.shared.map.layers.effect

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class SphereEffectLayerInterface {

    companion object {
        @JvmStatic
        external fun create(): SphereEffectLayerInterface
    }

    abstract fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface

    private class CppProxy : SphereEffectLayerInterface {
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

        override fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asLayerInterface(this.nativeRef)
        }
        private external fun native_asLayerInterface(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.LayerInterface
    }
}