/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodePillButton : UIControl {
    CABackdropLayer * _backdropLayer;
    UIView * _backdropView;
    double  _highlightedAlpha;
    UIView * _pillView;
    UILabel * _titleLabel;
    double  _unhighlightedAlpha;
}

@property (nonatomic, copy) UIFont *font;
@property (nonatomic) double highlightedAlpha;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) double unhighlightedAlpha;

- (void).cxx_destruct;
- (id)font;
- (double)highlightedAlpha;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedAlpha:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnhighlightedAlpha:(double)arg1;
- (id)title;
- (double)unhighlightedAlpha;

@end
