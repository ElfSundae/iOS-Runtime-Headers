/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSimplePasscodeEntryFieldButton : UIView {
    UIColor * _color;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _paddingOutsideRing;
    bool  _revealed;
    UIView * _ringView;
    bool  _useLightStyle;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 paddingOutsideRing:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 useLightStyle:(bool)arg3;
- (void)layoutSubviews;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2 delay:(double)arg3;

@end
