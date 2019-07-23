/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIIdleModeController : NSObject {
    UIWindow * _backgroundWindow;
    BOOL  _didApplyVisualEffects;
    BOOL  _idleModeEnabled;
    UIWindow * _keyWindow;
    BOOL  _keyWindowAllowedGroupBlending;
    UIScreen * _screen;
    NSMapTable * _viewsToAttributes;
    NSMapTable * _viewsToCAFilters;
    NSMapTable * _viewsToOriginalAttributes;
    UIImageView * _vignetteView;
}

@property (getter=isIdleModeEnabled, nonatomic) BOOL idleModeEnabled;
@property (nonatomic, readonly) UIScreen *screen;

- (void).cxx_destruct;
- (void)_animateDismissal;
- (void)_animatePresentation;
- (void)_applyDismissalLayoutAttributesToViews;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (void)_applyPresentationLayoutAttributesToViews;
- (void)_completeDismissal;
- (float)_dimmingOverlayWhiteValueForUserInterfaceStyle:(int)arg1;
- (float)_dismissalAnimationDuration;
- (void)_enterIdleMode;
- (void)_exitIdleMode;
- (id)_imageForTraitCollection:(id)arg1;
- (id)_originalAttributesForView:(id)arg1 comparedToIdleModeAttributes:(id)arg2;
- (void)_prepareForPresentationWithKeyWindow:(id)arg1 focusedView:(id)arg2;
- (float)_presentationAnimationDuration;
- (BOOL)_recordLayoutAttributesStartingAtView:(id)arg1;
- (float)_vignetteAlphaForUserInterfaceStyle:(int)arg1;
- (id)_vignetteImageAroundFocusedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;
- (BOOL)isIdleModeEnabled;
- (id)screen;
- (void)setIdleModeEnabled:(BOOL)arg1;

@end
