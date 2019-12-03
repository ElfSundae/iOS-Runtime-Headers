/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSiderealAuxiliaryDialLabels : UIView {
    NTKCurvedColoringLabel * _bottomLabel;
    UIView * _bottomLabelContainerView;
    CAShapeLayer * _bottomLabelMask;
    NSString * _bottomText;
    CLKDevice * _device;
    NSMutableDictionary * _fontSizeCache;
    NTKCurvedColoringLabel * _topLabel;
    UIView * _topLabelContainerView;
    CAShapeLayer * _topLabelMask;
    NSString * _topText;
}

@property (nonatomic, retain) NSString *bottomText;
@property (nonatomic, retain) NSString *topText;

- (void).cxx_destruct;
- (id)_curvedLabel;
- (void)_layoutLabel:(id)arg1 text:(id)arg2 monospaced:(bool)arg3 offset:(struct CGPoint { double x1; double x2; })arg4 useCache:(bool)arg5;
- (void)_setFontSize:(double)arg1 monospaced:(bool)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 onLabel:(id)arg4;
- (void)applyTransitionFraction:(double)arg1;
- (id)bottomText;
- (void)didFinishTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2;
- (void)setBottomText:(id)arg1;
- (void)setTopText:(id)arg1;
- (void)setup;
- (id)topText;
- (void)willStartTransition;

@end
