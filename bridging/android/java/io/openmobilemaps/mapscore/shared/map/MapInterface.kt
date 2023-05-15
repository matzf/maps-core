// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.map

import java.util.concurrent.atomic.AtomicBoolean

abstract class MapInterface {

    abstract fun setCallbackHandler(callbackInterface: MapCallbackInterface?)

    abstract fun getGraphicsObjectFactory(): io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface

    abstract fun getShaderFactory(): io.openmobilemaps.mapscore.shared.graphics.shader.ShaderFactoryInterface

    abstract fun getScheduler(): io.openmobilemaps.mapscore.shared.map.scheduling.SchedulerInterface

    abstract fun getRenderingContext(): io.openmobilemaps.mapscore.shared.graphics.RenderingContextInterface

    abstract fun getMapConfig(): MapConfig

    abstract fun getCoordinateConverterHelper(): io.openmobilemaps.mapscore.shared.map.coordinates.CoordinateConversionHelperInterface

    abstract fun setCamera(camera: MapCamera2dInterface)

    abstract fun getCamera(): MapCamera2dInterface

    abstract fun setTouchHandler(touchHandler: io.openmobilemaps.mapscore.shared.map.controls.TouchHandlerInterface)

    abstract fun getTouchHandler(): io.openmobilemaps.mapscore.shared.map.controls.TouchHandlerInterface

    abstract fun getLayers(): ArrayList<LayerInterface>

    abstract fun addLayer(layer: LayerInterface)

    abstract fun insertLayerAt(layer: LayerInterface, atIndex: Int)

    abstract fun insertLayerAbove(layer: LayerInterface, above: LayerInterface)

    abstract fun insertLayerBelow(layer: LayerInterface, below: LayerInterface)

    abstract fun removeLayer(layer: LayerInterface)

    abstract fun setViewportSize(size: io.openmobilemaps.mapscore.shared.graphics.common.Vec2I)

    abstract fun setBackgroundColor(color: io.openmobilemaps.mapscore.shared.graphics.common.Color)

    abstract fun invalidate()

    abstract fun drawFrame()

    abstract fun resume()

    abstract fun pause()

    abstract fun destroy()

    /**
     * changes bounds to bounds, checks all layers for readiness, and updates callbacks, timeout in
     * seconds, always draw the frame when state is updated in the ready callbacks
     */
    abstract fun drawReadyFrame(bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, timeout: Float, callbacks: MapReadyCallbackInterface)

    abstract fun forceReload()

    companion object {
        @JvmStatic
        fun create(graphicsFactory: io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface, shaderFactory: io.openmobilemaps.mapscore.shared.graphics.shader.ShaderFactoryInterface, renderingContext: io.openmobilemaps.mapscore.shared.graphics.RenderingContextInterface, mapConfig: MapConfig, scheduler: io.openmobilemaps.mapscore.shared.map.scheduling.SchedulerInterface, pixelDensity: Float): MapInterface {
            return CppProxy.create(graphicsFactory, shaderFactory, renderingContext, mapConfig, scheduler, pixelDensity)
        }

        @JvmStatic
        fun createWithOpenGl(mapConfig: MapConfig, scheduler: io.openmobilemaps.mapscore.shared.map.scheduling.SchedulerInterface, pixelDensity: Float): MapInterface {
            return CppProxy.createWithOpenGl(mapConfig, scheduler, pixelDensity)
        }
    }

