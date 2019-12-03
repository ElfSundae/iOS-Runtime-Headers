/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBigNumeralsTimeComponentLabel : UIView {
    UIColor * _color;
    NSDate * _date;
    CLKDevice * _device;
    UIFont * _filledFont;
    unsigned long long  _fontVariant;
    NSDateFormatter * _formatter;
    NTKColoringLabel * _label;
    UIFont * _outlinedFont;
    unsigned long long  _style;
    unsigned long long  _timeComponent;
    NTKColoringLabel * _transitioningLabel;
    unsigned long long  _typeface;
    bool  _useLigatures;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long style;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long typeface;

- (void).cxx_destruct;
- (id)_attributedStringForTypeface:(unsigned long long)arg1;
- (id)_fontForStyle:(unsigned long long)arg1;
- (double)_lastLineBaseline;
- (void)_updateLabelText;
- (void)_updateLocale;
- (void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3;
- (void)cleanupTransition;
- (id)color;
- (id)date;
- (id)font;
- (double)fontSize;
- (id)initWithDevice:(id)arg1 timeComponent:(unsigned long long)arg2 fontVariant:(unsigned long long)arg3 fontSize:(double)arg4 useLigatures:(bool)arg5;
- (void)layoutSubviews;
- (void)setColor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTypeface:(unsigned long long)arg1;
- (void)setupFontsForVariant:(unsigned long long)arg1 fontSize:(double)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (long long)textAlignment;
- (unsigned long long)typeface;

@end
