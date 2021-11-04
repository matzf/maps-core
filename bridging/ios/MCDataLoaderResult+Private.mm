// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#import "MCDataLoaderResult+Private.h"
#import "DJIMarshal+Private.h"
#import "MCDataHolderInterface+Private.h"
#import "MCLoaderStatus+Private.h"
#include <cassert>

namespace djinni_generated {

auto DataLoaderResult::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Optional<std::optional, ::djinni_generated::DataHolderInterface>::toCpp(obj.data),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.etag),
            ::djinni::Enum<::LoaderStatus, MCLoaderStatus>::toCpp(obj.status)};
}

auto DataLoaderResult::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCDataLoaderResult alloc] initWithData:(::djinni::Optional<std::optional, ::djinni_generated::DataHolderInterface>::fromCpp(cpp.data))
                                               etag:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.etag))
                                             status:(::djinni::Enum<::LoaderStatus, MCLoaderStatus>::fromCpp(cpp.status))];
}

}  // namespace djinni_generated
