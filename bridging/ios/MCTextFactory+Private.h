// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni
#ifdef __cplusplus

#include "TextFactory.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MCTextFactory;

namespace djinni_generated {

class TextFactory
{
public:
    using CppType = std::shared_ptr<::TextFactory>;
    using CppOptType = std::shared_ptr<::TextFactory>;
    using ObjcType = MCTextFactory*;

    using Boxed = TextFactory;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
