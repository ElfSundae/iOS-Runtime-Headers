/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKFlatInkToolButton : UIButton <PKInkToolButton> {
    unsigned long long  _attributeSet;
    UIColor * _color;
    NSString * _identifier;
    bool  _isUsedOnDarkBackground;
    UIImageView * _nibImageView;
    UIImageView * _nibOutlineImageView;
    _PKInkToolOpacityLabel * _opacityLabel;
    unsigned long long  _sizeState;
    UIImageView * _toolBaseImageView;
}

@property (nonatomic) unsigned long long attributeSet;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isUsedOnDarkBackground;
@property (nonatomic, retain) UIImageView *nibImageView;
@property (nonatomic, retain) UIImageView *nibOutlineImageView;
@property (nonatomic, retain) _PKInkToolOpacityLabel *opacityLabel;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic, retain) UIImageView *toolBaseImageView;

+ (struct CGSize { double x1; double x2; })_toolBaseImageSizeForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2;
+ (id)buttonWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;

- (void).cxx_destruct;
- (unsigned long long)attributeSet;
- (id)color;
- (id)identifier;
- (id)imageNameForIdentifier:(id)arg1;
- (id)imageNameForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2 imageType:(id)arg3 isDarkUI:(bool)arg4;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
- (bool)isUsedOnDarkBackground;
- (void)layoutSubviews;
- (id)nibImageName;
- (id)nibImageView;
- (id)nibOutlineImageView;
- (id)nibStrokeImageName;
- (id)opacityLabel;
- (void)setAttributeSet:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setColor:(id)arg1 animated:(bool)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setNibImageView:(id)arg1;
- (void)setNibOutlineImageView:(id)arg1;
- (void)setOpacityLabel:(id)arg1;
- (void)setSizeState:(unsigned long long)arg1;
- (void)setToolBaseImageView:(id)arg1;
- (unsigned long long)sizeState;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 sizeState:(unsigned long long)arg2;
- (id)toolBaseImageName;
- (id)toolBaseImageView;

@end
