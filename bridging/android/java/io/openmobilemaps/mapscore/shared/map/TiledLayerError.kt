// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from error_manager.djinni

package io.openmobilemaps.mapscore.shared.map

data class TiledLayerError(
    val status: io.openmobilemaps.mapscore.shared.map.loader.LoaderStatus,
    val errorCode: String?,
    val layerName: String,
    val url: String,
    val isRecoverable: Boolean,
    val bounds: io.openmobilemaps.mapscore.shared.map.coordinates.RectCoord?,
)