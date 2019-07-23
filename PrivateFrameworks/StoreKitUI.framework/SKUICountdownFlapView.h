/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICountdownFlapView : UIImageView {
    UIView *_backgroundViewBot;
    UIView *_backgroundViewTop;
    UIImageView *_backgroundViewTransitionBot;
    UIImageView *_backgroundViewTransitionTop;
    float _factor;
    UIColor *_flapBottomColor;
    UIColor *_flapTopColor;
    UILabel *_labelBot;
    UILabel *_labelTop;
    UILabel *_labelTransitionBot;
    UILabel *_labelTransitionTop;
    int _position;
    NSString *_string;
    UIColor *_textColor;
}

@property (nonatomic, readonly) UIColor *flapBottomColor;
@property (nonatomic, readonly) UIColor *flapTopColor;
@property (nonatomic, readonly) int position;
@property (nonatomic, retain) NSString *string;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)_newBackgroundImageForTop:(int)arg1;
- (id)_newLabel;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformForAngle:(float)arg1 isTop:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)flapBottomColor;
- (id)flapTopColor;
- (id)initWithPosition:(int)arg1 flapTopColor:(id)arg2 flapBottomColor:(id)arg3;
- (void)layoutSubviews;
- (int)position;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setString:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)string;
- (id)textColor;

@end
