// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni
#ifdef __cplusplus

#include "Tiled2dMapVectorLayerSymbolDelegateInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCTiled2dMapVectorLayerSymbolDelegateInterface;

namespace djinni_generated {

class Tiled2dMapVectorLayerSymbolDelegateInterface
{
public:
    using CppType = std::shared_ptr<::Tiled2dMapVectorLayerSymbolDelegateInterface>;
    using CppOptType = std::shared_ptr<::Tiled2dMapVectorLayerSymbolDelegateInterface>;
    using ObjcType = id<MCTiled2dMapVectorLayerSymbolDelegateInterface>;

    using Boxed = Tiled2dMapVectorLayerSymbolDelegateInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
