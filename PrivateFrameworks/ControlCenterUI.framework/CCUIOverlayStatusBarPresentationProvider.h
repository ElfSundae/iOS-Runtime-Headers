/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIOverlayStatusBarPresentationProvider : NSObject <CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider> {
    <CCUIOverlayMetricsProvider> * _metricsProvider;
    <CCUIOverlayViewProvider> * _viewProvider;
}

@property (nonatomic, readonly) bool allowHotPocketDuringTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long dismissalFlickAllowedDirections;
@property (nonatomic, readonly) double dismissalFlickMaximumTime;
@property (nonatomic, readonly) double dismissalFlickMinimumVelocity;
@property (nonatomic, readonly, copy) <CCUIOverlayFlickGestureBehavior> *flickGestureBehavior;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerMode;
@property (nonatomic) <CCUIOverlayMetricsProvider> *metricsProvider;
@property (getter=isPanDismissalAvailable, nonatomic, readonly) bool panDismissalAvailable;
@property (readonly) Class superclass;
@property (nonatomic) <CCUIOverlayViewProvider> *viewProvider;
@property (getter=isZoomEnabled, nonatomic, readonly) bool zoomEnabled;

+ (id)_baseC2AnimationParametersForTransitionState:(id)arg1;
+ (id)_compactTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_expandedLeadingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_expandedTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_hiddenStatusBarFadeAnimationParameters;
+ (id)_leadingStatusBarCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_moduleAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_moduleC2AnimationParametersForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg2;
+ (id)_moduleScaleCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_reducedMotionStatusBarStateCAAnimationParameters;
+ (id)_trailingStatusBarCAAnimationParametersForTransitionState:(id)arg1;

- (void).cxx_destruct;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addHeaderContentTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addLeadingStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addModuleAlphaAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addModuleScaleAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addModuleTransformAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addReducedMotionStatusBarStateAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addScrollViewContentOffsetAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addStatusBarStateAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_compactStatusBar:(id)arg1 transformForTransitionState:(id)arg2;
- (double)_delayForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForContentSize:(struct CGSize { double x1; double x2; })arg1 withinBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 orientation:(long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_headerViewFrameForContentSize:(struct CGSize { double x1; double x2; })arg1 withinBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 contentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 orientation:(long long)arg5;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_headerViewTransformForTransitionState:(id)arg1;
- (double)_leadingStatusBarAlphaForTransitionState:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_moduleViewScaleTransformForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_moduleViewTransformForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentedViewFrame;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForTransitionState:(id)arg1 rubberBandingHeight:(double)arg2;
- (bool)allowHotPocketDuringTransition;
- (id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (bool)backdropViewShouldUseAlphaTransformer;
- (id)cleanupForDismissal;
- (unsigned long long)dismissalFlickAllowedDirections;
- (double)dismissalFlickMaximumTime;
- (double)dismissalFlickMinimumVelocity;
- (unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(struct CGPoint { double x1; double x2; })arg2 gestureVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (id)flickGestureBehavior;
- (unsigned long long)headerMode;
- (bool)isPanDismissalAvailable;
- (bool)isZoomEnabled;
- (void)layoutViews;
- (id)metricsProvider;
- (id)prepareForPresentation;
- (id)secondaryAnimationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (void)setMetricsProvider:(id)arg1;
- (void)setViewProvider:(id)arg1;
- (bool)tapAllowsDismissalForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)transitionStateForType:(unsigned long long)arg1 interactive:(bool)arg2 translation:(struct CGPoint { double x1; double x2; })arg3;
- (id)viewProvider;

@end
