// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

package io.openmobilemaps.mapscore.shared.graphics.objects

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class IcosahedronInterface {

    abstract fun setVertices(vertices: io.openmobilemaps.mapscore.shared.graphics.common.SharedBytes, indices: io.openmobilemaps.mapscore.shared.graphics.common.SharedBytes, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3D)

    abstract fun asGraphicsObject(): GraphicsObjectInterface

    private class CppProxy : IcosahedronInterface {
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

        override fun setVertices(vertices: io.openmobilemaps.mapscore.shared.graphics.common.SharedBytes, indices: io.openmobilemaps.mapscore.shared.graphics.common.SharedBytes, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3D) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setVertices(this.nativeRef, vertices, indices, origin)
        }
        private external fun native_setVertices(_nativeRef: Long, vertices: io.openmobilemaps.mapscore.shared.graphics.common.SharedBytes, indices: io.openmobilemaps.mapscore.shared.graphics.common.SharedBytes, origin: io.openmobilemaps.mapscore.shared.graphics.common.Vec3D)

        override fun asGraphicsObject(): GraphicsObjectInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asGraphicsObject(this.nativeRef)
        }
        private external fun native_asGraphicsObject(_nativeRef: Long): GraphicsObjectInterface
    }
}
