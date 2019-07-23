/* Generated by RuntimeBrowser.
 */

@protocol AFUISiriRemoteViewControllerDelegate <NSObject>

@required

- (void)dismissSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1 delayForTTS:(BOOL)arg2;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewController:(void *)arg1 canLoadPreviousConversation:(void *)arg2; // needs 2 arg types, found 7: AFUISiriRemoteViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didChangePresentationPeekMode:(unsigned int)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didEncounterUnexpectedServiceError:(NSError *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didReadBulletinWithIdentifier:(NSString *)arg2;
- (void)siriRemoteViewController:(void *)arg1 handlePasscodeUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 7: AFUISiriRemoteViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)siriRemoteViewController:(void *)arg1 launchApplicationWithBundleIdentifier:(void *)arg2 withURL:(void *)arg3 launchOverSiri:(void *)arg4 replyHandler:(void *)arg5; // needs 5 arg types, found 10: AFUISiriRemoteViewController *, NSString *, NSURL *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (BOOL)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 openURL:(NSURL *)arg2 appBundleID:(NSString *)arg3 allowSiriDismissal:(BOOL)arg4;
- (BOOL)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 openURL:(NSURL *)arg2 delaySessionEndForTTS:(BOOL)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setBugReportingAvailable:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setCarDisplayGatekeeperVisible:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setCarDisplaySnippetVisible:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setHelpButtonEmphasized:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusBarHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewDisabled:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 startRequestWithOptions:(AFUIRequestOptions *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 willDismissViewControllerWithStatusBarStyle:(int)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 willPresentViewControllerWithStatusBarStyle:(int)arg2;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerPulseHelpButton:(AFUISiriRemoteViewController *)arg1;
- (void)startGuidedAccessForRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)viewWillAppearFinishedForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)viewWillDisappearFinishedForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;

@end
