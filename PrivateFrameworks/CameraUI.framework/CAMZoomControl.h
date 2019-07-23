/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomControl : UIControl <CAMZoomButtonDelegate> {
    CAMZoomControlButtonMaskView * __buttonMaskView;
    UIView * __dialClippingView;
    double  __dualCameraSwitchOverZoomFactor;
    bool  __eligibleForSwipeDownToDismiss;
    double  __maximumZoomFactor;
    double  __minimumZoomFactor;
    struct CGPoint { 
        double x; 
        double y; 
    }  __previousTouchLocation;
    double  __previousTouchTime;
    bool  __shouldShowZoomDial;
    NSDate * __startTimeForHideAnimationInProgress;
    struct CGPoint { 
        double x; 
        double y; 
    }  __startTouchLocation;
    CAMZoomButton * __zoomButton;
    long long  __zoomControlMode;
    CAMZoomDial * __zoomDial;
    bool  __zoomDialEnabled;
    NSTimer * __zoomDialVisibilityTimer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <CAMZoomControlDelegate> * _delegate;
    struct { 
        bool respondsToDidChangeZoomFactor; 
        bool respondsToCanToggleBetweenWideAndTelephoto; 
        bool respondsToToggleBetweenWideAndTelephoto; 
    }  _delegateFlags;
    long long  _layoutStyle;
    long long  _orientation;
    double  _zoomButtonMaxYWhenContracted;
    double  _zoomDialRadius;
    double  _zoomFactor;
}

@property (nonatomic, readonly) CAMZoomControlButtonMaskView *_buttonMaskView;
@property (nonatomic, readonly) UIView *_dialClippingView;
@property (setter=_setDisplayDualCameraSwitchOverZoomFactor:, nonatomic) double _displayDualCameraSwitchOverZoomFactor;
@property (setter=_setDisplayMaximumZoomFactor:, nonatomic) double _displayMaximumZoomFactor;
@property (setter=_setDisplayMinimumZoomFactor:, nonatomic) double _displayMinimumZoomFactor;
@property (nonatomic, readonly) double _displayZoomValue;
@property (setter=_setDualCameraSwitchOverZoomFactor:, nonatomic) double _dualCameraSwitchOverZoomFactor;
@property (getter=_isEligibleForSwipeDownToDismiss, setter=_setEligibleForSwipeDownToDismiss:, nonatomic) bool _eligibleForSwipeDownToDismiss;
@property (setter=_setMaximumZoomFactor:, nonatomic) double _maximumZoomFactor;
@property (setter=_setMinimumZoomFactor:, nonatomic) double _minimumZoomFactor;
@property (setter=_setPreviousTouchLocation:, nonatomic) struct CGPoint { double x1; double x2; } _previousTouchLocation;
@property (setter=_setPreviousTouchTime:, nonatomic) double _previousTouchTime;
@property (setter=_setShouldShowZoomDial:, nonatomic) bool _shouldShowZoomDial;
@property (setter=_setStartTimeForHideAnimationInProgress:, nonatomic, retain) NSDate *_startTimeForHideAnimationInProgress;
@property (setter=_setStartTouchLocation:, nonatomic) struct CGPoint { double x1; double x2; } _startTouchLocation;
@property (nonatomic, readonly) CAMZoomButton *_zoomButton;
@property (setter=_setZoomControlMode:, nonatomic) long long _zoomControlMode;
@property (nonatomic, readonly) CAMZoomDial *_zoomDial;
@property (getter=_isZoomDialEnabled, setter=_setZoomDialEnabled:, nonatomic) bool _zoomDialEnabled;
@property (setter=_setZoomDialVisibilityTimer:, nonatomic, retain) NSTimer *_zoomDialVisibilityTimer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) NSString *contentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMZoomControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;
@property (nonatomic) bool shouldDisableValuesBelowDualCameraSwitchOver;
@property (readonly) Class superclass;
@property (nonatomic) double zoomButtonMaxYWhenContracted;
@property (nonatomic, readonly) double zoomDialBorderWidth;
@property (nonatomic) double zoomDialRadius;
@property (nonatomic) double zoomFactor;

