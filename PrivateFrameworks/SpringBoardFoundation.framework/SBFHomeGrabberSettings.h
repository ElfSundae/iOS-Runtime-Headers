/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFHomeGrabberSettings : PTSettings {
    long long  _autoHideOverride;
    double  _autoHideTime;
    double  _autoHideTimeOnAppRequest;
    double  _bounceHitTestOutsetSides;
    double  _bounceHitTestOutsetTop;
    double  _delayForUnhideOnAppRequest;
    double  _delayForUnhideOnTouch;
    SBFFluidBehaviorSettings * _edgeProtectAnimationSettings;
    long long  _edgeProtectOverride;
    bool  _enabled;
    SBFAnimationSettings * _forcedProminentToThinAnimationSettings;
    SBFAnimationSettings * _hideAnimationSettings;
    SBFAnimationSettings * _hideForHomeGestureOwnershipAnimationSettings;
    SBFAnimationSettings * _initialLumaResponseAnimationSettings;
    long long  _initializationStyle;
    SBFAnimationSettings * _lumaResponseAnimationSettings;
    SBFAnimationSettings * _prominentToThinAnimationSettings;
    bool  _removeViewOnHide;
    bool  _resetAutoHideTimeOnRotation;
    SBFAnimationSettings * _rotationFadeInAnimationSettings;
    SBFAnimationSettings * _rotationFadeOutAnimationSettings;
    SBFAnimationSettings * _thinToProminentAnimationSettings;
    SBFAnimationSettings * _unhideAnimationSettings;
    SBFAnimationSettings * _unhideForHomeGestureOwnershipAnimationSettings;
}

@property (nonatomic) long long autoHideOverride;
@property (nonatomic) double autoHideTime;
@property (nonatomic) double autoHideTimeOnAppRequest;
@property (nonatomic) double bounceHitTestOutsetSides;
@property (nonatomic) double bounceHitTestOutsetTop;
@property (nonatomic) double delayForUnhideOnAppRequest;
@property (nonatomic) double delayForUnhideOnTouch;
@property (nonatomic, retain) SBFFluidBehaviorSettings *edgeProtectAnimationSettings;
@property (nonatomic) long long edgeProtectOverride;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) SBFAnimationSettings *forcedProminentToThinAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *hideAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *hideForHomeGestureOwnershipAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *initialLumaResponseAnimationSettings;
@property (nonatomic) long long initializationStyle;
@property (nonatomic, retain) SBFAnimationSettings *lumaResponseAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *prominentToThinAnimationSettings;
@property (nonatomic) bool removeViewOnHide;
@property (nonatomic) bool resetAutoHideTimeOnRotation;
@property (nonatomic, retain) SBFAnimationSettings *rotationFadeInAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *rotationFadeOutAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *thinToProminentAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *unhideAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *unhideForHomeGestureOwnershipAnimationSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (long long)autoHideOverride;
- (double)autoHideTime;
- (double)autoHideTimeOnAppRequest;
- (double)bounceHitTestOutsetSides;
- (double)bounceHitTestOutsetTop;
- (double)delayForUnhideOnAppRequest;
- (double)delayForUnhideOnTouch;
- (id)edgeProtectAnimationSettings;
- (long long)edgeProtectOverride;
- (id)forcedProminentToThinAnimationSettings;
- (id)hideAnimationSettings;
- (id)hideForHomeGestureOwnershipAnimationSettings;
- (id)initialLumaResponseAnimationSettings;
- (long long)initializationStyle;
- (bool)isEnabled;
- (id)lumaResponseAnimationSettings;
- (id)prominentToThinAnimationSettings;
- (bool)removeViewOnHide;
- (bool)resetAutoHideTimeOnRotation;
- (id)rotationFadeInAnimationSettings;
- (id)rotationFadeOutAnimationSettings;
- (void)setAutoHideOverride:(long long)arg1;
- (void)setAutoHideTime:(double)arg1;
- (void)setAutoHideTimeOnAppRequest:(double)arg1;
- (void)setBounceHitTestOutsetSides:(double)arg1;
- (void)setBounceHitTestOutsetTop:(double)arg1;
- (void)setDefaultValues;
- (void)setDelayForUnhideOnAppRequest:(double)arg1;
- (void)setDelayForUnhideOnTouch:(double)arg1;
- (void)setEdgeProtectAnimationSettings:(id)arg1;
- (void)setEdgeProtectOverride:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setForcedProminentToThinAnimationSettings:(id)arg1;
- (void)setHideAnimationSettings:(id)arg1;
- (void)setHideForHomeGestureOwnershipAnimationSettings:(id)arg1;
- (void)setInitialLumaResponseAnimationSettings:(id)arg1;
- (void)setInitializationStyle:(long long)arg1;
- (void)setLumaResponseAnimationSettings:(id)arg1;
- (void)setProminentToThinAnimationSettings:(id)arg1;
- (void)setRemoveViewOnHide:(bool)arg1;
- (void)setResetAutoHideTimeOnRotation:(bool)arg1;
- (void)setRotationFadeInAnimationSettings:(id)arg1;
- (void)setRotationFadeOutAnimationSettings:(id)arg1;
- (void)setThinToProminentAnimationSettings:(id)arg1;
- (void)setUnhideAnimationSettings:(id)arg1;
- (void)setUnhideForHomeGestureOwnershipAnimationSettings:(id)arg1;
- (id)thinToProminentAnimationSettings;
- (id)unhideAnimationSettings;
- (id)unhideForHomeGestureOwnershipAnimationSettings;

@end