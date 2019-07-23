/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationNavigationBarBackgroundView : UIView {
    _UIBackdropView *_backdropView;
}

- (void)_createSubviews;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(BOOL)arg2;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (id)appearanceStorage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAppearanceStorage:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBarWantsAdaptiveBackdrop:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)updateBackgroundImage;

@end
