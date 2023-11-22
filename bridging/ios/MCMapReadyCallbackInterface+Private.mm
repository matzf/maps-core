// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#import "MCMapReadyCallbackInterface+Private.h"
#import "MCMapReadyCallbackInterface.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCLayerReadyState+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class MapReadyCallbackInterface::ObjcProxy final
: public ::MapReadyCallbackInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::MapReadyCallbackInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void stateDidUpdate(::LayerReadyState c_state) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() stateDidUpdate:(::djinni::Enum<::LayerReadyState, MCLayerReadyState>::fromCpp(c_state))];
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto MapReadyCallbackInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto MapReadyCallbackInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

} // namespace djinni_generated
