// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from layer_object.djinni
#ifdef __cplusplus

#include "LayerObjectInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MCLayerObjectInterface;

namespace djinni_generated {

class LayerObjectInterface
{
public:
    using CppType = std::shared_ptr<::LayerObjectInterface>;
    using CppOptType = std::shared_ptr<::LayerObjectInterface>;
    using ObjcType = MCLayerObjectInterface*;

    using Boxed = LayerObjectInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
