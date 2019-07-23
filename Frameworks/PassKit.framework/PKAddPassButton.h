/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAddPassButton : UIButton {
    long long  _addPassButtonStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSize;
    CAFilter * _highlightFilter;
    bool  _highlighted;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    UIImageView * _iconView;
    CAShapeLayer * _layer;
    PKShapeView * _maskView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _multiLineAlignmentInset;
    UILabel * _multiLineLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _multiLineSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _singleLineAlignmentInset;
    UILabel * _singleLineLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _singleLineSize;
    bool  _useLayoutMargins;
}

@property (nonatomic) long long addPassButtonStyle;

+ (id)addPassButtonWithStyle:(long long)arg1;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_adjustVisibleLabelWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_applyStyle;
- (void)_createHighlightFilterIfNecessary;
- (struct CGSize { double x1; double x2; })_intrinsicMultiLineSize;
- (struct CGSize { double x1; double x2; })_intrinsicSingleLineSize;
- (void)_sharedInit;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_singleLineFitsSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)addPassButtonStyle;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAddPassButtonStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setAddPassButtonStyle:(long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
