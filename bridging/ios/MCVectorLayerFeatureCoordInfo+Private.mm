// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#import "MCVectorLayerFeatureCoordInfo+Private.h"
#import "DJIMarshal+Private.h"
#import "MCCoord+Private.h"
#import "MCVectorLayerFeatureInfo+Private.h"
#include <cassert>

namespace djinni_generated {

auto VectorLayerFeatureCoordInfo::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni_generated::VectorLayerFeatureInfo::toCpp(obj.featureInfo),
            ::djinni_generated::Coord::toCpp(obj.coordinates)};
}

auto VectorLayerFeatureCoordInfo::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCVectorLayerFeatureCoordInfo alloc] initWithFeatureInfo:(::djinni_generated::VectorLayerFeatureInfo::fromCpp(cpp.featureInfo))
                                                          coordinates:(::djinni_generated::Coord::fromCpp(cpp.coordinates))];
}

} // namespace djinni_generated
