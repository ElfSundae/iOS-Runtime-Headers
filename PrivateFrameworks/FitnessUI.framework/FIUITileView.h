/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUITileView : UIView {
    UIColor * _backgroundColors;
    float  _easing;
    NSIndexPath * _indexPath;
    unsigned int  _state;
    unsigned int  _transitioningState;
}

@property (nonatomic) float cornerRadius;
@property (getter=isDisabled, nonatomic) BOOL disabled;
@property float easing;
@property (retain) NSIndexPath *indexPath;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic) unsigned int state;
@property (getter=isTracking, nonatomic) BOOL tracking;

- (void).cxx_destruct;
- (id)_bestBGColor:(unsigned int)arg1;
- (id)_defaultBackgroundColor;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (float)cornerRadius;
- (float)easing;
- (id)indexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDisabled;
- (BOOL)isSelected;
- (BOOL)isTracking;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setCornerRadius:(float)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setEasing:(float)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setTracking:(BOOL)arg1;
- (unsigned int)state;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
