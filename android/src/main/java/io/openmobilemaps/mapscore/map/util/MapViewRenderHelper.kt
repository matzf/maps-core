package io.openmobilemaps.mapscore.map.util

import android.graphics.Bitmap
import io.openmobilemaps.mapscore.shared.graphics.common.Vec2I
import io.openmobilemaps.mapscore.shared.map.LayerReadyState
import io.openmobilemaps.mapscore.shared.map.MapConfig
import io.openmobilemaps.mapscore.shared.map.MapReadyCallbackInterface
import io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord
import kotlinx.coroutines.CoroutineScope
import java.util.concurrent.Semaphore

object MapViewRenderHelper {

	suspend fun renderMap(
		coroutineScope: CoroutineScope,
		mapConfig: MapConfig,
		renderSizePx: Vec2I,
		renderBounds: RectCoord,
		timeoutSeconds: Float,
		onSetupMap: (MapViewInterface) -> Unit,
		onStateUpdate: (MapViewRenderState) -> Unit
	) {
		onStateUpdate.invoke(MapViewRenderState.Loading)

		val mapRenderer = OffscreenMapRenderer(renderSizePx)
		mapRenderer.setupMap(mapConfig, true)
		mapRenderer.setCoroutineScope(coroutineScope)
		onSetupMap(mapRenderer)

		val drawSemaphore = Semaphore(1, true)

		mapRenderer.requireMapInterface().drawReadyFrame(renderBounds, timeoutSeconds, object : MapReadyCallbackInterface() {
			var prevState: LayerReadyState? = null
			override fun stateDidUpdate(state: LayerReadyState) {
				drawSemaphore.acquire()
				mapRenderer.setOnDrawCallback {
					drawSemaphore.release()
				}
				drawSemaphore.acquire()
				drawSemaphore.release()

				if (prevState == state) return
				prevState = state
				when (state) {
					LayerReadyState.READY -> {
						mapRenderer.saveFrame(
							SaveFrameSpec(
								outputFormat = SaveFrameSpec.OutputFormat.BITMAP,
								pixelFormat = SaveFrameSpec.PixelFormat.ARGB_8888
							),
							object : SaveFrameCallback {
								override fun onResultBitmap(bitmap: Bitmap) {
									onStateUpdate(MapViewRenderState.Finished(bitmap))
									mapRenderer.destroy()
								}

								override fun onError() {
									onStateUpdate(MapViewRenderState.Error)
									mapRenderer.destroy()
								}

							})
					}
					LayerReadyState.NOT_READY -> onStateUpdate(MapViewRenderState.Loading)
					LayerReadyState.ERROR -> {
						mapRenderer.destroy()
						onStateUpdate(MapViewRenderState.Error)
					}
					LayerReadyState.TIMEOUT_ERROR -> {
						mapRenderer.destroy()
						onStateUpdate(MapViewRenderState.Timeout)
					}
				}
			}
		})
	}

}