/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSURLAction : BCSAction {
    NSArray * _appLinks;
    NSURL * _appStoreSearchURLForUnsupportedScheme;
    LSApplicationProxy * _applicationProxy;
    bool  _deviceDataIsUnavailable;
    bool  _hasPreferredAppLink;
    SecureChannelAction * _scAction;
}

@property (nonatomic, readonly) unsigned long long appLinkCount;
@property (nonatomic, readonly) bool hasPreferredAppLink;
@property (nonatomic, readonly) bool mustOpenAppLinkInApp;
@property (nonatomic, readonly) LSApplicationProxy *targetApplication;

- (void).cxx_destruct;
- (id)_actionDescriptionForURL:(id)arg1 application:(id)arg2 shouldShowHostNameForSafariURL:(bool)arg3;
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg1;
- (bool)_hasSecureChannelAction;
- (bool)_isCodeFromQRScannerInCamera;
- (void)_resolveTargetApplicationForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_shouldBlockHandlingURL:(id)arg1;
- (bool)_shouldOpenInAppForAppLink:(id)arg1;
- (bool)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(id /* block */)arg1;
- (id)actionPickerItems;
- (unsigned long long)appLinkCount;
- (bool)canSkipUnlock;
- (id)debugDescriptionExtraInfoDictionary;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)arg1;
- (bool)hasPreferredAppLink;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (id)localizedDefaultActionDescription;
- (id)localizedDefaultActionTitle;
- (bool)mustOpenAppLinkInApp;
- (void)performAction;
- (void)performDefaultAction;
- (void)performDefaultActionWithFBOptions:(id)arg1;
- (id)targetApplication;
- (id)url;
- (id)urlThatCanBeOpened;

@end
