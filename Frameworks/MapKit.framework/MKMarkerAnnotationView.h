/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMarkerAnnotationView : MKAnnotationView {
    bool  _animatesWhenAdded;
    UIView * _contentMaskView;
    GEOFeatureStyleAttributes * _customStyleAttributes;
    UIImage * _glyphImage;
    UIImageView * _glyphImageView;
    UILabel * _glyphLabel;
    NSString * _glyphText;
    UIColor * _glyphTintColor;
    UIColor * _markerStrokeTintColor;
    double  _markerStrokeWidth;
    UIColor * _markerTintColor;
    _MKBezierPathView * _markerView;
    _MKBezierPathView * _selectedDotView;
    UIImage * _selectedGlyphImage;
    UIImageView * _selectedGlyphImageView;
    UILabel * _selectedGlyphLabel;
    _MKBezierPathView * _selectedMarkerView;
    UIImageView * _shadowView;
    long long  _subtitleVisibility;
    long long  _titleVisibility;
}

@property (nonatomic) bool animatesWhenAdded;
@property (nonatomic, copy) UIImage *glyphImage;
@property (nonatomic, copy) NSString *glyphText;
@property (nonatomic, copy) UIColor *glyphTintColor;
@property (nonatomic, copy) UIColor *markerStrokeTintColor;
@property (nonatomic) double markerStrokeWidth;
@property (nonatomic, copy) UIColor *markerTintColor;
@property (nonatomic, retain) UIView *selectedContentView;
@property (nonatomic, copy) UIImage *selectedGlyphImage;
@property (getter=_styleAttributes, setter=_setStyleAttributes:, nonatomic, retain) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic) long long subtitleVisibility;
@property (nonatomic) long long titleVisibility;

+ (float)_defaultDisplayPriority;

- (void).cxx_destruct;
- (void)_configureAnimated:(bool)arg1 fromState:(long long)arg2 toState:(long long)arg3;
- (void)_configureViewsForState:(long long)arg1 usesCallout:(bool)arg2;
- (long long)_currentMarkerState;
- (void)_didDragWithVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (id)_effectiveGlyphImageForState:(long long)arg1 isSystemProvided:(bool*)arg2;
- (id)_effectiveGlyphText;
- (id)_effectiveGlyphTintColorForState:(long long)arg1;
- (id)_effectiveMarkerStrokeTintColorForState:(long long)arg1;
- (double)_effectiveMarkerStrokeWidthForState:(long long)arg1;
- (id)_effectiveMarkerTintColorForState:(long long)arg1;
- (double)_effectiveShadowAlphaForState:(long long)arg1;
- (id)_effectiveSubtitlesIsCollidable:(bool*)arg1;
- (id)_effectiveTitleIsCollidable:(bool*)arg1;
- (bool)_hasDataRequiringCallout;
- (void)_setSelected:(bool)arg1 animated:(bool)arg2;
- (void)_setStyleAttributes:(id)arg1;
- (void)_setupNormalViewsIfNeeded;
- (void)_setupSelectedViewsIfNeededUsesCallout:(bool)arg1;
- (bool)_shouldDeselectWhenDragged;
- (long long)_stateForIsSelected:(bool)arg1;
- (id)_styleAttributes;
- (void)_unhideForDisplay;
- (void)_updateContentForState:(long long)arg1;
- (void)_updateContentForState:(long long)arg1 forceUpdate:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)animatesWhenAdded;
- (bool)canShowCallout;
- (void)configureCustomFeature:(id)arg1;
- (id)glyphImage;
- (id)glyphText;
- (id)glyphTintColor;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)isProvidingCustomFeature;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (id)markerStrokeTintColor;
- (double)markerStrokeWidth;
- (id)markerTintColor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)prepareForSnapshotting;
- (id)selectedContentView;
- (id)selectedGlyphImage;
- (void)setAnimatesWhenAdded:(bool)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphText:(id)arg1;
- (void)setGlyphTintColor:(id)arg1;
- (void)setMarkerStrokeTintColor:(id)arg1;
- (void)setMarkerStrokeWidth:(double)arg1;
- (void)setMarkerTintColor:(id)arg1;
- (void)setSelectedContentView:(id)arg1;
- (void)setSelectedGlyphImage:(id)arg1;
- (void)setSubtitleVisibility:(long long)arg1;
- (void)setTitleVisibility:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)subtitleVisibility;
- (long long)titleVisibility;

@end
