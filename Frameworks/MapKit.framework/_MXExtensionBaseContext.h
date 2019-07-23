/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionBaseContext : NSExtensionContext {
    id  _connectionDelegate;
}

@property (nonatomic) id connectionDelegate;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)__MXExtensionContextBaseOpenURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)connectionDelegate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)receivedURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteContext;
- (id)remoteContextWithErrorHandler:(id /* block */)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setConnectionDelegate:(id)arg1;

@end
