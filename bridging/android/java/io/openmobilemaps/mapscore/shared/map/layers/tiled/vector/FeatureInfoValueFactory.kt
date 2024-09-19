// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled.vector

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class FeatureInfoValueFactory {

    companion object {
        @JvmStatic
        external fun createString(value: String): VectorLayerFeatureInfoValue

        @JvmStatic
        external fun createDouble(value: Double): VectorLayerFeatureInfoValue

        @JvmStatic
        external fun createInt(value: Long): VectorLayerFeatureInfoValue

        @JvmStatic
        external fun createBool(value: Boolean): VectorLayerFeatureInfoValue

        @JvmStatic
        external fun createColor(value: io.openmobilemaps.mapscore.shared.graphics.common.Color): VectorLayerFeatureInfoValue

        @JvmStatic
        external fun createListFloat(value: ArrayList<Float>): VectorLayerFeatureInfoValue

        @JvmStatic
        external fun createListString(value: ArrayList<String>): VectorLayerFeatureInfoValue
    }

    public class CppProxy : FeatureInfoValueFactory {
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
    }
}
