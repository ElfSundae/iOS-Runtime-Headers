/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFDiskCache : NSObject {
    NSURL * _cacheURL;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSURL *cacheURL;

+ (id)workflowCache;

- (void).cxx_destruct;
- (id)actuallyGetObjectForKey:(id)arg1;
- (void)actuallyRemoveObjectForKey:(id)arg1;
- (void)actuallySetObject:(id)arg1 forKey:(id)arg2;
- (id)cacheURL;
- (id)fileURLForKey:(id)arg1;
- (id)init;
- (id)initWithApplicationGroupIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithCacheDirectory:(id)arg1 name:(id)arg2;
- (id)initWithCacheURL:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)objectForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)objectForKeyComponents:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)removeObjectForKeyComponents:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setObject:(id)arg1 forKeyComponents:(id)arg2;

@end
