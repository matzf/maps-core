// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

package io.openmobilemaps.mapscore.shared.graphics.shader

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class TextInstancedShaderInterface {

    abstract fun asShaderProgramInterface(): ShaderProgramInterface

    public class CppProxy : TextInstancedShaderInterface {
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

        override fun asShaderProgramInterface(): ShaderProgramInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asShaderProgramInterface(this.nativeRef)
        }
        private external fun native_asShaderProgramInterface(_nativeRef: Long): ShaderProgramInterface
    }
}
