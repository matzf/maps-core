// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#import "MCSphereEffectShaderInterface+Private.h"
#import "MCSphereEffectShaderInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCShaderProgramInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCSphereEffectShaderInterfaceCppProxy : NSObject<MCSphereEffectShaderInterface>

- (id)initWithCpp:(const std::shared_ptr<::SphereEffectShaderInterface>&)cppRef;

@end

@implementation MCSphereEffectShaderInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::SphereEffectShaderInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::SphereEffectShaderInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nullable id<MCShaderProgramInterface>)asShaderProgramInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asShaderProgramInterface();
        return ::djinni_generated::ShaderProgramInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setEllipse:(nonnull NSArray<NSNumber *> *)coefficients {
    try {
        _cppRefHandle.get()->setEllipse(::djinni::List<::djinni::F64>::toCpp(coefficients));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class SphereEffectShaderInterface::ObjcProxy final
: public ::SphereEffectShaderInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::SphereEffectShaderInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    /*not-null*/ std::shared_ptr<::ShaderProgramInterface> asShaderProgramInterface() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() asShaderProgramInterface];
            return ::djinni_generated::ShaderProgramInterface::toCpp(objcpp_result_);
        }
    }
    void setEllipse(const std::vector<double> & c_coefficients) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setEllipse:(::djinni::List<::djinni::F64>::fromCpp(c_coefficients))];
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto SphereEffectShaderInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCSphereEffectShaderInterfaceCppProxy class]]) {
        return ((MCSphereEffectShaderInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto SphereEffectShaderInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCSphereEffectShaderInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
