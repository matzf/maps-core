// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni
#ifdef __cplusplus

#include "Line2dInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCLine2dInterface;

namespace djinni_generated {

class Line2dInterface
{
public:
    using CppType = std::shared_ptr<::Line2dInterface>;
    using CppOptType = std::shared_ptr<::Line2dInterface>;
    using ObjcType = id<MCLine2dInterface>;

    using Boxed = Line2dInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
