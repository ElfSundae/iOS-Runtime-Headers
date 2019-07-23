/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCRecorderStateButton : UIButton {
    int _AVCaptureState;
    UIColor *_innerColor;
    CALayer *_innerLayer;
    BOOL _isForceDisabled;
    UIColor *_outerColor;
    BOOL _realEnabledState;
}

@property (nonatomic) int AVCaptureState;
@property (nonatomic) BOOL isForceDisabled;

- (void).cxx_destruct;
- (int)AVCaptureState;
- (float)_currentStateInnerDrawingAlpha;
- (float)_currentStateTopLevelDrawingAlpha;
- (void)_drawOuterCircle;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isForceDisabled;
- (void)layoutSubviews;
- (void)setAVCaptureState:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIsForceDisabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
