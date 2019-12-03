/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDragInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction, _UIDragInteractionDriverDelegate, _UIViewInternalDraggingSourceDelegate> {
    bool  _acceleratedDragGestureEnabled;
    long long  _addItemsGestureConfiguration;
    bool  _additionalTouchesCancelLift;
    NSArray * _allowedTouchTypes;
    bool  _allowsMultipleSessions;
    bool  _allowsSimultaneousRecognitionDuringLift;
    bool  _automaticallyAddsFailureRelationships;
    double  _cancellationDelay;
    bool  _cancellationTimerEnabled;
    double  _competingLongPressDelay;
    bool  _competingLongPressOnLift;
    <UIDragInteractionDelegate> * _delegate;
    bool  _didSetEnabled;
    bool  _enabled;
    _UIDragAddItemsGesture * _gestureRecognizerForAddingItems;
    <_UIDragInteractionDriving> * _initiationDriver;
    UIDragInteractionContextImpl * _interactionContext;
    <UIDragInteractionEffect> * _interactionEffect;
    double  _liftDelay;
    double  _liftMoveHysteresis;
    _UIDragSessionImpl * _preliminarySession;
    <_UIDragInteractionPresentationDelegate> * _presentationDelegate;
    _UIDragSessionImpl * _sessionForAddingItems;
    UIView * _view;
}

@property (getter=_isAcceleratedDragGestureEnabled, setter=_setAcceleratedDragGestureEnabled:, nonatomic) bool acceleratedDragGestureEnabled;
@property (getter=_addItemsGestureConfiguration, setter=_setAddItemsGestureConfiguration:, nonatomic) long long addItemsGestureConfiguration;
@property (getter=_additionalTouchesCancelLift, setter=_setAdditionalTouchesCancelLift:, nonatomic) bool additionalTouchesCancelLift;
@property (getter=_allowedTouchTypes, setter=_setAllowedTouchTypes:, nonatomic, copy) NSArray *allowedTouchTypes;
@property (getter=_allowsMultipleSessions, setter=_setAllowsMultipleSessions:, nonatomic) bool allowsMultipleSessions;
@property (nonatomic) bool allowsSimultaneousRecognitionDuringLift;
@property (getter=_automaticallyAddsFailureRelationships, setter=_setAutomaticallyAddsFailureRelationships:, nonatomic) bool automaticallyAddsFailureRelationships;
@property (getter=_cancellationDelay, setter=_setCancellationDelay:, nonatomic) double cancellationDelay;
@property (getter=_isCancellationTimerEnabled, setter=_setCancellationTimerEnabled:, nonatomic) bool cancellationTimerEnabled;
@property (getter=_competingLongPressDelay, setter=_setCompetingLongPressDelay:, nonatomic) double competingLongPressDelay;
@property (getter=_competingLongPressOnLift, setter=_setCompetingLongPressOnLift:, nonatomic) bool competingLongPressOnLift;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIDragInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=_initiationDriver, setter=_setInitiationDriver:, nonatomic, retain) <_UIDragInteractionDriving> *initiationDriver;
@property (nonatomic, retain) <UIDragInteractionEffect> *interactionEffect;
@property (getter=_liftDelay, setter=_setLiftDelay:, nonatomic) double liftDelay;
@property (getter=_liftMoveHysteresis, setter=_setLiftMoveHysteresis:, nonatomic) double liftMoveHysteresis;
@property (getter=_presentationDelegate, setter=_setPresentationDelegate:, nonatomic) <_UIDragInteractionPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

+ (void)_cancelAllDrags;
+ (bool)isEnabledByDefault;

