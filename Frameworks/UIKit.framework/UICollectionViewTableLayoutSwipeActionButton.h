/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTableLayoutSwipeActionButton : UIButton {
    float  _buttonWidth;
    UIColor * _defaultBackgroundColor;
    UIColor * _highlightedBackgroundColor;
}

@property (nonatomic, readonly) float buttonWidth;
@property (nonatomic, retain) UIColor *defaultBackgroundColor;
@property (nonatomic, retain) UIColor *highlightedBackgroundColor;

+ (id)titleFont;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_allowableContentRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)_defaultLayoutForHeight:(float)arg1;
- (BOOL)_heightDemandsCompactLayout;
- (int)_numberOfLinesForTitle:(id)arg1;
- (float)buttonWidth;
- (id)defaultBackgroundColor;
- (id)highlightedBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setDefaultBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;

@end
