// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCPolygonPatternGroup2dInterface+Private.h"
#import "MCPolygonPatternGroup2dInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCGraphicsObjectInterface+Private.h"
#import "MCRenderingContextInterface+Private.h"
#import "MCSharedBytes+Private.h"
#import "MCTextureHolderInterface+Private.h"
#import "MCVec2F+Private.h"
#import "MCVec3D+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCPolygonPatternGroup2dInterfaceCppProxy : NSObject<MCPolygonPatternGroup2dInterface>

- (id)initWithCpp:(const std::shared_ptr<::PolygonPatternGroup2dInterface>&)cppRef;

@end

@implementation MCPolygonPatternGroup2dInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::PolygonPatternGroup2dInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::PolygonPatternGroup2dInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)setVertices:(nonnull MCSharedBytes *)vertices
            indices:(nonnull MCSharedBytes *)indices
             origin:(nonnull MCVec3D *)origin {
    try {
        _cppRefHandle.get()->setVertices(::djinni_generated::SharedBytes::toCpp(vertices),
                                         ::djinni_generated::SharedBytes::toCpp(indices),
                                         ::djinni_generated::Vec3D::toCpp(origin));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setOpacities:(nonnull MCSharedBytes *)values {
    try {
        _cppRefHandle.get()->setOpacities(::djinni_generated::SharedBytes::toCpp(values));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setTextureCoordinates:(nonnull MCSharedBytes *)values {
    try {
        _cppRefHandle.get()->setTextureCoordinates(::djinni_generated::SharedBytes::toCpp(values));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setScalingFactor:(float)factor {
    try {
        _cppRefHandle.get()->setScalingFactor(::djinni::F32::toCpp(factor));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setScalingFactors:(nonnull MCVec2F *)factor {
    try {
        _cppRefHandle.get()->setScalingFactors(::djinni_generated::Vec2F::toCpp(factor));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)loadTexture:(nullable id<MCRenderingContextInterface>)context
      textureHolder:(nullable id<MCTextureHolderInterface>)textureHolder {
    try {
        _cppRefHandle.get()->loadTexture(::djinni_generated::RenderingContextInterface::toCpp(context),
                                         ::djinni_generated::TextureHolderInterface::toCpp(textureHolder));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)removeTexture {
    try {
        _cppRefHandle.get()->removeTexture();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asGraphicsObject();
        return ::djinni_generated::GraphicsObjectInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class PolygonPatternGroup2dInterface::ObjcProxy final
: public ::PolygonPatternGroup2dInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::PolygonPatternGroup2dInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void setVertices(const ::SharedBytes & c_vertices, const ::SharedBytes & c_indices, const ::Vec3D & c_origin) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setVertices:(::djinni_generated::SharedBytes::fromCpp(c_vertices))
                                                          indices:(::djinni_generated::SharedBytes::fromCpp(c_indices))
                                                           origin:(::djinni_generated::Vec3D::fromCpp(c_origin))];
        }
    }
    void setOpacities(const ::SharedBytes & c_values) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setOpacities:(::djinni_generated::SharedBytes::fromCpp(c_values))];
        }
    }
    void setTextureCoordinates(const ::SharedBytes & c_values) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setTextureCoordinates:(::djinni_generated::SharedBytes::fromCpp(c_values))];
        }
    }
    void setScalingFactor(float c_factor) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setScalingFactor:(::djinni::F32::fromCpp(c_factor))];
        }
    }
    void setScalingFactors(const ::Vec2F & c_factor) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setScalingFactors:(::djinni_generated::Vec2F::fromCpp(c_factor))];
        }
    }
    void loadTexture(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & c_context, const /*not-null*/ std::shared_ptr<::TextureHolderInterface> & c_textureHolder) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() loadTexture:(::djinni_generated::RenderingContextInterface::fromCpp(c_context))
                                                    textureHolder:(::djinni_generated::TextureHolderInterface::fromCpp(c_textureHolder))];
        }
    }
    void removeTexture() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() removeTexture];
        }
    }
    /*not-null*/ std::shared_ptr<::GraphicsObjectInterface> asGraphicsObject() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() asGraphicsObject];
            return ::djinni_generated::GraphicsObjectInterface::toCpp(objcpp_result_);
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto PolygonPatternGroup2dInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCPolygonPatternGroup2dInterfaceCppProxy class]]) {
        return ((MCPolygonPatternGroup2dInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto PolygonPatternGroup2dInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCPolygonPatternGroup2dInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
