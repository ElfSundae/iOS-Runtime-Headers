/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIScrollViewScrollIndicator : UIView {
    bool  _expandedForDirectManipulation;
    UIColor * _foregroundColor;
    UIView * _roundedFillView;
    long long  _style;
    unsigned long long  _type;
}

@property (nonatomic) bool expandedForDirectManipulation;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic, retain) UIView *roundedFillView;
@property (nonatomic) long long style;
@property (nonatomic) unsigned long long type;

+ (double)_expandedIndicatorDimension;
+ (double)indicatorDimension;

- (void).cxx_destruct;
- (id)_colorForStyle:(long long)arg1;
- (void)_layoutFillViewAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_offsetFillViewRectForExpandedState:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)expandedForDirectManipulation;
- (id)foregroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)roundedFillView;
- (void)setExpandedForDirectManipulation:(bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setRoundedFillView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (long long)style;
- (unsigned long long)type;

@end
