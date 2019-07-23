/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXNowPlayingButton : SXButton {
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)preferredContentSizeCategoryDidChange:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 animated:(bool)arg2;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (void)updateFontScale;

@end
