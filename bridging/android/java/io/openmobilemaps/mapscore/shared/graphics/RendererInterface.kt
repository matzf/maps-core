// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.graphics

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class RendererInterface {

    abstract fun addToRenderQueue(renderPass: RenderPassInterface)

    abstract fun addToComputeQueue(computePass: ComputePassInterface)

    /** Ensure calling on graphics thread */
    abstract fun drawFrame(renderingContext: RenderingContextInterface, camera: CameraInterface)

    /** Ensure calling on graphics thread */
    abstract fun compute(renderingContext: RenderingContextInterface, camera: CameraInterface)

    public class CppProxy : RendererInterface {
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

        override fun addToRenderQueue(renderPass: RenderPassInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_addToRenderQueue(this.nativeRef, renderPass)
        }
        private external fun native_addToRenderQueue(_nativeRef: Long, renderPass: RenderPassInterface)

        override fun addToComputeQueue(computePass: ComputePassInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_addToComputeQueue(this.nativeRef, computePass)
        }
        private external fun native_addToComputeQueue(_nativeRef: Long, computePass: ComputePassInterface)

        override fun drawFrame(renderingContext: RenderingContextInterface, camera: CameraInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_drawFrame(this.nativeRef, renderingContext, camera)
        }
        private external fun native_drawFrame(_nativeRef: Long, renderingContext: RenderingContextInterface, camera: CameraInterface)

        override fun compute(renderingContext: RenderingContextInterface, camera: CameraInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_compute(this.nativeRef, renderingContext, camera)
        }
        private external fun native_compute(_nativeRef: Long, renderingContext: RenderingContextInterface, camera: CameraInterface)
    }
}
