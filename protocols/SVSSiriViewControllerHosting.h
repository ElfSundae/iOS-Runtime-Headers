/* Generated by RuntimeBrowser.
 */

@protocol SVSSiriViewControllerHosting <NSObject>

@required

- (void)getScreenshotWithReplyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)handlePasscodeUnlockWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)notifyOnNextUserInteraction;
- (void)pulseHelpButton;
- (void)serviceBulletinWithIdentifier:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFBulletin *, void*
- (void)serviceCanLoadPreviousConversation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)serviceDidDetectMicButtonTap;
- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;
- (void)serviceDidPresentUserInterface;
- (void)serviceDidReadBulletinWithIdentifier:(NSString *)arg1;
- (void)serviceLastAppUpdateTimeWithReplyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (void)serviceLaunchApplicationWithBundleIdentifier:(void *)arg1 withURL:(void *)arg2 launchOptions:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSURL *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)serviceOpenURL:(NSURL *)arg1 appBundleID:(NSString *)arg2 allowSiriDismissal:(BOOL)arg3;
- (void)serviceOpenURL:(void *)arg1 delaySessionEndForTTS:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)servicePresentationDidChangePeekMode:(unsigned int)arg1;
- (void)serviceRequestsDismissal:(BOOL)arg1;
- (void)serviceStartGuidedAccess;
- (void)serviceStartRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(int)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(int)arg1;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)setCarDisplayGatekeeperVisible:(BOOL)arg1;
- (void)setCarDisplaySnippetVisible:(BOOL)arg1;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setStatusViewDisabled:(BOOL)arg1;
- (void)setStatusViewHidden:(BOOL)arg1;
- (void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
- (void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;

@end
