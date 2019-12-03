/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFluidSwitcherItemContainer : SBFTouchPassThroughView <SBAppPlatterDragSourceViewProviding, SBFailureNotifyingTapGestureRecognizerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    bool  _active;
    NSString * _additionalDescriptionDebugText;
    bool  _animatingPageViewScale;
    bool  _clipsToUnobscuredMargin;
    double  _contentAlpha;
    struct UIRectCornerRadii { 
        double topLeft; 
        double bottomLeft; 
        double bottomRight; 
        double topRight; 
    }  _contentCornerRadii;
    double  _contentPageViewScale;
    <SBFluidSwitcherItemContainerDelegate> * _delegate;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    bool  _dragging;
    NSArray * _headerItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _highlightTapDownLocation;
    bool  _highlighted;
    SBFluidSwitcherItemContainerHeaderView * _iconAndLabelHeader;
    SBFluidSwitcherIconOverlayView * _iconOverlayView;
    unsigned long long  _killAxis;
    double  _killProgressForCurrentDecelerationTarget;
    SBFluidSwitcherTouchPassThroughScrollView * _killScrollView;
    bool  _killable;
    double  _minimumTranslationForKillingContainer;
    SBAppSwitcherPageView * _pageView;
    UILongPressGestureRecognizer * _pressDownGestureRecognizer;
    UILongPressGestureRecognizer * _selectionHighlightGestureRecognizer;
    bool  _sentKillRequest;
    SBAppSwitcherSettings * _settings;
    bool  _shouldScaleOverlayToFillBounds;
    SBFFluidBehaviorSettings * _squishSettings;
    SBFailureNotifyingTapGestureRecognizer * _tapGestureRecognizer;
    double  _titleAndIconOpacity;
    double  _titleOpacity;
    double  _unobscuredMargin;
    bool  _visible;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) NSString *additionalDescriptionDebugText;
@property (nonatomic) bool blocksContentViewTouches;
@property (nonatomic) bool clipsToUnobscuredMargin;
@property (nonatomic) double contentAlpha;
@property (nonatomic) struct UIRectCornerRadii { double x1; double x2; double x3; double x4; } contentCornerRadii;
@property (nonatomic, retain) UIView *contentOverlay;
@property (nonatomic) double contentPageViewScale;
@property (nonatomic, retain) UIView<SBAppSwitcherPageContentView> *contentView;
@property (nonatomic) double darkeningAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFluidSwitcherItemContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic) bool dragging;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *headerItems;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) bool isDeceleratingTowardsKillZone;
@property (nonatomic) unsigned long long killAxis;
@property (getter=isKillable, nonatomic) bool killable;
@property (nonatomic, readonly) double killingProgress;
@property (nonatomic) double lighteningAlpha;
@property (nonatomic) double minimumTranslationForKillingContainer;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowOffset;
@property (nonatomic) long long shadowStyle;
@property (nonatomic) bool shouldScaleOverlayToFillBounds;
@property (readonly) Class superclass;
@property (nonatomic) double titleAndIconOpacity;
@property (nonatomic) double titleOpacity;
@property (nonatomic) double unobscuredMargin;
@property (getter=isVisible, nonatomic) bool visible;
@property (nonatomic) double wallpaperOverlayAlpha;

+ (double)preferredRestingVisibleMarginForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_CGPointFromScalarBasedOnKillAxis:(double)arg1;
- (double)_CGPointXOrYBasedOnKillAxis:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_CGSizeFromLengthBasedOnKillAxis:(double)arg1;
- (double)_CGSizeWidthOrHeightBasedOnKillAxis:(struct CGSize { double x1; double x2; })arg1;
- (void)_addPageView;
- (struct CGPoint { double x1; double x2; })_contentOffsetAtRest;
- (struct CGPoint { double x1; double x2; })_contentOffsetForKillingProgress:(double)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForScrollView;
- (id)_createScrollView;
- (void)_ensureSubviewOrder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForPageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForScrollView;
- (void)_handlePageViewPressDown:(id)arg1;
- (void)_handlePageViewTap:(id)arg1;
- (void)_handleSelectionHighlightGesture:(id)arg1;
- (double)_inverseScaleTransformFactor;
- (bool)_isTitleIconVisible;
- (double)_killingDarkeningAlpha;
- (double)_killingProgressForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_overlayViewSize;
- (void)_resetKillProgressScrollState;
- (double)_scaleTransformFactor;
- (bool)_scrollViewShouldPanGestureTryToBegin:(id)arg1;
- (void)_setKillingDarkeningAlpha:(double)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_springLoadingEffectTargetView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_squishedPageViewScaleTransform;
- (void)_updateHeaderAnimated:(bool)arg1;
- (void)_updatePageViewContentClippingFrame;
- (void)_updatePageViewContentViewClipping;
- (void)_updateShadowVisibility;
- (id)additionalDescriptionDebugText;
- (bool)blocksContentViewTouches;
- (bool)clipsToUnobscuredMargin;
- (void)configureOverlayForIconZoomWithView:(id)arg1;
- (id)containerViewForBlurContentView;
- (double)contentAlpha;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })contentCornerRadii;
- (id)contentOverlay;
- (double)contentPageViewScale;
- (id)contentView;
- (double)darkeningAlpha;
- (id)delegate;
- (id)description;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerTransitionedToFailed:(id)arg1;
- (id)headerItems;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2 active:(bool)arg3;
- (id)initialCornerRadiusConfiguration;
- (id)initialDiffuseShadowFilters;
- (struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })initialDiffuseShadowParameters;
- (id)initialRimShadowFilters;
- (struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })initialRimShadowParameters;
- (bool)isActive;
- (bool)isDeceleratingTowardsKillZone;
- (bool)isDragging;
- (bool)isHighlighted;
- (bool)isKillable;
- (bool)isVisible;
- (unsigned long long)killAxis;
- (double)killingProgress;
- (void)layoutSubviews;
- (double)lighteningAlpha;
- (double)minimumTranslationForKillingContainer;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)removeIconOverlay;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setActive:(bool)arg1;
- (void)setAdditionalDescriptionDebugText:(id)arg1;
- (void)setBlocksContentViewTouches:(bool)arg1;
- (void)setClipsToUnobscuredMargin:(bool)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setContentCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOverlay:(id)arg1;
- (void)setContentOverlay:(id)arg1 animated:(bool)arg2;
- (void)setContentPageViewScale:(double)arg1;
- (void)setContentView:(id)arg1;
- (void)setDarkeningAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragging:(bool)arg1;
- (void)setHeaderItems:(id)arg1;
- (void)setHeaderItems:(id)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setKillAxis:(unsigned long long)arg1;
- (void)setKillable:(bool)arg1;
- (void)setLighteningAlpha:(double)arg1;
- (void)setMinimumTranslationForKillingContainer:(double)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setShadowOffset:(double)arg1;
- (void)setShadowStyle:(long long)arg1;
- (void)setShouldScaleOverlayToFillBounds:(bool)arg1;
- (void)setTitleAndIconOpacity:(double)arg1;
- (void)setTitleOpacity:(double)arg1;
- (void)setUnobscuredMargin:(double)arg1;
- (void)setVisible:(bool)arg1;
- (void)setWallpaperOverlayAlpha:(double)arg1;
- (double)shadowAlpha;
- (double)shadowOffset;
- (long long)shadowStyle;
- (bool)shouldScaleOverlayToFillBounds;
- (id)sourceView;
- (double)titleAndIconOpacity;
- (double)titleOpacity;
- (double)unobscuredMargin;
- (double)wallpaperOverlayAlpha;

@end
