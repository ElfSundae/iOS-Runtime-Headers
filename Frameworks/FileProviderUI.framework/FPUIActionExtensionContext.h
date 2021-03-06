/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

@interface FPUIActionExtensionContext : NSExtensionContext {
    NSString * _domainIdentifier;
    NSURL * _initialURL;
}

@property (copy) NSString *domainIdentifier;
@property (copy) NSURL *initialURL;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_remoteContext;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequest;
- (void)completeRequestWithUserInfo:(id)arg1;
- (void)didEncounterError:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)domainIdentifier;
- (id)initialURL;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDomainIdentifier:(id)arg1;
- (void)setInitialURL:(id)arg1;

@end