- (void).cxx_destruct;
- (double)_accelerationForMovementFromPointFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 elapsedTime:(double)arg3;
- (double)_additionalAccelerationForMovementFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 deltaX:(double)arg3;
- (id)_buttonMaskView;
- (void)_cancelDelayedZoomDialVisibilityChange;
- (void)_cleanupForCancelTracking;
- (void)_configureForControlMode:(long long)arg1 zoomFactor:(double)arg2 minimumZoomFactor:(double)arg3 displayMinimumZoomFactor:(double)arg4 maximumZoomFactor:(double)arg5 displayMaximumZoomFactor:(double)arg6 dualCameraSwitchOverZoomFactor:(double)arg7 displayDualCameraSwitchOverZoomFactor:(double)arg8;
- (double)_dampingFactorForDistanceFromDialForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)_dampingFactorForMovementFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (double)_dampingFactorForPerpendicularityFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)_dialClippingView;
- (double)_displayDualCameraSwitchOverZoomFactor;
- (double)_displayMaximumZoomFactor;
- (double)_displayMinimumZoomFactor;
- (double)_displayZoomValue;
- (double)_displayZoomValueForZoomFactor:(double)arg1;
- (double)_distanceFromDialClippingViewToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)_dualCameraSwitchOverZoomFactor;
- (void)_handleButtonTapped;
- (void)_handleButtonTappedForDualCameraMode;
- (void)_handleButtonTappedForWideOrTeleMode;
- (void)_handleZoomDialVisibilityTimerFiredWithUserInfo:(id)arg1;
- (bool)_isEligibleForSwipeDownToDismiss;
- (bool)_isWithinZoomButtonBoundsWithTouch:(id)arg1;
- (bool)_isZoomDialEnabled;
- (double)_maximumZoomFactor;
- (double)_minimumZoomFactor;
- (double)_normalizeValue:(double)arg1 betweenMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (struct CGPoint { double x1; double x2; })_previousTouchLocation;
- (double)_previousTouchTime;
- (void)_setDisplayDualCameraSwitchOverZoomFactor:(double)arg1;
- (void)_setDisplayMaximumZoomFactor:(double)arg1;
- (void)_setDisplayMinimumZoomFactor:(double)arg1;
- (void)_setDualCameraSwitchOverZoomFactor:(double)arg1;
- (void)_setEligibleForSwipeDownToDismiss:(bool)arg1;
- (void)_setMaximumZoomFactor:(double)arg1;
- (void)_setMinimumZoomFactor:(double)arg1;
- (void)_setPreviousTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setPreviousTouchTime:(double)arg1;
- (void)_setShouldShowZoomDial:(bool)arg1;
- (void)_setShouldShowZoomDial:(bool)arg1 animationDuration:(long long)arg2;
- (void)_setShouldShowZoomDial:(bool)arg1 animationDuration:(long long)arg2 afterDelay:(double)arg3;
- (void)_setStartTimeForHideAnimationInProgress:(id)arg1;
- (void)_setStartTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setZoomControlMode:(long long)arg1;
- (void)_setZoomDialEnabled:(bool)arg1;
- (void)_setZoomDialEnabled:(bool)arg1 animationDuration:(long long)arg2;
- (void)_setZoomDialVisibilityTimer:(id)arg1;
- (void)_setZoomFactor:(double)arg1 interactionType:(long long)arg2 shouldNotifyDelegate:(bool)arg3;
- (bool)_shouldInterceptTouchesForHidingZoomDial;
- (bool)_shouldShowZoomDial;
- (id)_startTimeForHideAnimationInProgress;
- (struct CGPoint { double x1; double x2; })_startTouchLocation;
- (void)_updateDisplayedValues;
- (void)_updateMaskViewForZoomButtonHighlightingTransform;
- (id)_zoomButton;
- (long long)_zoomControlMode;
- (id)_zoomDial;
- (id)_zoomDialVisibilityTimer;
- (double)_zoomFactorForDisplayZoomValue:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)configureForDualDeviceWithZoomFactor:(double)arg1 minimumZoomFactor:(double)arg2 displayMinimumZoomFactor:(double)arg3 maximumZoomFactor:(double)arg4 displayMaximumZoomFactor:(double)arg5 dualCameraSwitchOverZoomFactor:(double)arg6 displayDualCameraSwitchOverZoomFactor:(double)arg7;
- (void)configureForSingleCameraPlusToggleWithZoomFactor:(double)arg1 minimumZoomFactor:(double)arg2 displayMinimumZoomFactor:(double)arg3 maximumZoomFactor:(double)arg4 displayMaximumZoomFactor:(double)arg5;
- (void)configureForToggleOnlyWithZoomFactor:(double)arg1 minimumZoomFactor:(double)arg2 displayMinimumZoomFactor:(double)arg3 maximumZoomFactor:(double)arg4 displayMaximumZoomFactor:(double)arg5;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contentSizeCategory;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setShouldDisableValuesBelowDualCameraSwitchOver:(bool)arg1;
- (void)setShouldShowZoomDial:(bool)arg1 animationDuration:(long long)arg2;
- (void)setZoomButtonMaxYWhenContracted:(double)arg1;
- (void)setZoomDialRadius:(double)arg1;
- (void)setZoomFactor:(double)arg1;
- (bool)shouldDisableValuesBelowDualCameraSwitchOver;
- (void)zoomButtonDidLayout;
- (double)zoomButtonMaxYWhenContracted;
- (double)zoomDialBorderWidth;
- (double)zoomDialRadius;
- (double)zoomFactor;

@end
