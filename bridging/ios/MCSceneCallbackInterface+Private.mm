// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#import "MCSceneCallbackInterface+Private.h"
#import "MCSceneCallbackInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIObjcWrapperCache+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCSceneCallbackInterfaceCppProxy : NSObject<MCSceneCallbackInterface>

- (id)initWithCpp:(const std::shared_ptr<::SceneCallbackInterface>&)cppRef;

@end

@implementation MCSceneCallbackInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::SceneCallbackInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::SceneCallbackInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)invalidate {
    try {
        _cppRefHandle.get()->invalidate();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class SceneCallbackInterface::ObjcProxy final
: public ::SceneCallbackInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::SceneCallbackInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void invalidate() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() invalidate];
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto SceneCallbackInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCSceneCallbackInterfaceCppProxy class]]) {
        return ((MCSceneCallbackInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto SceneCallbackInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCSceneCallbackInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
