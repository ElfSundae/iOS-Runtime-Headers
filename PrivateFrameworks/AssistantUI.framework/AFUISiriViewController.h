/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriViewController : UIViewController <AFUIDelayedActionCommandCacheDelegate, AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate> {
    BOOL  _active;
    BOOL  _attemptingRemoteViewControllerPresentation;
    SiriUIConfiguration * _configuration;
    SACarPlaySupportedOEMAppIdList * _currentCarPlaySupportedOEMAppIdList;
    AFUIRequestOptions * _currentRequestOptions;
    int  _currentRequestSource;
    <AFUISiriViewControllerDataSource> * _dataSource;
    AFUIDelayedActionCommandCache * _delayedActionCommandCache;
    <AFUISiriViewControllerDelegate> * _delegate;
    BOOL  _eyesFree;
    BOOL  _hasCalledBeginAppearanceTransition;
    BOOL  _hasCalledEndAppearanceTransition;
    BOOL  _inHoldToTalkMode;
    BOOL  _isStark;
    BOOL  _mapsGatekeeperEnabled;
    NSNumber * _recordingStartedTimeValue;
    AFUISiriRemoteViewController * _remoteViewController;
    NSObject<OS_dispatch_queue> * _remoteViewControllerDispatchQueue;
    BOOL  _remoteViewControllerDispatchQueueSuspended;
    SiriUIAudioRoutePickerController * _routePickerController;
    AFUISiriSession * _session;
    BOOL  _showsStatusBar;
    BOOL  _siriSessionWantsToEnd;
    UIStatusBar * _statusBar;
    BOOL  _statusBarEnabled;
    id /* block */  _triggerUpdater;
    NSObject<OS_dispatch_queue> * _uiAppearanceCoreDuetQueue;
    NSString * _uiAppearanceUUIDString;
    double  _viewDidAppearTime;
    BOOL  _visible;
    int  _vtEnabledCount;
}

