// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#import "MCPolygon2dInterface+Private.h"
#import "MCPolygon2dInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCGraphicsObjectInterface+Private.h"
#import "MCMaskingObjectInterface+Private.h"
#import "MCVec2D+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCPolygon2dInterfaceCppProxy : NSObject<MCPolygon2dInterface>

- (id)initWithCpp:(const std::shared_ptr<::Polygon2dInterface>&)cppRef;

@end

@implementation MCPolygon2dInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Polygon2dInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Polygon2dInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)setVertices:(nonnull NSArray<MCVec2D *> *)vertices
            indices:(nonnull NSArray<NSNumber *> *)indices {
    try {
        _cppRefHandle.get()->setVertices(::djinni::List<::djinni_generated::Vec2D>::toCpp(vertices),
                                         ::djinni::List<::djinni::I32>::toCpp(indices));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asGraphicsObject();
        return ::djinni_generated::GraphicsObjectInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCMaskingObjectInterface>)asMaskingObject {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asMaskingObject();
        return ::djinni_generated::MaskingObjectInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class Polygon2dInterface::ObjcProxy final
: public ::Polygon2dInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::Polygon2dInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void setVertices(const std::vector<::Vec2D> & c_vertices, const std::vector<int32_t> & c_indices) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setVertices:(::djinni::List<::djinni_generated::Vec2D>::fromCpp(c_vertices))
                                                          indices:(::djinni::List<::djinni::I32>::fromCpp(c_indices))];
        }
    }
    std::shared_ptr<::GraphicsObjectInterface> asGraphicsObject() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() asGraphicsObject];
            return ::djinni_generated::GraphicsObjectInterface::toCpp(objcpp_result_);
        }
    }
    std::shared_ptr<::MaskingObjectInterface> asMaskingObject() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() asMaskingObject];
            return ::djinni_generated::MaskingObjectInterface::toCpp(objcpp_result_);
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto Polygon2dInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCPolygon2dInterfaceCppProxy class]]) {
        return ((MCPolygon2dInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto Polygon2dInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCPolygon2dInterfaceCppProxy>(cpp);
}

}  // namespace djinni_generated

@end
