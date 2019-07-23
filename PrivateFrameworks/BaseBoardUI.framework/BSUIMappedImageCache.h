/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIMappedImageCache : NSObject <BSDebugDescriptionProviding, BSDescriptionProviding> {
    NSString *_name;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_queue_allKeys;
    NSMutableDictionary *_queue_keysToImagesOrFutures;
    BOOL _shared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_imageForKey:(id)arg1 withCPBitmapReadFlags:(int)arg2 generatingIfNecessaryWithBlock:(id /* block */)arg3;
- (void)_setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned int)arg3 andCPBitmapReadFlags:(int)arg4;
- (void)_syncWithQueue;
- (void)_warmupImageForKey:(id)arg1;
- (id)allKeys;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)imageForKey:(id)arg1;
- (id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 options:(unsigned int)arg2;
- (void)removeAllObjects;
- (void)removeImageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned int)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
