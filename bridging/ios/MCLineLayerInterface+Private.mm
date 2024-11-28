// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from line.djinni

#import "MCLineLayerInterface+Private.h"
#import "MCLineLayerInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCLayerInterface+Private.h"
#import "MCLineInfoInterface+Private.h"
#import "MCLineLayerCallbackInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCLineLayerInterface ()

- (id)initWithCpp:(const std::shared_ptr<::LineLayerInterface>&)cppRef;

@end

@implementation MCLineLayerInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::LineLayerInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::LineLayerInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCLineLayerInterface *)create {
    try {
        auto objcpp_result_ = ::LineLayerInterface::create();
        return ::djinni_generated::LineLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setLines:(nonnull NSArray<MCLineInfoInterface *> *)lines {
    try {
        _cppRefHandle.get()->setLines(::djinni::List<::djinni_generated::LineInfoInterface>::toCpp(lines));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<MCLineInfoInterface *> *)getLines {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getLines();
        return ::djinni::List<::djinni_generated::LineInfoInterface>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)remove:(nullable MCLineInfoInterface *)line {
    try {
        _cppRefHandle.get()->remove(::djinni_generated::LineInfoInterface::toCpp(line));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)add:(nullable MCLineInfoInterface *)line {
    try {
        _cppRefHandle.get()->add(::djinni_generated::LineInfoInterface::toCpp(line));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)clear {
    try {
        _cppRefHandle.get()->clear();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setCallbackHandler:(nullable id<MCLineLayerCallbackInterface>)handler {
    try {
        _cppRefHandle.get()->setCallbackHandler(::djinni_generated::LineLayerCallbackInterface::toCpp(handler));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLayerInterface>)asLayerInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asLayerInterface();
        return ::djinni_generated::LayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)invalidate {
    try {
        _cppRefHandle.get()->invalidate();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)resetSelection {
    try {
        _cppRefHandle.get()->resetSelection();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setSelected:(nonnull NSSet<NSString *> *)selectedIds {
    try {
        _cppRefHandle.get()->setSelected(::djinni::Set<::djinni::String>::toCpp(selectedIds));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setLayerClickable:(BOOL)isLayerClickable {
    try {
        _cppRefHandle.get()->setLayerClickable(::djinni::Bool::toCpp(isLayerClickable));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setRenderPassIndex:(int32_t)index {
    try {
        _cppRefHandle.get()->setRenderPassIndex(::djinni::I32::toCpp(index));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto LineLayerInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto LineLayerInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCLineLayerInterface>(cpp);
}

} // namespace djinni_generated

@end
