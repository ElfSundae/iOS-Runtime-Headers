/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface PUApertureGradientView : UIView {
    UIColor * _gradientColor;
    double  _topPadding;
}

@property (nonatomic, copy) UIColor *gradientColor;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)gradientColor;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (void)setGradientColor:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (double)topPadding;

@end
