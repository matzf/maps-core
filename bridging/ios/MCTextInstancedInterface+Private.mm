// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCTextInstancedInterface+Private.h"
#import "MCTextInstancedInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCGraphicsObjectInterface+Private.h"
#import "MCQuad2dD+Private.h"
#import "MCRenderingContextInterface+Private.h"
#import "MCSharedBytes+Private.h"
#import "MCTextureHolderInterface+Private.h"
#import "MCVec3D+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTextInstancedInterfaceCppProxy : NSObject<MCTextInstancedInterface>

- (id)initWithCpp:(const std::shared_ptr<::TextInstancedInterface>&)cppRef;

@end

@implementation MCTextInstancedInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::TextInstancedInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::TextInstancedInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)setFrame:(nonnull MCQuad2dD *)frame
          origin:(nonnull MCVec3D *)origin
            is3d:(BOOL)is3d {
    try {
        _cppRefHandle.get()->setFrame(::djinni_generated::Quad2dD::toCpp(frame),
                                      ::djinni_generated::Vec3D::toCpp(origin),
                                      ::djinni::Bool::toCpp(is3d));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setInstanceCount:(int32_t)count {
    try {
        _cppRefHandle.get()->setInstanceCount(::djinni::I32::toCpp(count));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setPositions:(nonnull MCSharedBytes *)positions {
    try {
        _cppRefHandle.get()->setPositions(::djinni_generated::SharedBytes::toCpp(positions));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setReferencePositions:(nonnull MCSharedBytes *)positions {
    try {
        _cppRefHandle.get()->setReferencePositions(::djinni_generated::SharedBytes::toCpp(positions));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setTextureCoordinates:(nonnull MCSharedBytes *)textureCoordinates {
    try {
        _cppRefHandle.get()->setTextureCoordinates(::djinni_generated::SharedBytes::toCpp(textureCoordinates));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setScales:(nonnull MCSharedBytes *)scales {
    try {
        _cppRefHandle.get()->setScales(::djinni_generated::SharedBytes::toCpp(scales));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setRotations:(nonnull MCSharedBytes *)rotations {
    try {
        _cppRefHandle.get()->setRotations(::djinni_generated::SharedBytes::toCpp(rotations));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setStyleIndices:(nonnull MCSharedBytes *)indices {
    try {
        _cppRefHandle.get()->setStyleIndices(::djinni_generated::SharedBytes::toCpp(indices));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setStyles:(nonnull MCSharedBytes *)values {
    try {
        _cppRefHandle.get()->setStyles(::djinni_generated::SharedBytes::toCpp(values));
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

class TextInstancedInterface::ObjcProxy final
: public ::TextInstancedInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::TextInstancedInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void setFrame(const ::Quad2dD & c_frame, const ::Vec3D & c_origin, bool c_is3d) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setFrame:(::djinni_generated::Quad2dD::fromCpp(c_frame))
                                                        origin:(::djinni_generated::Vec3D::fromCpp(c_origin))
                                                          is3d:(::djinni::Bool::fromCpp(c_is3d))];
        }
    }
    void setInstanceCount(int32_t c_count) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setInstanceCount:(::djinni::I32::fromCpp(c_count))];
        }
    }
    void setPositions(const ::SharedBytes & c_positions) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setPositions:(::djinni_generated::SharedBytes::fromCpp(c_positions))];
        }
    }
    void setReferencePositions(const ::SharedBytes & c_positions) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setReferencePositions:(::djinni_generated::SharedBytes::fromCpp(c_positions))];
        }
    }
    void setTextureCoordinates(const ::SharedBytes & c_textureCoordinates) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setTextureCoordinates:(::djinni_generated::SharedBytes::fromCpp(c_textureCoordinates))];
        }
    }
    void setScales(const ::SharedBytes & c_scales) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setScales:(::djinni_generated::SharedBytes::fromCpp(c_scales))];
        }
    }
    void setRotations(const ::SharedBytes & c_rotations) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setRotations:(::djinni_generated::SharedBytes::fromCpp(c_rotations))];
        }
    }
    void setStyleIndices(const ::SharedBytes & c_indices) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setStyleIndices:(::djinni_generated::SharedBytes::fromCpp(c_indices))];
        }
    }
    void setStyles(const ::SharedBytes & c_values) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setStyles:(::djinni_generated::SharedBytes::fromCpp(c_values))];
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

auto TextInstancedInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCTextInstancedInterfaceCppProxy class]]) {
        return ((MCTextInstancedInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto TextInstancedInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCTextInstancedInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
