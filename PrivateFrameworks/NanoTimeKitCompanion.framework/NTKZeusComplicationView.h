/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusComplicationView : UIView <NTKComplicationDisplay, NTKZeusComplicationDisplay> {
    CLKDevice * _device;
    UIView * _highlightView;
    bool  _highlighted;
    NTKZeusColorPalette * _palette;
    unsigned long long  _style;
    bool  canUseCurvedText;
    <NTKComplicationDisplayObserver> * displayObserver;
}

@property (nonatomic) bool canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) NTKZeusColorPalette *palette;
@property (nonatomic) bool shouldUseTemplateColors;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

+ (id)viewForComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (bool)canUseCurvedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)device;
- (id)displayObserver;
- (id)init;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (id)palette;
- (void)setCanUseCurvedText:(bool)arg1;
- (void)setDisplayObserver:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
