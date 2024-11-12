// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.map

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class MapCameraInterface {

    companion object {
        @JvmStatic
        external fun create(mapInterface: MapInterface, screenDensityPpi: Float, is3D: Boolean): MapCameraInterface
    }

    abstract fun freeze(freeze: Boolean)

    abstract fun moveToCenterPositionZoom(centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, zoom: Double, animated: Boolean)

    abstract fun moveToCenterPosition(centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, animated: Boolean)

    abstract fun moveToBoundingBox(boundingBox: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, paddingPc: Float, animated: Boolean, minZoom: Double?, maxZoom: Double?)

    abstract fun getCenterPosition(): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

    abstract fun setZoom(zoom: Double, animated: Boolean)

    abstract fun getZoom(): Double

    abstract fun setRotation(angle: Float, animated: Boolean)

    abstract fun getRotation(): Float

    abstract fun setMinZoom(minZoom: Double)

    abstract fun setMaxZoom(maxZoom: Double)

    abstract fun getMinZoom(): Double

    abstract fun getMaxZoom(): Double

    abstract fun setBounds(bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord)

    abstract fun getBounds(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord

    abstract fun isInBounds(coords: io.openmobilemaps.mapscore.shared.map.coordinates.Coord): Boolean

    abstract fun setPaddingLeft(padding: Float)

    abstract fun setPaddingRight(padding: Float)

    abstract fun setPaddingTop(padding: Float)

    abstract fun setPaddingBottom(padding: Float)

    abstract fun getVisibleRect(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord

    abstract fun getPaddingAdjustedVisibleRect(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord

    abstract fun getScreenDensityPpi(): Float

    /** this method is called just before the update methods on all layers */
    abstract fun update()

    abstract fun getInvariantModelMatrix(coordinate: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, scaleInvariant: Boolean, rotationInvariant: Boolean): ArrayList<Float>

    abstract fun addListener(listener: io.openmobilemaps.mapscore.shared.map.camera.MapCameraListenerInterface)

    abstract fun removeListener(listener: io.openmobilemaps.mapscore.shared.map.camera.MapCameraListenerInterface)

    abstract fun notifyListenerBoundsChange()

    abstract fun coordFromScreenPosition(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

    abstract fun coordFromScreenPositionZoom(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F, zoom: Float): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

    abstract fun screenPosFromCoord(coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F

    abstract fun screenPosFromCoordZoom(coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, zoom: Float): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F

    abstract fun mapUnitsFromPixels(distancePx: Double): Double

    abstract fun getScalingFactor(): Double

    /** padding in percentage, where 1.0 = rect is half of full width and height */
    abstract fun coordIsVisibleOnScreen(coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, paddingPc: Float): Boolean

    abstract fun setRotationEnabled(enabled: Boolean)

    abstract fun setSnapToNorthEnabled(enabled: Boolean)

    abstract fun setBoundsRestrictWholeVisibleRect(enabled: Boolean)

    abstract fun asCameraInterface(): io.openmobilemaps.mapscore.shared.graphics.CameraInterface

    abstract fun getLastVpMatrixD(): ArrayList<Double>?

    abstract fun getLastVpMatrix(): ArrayList<Float>?

    abstract fun getLastVpMatrixViewBounds(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord?

    abstract fun getLastVpMatrixRotation(): Float?

    abstract fun getLastVpMatrixZoom(): Float?

    abstract fun asMapCamera3d(): MapCamera3dInterface?

    public class CppProxy : MapCameraInterface {
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

        override fun freeze(freeze: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_freeze(this.nativeRef, freeze)
        }
        private external fun native_freeze(_nativeRef: Long, freeze: Boolean)

        override fun moveToCenterPositionZoom(centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, zoom: Double, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_moveToCenterPositionZoom(this.nativeRef, centerPosition, zoom, animated)
        }
        private external fun native_moveToCenterPositionZoom(_nativeRef: Long, centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, zoom: Double, animated: Boolean)

        override fun moveToCenterPosition(centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_moveToCenterPosition(this.nativeRef, centerPosition, animated)
        }
        private external fun native_moveToCenterPosition(_nativeRef: Long, centerPosition: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, animated: Boolean)

        override fun moveToBoundingBox(boundingBox: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, paddingPc: Float, animated: Boolean, minZoom: Double?, maxZoom: Double?) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_moveToBoundingBox(this.nativeRef, boundingBox, paddingPc, animated, minZoom, maxZoom)
        }
        private external fun native_moveToBoundingBox(_nativeRef: Long, boundingBox: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, paddingPc: Float, animated: Boolean, minZoom: Double?, maxZoom: Double?)

        override fun getCenterPosition(): io.openmobilemaps.mapscore.shared.map.coordinates.Coord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getCenterPosition(this.nativeRef)
        }
        private external fun native_getCenterPosition(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

        override fun setZoom(zoom: Double, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setZoom(this.nativeRef, zoom, animated)
        }
        private external fun native_setZoom(_nativeRef: Long, zoom: Double, animated: Boolean)

        override fun getZoom(): Double {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getZoom(this.nativeRef)
        }
        private external fun native_getZoom(_nativeRef: Long): Double

        override fun setRotation(angle: Float, animated: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setRotation(this.nativeRef, angle, animated)
        }
        private external fun native_setRotation(_nativeRef: Long, angle: Float, animated: Boolean)

        override fun getRotation(): Float {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getRotation(this.nativeRef)
        }
        private external fun native_getRotation(_nativeRef: Long): Float

        override fun setMinZoom(minZoom: Double) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setMinZoom(this.nativeRef, minZoom)
        }
        private external fun native_setMinZoom(_nativeRef: Long, minZoom: Double)

        override fun setMaxZoom(maxZoom: Double) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setMaxZoom(this.nativeRef, maxZoom)
        }
        private external fun native_setMaxZoom(_nativeRef: Long, maxZoom: Double)

        override fun getMinZoom(): Double {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getMinZoom(this.nativeRef)
        }
        private external fun native_getMinZoom(_nativeRef: Long): Double

        override fun getMaxZoom(): Double {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getMaxZoom(this.nativeRef)
        }
        private external fun native_getMaxZoom(_nativeRef: Long): Double

        override fun setBounds(bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setBounds(this.nativeRef, bounds)
        }
        private external fun native_setBounds(_nativeRef: Long, bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord)

        override fun getBounds(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getBounds(this.nativeRef)
        }
        private external fun native_getBounds(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord

        override fun isInBounds(coords: io.openmobilemaps.mapscore.shared.map.coordinates.Coord): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_isInBounds(this.nativeRef, coords)
        }
        private external fun native_isInBounds(_nativeRef: Long, coords: io.openmobilemaps.mapscore.shared.map.coordinates.Coord): Boolean

        override fun setPaddingLeft(padding: Float) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPaddingLeft(this.nativeRef, padding)
        }
        private external fun native_setPaddingLeft(_nativeRef: Long, padding: Float)

        override fun setPaddingRight(padding: Float) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPaddingRight(this.nativeRef, padding)
        }
        private external fun native_setPaddingRight(_nativeRef: Long, padding: Float)

        override fun setPaddingTop(padding: Float) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPaddingTop(this.nativeRef, padding)
        }
        private external fun native_setPaddingTop(_nativeRef: Long, padding: Float)

        override fun setPaddingBottom(padding: Float) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setPaddingBottom(this.nativeRef, padding)
        }
        private external fun native_setPaddingBottom(_nativeRef: Long, padding: Float)

        override fun getVisibleRect(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getVisibleRect(this.nativeRef)
        }
        private external fun native_getVisibleRect(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord

        override fun getPaddingAdjustedVisibleRect(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getPaddingAdjustedVisibleRect(this.nativeRef)
        }
        private external fun native_getPaddingAdjustedVisibleRect(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord

        override fun getScreenDensityPpi(): Float {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getScreenDensityPpi(this.nativeRef)
        }
        private external fun native_getScreenDensityPpi(_nativeRef: Long): Float

        override fun update() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_update(this.nativeRef)
        }
        private external fun native_update(_nativeRef: Long)

        override fun getInvariantModelMatrix(coordinate: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, scaleInvariant: Boolean, rotationInvariant: Boolean): ArrayList<Float> {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getInvariantModelMatrix(this.nativeRef, coordinate, scaleInvariant, rotationInvariant)
        }
        private external fun native_getInvariantModelMatrix(_nativeRef: Long, coordinate: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, scaleInvariant: Boolean, rotationInvariant: Boolean): ArrayList<Float>

        override fun addListener(listener: io.openmobilemaps.mapscore.shared.map.camera.MapCameraListenerInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_addListener(this.nativeRef, listener)
        }
        private external fun native_addListener(_nativeRef: Long, listener: io.openmobilemaps.mapscore.shared.map.camera.MapCameraListenerInterface)

        override fun removeListener(listener: io.openmobilemaps.mapscore.shared.map.camera.MapCameraListenerInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_removeListener(this.nativeRef, listener)
        }
        private external fun native_removeListener(_nativeRef: Long, listener: io.openmobilemaps.mapscore.shared.map.camera.MapCameraListenerInterface)

        override fun notifyListenerBoundsChange() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_notifyListenerBoundsChange(this.nativeRef)
        }
        private external fun native_notifyListenerBoundsChange(_nativeRef: Long)

        override fun coordFromScreenPosition(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): io.openmobilemaps.mapscore.shared.map.coordinates.Coord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_coordFromScreenPosition(this.nativeRef, posScreen)
        }
        private external fun native_coordFromScreenPosition(_nativeRef: Long, posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

        override fun coordFromScreenPositionZoom(posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F, zoom: Float): io.openmobilemaps.mapscore.shared.map.coordinates.Coord {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_coordFromScreenPositionZoom(this.nativeRef, posScreen, zoom)
        }
        private external fun native_coordFromScreenPositionZoom(_nativeRef: Long, posScreen: io.openmobilemaps.mapscore.shared.graphics.common.Vec2F, zoom: Float): io.openmobilemaps.mapscore.shared.map.coordinates.Coord

        override fun screenPosFromCoord(coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_screenPosFromCoord(this.nativeRef, coord)
        }
        private external fun native_screenPosFromCoord(_nativeRef: Long, coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F

        override fun screenPosFromCoordZoom(coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, zoom: Float): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_screenPosFromCoordZoom(this.nativeRef, coord, zoom)
        }
        private external fun native_screenPosFromCoordZoom(_nativeRef: Long, coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, zoom: Float): io.openmobilemaps.mapscore.shared.graphics.common.Vec2F

        override fun mapUnitsFromPixels(distancePx: Double): Double {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_mapUnitsFromPixels(this.nativeRef, distancePx)
        }
        private external fun native_mapUnitsFromPixels(_nativeRef: Long, distancePx: Double): Double

        override fun getScalingFactor(): Double {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getScalingFactor(this.nativeRef)
        }
        private external fun native_getScalingFactor(_nativeRef: Long): Double

        override fun coordIsVisibleOnScreen(coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, paddingPc: Float): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_coordIsVisibleOnScreen(this.nativeRef, coord, paddingPc)
        }
        private external fun native_coordIsVisibleOnScreen(_nativeRef: Long, coord: io.openmobilemaps.mapscore.shared.map.coordinates.Coord, paddingPc: Float): Boolean

        override fun setRotationEnabled(enabled: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setRotationEnabled(this.nativeRef, enabled)
        }
        private external fun native_setRotationEnabled(_nativeRef: Long, enabled: Boolean)

        override fun setSnapToNorthEnabled(enabled: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setSnapToNorthEnabled(this.nativeRef, enabled)
        }
        private external fun native_setSnapToNorthEnabled(_nativeRef: Long, enabled: Boolean)

        override fun setBoundsRestrictWholeVisibleRect(enabled: Boolean) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setBoundsRestrictWholeVisibleRect(this.nativeRef, enabled)
        }
        private external fun native_setBoundsRestrictWholeVisibleRect(_nativeRef: Long, enabled: Boolean)

        override fun asCameraInterface(): io.openmobilemaps.mapscore.shared.graphics.CameraInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asCameraInterface(this.nativeRef)
        }
        private external fun native_asCameraInterface(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.CameraInterface

        override fun getLastVpMatrixD(): ArrayList<Double>? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getLastVpMatrixD(this.nativeRef)
        }
        private external fun native_getLastVpMatrixD(_nativeRef: Long): ArrayList<Double>?

        override fun getLastVpMatrix(): ArrayList<Float>? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getLastVpMatrix(this.nativeRef)
        }
        private external fun native_getLastVpMatrix(_nativeRef: Long): ArrayList<Float>?

        override fun getLastVpMatrixViewBounds(): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getLastVpMatrixViewBounds(this.nativeRef)
        }
        private external fun native_getLastVpMatrixViewBounds(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord?

        override fun getLastVpMatrixRotation(): Float? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getLastVpMatrixRotation(this.nativeRef)
        }
        private external fun native_getLastVpMatrixRotation(_nativeRef: Long): Float?

        override fun getLastVpMatrixZoom(): Float? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getLastVpMatrixZoom(this.nativeRef)
        }
        private external fun native_getLastVpMatrixZoom(_nativeRef: Long): Float?

        override fun asMapCamera3d(): MapCamera3dInterface? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asMapCamera3d(this.nativeRef)
        }
        private external fun native_asMapCamera3d(_nativeRef: Long): MapCamera3dInterface?
    }
}
