// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#import "MCRenderVerticesDescription+Private.h"
#import "DJIMarshal+Private.h"
#import "MCVec2D+Private.h"
#include <cassert>

namespace djinni_generated {

auto RenderVerticesDescription::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::List<::djinni_generated::Vec2D>::toCpp(obj.vertices),
            ::djinni::I32::toCpp(obj.styleIndex)};
}

auto RenderVerticesDescription::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCRenderVerticesDescription alloc] initWithVertices:(::djinni::List<::djinni_generated::Vec2D>::fromCpp(cpp.vertices))
                                                      styleIndex:(::djinni::I32::fromCpp(cpp.styleIndex))];
}

}  // namespace djinni_generated
