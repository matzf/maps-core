// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#import "MCTiled2dMapZoomInfo+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto Tiled2dMapZoomInfo::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::F32::toCpp(obj.zoomLevelScaleFactor),
            ::djinni::I32::toCpp(obj.numDrawPreviousLayers),
            ::djinni::I32::toCpp(obj.numDrawPreviousOrLaterTLayers),
            ::djinni::Bool::toCpp(obj.adaptScaleToScreen),
            ::djinni::Bool::toCpp(obj.maskTile),
            ::djinni::Bool::toCpp(obj.underzoom),
            ::djinni::Bool::toCpp(obj.overzoom)};
}

auto Tiled2dMapZoomInfo::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCTiled2dMapZoomInfo alloc] initWithZoomLevelScaleFactor:(::djinni::F32::fromCpp(cpp.zoomLevelScaleFactor))
                                                numDrawPreviousLayers:(::djinni::I32::fromCpp(cpp.numDrawPreviousLayers))
                                        numDrawPreviousOrLaterTLayers:(::djinni::I32::fromCpp(cpp.numDrawPreviousOrLaterTLayers))
                                                   adaptScaleToScreen:(::djinni::Bool::fromCpp(cpp.adaptScaleToScreen))
                                                             maskTile:(::djinni::Bool::fromCpp(cpp.maskTile))
                                                            underzoom:(::djinni::Bool::fromCpp(cpp.underzoom))
                                                             overzoom:(::djinni::Bool::fromCpp(cpp.overzoom))];
}

} // namespace djinni_generated
