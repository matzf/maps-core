// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni
#ifdef __cplusplus

#include "ComputeObjectInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCComputeObjectInterface;

namespace djinni_generated {

class ComputeObjectInterface
{
public:
    using CppType = std::shared_ptr<::ComputeObjectInterface>;
    using CppOptType = std::shared_ptr<::ComputeObjectInterface>;
    using ObjcType = id<MCComputeObjectInterface>;

    using Boxed = ComputeObjectInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif