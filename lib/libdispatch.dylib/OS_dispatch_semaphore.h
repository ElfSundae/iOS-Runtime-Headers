/* Generated by RuntimeBrowser
   Image: /usr/lib/system/introspection/libdispatch.dylib
 */

@interface OS_dispatch_semaphore : OS_dispatch_object <OS_dispatch_semaphore>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// Image: /usr/lib/system/introspection/libdispatch.dylib

+ (void)load;

- (id)init;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftDispatch.dylib

- (int)signal;
- (void)wait;

@end
