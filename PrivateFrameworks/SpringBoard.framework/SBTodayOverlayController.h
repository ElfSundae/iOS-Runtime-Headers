/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBTodayOverlayController : NSObject <BSDescriptionProviding, CSExternalBehaviorProviding, CSExternalEventHandling, SBBarSwipeAffordanceObserver, SBFIdleTimerBehaviorProviding, SBFTodayOverlayControlling, SBTodayOverlayViewControllerDelegate, UIGestureRecognizerDelegate> {
    SBHomeGesturePanGestureRecognizer * _dismissHomeGestureRecognizer;
    bool  _dismissing;
    FBDisplayLayoutElement * _displayLayoutElement;
    SBBarSwipeAffordanceViewController * _homeAffordanceViewController;
    NSHashTable * _observers;
    SBTodayOverlayViewController * _overlayViewController;
    SBAppStatusBarDateTimeAssertion * _statusBarContentAssertion;
    unsigned long long  _systemGestureType;
    SBMainScreenActiveInterfaceOrientationWindow * _window;
}

@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBHomeGesturePanGestureRecognizer *dismissHomeGestureRecognizer;
@property (getter=isDismissing, nonatomic) bool dismissing;
@property (nonatomic, retain) FBDisplayLayoutElement *displayLayoutElement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBBarSwipeAffordanceViewController *homeAffordanceViewController;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) SBTodayOverlayViewController *overlayViewController;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic) double presentationProgress;
@property (getter=isPresented, nonatomic, readonly) bool presented;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, retain) SBAppStatusBarDateTimeAssertion *statusBarContentAssertion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long systemGestureType;
@property (nonatomic, readonly) SBMainScreenActiveInterfaceOrientationWindow *window;

- (void).cxx_destruct;
- (void)_addSystemGestureRecognizer;
- (void)_relinquishStatusBarContentAssertion;
- (void)_removeSystemGestureRecognizer;
- (void)_takeStatusBarContentAssertion;
- (void)addTodayOverlayObserver:(id)arg1;
- (double)contentWidth;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismissAnimated:(bool)arg1;
- (id)dismissHomeGestureRecognizer;
- (void)dismissScrollGestureUpdated:(id)arg1;
- (void)dismissTapGestureUpdated:(id)arg1;
- (id)displayLayoutElement;
- (void)enumerateTodayOverlayObserversUsingBlock:(id /* block */)arg1;
- (double)finalPresentationProgressForPresentationProgress:(double)arg1 gestureVelocity:(double)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (id)homeAffordanceViewController;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (id)init;
- (id)initWithWindowLevel:(double)arg1 homeGestureParticipantIdentifier:(long long)arg2 systemGestureType:(unsigned long long)arg3 secure:(bool)arg4;
- (bool)isDismissing;
- (bool)isPresented;
- (long long)notificationBehavior;
- (id)overlayViewController;
- (long long)participantState;
- (void)presentAnimated:(bool)arg1;
- (double)presentationProgress;
- (long long)proximityDetectionMode;
- (void)removeTodayOverlayObserver:(id)arg1;
- (unsigned long long)restrictedCapabilities;
- (long long)scrollingStrategy;
- (void)setDismissing:(bool)arg1;
- (void)setDisplayLayoutElement:(id)arg1;
- (void)setDisplayLayoutElementActive:(bool)arg1;
- (void)setPresentationProgress:(double)arg1;
- (void)setPresentationProgress:(double)arg1 interactive:(bool)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setStatusBarContentAssertion:(id)arg1;
- (id)statusBarContentAssertion;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)systemGestureType;
- (id)testScrollView;
- (void)todayOverlayViewControllerDidChangeHeaderVisibility:(id)arg1;
- (id)window;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
