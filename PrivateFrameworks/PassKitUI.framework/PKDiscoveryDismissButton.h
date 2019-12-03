/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDiscoveryDismissButton : UIButton {
    UIVisualEffectView * _blurView;
    long long  _style;
}

@property (nonatomic, readonly) long long style;

+ (long long)_blurEffectStyleForUserInterfaceStyle:(long long)arg1;
+ (id)_tintColorForUserInterfaceStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_backingEffect;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_tintColor;
- (void)_updateStyleWithStyle:(long long)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)updateStyleWithStyle:(long long)arg1 animated:(bool)arg2;

@end
