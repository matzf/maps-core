// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.graphics

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class SceneCallbackInterface {

    abstract fun invalidate()

    private class CppProxy : SceneCallbackInterface {
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

        override fun invalidate() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_invalidate(this.nativeRef)
        }
        private external fun native_invalidate(_nativeRef: Long)
    }
}
