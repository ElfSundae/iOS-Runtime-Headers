/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeatureSpec : NSObject {
    double  __displayScale;
    PXExtendedTraitCollection * __extendedTraitCollection;
    PXLayoutMetricInterpolator * __horizontalContentGuideInsetsInterpolator;
    struct CGSize { 
        double width; 
        double height; 
    }  __layoutReferenceSize;
    bool  __shouldUseMiniMargins;
    NSCache * __viewSpecCache;
    NSArray * _collectionTileImageOverlaySpecs;
    NSArray * _collectionTileImageOverlaySpecsHighlighted;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    bool  _shouldInsetAllPhotoDetailsContent;
    long long  _sizeClass;
    long long  _userInterfaceFeature;
    long long  _userInterfaceIdiom;
}

@property (nonatomic, readonly) double _displayScale;
@property (nonatomic, readonly) PXExtendedTraitCollection *_extendedTraitCollection;
@property (nonatomic, readonly) PXLayoutMetricInterpolator *_horizontalContentGuideInsetsInterpolator;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _layoutReferenceSize;
@property (nonatomic, readonly) bool _shouldUseMiniMargins;
@property (nonatomic, readonly) NSCache *_viewSpecCache;
@property (nonatomic, readonly) double collectionTileImageCornerRadius;
@property (nonatomic, readonly) NSArray *collectionTileImageOverlaySpecs;
@property (nonatomic, readonly) NSArray *collectionTileImageOverlaySpecsHighlighted;
@property (nonatomic, readonly) UIColor *defaultBackgroundColor;
@property (nonatomic, readonly) double defaultCornerRadius;
@property (nonatomic, readonly) UIColor *defaultPlaceholderColor;
@property (nonatomic, readonly) UIColor *defaultPlacesPlaceholderColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic, readonly) long long localizedLeadingTextAlignment;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) bool shouldInsetAllPhotoDetailsContent;
@property (nonatomic, readonly) long long sizeClass;
@property (nonatomic, readonly) long long userInterfaceFeature;
@property (nonatomic, readonly) long long userInterfaceIdiom;

- (void).cxx_destruct;
- (long long)_capitalizationStyleFromTextAttributes:(id)arg1 defaultCapitalizationStyle:(long long)arg2;
- (double)_displayScale;
- (id)_extendedTraitCollection;
- (id)_horizontalContentGuideInsetsInterpolator;
- (struct CGSize { double x1; double x2; })_layoutReferenceSize;
- (bool)_shouldUseMiniMargins;
- (id)_textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5;
- (id)_viewSpecCache;
- (double)collectionTileImageCornerRadius;
- (struct UIColor { Class x1; }*)collectionTileImageOverlayColor;
- (struct UIColor { Class x1; }*)collectionTileImageOverlayColorHighlighted;
- (id)collectionTileImageOverlaySpecs;
- (id)collectionTileImageOverlaySpecsHighlighted;
- (void)configureViewSpec:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentGuideInsetsForScrollDirection:(long long)arg1;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (struct UIColor { Class x1; }*)defaultBackgroundColor;
- (double)defaultCornerRadius;
- (struct UIColor { Class x1; }*)defaultPlaceholderColor;
- (struct UIColor { Class x1; }*)defaultPlacesPlaceholderColor;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (long long)localizedLeadingTextAlignment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (bool)shouldInsetAllPhotoDetailsContent;
- (long long)sizeClass;
- (long long)userInterfaceFeature;
- (long long)userInterfaceIdiom;
- (id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;

@end
