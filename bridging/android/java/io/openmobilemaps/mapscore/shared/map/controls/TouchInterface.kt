// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from touch_handler.djinni

package io.openmobilemaps.mapscore.shared.map.controls

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class TouchInterface {

    abstract fun onTouchDown(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

    abstract fun onClickUnconfirmed(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

    abstract fun onClickConfirmed(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

    abstract fun onDoubleClick(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

    abstract fun onLongPress(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

    abstract fun onMove(deltaScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F, confirmed: Boolean, doubleClick: Boolean): Boolean

    abstract fun onMoveComplete(): Boolean

    abstract fun onTwoFingerClick(posScreen1: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F, posScreen2: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

    abstract fun onTwoFingerMove(posScreenOld: ArrayList<io.openmobilemaps.mapscore.shared.graphics.common.Vec2F>, posScreenNew: ArrayList<io.openmobilemaps.mapscore.shared.graphics.common.Vec2F>): Boolean

    abstract fun onTwoFingerMoveComplete(): Boolean

    abstract fun clearTouch()

    public class CppProxy : TouchInterface {
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

        override fun onTouchDown(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onTouchDown(this.nativeRef, posScreen)
        }
        private external fun native_onTouchDown(_nativeRef: Long, posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

        override fun onClickUnconfirmed(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onClickUnconfirmed(this.nativeRef, posScreen)
        }
        private external fun native_onClickUnconfirmed(_nativeRef: Long, posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

        override fun onClickConfirmed(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onClickConfirmed(this.nativeRef, posScreen)
        }
        private external fun native_onClickConfirmed(_nativeRef: Long, posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

        override fun onDoubleClick(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onDoubleClick(this.nativeRef, posScreen)
        }
        private external fun native_onDoubleClick(_nativeRef: Long, posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

        override fun onLongPress(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onLongPress(this.nativeRef, posScreen)
        }
        private external fun native_onLongPress(_nativeRef: Long, posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

        override fun onMove(deltaScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F, confirmed: Boolean, doubleClick: Boolean): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onMove(this.nativeRef, deltaScreen, confirmed, doubleClick)
        }
        private external fun native_onMove(_nativeRef: Long, deltaScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F, confirmed: Boolean, doubleClick: Boolean): Boolean

        override fun onMoveComplete(): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onMoveComplete(this.nativeRef)
        }
        private external fun native_onMoveComplete(_nativeRef: Long): Boolean

        override fun onTwoFingerClick(posScreen1: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F, posScreen2: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onTwoFingerClick(this.nativeRef, posScreen1, posScreen2)
        }
        private external fun native_onTwoFingerClick(_nativeRef: Long, posScreen1: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F, posScreen2: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): Boolean

        override fun onTwoFingerMove(posScreenOld: ArrayList<io.openmobilemaps.mapscore.shared.graphics.common.Vec2F>, posScreenNew: ArrayList<io.openmobilemaps.mapscore.shared.graphics.common.Vec2F>): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onTwoFingerMove(this.nativeRef, posScreenOld, posScreenNew)
        }
        private external fun native_onTwoFingerMove(_nativeRef: Long, posScreenOld: ArrayList<io.openmobilemaps.mapscore.shared.graphics.common.Vec2F>, posScreenNew: ArrayList<io.openmobilemaps.mapscore.shared.graphics.common.Vec2F>): Boolean

        override fun onTwoFingerMoveComplete(): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onTwoFingerMoveComplete(this.nativeRef)
        }
        private external fun native_onTwoFingerMoveComplete(_nativeRef: Long): Boolean

        override fun clearTouch() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_clearTouch(this.nativeRef)
        }
        private external fun native_clearTouch(_nativeRef: Long)
    }
}
