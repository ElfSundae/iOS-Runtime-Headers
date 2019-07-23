/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMImageNode : AXMSourceNode

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void)produceImage:(id)arg1;
- (void)triggerWithImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 clientID:(long long)arg4 resultHandler:(id /* block */)arg5;
- (void)triggerWithImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 resultHandler:(id /* block */)arg4;
- (void)triggerWithImage:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)triggerWithImageURL:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(id /* block */)arg4;

@end
