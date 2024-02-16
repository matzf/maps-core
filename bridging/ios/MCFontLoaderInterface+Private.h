// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from loader.djinni
#ifdef __cplusplus

#include "FontLoaderInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCFontLoaderInterface;

namespace djinni_generated {

class FontLoaderInterface
{
public:
    using CppType = std::shared_ptr<::FontLoaderInterface>;
    using CppOptType = std::shared_ptr<::FontLoaderInterface>;
    using ObjcType = id<MCFontLoaderInterface>;

    using Boxed = FontLoaderInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
