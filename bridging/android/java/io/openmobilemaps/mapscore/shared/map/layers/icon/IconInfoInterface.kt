// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

package io.openmobilemaps.mapscore.shared.map.layers.icon

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class IconInfoInterface {

    abstract fun getIdentifier(): String

    abstract fun getTexture(): io.openmobilemaps.mapscore.shared.graphics.objects.TextureHolderInterface

    abstract fun setCoordinate(coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord)

    abstract fun getCoordinate(): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

    /** iconSize is in meters when scaleType is scale invariant(i.e. FIXED or ROTATION_INVARIANT), screen pixels otherwise */
    abstract fun setIconSize(size: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F)

    /** iconSize is in meters when scaleType is scale invariant(i.e. FIXED or ROTATION_INVARIANT), screen pixels otherwise */
    abstract fun getIconSize(): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F

    abstract fun setType(scaleType: IconType)

    abstract fun getType(): IconType

    abstract fun getIconAnchor(): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F

    abstract fun getBlendMode(): io.openmobilemaps.mapscore.shared.graphics.shader.BlendMode

    private class CppProxy : IconInfoInterface {
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

        override fun getIdentifier(): String {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getIdentifier(this.nativeRef)
        }
        private external fun native_getIdentifier(_nativeRef: Long): String

        override fun getTexture(): io.openmobilemaps.mapscore.shared.graphics.objects.TextureHolderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getTexture(this.nativeRef)
        }
        private external fun native_getTexture(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.objects.TextureHolderInterface

        override fun setCoordinate(coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setCoordinate(this.nativeRef, coord)
        }
        private external fun native_setCoordinate(_nativeRef: Long, coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord)

        override fun getCoordinate(): io.openmobilemaps.mapscore.shared.map.coordinates.Coord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getCoordinate(this.nativeRef)
        }
        private external fun native_getCoordinate(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

        override fun setIconSize(size: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setIconSize(this.nativeRef, size)
        }
        private external fun native_setIconSize(_nativeRef: Long, size: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F)

        override fun getIconSize(): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getIconSize(this.nativeRef)
        }
        private external fun native_getIconSize(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F

        override fun setType(scaleType: IconType) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setType(this.nativeRef, scaleType)
        }
        private external fun native_setType(_nativeRef: Long, scaleType: IconType)

        override fun getType(): IconType {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getType(this.nativeRef)
        }
        private external fun native_getType(_nativeRef: Long): IconType

        override fun getIconAnchor(): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getIconAnchor(this.nativeRef)
        }
        private external fun native_getIconAnchor(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F

        override fun getBlendMode(): io.openmobilemaps.mapscore.shared.graphics.shader.BlendMode {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getBlendMode(this.nativeRef)
        }
        private external fun native_getBlendMode(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.shader.BlendMode
    }
}