    private class CppProxy : MapInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
        }

        private external fun nativeDestroy(nativeRef: Long)
        fun _djinni_private_destroy() {
            val destroyed = this.destroyed.getAndSet(true)
            if (!destroyed) nativeDestroy(this.nativeRef)
        }
        protected fun finalize() {
            _djinni_private_destroy()
        }

        override fun setCallbackHandler(callbackInterface: MapCallbackInterface?) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setCallbackHandler(this.nativeRef, callbackInterface)
        }
        private external fun native_setCallbackHandler(_nativeRef: Long, callbackInterface: MapCallbackInterface?)

        override fun getGraphicsObjectFactory(): io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getGraphicsObjectFactory(this.nativeRef)
        }
        private external fun native_getGraphicsObjectFactory(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface

        override fun getShaderFactory(): io.openmobilemaps.mapscore.shared.graphics.shader.ShaderFactoryInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getShaderFactory(this.nativeRef)
        }
        private external fun native_getShaderFactory(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.shader.ShaderFactoryInterface

        override fun getScheduler(): io.openmobilemaps.mapscore.shared.map.scheduling.SchedulerInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getScheduler(this.nativeRef)
        }
        private external fun native_getScheduler(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.scheduling.SchedulerInterface

        override fun getRenderingContext(): io.openmobilemaps.mapscore.shared.graphics.RenderingContextInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getRenderingContext(this.nativeRef)
        }
        private external fun native_getRenderingContext(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.RenderingContextInterface

        override fun getMapConfig(): MapConfig {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getMapConfig(this.nativeRef)
        }
        private external fun native_getMapConfig(_nativeRef: Long): MapConfig

        override fun getCoordinateConverterHelper(): io.openmobilemaps.mapscore.shared.map.coordinates.CoordinateConversionHelperInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getCoordinateConverterHelper(this.nativeRef)
        }
        private external fun native_getCoordinateConverterHelper(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.coordinates.CoordinateConversionHelperInterface

        override fun setCamera(camera: MapCamera2dInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setCamera(this.nativeRef, camera)
        }
        private external fun native_setCamera(_nativeRef: Long, camera: MapCamera2dInterface)

        override fun getCamera(): MapCamera2dInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getCamera(this.nativeRef)
        }
        private external fun native_getCamera(_nativeRef: Long): MapCamera2dInterface

        override fun setTouchHandler(touchHandler: io.openmobilemaps.mapscore.shared.map.controls.TouchHandlerInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setTouchHandler(this.nativeRef, touchHandler)
        }
        private external fun native_setTouchHandler(_nativeRef: Long, touchHandler: io.openmobilemaps.mapscore.shared.map.controls.TouchHandlerInterface)

        override fun getTouchHandler(): io.openmobilemaps.mapscore.shared.map.controls.TouchHandlerInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getTouchHandler(this.nativeRef)
        }
        private external fun native_getTouchHandler(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.controls.TouchHandlerInterface

        override fun getLayers(): ArrayList<LayerInterface> {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getLayers(this.nativeRef)
        }
        private external fun native_getLayers(_nativeRef: Long): ArrayList<LayerInterface>

        override fun addLayer(layer: LayerInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_addLayer(this.nativeRef, layer)
        }
        private external fun native_addLayer(_nativeRef: Long, layer: LayerInterface)

        override fun insertLayerAt(layer: LayerInterface, atIndex: Int) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_insertLayerAt(this.nativeRef, layer, atIndex)
        }
        private external fun native_insertLayerAt(_nativeRef: Long, layer: LayerInterface, atIndex: Int)

        override fun insertLayerAbove(layer: LayerInterface, above: LayerInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_insertLayerAbove(this.nativeRef, layer, above)
        }
        private external fun native_insertLayerAbove(_nativeRef: Long, layer: LayerInterface, above: LayerInterface)

        override fun insertLayerBelow(layer: LayerInterface, below: LayerInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_insertLayerBelow(this.nativeRef, layer, below)
        }
        private external fun native_insertLayerBelow(_nativeRef: Long, layer: LayerInterface, below: LayerInterface)

        override fun removeLayer(layer: LayerInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_removeLayer(this.nativeRef, layer)
        }
        private external fun native_removeLayer(_nativeRef: Long, layer: LayerInterface)

        override fun setViewportSize(size: io.openmobilemaps.mapscore.shared.graphics.common.Vec2I) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setViewportSize(this.nativeRef, size)
        }
        private external fun native_setViewportSize(_nativeRef: Long, size: io.openmobilemaps.mapscore.shared.graphics.common.Vec2I)

        override fun setBackgroundColor(color: io.openmobilemaps.mapscore.shared.graphics.common.Color) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setBackgroundColor(this.nativeRef, color)
        }
        private external fun native_setBackgroundColor(_nativeRef: Long, color: io.openmobilemaps.mapscore.shared.graphics.common.Color)

        override fun invalidate() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_invalidate(this.nativeRef)
        }
        private external fun native_invalidate(_nativeRef: Long)

        override fun drawFrame() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_drawFrame(this.nativeRef)
        }
        private external fun native_drawFrame(_nativeRef: Long)

        override fun resume() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_resume(this.nativeRef)
        }
        private external fun native_resume(_nativeRef: Long)

        override fun pause() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_pause(this.nativeRef)
        }
        private external fun native_pause(_nativeRef: Long)

        override fun destroy() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_destroy(this.nativeRef)
        }
        private external fun native_destroy(_nativeRef: Long)

        override fun drawReadyFrame(bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, timeout: Float, callbacks: MapReadyCallbackInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_drawReadyFrame(this.nativeRef, bounds, timeout, callbacks)
        }
        private external fun native_drawReadyFrame(_nativeRef: Long, bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord, timeout: Float, callbacks: MapReadyCallbackInterface)

        override fun forceReload() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_forceReload(this.nativeRef)
        }
        private external fun native_forceReload(_nativeRef: Long)

        companion object {
            @JvmStatic
            external fun create(graphicsFactory: io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface, shaderFactory: io.openmobilemaps.mapscore.shared.graphics.shader.ShaderFactoryInterface, renderingContext: io.openmobilemaps.mapscore.shared.graphics.RenderingContextInterface, mapConfig: MapConfig, scheduler: io.openmobilemaps.mapscore.shared.map.scheduling.SchedulerInterface, pixelDensity: Float): MapInterface

            @JvmStatic
            external fun createWithOpenGl(mapConfig: MapConfig, scheduler: io.openmobilemaps.mapscore.shared.map.scheduling.SchedulerInterface, pixelDensity: Float): MapInterface
        }
    }
}
