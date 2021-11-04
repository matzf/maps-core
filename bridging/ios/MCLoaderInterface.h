// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#import "MCDataLoaderResult.h"
#import "MCTextureLoaderResult.h"
#import <Foundation/Foundation.h>


@protocol MCLoaderInterface

- (nonnull MCTextureLoaderResult *)loadTexture:(nonnull NSString *)url
                                          etag:(nullable NSString *)etag;

- (nonnull MCDataLoaderResult *)loadData:(nonnull NSString *)url
                                    etag:(nullable NSString *)etag;

@end
