/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIImageView : UIView <NUCrossFadeViewAnimatable, UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, _UIImageContentEffect, _UIImageContentLayoutTarget> {
    bool  __animatesContents;
    bool  __symbolImagesIgnoreAccessibilitySizes;
    bool  _adjustsImageWhenAncestorFocused;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedEdgeInsetsForEffects;
    bool  _edgeInsetsForEffectsAreValid;
    UILayoutGuide * _focusedFrameGuide;
    struct { 
        unsigned int canDrawContentIsValid : 1; 
        unsigned int canDrawContent : 1; 
    }  _imageViewFlags;
    long long  _lastResolvedLayoutDirectionTrait;
    UITraitCollection * _lastResolvedTraitCollection;
    bool  _masksFocusEffectToContents;
    double  _previousBaselineOffsetFromBottom;
    double  _previousFirstBaselineOffsetFromTop;
    id  _storage;
    bool  _templateSettingsAreInvalid;
}

@property (setter=_setAnimatesContents:, nonatomic) bool _animatesContents;
@property (setter=_setDefaultRenderingMode:, nonatomic) long long _defaultRenderingMode;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _edgeInsetsForEffects;
@property (setter=_setEdgeInsetsForEffectsAreValid:, nonatomic) bool _edgeInsetsForEffectsAreValid;
@property (nonatomic, readonly) bool _hasContentGravity;
@property (nonatomic, readonly) _UIStackedImageContainerView *_layeredImageContainer;
@property (setter=_setLayeredImageCornerRadius:, nonatomic) double _layeredImageCornerRadius;
@property (nonatomic, readonly) bool _layoutShouldFlipHorizontalOrientations;
@property (setter=_setMasksTemplateImages:, nonatomic) bool _masksTemplateImages;
@property (setter=_setOverridingSymbolConfiguration:, nonatomic, retain) UIImageSymbolConfiguration *_overridingSymbolConfiguration;
@property (setter=_setSymbolImagesIgnoreAccessibilitySizes:, nonatomic) bool _symbolImagesIgnoreAccessibilitySizes;
@property (setter=_setTemplateImageRenderingEffects:, nonatomic) unsigned long long _templateImageRenderingEffects;
@property (nonatomic, readonly) bool _templateSettingsAreInvalid;
@property (nonatomic) bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) bool adjustsImageWhenAncestorFocused;
@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic) double animationDuration;
@property (nonatomic, copy) NSArray *animationImages;
@property (nonatomic) long long animationRepeatCount;
@property (nonatomic, readonly) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int drawMode;
@property (readonly) UILayoutGuide *focusedFrameGuide;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) NSArray *highlightedAnimationImages;
@property (nonatomic, retain) UIImage *highlightedImage;
@property (nonatomic, retain) UIImage *image;
@property (readonly) UILayoutGuide *imageContentGuide;
@property (nonatomic) bool masksFocusEffectToContents;
@property (nonatomic, readonly) UIView *overlayContentView;
@property (nonatomic, readonly) double preferredContentScaleFactor;
@property (nonatomic, retain) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, readonly) long long semanticContentAttribute;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageSymbolConfiguration *symbolConfiguration;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_canReuseIOSurface:(struct __IOSurface { }*)arg1 forRenderingCIImageWithIOSurfaceProperties:(id)arg2;
+ (id)_surfacePropertiesForRenderingCIImageWithSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned int)arg2 bytesPerElement:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_activeImage;
- (id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(bool*)arg4;
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_animatesContents;
- (id)_applyImageEffectsToCIImage:(id)arg1 effectiveTintColor:(id)arg2;
- (void)_applySettingsForLegibilityStyle:(long long)arg1;
- (double)_baselineOffsetFromBottom;
- (void)_baselineOffsetParametersDidChangeHasBaselinePropertyChanged:(bool)arg1;
- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_cachedPretiledImageForImage:(id)arg1;
- (bool)_canDrawContent;
- (id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(bool*)arg2;
- (id)_checkImageForAdaptation:(id)arg1 hasAdapted:(bool*)arg2;
- (void)_cleanUpForStopAnimating;
- (void)_clearPretiledImageCacheForImage:(id)arg1;
- (void)_configureForLayeredImage:(id)arg1;
- (id)_contentsMultiplyColorForEffectiveTintColor:(id)arg1;
- (id)_currentAnimationKeyframeImage;
- (id)_currentHighlightedImage;
- (id)_currentImage;
- (id)_decompressingImageForType:(unsigned long long)arg1;
- (long long)_defaultRenderingMode;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_displayImageAsLayered:(id)arg1;
- (void)_drawImageEffectsForImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 suppressColor:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForEffects;
- (bool)_edgeInsetsForEffectsAreValid;
- (id)_effectForRenderingSource:(id)arg1;
- (id)_effectiveTintColorWithImage:(id)arg1;
- (id)_existingOverlayView;
- (double)_firstBaselineOffsetFromTop;
- (id)_generateBackdropMaskImage;
- (bool)_getDrawModeCompositeOperation:(int*)arg1 whiteComponent:(double*)arg2 drawingAlpha:(double*)arg3;
- (bool)_hasBaseline;
- (bool)_hasContentGravity;
- (id)_imageContentGuideAllowingCreation:(bool)arg1;
- (void)_imageContentParametersDidChange;
- (id)_imageResolvingTraitCollectionForTraitCollection:(id)arg1 layoutDirection:(long long)arg2;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateImageLayouts;
- (void)_invalidateTemplateSettings;
- (bool)_isHasBaselinePropertyChangeable;
- (id)_layeredImageContainer;
- (double)_layeredImageCornerRadius;
- (id)_layoutForImage:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_layoutForImage:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2 cachePerSize:(bool)arg3 forBaselineOffset:(bool)arg4;
- (bool)_layoutShouldFlipHorizontalOrientations;
- (bool)_masksTemplateImages;
- (bool)_needsImageEffectsForImage:(id)arg1;
- (bool)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(bool)arg2;
- (id)_overridingSymbolConfiguration;
- (bool)_recomputePretilingState;
- (id)_renditionForSource:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 withCGImageProvider:(id /* block */)arg3 lazy:(bool)arg4;
- (bool)_resolveImageForTrait:(id)arg1;
- (bool)_resolveImageForTrait:(id)arg1 previouslyDisplayedImage:(id)arg2;
- (id)_resolvedImageFromImage:(id)arg1;
- (id)_resolvedImageFromImage:(id)arg1 forTrait:(id)arg2;
- (double)_scaleFactorForImage;
- (void)_setAnimatesContents:(bool)arg1;
- (void)_setDecompressingImage:(id)arg1 forType:(unsigned long long)arg2;
- (void)_setDefaultRenderingMode:(long long)arg1;
- (void)_setEdgeInsetsForEffectsAreValid:(bool)arg1;
- (bool)_setImageViewContents:(id)arg1;
- (bool)_setImageViewContentsForAnimatedImage:(id)arg1;
- (bool)_setImageViewContentsForCIImageBackedImage:(id)arg1;
- (void)_setLayeredImageContainer:(id)arg1;
- (void)_setLayeredImageCornerRadius:(double)arg1;
- (void)_setMasksTemplateImages:(bool)arg1;
- (void)_setOverlayContentView:(id)arg1;
- (void)_setOverridingSymbolConfiguration:(id)arg1;
- (void)_setSymbolImagesIgnoreAccessibilitySizes:(bool)arg1;
- (void)_setTemplateImageRenderingEffects:(unsigned long long)arg1;
- (void)_setViewGeometry:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forMetric:(int)arg2;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize { double x1; double x2; })arg1 oldSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_shouldTreatImageAsTemplate:(id)arg1;
- (id)_symbolConfigurationForImage:(id)arg1;
- (bool)_symbolImagesIgnoreAccessibilitySizes;
- (void)_teardownLayeredImage;
- (unsigned long long)_templateImageRenderingEffects;
- (bool)_templateSettingsAreInvalid;
- (void)_templateSettingsDidChange;
- (void)_updateContentsMultiplyColorAndSwizzleFromLayout:(id)arg1;
- (void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2;
- (void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg1 focusAnimationCoordinator:(id)arg2;
- (void)_updateMasking;
- (void)_updatePretiledImageCacheForImage:(id)arg1;
- (void)_updateState;
- (void)_updateTemplateProperties;
- (bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (bool)adjustsImageWhenAncestorFocused;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (double)animationDuration;
- (id)animationImages;
- (long long)animationRepeatCount;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (unsigned long long)defaultAccessibilityTraits;
- (unsigned int)drawMode;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)focusedFrameGuide;
- (id)highlightedAnimationImages;
- (id)highlightedImage;
- (id)image;
- (id)imageContentGuide;
- (struct CGImage { }*)imageRef;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (bool)isAccessibilityElementByDefault;
- (bool)isAnimating;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isHighlighted;
- (id)largeContentImage;
- (void)layoutSubviews;
- (bool)masksFocusEffectToContents;
- (id)midlineGuide;
- (id)overlayContentView;
- (double)preferredContentScaleFactor;
- (id)preferredSymbolConfiguration;
- (bool)scalesLargeContentImage;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg1;
- (void)setAdjustsImageWhenAncestorFocused:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationImages:(id)arg1;
- (void)setAnimationRepeatCount:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCGImageRef:(struct CGImage { }*)arg1;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentMode:(long long)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDrawMode:(unsigned int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMasksFocusEffectToContents:(bool)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSymbolConfiguration:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (id)symbolConfiguration;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useBlockyMagnificationInClassic;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

- (void)_lp_setTintColor:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_extractPlayOverlayBackgroundImageFromCenter:(struct CGPoint { double x1; double x2; })arg1 asynchronously:(bool)arg2 handler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

- (long long)_nui_baselineViewType;
- (bool)_nui_isImageView;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (double)largeLogoViewDimension;
+ (double)logoDimensionForImageViewSize:(struct CGSize { double x1; double x2; })arg1;
+ (double)mediumLogoViewDimension;
+ (double)smallLogoViewDimension;

- (void)applyAccountLogoStyleForIsMonogram:(bool)arg1 imageViewSize:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

- (void)_mt_applyVisualStyling:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI

- (id)_imageFromImage:(id)arg1 scaledToSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setArtworkCatalog:(id)arg1 withPlaceholderImage:(id)arg2 withDesiredSize:(struct CGSize { double x1; double x2; })arg3;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

- (void)nu_crossFadeViewClearVisibleState;
- (void)nu_crossFadeViewSetValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (struct CGSize { double x1; double x2; })alignmentSize;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

+ (void)tmlLoadCategory;

- (void)tmlTraitCollectionDidChange:(id)arg1;

@end
