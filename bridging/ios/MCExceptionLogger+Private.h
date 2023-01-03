// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception_logger.djinni
#ifdef __cplusplus

#include "ExceptionLogger.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MCExceptionLogger;

namespace djinni_generated {

class ExceptionLogger
{
public:
    using CppType = std::shared_ptr<::ExceptionLogger>;
    using CppOptType = std::shared_ptr<::ExceptionLogger>;
    using ObjcType = MCExceptionLogger*;

    using Boxed = ExceptionLogger;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif
