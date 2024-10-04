// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.graphics

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class CameraInterface {

    abstract fun getViewMatrix(): ArrayList<Float>

    abstract fun getProjectionMatrix(): ArrayList<Float>

    abstract fun getScalingFactor(): Double

    abstract fun getOrigin(): io.openmobilemaps.mapscore.shared.graphics.common.Vec3F

    abstract fun viewportSizeChanged()

    private class CppProxy : CameraInterface {
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

        override fun getViewMatrix(): ArrayList<Float> {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getViewMatrix(this.nativeRef)
        }
        private external fun native_getViewMatrix(_nativeRef: Long): ArrayList<Float>

        override fun getProjectionMatrix(): ArrayList<Float> {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getProjectionMatrix(this.nativeRef)
        }
        private external fun native_getProjectionMatrix(_nativeRef: Long): ArrayList<Float>

        override fun getScalingFactor(): Double {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getScalingFactor(this.nativeRef)
        }
        private external fun native_getScalingFactor(_nativeRef: Long): Double

        override fun getOrigin(): io.openmobilemaps.mapscore.shared.graphics.common.Vec3F {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getOrigin(this.nativeRef)
        }
        private external fun native_getOrigin(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.common.Vec3F

        override fun viewportSizeChanged() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_viewportSizeChanged(this.nativeRef)
        }
        private external fun native_viewportSizeChanged(_nativeRef: Long)
    }
}