- (void).cxx_destruct;
- (bool)_accessibilityAddItemsToDragSessionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_accessibilityCanAddItemsToDragSession;
- (void)_accessibilityPrepareForDragAtPoint:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (long long)_addItemsGestureConfiguration;
- (bool)_addItemsWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_additionalTouchesCancelLift;
- (id)_allowedTouchTypes;
- (bool)_allowsMultipleSessions;
- (bool)_automaticallyAddsFailureRelationships;
- (void)_beginDragWithTouches:(id)arg1 itemUpdater:(id /* block */)arg2;
- (bool)_beginLiftForItems:(id)arg1 session:(id)arg2 animated:(bool)arg3;
- (bool)_canDragFromView:(id)arg1;
- (void)_cancelDrag;
- (void)_cancelLift;
- (double)_cancellationDelay;
- (double)_competingLongPressDelay;
- (bool)_competingLongPressOnLift;
- (long long)_dataOwnerOfDragFromView:(id)arg1;
- (void)_endLiftWithoutDragging;
- (void)_finalizeLiftCancellation;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handoffSession:(id)arg1;
- (void)_immediatelyBeginDragWithTouch:(id)arg1 completion:(id /* block */)arg2;
- (id)_initiationDriver;
- (bool)_isAcceleratedDragGestureEnabled;
- (bool)_isActive;
- (bool)_isCancellationTimerEnabled;
- (id)_itemsToDragFromView:(id)arg1;
- (double)_liftDelay;
- (double)_liftMoveHysteresis;
- (struct CGPoint { double x1; double x2; })_locationInView:(id)arg1;
- (bool)_prepareForLiftAtPoint:(struct CGPoint { double x1; double x2; })arg1 invocationType:(long long)arg2 completion:(id /* block */)arg3;
- (id)_presentationDelegate;
- (bool)_queryDelegate:(id)arg1 forItemsForAddingToSession:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (id)_queryDelegate:(id)arg1 forItemsForBeginningSession:(id)arg2;
- (void)_queryDelegate:(id)arg1 forLiftPreviewsUsingItems:(id)arg2 session:(id)arg3;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (bool)_session:(id)arg1 item:(id)arg2 shouldDelaySetDownAnimationWithCompletion:(id /* block */)arg3;
- (void)_session:(id)arg1 item:(id)arg2 willCancelWithAnimator:(id)arg3;
- (unsigned long long)_session:(id)arg1 sourceOperationMaskForDraggingWithinApp:(bool)arg2;
- (id)_session:(id)arg1 targetedPreviewForCancellingItem:(id)arg2 duiPreview:(id)arg3 snapshotView:(id)arg4 window:(id)arg5;
- (void)_session:(id)arg1 willAddItems:(id)arg2 forInteraction:(id)arg3;
- (void)_sessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)_sessionDidMove:(id)arg1;
- (void)_sessionDidTransferItems:(id)arg1;
- (bool)_sessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (void)_sessionHandedOffDragImage:(id)arg1;
- (bool)_sessionPrefersFullSizePreviews:(id)arg1;
- (void)_sessionWillBegin:(id)arg1;
- (void)_sessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)_setAcceleratedDragGestureEnabled:(bool)arg1;
- (void)_setAddItemsGestureConfiguration:(long long)arg1;
- (void)_setAdditionalTouchesCancelLift:(bool)arg1;
- (void)_setAllowedTouchTypes:(id)arg1;
- (void)_setAllowsMultipleSessions:(bool)arg1;
- (void)_setAutomaticallyAddsFailureRelationships:(bool)arg1;
- (void)_setCancellationDelay:(double)arg1;
- (void)_setCancellationTimerEnabled:(bool)arg1;
- (void)_setCompetingLongPressDelay:(double)arg1;
- (void)_setCompetingLongPressOnLift:(bool)arg1;
- (void)_setInitiationDriver:(id)arg1;
- (void)_setLiftDelay:(double)arg1;
- (void)_setLiftMoveHysteresis:(double)arg1;
- (void)_setPresentationDelegate:(id)arg1;
- (void)_updateDriverParameters;
- (void)_updateInteractionEffectWithContext:(id)arg1 notifyDelegate:(bool)arg2;
- (void)_view:(id)arg1 willBeginDraggingWithSession:(id)arg2;
- (void)_viewFailedToDrag:(id)arg1;
- (bool)_viewSupportsSystemDrag:(id)arg1;
- (bool)allowsSimultaneousRecognitionDuringLift;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (void)dragDriver:(id)arg1 beginDragWithTouches:(id)arg2 itemUpdater:(id /* block */)arg3 beginningSessionHandler:(id /* block */)arg4;
- (bool)dragDriver:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
- (bool)dragDriver:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
- (bool)dragDriver:(id)arg1 prepareToLiftWithCompletion:(id /* block */)arg2;
- (bool)dragDriver:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)dragDriver:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
- (bool)dragDriverBeginLift:(id)arg1;
- (void)dragDriverCancelAddItemsGesture:(id)arg1;
- (void)dragDriverCancelLift:(id)arg1;
- (bool)dragDriverWantsExclusionOverride:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)interactionEffect;
- (bool)isEnabled;
- (double)liftDelay;
- (void)setAllowsSimultaneousRecognitionDuringLift:(bool)arg1;
- (void)setDragCancellationDelay:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInteractionEffect:(id)arg1;
- (void)setLiftDelay:(double)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