@property (getter=_currentRequestOptions, setter=_setCurrentRequestOptions:, nonatomic, copy) AFUIRequestOptions *currentRequestOptions;
@property (nonatomic) <AFUISiriViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEyesFree, nonatomic) BOOL eyesFree;
@property (getter=_hasCalledBeginAppearanceTransition, setter=_setHasCalledBeginAppearanceTransition:, nonatomic) BOOL hasCalledBeginAppearanceTransition;
@property (getter=_hasCalledEndAppearanceTransition, setter=_setHasCalledEndAppearanceTransition:, nonatomic) BOOL hasCalledEndAppearanceTransition;
@property (nonatomic, readonly) BOOL hasScreenSnapshot;
@property (readonly) unsigned int hash;
@property (getter=_isInHoldToTalkMode, setter=_setInHoldToTalkMode:, nonatomic) BOOL inHoldToTalkMode;
@property (nonatomic, readonly) BOOL isProcessingAcousticIdRequest;
@property (nonatomic) BOOL isStark;
@property (nonatomic) BOOL mapsGatekeeperEnabled;
@property (getter=_recordingStartedTimeValue, setter=_setRecordingStartedTimeValue:, nonatomic, retain) NSNumber *recordingStartedTimeValue;
@property (getter=_remoteViewController, nonatomic, readonly) AFUISiriRemoteViewController *remoteViewController;
@property (getter=_remoteViewControllerDispatchQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *remoteViewControllerDispatchQueue;
@property (nonatomic, retain) SiriUIAudioRoutePickerController *routePickerController;
@property (getter=_session, nonatomic, readonly) AFUISiriSession *session;
@property (nonatomic) BOOL showsStatusBar;
@property (getter=_statusBar, setter=_setStatusBar:, nonatomic, retain) UIStatusBar *statusBar;
@property (nonatomic) BOOL statusBarEnabled;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView<AFUISiriRemoteViewHosting> *view;
@property (getter=_viewDidAppearTime, setter=_setViewDidAppearTime:, nonatomic) double viewDidAppearTime;
@property (getter=isVisible, nonatomic) BOOL visible;

- (void).cxx_destruct;
- (void)_activationTriggerDidRelease:(id)arg1;
- (void)_addStatusBar;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (BOOL)_canIgnoreHoldToTalkThreshold;
- (id)_currentRequestOptions;
- (void)_enqueueRemoteViewControllerMessageBlock:(id /* block */)arg1;
- (void)_enqueueRemoteViewControllerMessageBlockWithWeaklyReferencedRemoteViewController:(id /* block */)arg1;
- (void)_enterHoldToTalkMode;
- (void)_exitHoldToTalkMode;
- (void)_handleMicButtonLongPressBeganFromSource:(int)arg1;
- (void)_handleMicButtonLongPressEndedFromSource:(int)arg1;
- (void)_handleMicButtonTapFromSource:(int)arg1;
- (BOOL)_hasCalledBeginAppearanceTransition;
- (BOOL)_hasCalledEndAppearanceTransition;
- (BOOL)_holdToTalkThresholdHasElapsed;
- (void)_holdToTalkTriggerDidReleaseFromSource:(int)arg1;
- (void)_informRemoteViewControllerOfParentIfNecessary;
- (BOOL)_isInHoldToTalkMode;
- (BOOL)_isInitialSpeechRequest;
- (double)_manualEndpointingThreshold;
- (void)_presentDeferredFlamesViewIfNecessary;
- (void)_presentRemoteViewController;
- (void)_recordUIAppearance;
- (void)_recordUIDismissal;
- (id)_recordingStartedTimeValue;
- (id)_remoteViewController;
- (id)_remoteViewControllerDispatchQueue;
- (void)_removeStatusBar;
- (void)_resumeRemoteViewControllerDispatchQueue;
- (id)_routePickerController;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg1;
- (void)_sendEndAppearanceTransitionIfReady;
- (id)_session;
- (void)_setCurrentRequestOptions:(id)arg1;
- (void)_setHasCalledBeginAppearanceTransition:(BOOL)arg1;
- (void)_setHasCalledEndAppearanceTransition:(BOOL)arg1;
- (void)_setInHoldToTalkMode:(BOOL)arg1;
- (void)_setKeyboardEnabled:(BOOL)arg1;
- (void)_setRecordingStartedTimeValue:(id)arg1;
- (void)_setShowAudioRoutePicker:(BOOL)arg1;
- (void)_setStatusBar:(id)arg1;
- (void)_setViewDidAppearTime:(double)arg1;
- (void)_setVoiceTriggerEnabled:(BOOL)arg1;
- (id)_siriView;
- (id)_statusBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_statusBarFrame;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_suspendRemoteViewControllerDispatchQueue;
- (void)_transitionToAutomaticEndpointMode;
- (void)_updateAudioRoutePicker;
- (double)_viewDidAppearTime;
- (float)audioRecordingPowerLevelForSiriView:(id)arg1;
- (id)bulletinsForSiriSession:(id)arg1;
- (void)cancelTTS;
- (void)commandCache:(id)arg1 didInvalidateDelayedActionCommand:(id)arg2;
- (void)commandCache:(id)arg1 didPerformDelayedActionCommand:(id)arg2;
- (id)contextAppInfosForSiriSession:(id)arg1;
- (id)currentRequestOptions;
- (int)currentSource;
- (id)dataSource;
- (void)dealloc;
- (void)defrost;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dismissSiriRemoteViewController:(id)arg1 delayForTTS:(BOOL)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)endSession;
- (void)handlePasscodeUnlockAndCancelRequest:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)handlePasscodeUnlockWithCompletion:(id /* block */)arg1;
- (void)handleViewFullyRevealed;
- (BOOL)hasQueuedTTS;
- (BOOL)hasScreenSnapshot;
- (id)init;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;
- (BOOL)isEyesFree;
- (BOOL)isInitialBringUp;
- (BOOL)isListening;
- (BOOL)isPreventingActivationGesture;
- (BOOL)isProcessingAcousticIdRequest;
- (BOOL)isStark;
- (BOOL)isVisible;
- (id)lastAppUpdateTimeForSiriRemoteViewController:(id)arg1;
- (void)loadView;
- (unsigned int)lockStateForSiriRemoteViewController:(id)arg1;
- (unsigned int)lockStateForSiriSession:(id)arg1;
- (BOOL)mapsGatekeeperEnabled;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1;
- (void)performGenericAceCommands:(id)arg1 forCommandCache:(id)arg2;
- (void)preheat;
- (void)presentRemoteViewControllerIfNecessary;
- (void)resetContextTypes:(int)arg1;
- (id)routePickerController;
- (void)routePickerController:(id)arg1 hasRoutesToPick:(BOOL)arg2;
- (void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(BOOL)arg2;
- (void)setAlertContext;
- (void)setCurrentCarPlaySupportedOEMAppIdList:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEyesFree:(BOOL)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)setLockState:(unsigned int)arg1;
- (void)setMapsGatekeeperEnabled:(BOOL)arg1;
- (void)setRoutePickerController:(id)arg1;
- (void)setShowsStatusBar:(BOOL)arg1;
- (void)setStatusBarEnabled:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)shortTapAction;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutorotate;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2;
- (BOOL)showsStatusBar;
- (void)siriDidActivateFromSource:(int)arg1;
- (void)siriDidDeactivate;
- (id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 canLoadPreviousConversation:(id /* block */)arg2;
- (void)siriRemoteViewController:(id)arg1 didChangePresentationPeekMode:(unsigned int)arg2;
- (void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(id /* block */)arg2;
- (void)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(int)arg4 replyHandler:(id /* block */)arg5;
- (BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
- (BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3;
- (void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplayGatekeeperVisible:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(int)arg2;
- (void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(int)arg2;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(id)arg1;
- (void)siriRemoteViewControllerPulseHelpButton:(id)arg1;
- (void)siriSession:(id)arg1 didChangeDialogPhase:(id)arg2;
- (void)siriSession:(id)arg1 didChangeToState:(int)arg2;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(id /* block */)arg2;
- (BOOL)siriSessionCanEnd:(id)arg1;
- (void)siriSessionDidEnd:(id)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)siriSessionDidReceiveDelayedActionCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)siriSessionDidResetContext:(id)arg1;
- (void)siriSessionRecordingPreparationHasFinished:(id)arg1;
- (void)siriSessionWillEnd:(id)arg1;
- (BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(int)arg2;
- (void)siriViewDidReceiveAudioRouteAction:(id)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)siriViewDidReceiveHelpAction:(id)arg1;
- (void)siriViewDidReceiveKeyboardAction:(id)arg1;
- (void)siriViewDidReceiveReportBugAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewTappedAction:(id)arg1;
- (void)siriWillActivateFromSource:(int)arg1;
- (void)startGuidedAccessForRemoteViewController:(id)arg1;
- (void)startRequestWithActivationTrigger:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (BOOL)statusBarEnabled;
- (void)stopRequestWithOptions:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)telephonyRequestCompleted;
- (id)underlyingConnection;
- (void)updateContexts:(int)arg1;
- (void)updateRequestOptions:(id)arg1;
- (void)updateViewForPercentageRevealed:(float)arg1;
- (void)userInteractionDidOccur;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)viewServiceApplicationInfo;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillAppearFinishedForSiriRemoteViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillDisappearFinishedForSiriRemoteViewController:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
