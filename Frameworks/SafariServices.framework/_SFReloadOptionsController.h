/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFReloadOptionsController : NSObject <SFContentBlockerManagerObserver> {
    _SFInjectedJavaScriptController * _activityJSController;
    NSMutableDictionary * _domainToUserAgentPolicyMap;
    bool  _hasEnabledContentBlockers;
    WKWebView * _webView;
}

@property (nonatomic, readonly) _SFInjectedJavaScriptController *activityJSController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasEnabledContentBlockers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool loadedUsingDesktopUserAgent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkForContentBlockers;
- (id)activityJSController;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;
- (id)customUserAgentForSetting:(long long)arg1;
- (void)customUserAgentSettingForMainFrameURL:(id)arg1 withTimeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1;
- (bool)hasEnabledContentBlockers;
- (id)init;
- (id)initWithWebView:(id)arg1 activityJSController:(id)arg2;
- (void)invalidate;
- (bool)loadedUsingDesktopUserAgent;
- (void)requestDesktopSite;
- (void)requestDesktopSiteWithURL:(id)arg1;
- (void)setHasEnabledContentBlockers:(bool)arg1;

@end
