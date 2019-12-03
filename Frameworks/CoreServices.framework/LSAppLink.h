/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSAppLink : NSObject <NSSecureCoding> {
    NSURL * _URL;
    _LSValidationToken * __validationToken;
    LSApplicationProxy * _targetApplicationProxy;
}

@property (copy) NSURL *URL;
@property (retain) _LSValidationToken *_validationToken;
@property (nonatomic, retain) NSDictionary *browserSettings;
@property (getter=isEnabled, nonatomic) bool enabled;
@property long long openStrategy;
@property (retain) LSApplicationProxy *targetApplicationProxy;

+ (bool)URLComponentsAreValidForAppLinks:(id)arg1 error:(id*)arg2;
+ (bool)_URLIsValidForAppLinks:(id)arg1 error:(id*)arg2;
+ (id)_appLinkWithURL:(id)arg1 applicationProxy:(id)arg2 plugInClass:(Class)arg3;
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext { id x1; }*)arg2 limit:(unsigned long long)arg3 URLComponents:(id)arg4 error:(id*)arg5;
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext { id x1; }*)arg2 limit:(unsigned long long)arg3 requireEntitlement:(bool)arg4 error:(id*)arg5;
+ (id)_appLinksWithState:(id)arg1 limit:(unsigned long long)arg2 requireEntitlement:(bool)arg3 error:(id*)arg4;
+ (id)_dispatchQueue;
+ (void)_openAppLink:(id)arg1 state:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)_openWithAppLink:(id)arg1 state:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)areEnabledByDefault;
+ (void)getAppLinkWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getAppLinksWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)openWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)openWithURL:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)removeAllSettingsReturningError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_userActivityWithState:(id)arg1 error:(id*)arg2;
- (bool)_validateReturningError:(id*)arg1;
- (id)_validationToken;
- (id)_validationTokenPayload;
- (id)browserSettings;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)openInWebBrowser:(bool)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openInWebBrowser:(bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openInWebBrowser:(bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 configuration:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)openStrategy;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)openWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)removeSettingsReturningError:(id*)arg1;
- (void)setBrowserSettings:(id)arg1;
- (bool)setBrowserSettings:(id)arg1 error:(id*)arg2;
- (void)setEnabled:(bool)arg1;
- (bool)setEnabled:(bool)arg1 error:(id*)arg2;
- (void)setOpenStrategy:(long long)arg1;
- (void)setTargetApplicationProxy:(id)arg1;
- (void)setURL:(id)arg1;
- (void)set_validationToken:(id)arg1;
- (id)targetApplicationProxy;

@end
