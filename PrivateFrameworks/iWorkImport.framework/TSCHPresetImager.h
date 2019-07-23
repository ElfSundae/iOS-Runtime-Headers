/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPresetImager : NSObject

+ (void)drawGenericImageIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { float x1; float x2; })arg2 preset:(id)arg3 usingRepresentativeSpecificSeriesFillProperties:(id)arg4 outShouldCache:(BOOL*)arg5;
+ (id)presetImagerForChartType:(id)arg1;

- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize { float x1; float x2; })arg3 imageScale:(float)arg4 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 documentRoot:(id)arg6 shouldCache:(BOOL*)arg7;
- (id)init;
- (id)initWithChartType:(id)arg1;
- (id)p_chartType;
- (struct CGSize { float x1; float x2; })p_drawAndOffsetMultiDataSliderIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { float x1; float x2; })arg2 contentsScale:(float)arg3;
- (void)p_drawShadowedContentIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { float x1; float x2; })arg2 contentsScale:(float)arg3 preset:(id)arg4 shouldCache:(BOOL*)arg5;
- (void)p_drawUnshadowedContentIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { float x1; float x2; })arg2 contentsScale:(float)arg3 preset:(id)arg4 shouldCache:(BOOL*)arg5;
- (void)p_fillPath:(struct CGPath { }*)arg1 withFill:(id)arg2 inContext:(struct CGContext { }*)arg3;
- (id)p_init;
- (struct CGSize { float x1; float x2; })p_nativeSize;
- (struct CGContext { }*)p_newContextOfSize:(struct CGSize { float x1; float x2; })arg1;
- (id)p_objectFromStyle:(id)arg1 specific:(int)arg2 default:(int)arg3;
- (BOOL)p_preserveAspectRatio;
- (id)p_shadow;
- (id)p_strokeFromStyle:(id)arg1 specific:(int)arg2 default:(int)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })swatchImageEdgeInsetsForSize:(struct CGSize { float x1; float x2; })arg1;

@end
