/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView {
    UIView<NTKComplicationImageView> * _imageView;
    NTKColoringLabel * _label;
    int  _maxDynamicFontSize;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (id)supportedTemplateClasses;
+ (BOOL)supportsComplicationFamily:(int)arg1;

- (void).cxx_destruct;
- (void)_configureWithImageTemplate:(id)arg1;
- (void)_configureWithTextTemplate:(id)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (float)_maxTextWidthForDynamicFontSize:(int)arg1;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
