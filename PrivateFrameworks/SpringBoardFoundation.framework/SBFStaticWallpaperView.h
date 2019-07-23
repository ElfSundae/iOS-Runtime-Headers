/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFStaticWallpaperView : SBFWallpaperView {
    NSString * _cacheGroup;
    SBFColorBoxes * _colorBoxes;
    UIImage * _displayedImage;
    UIImage * _image;
    float  _overallContrast;
}

@property (nonatomic, retain) SBFColorBoxes *colorBoxes;
@property (getter=_displayedImage, setter=_setDisplayedImage:, nonatomic, retain) UIImage *displayedImage;

+ (BOOL)_allowsParallax;
+ (BOOL)_allowsRasterization;
+ (BOOL)_canCacheImages;
+ (BOOL)_canDownscaleSampleImage;
+ (id)_imageByApplyingLegibilityDarkeningToImage:(id)arg1;

- (void).cxx_destruct;
- (void)_addLegibilityDarkeningFilterToStaticImageContentView:(id)arg1;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 smudgeRadius:(float)arg2;
- (id)_blurredImage;
- (id)_computeAverageColor;
- (id)_createColorBoxes;
- (void)_disableLegibilityDarkening;
- (id)_displayedImage;
- (void)_enableLegibilityDarkening;
- (id)_fallbackImageWithOriginalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_handleVariantChange;
- (id)_imageByApplyingLegibilityDarkeningToImage:(id)arg1;
- (id)_imageByDarkeningHighlightsInImage:(id)arg1;
- (id)_imageForBackdropParameters:(struct { int x1; int x2; int x3; float x4; float x5; float x6; float x7; BOOL x8; })arg1 includeTint:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })_imageSize;
- (id)_mappedImageKeyForParameters:(struct { int x1; int x2; int x3; float x4; float x5; float x6; float x7; BOOL x8; })arg1 includingTint:(BOOL)arg2 andLegibilityDarkening:(BOOL)arg3;
- (BOOL)_needsFallbackImageForImage:(id)arg1;
- (id)_repeatingGradientImageWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (void)_resetColorBoxes;
- (void)_setDisplayedImage:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setSampleImage:(id)arg1;
- (void)_setUpStaticImageContentView:(id)arg1;
- (void)_setupContentView;
- (void)_setupWallpaperImage:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_shouldApplyLegibilityDarkeningForVariant:(int)arg1;
- (void)_toggleLegibilityDarkeningIfNecessary;
- (id)_variantCacheIdentifier;
- (id)_wallpaperImageForAnalysis;
- (float)_zoomScale;
- (id)colorBoxes;
- (float)contrastInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)contrastInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contrastWithinBoxes:(float*)arg2 contrastBetweenBoxes:(float*)arg3;
- (BOOL)contrastRequiresTreatments;
- (float)cropZoomScale;
- (BOOL)hasContentOutsideVisibleBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 variant:(int)arg4 options:(unsigned int)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(int)arg3;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(int)arg2;
- (void)setColorBoxes:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)setVariantsThatDarkenContentsToEnsureLegibility:(int)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)snapshotImage;
- (id)wallpaperImage;
- (int)wallpaperType;

@end
