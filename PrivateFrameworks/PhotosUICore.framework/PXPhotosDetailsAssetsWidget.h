/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsAssetsWidget : NSObject <PXActionPerformerDelegate, PXAssetsSceneDelegate, PXChangeObserver, PXEngineDrivenAssetsTilingLayoutDelegate, PXOneUpPresentationDelegate, PXPhotosDetailsInlinePlaybackControllerDelegate, PXScrollViewControllerObserver, PXSwipeSelectionManagerDelegate, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXUIPlayButtonTileDelegate, PXUIWidget, UIDragInteractionDelegate, UIGestureRecognizerDelegate> {
    PXUIAssetsScene * __assetsScene;
    bool  __autoPlayVideoInOneUp;
    bool  __curate;
    PXPhotosDataSourceStressTest * __currentDataSourceStressTest;
    NSSet * __draggingAssetReferences;
    PXAssetReference * __focusedAssetReference;
    NSSet * __hiddenAssetReferences;
    PXAssetReference * __highlightedAssetReference;
    PXPhotosDetailsInlinePlaybackController * __inlinePlaybackController;
    PXSectionedLayoutEngine * __layoutEngine;
    PXLayoutGenerator * __layoutGenerator;
    PXPhotosDetailsLoadCoordinationToken * __loadCoordinationToken;
    PXPhotoKitUIMediaProvider * __mediaProvider;
    PXAssetReference * __navigatedAssetReference;
    bool  __needsAggdLoggingForCuratedAssetsCount;
    bool  __needsAggdLoggingForUncuratedAssetsCount;
    PXPhotosDataSource * __photosDataSource;
    UIPinchGestureRecognizer * __pinchGesture;
    bool  __showCurationButton;
    bool  __showSelectionButton;
    PXPhotosDetailsAssetsSpecManager * __specManager;
    PXSwipeSelectionManager * __swipeSelectionManager;
    PXUITapGestureRecognizer * __tapGesture;
    PXBasicUIViewTileAnimator * __tileAnimator;
    PXTilingController * __tilingController;
    PXTouchingUIGestureRecognizer * __touchGesture;
    bool  __transitionWithoutAnimation;
    struct CGPoint { 
        double x; 
        double y; 
    }  __visibleOriginScrollTarget;
    PXPhotosDetailsContext * _context;
    PXPhotoKitAssetsDataSourceManager * _dataSourceManager;
    <UIDragSession> * _dragSession;
    bool  _faceModeEnabled;
    bool  _hasLoadedContentData;
    NSDate * _loadStartDate;
    PXOneUpPresentation * _oneUpPresentation;
    bool  _selecting;
    PXSectionedSelectionManager * _selectionManager;
    PXWidgetSpec * _spec;
    NSMutableSet * _tilesInUse;
    bool  _userInteractionEnabled;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (nonatomic, readonly) PXUIAssetsScene *_assetsScene;
@property (nonatomic, readonly) bool _autoPlayVideoInOneUp;
@property (setter=_setCurate:, nonatomic) bool _curate;
@property (setter=_setCurrentDataSourceStressTest:, nonatomic, retain) PXPhotosDataSourceStressTest *_currentDataSourceStressTest;
@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *_dataSourceManager;
@property (setter=_setDraggingAssetReferences:, nonatomic, retain) NSSet *_draggingAssetReferences;
@property (setter=_setFocusedAssetReference:, nonatomic, retain) PXAssetReference *_focusedAssetReference;
@property (setter=_setHiddenAssetReferences:, nonatomic, retain) NSSet *_hiddenAssetReferences;
@property (setter=_setHighlightedAssetReference:, nonatomic, retain) PXAssetReference *_highlightedAssetReference;
@property (nonatomic, readonly) PXPhotosDetailsInlinePlaybackController *_inlinePlaybackController;
@property (setter=_setLayoutEngine:, nonatomic, retain) PXSectionedLayoutEngine *_layoutEngine;
@property (setter=_setLayoutGenerator:, nonatomic, retain) PXLayoutGenerator *_layoutGenerator;
@property (setter=_setLoadCoordinationToken:, nonatomic, retain) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken;
@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (nonatomic, readonly) PXAssetReference *_navigatedAssetReference;
@property (setter=_setNeedsAggdLoggingForCuratedAssetsCount:, nonatomic) bool _needsAggdLoggingForCuratedAssetsCount;
@property (setter=_setNeedsAggdLoggingForUncuratedAssetsCount:, nonatomic) bool _needsAggdLoggingForUncuratedAssetsCount;
@property (setter=_setPhotosDataSource:, nonatomic, retain) PXPhotosDataSource *_photosDataSource;
@property (nonatomic, readonly) UIPinchGestureRecognizer *_pinchGesture;
@property (nonatomic, readonly) PXSectionedSelectionManager *_selectionManager;
@property (setter=_setShowCurationButton:, nonatomic) bool _showCurationButton;
@property (setter=_setShowSelectionButton:, nonatomic) bool _showSelectionButton;
@property (nonatomic, readonly) PXPhotosDetailsAssetsSpecManager *_specManager;
@property (nonatomic, readonly) PXSwipeSelectionManager *_swipeSelectionManager;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapGesture;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchGesture;
@property (setter=_setTransitionWithoutAnimation:, nonatomic) bool _transitionWithoutAnimation;
@property (setter=_setVisibleOriginScrollTarget:, nonatomic) struct CGPoint { double x1; double x2; } _visibleOriginScrollTarget;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <UIDragSession> *dragSession;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (setter=_setHasLoadedContentData:, nonatomic) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) PXOneUpPresentation *oneUpPresentation;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

- (void).cxx_destruct;
- (bool)_addAssetReferencesToDrag:(id)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_assetIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)_assetReferenceAtPoint:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)_assetsScene;
- (bool)_autoPlayVideoInOneUp;
- (bool)_canDragAssetReferences:(id)arg1;
- (bool)_canDragOut;
- (void)_configureLayout:(id)arg1;
- (id)_createNewLayout;
- (bool)_curate;
- (id)_curationButtonTitle;
- (id)_currentDataSourceStressTest;
- (id)_dataSourceManager;
- (id)_dragItemForAssetReference:(id)arg1;
- (id)_draggingAssetReferences;
- (id)_extendedTraitCollection;
- (void)_fallBackByTogglingCurationIfNeeded;
- (id)_focusedAssetReference;
- (void)_handleTapOnAssetReference:(id)arg1 autoPlayVideo:(bool)arg2;
- (id)_hiddenAssetReferences;
- (id)_highlightedAssetReference;
- (id)_imageTileForDragItem:(id)arg1;
- (id)_inlinePlaybackController;
- (void)_invalidateLayoutGenerator;
- (bool)_isLocationWithinCurrentLayoutBounds:(struct CGPoint { double x1; double x2; })arg1;
- (id)_layoutEngine;
- (id)_layoutGenerator;
- (id)_loadCoordinationToken;
- (void)_loadTilingController;
- (void)_logAggdCounterForAssetCountsIfNecessary;
- (id)_mediaProvider;
- (id)_navigatedAssetReference;
- (bool)_needsAggdLoggingForCuratedAssetsCount;
- (bool)_needsAggdLoggingForUncuratedAssetsCount;
- (void)_performTilingChangeWithoutAnimationTransition:(id /* block */)arg1;
- (id)_photosDataSource;
- (id)_pinchGesture;
- (void)_presentConfidentialityWarning;
- (id)_regionOfInterestForAssetReference:(id)arg1;
- (id)_selectionManager;
- (void)_setCurate:(bool)arg1;
- (void)_setCurrentDataSourceStressTest:(id)arg1;
- (void)_setDraggingAssetReferences:(id)arg1;
- (void)_setFocusedAssetReference:(id)arg1;
- (void)_setHasLoadedContentData:(bool)arg1;
- (void)_setHiddenAssetReferences:(id)arg1;
- (void)_setHighlightedAssetReference:(id)arg1;
- (void)_setLayoutEngine:(id)arg1;
- (void)_setLayoutGenerator:(id)arg1;
- (void)_setLoadCoordinationToken:(id)arg1;
- (void)_setNavigatedAssetReference:(id)arg1 autoPlayVideo:(bool)arg2;
- (void)_setNeedsAggdLoggingForCuratedAssetsCount:(bool)arg1;
- (void)_setNeedsAggdLoggingForUncuratedAssetsCount:(bool)arg1;
- (void)_setPhotosDataSource:(id)arg1;
- (void)_setShowCurationButton:(bool)arg1;
- (void)_setShowSelectionButton:(bool)arg1;
- (void)_setTransitionWithoutAnimation:(bool)arg1;
- (void)_setVisibleOriginScrollTarget:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_showCurationButton;
- (bool)_showSelectionButton;
- (id)_specManager;
- (id)_subtitle;
- (id)_swipeSelectionManager;
- (id)_tapGesture;
- (id)_tileAnimator;
- (id)_tilingController;
- (id)_title;
- (id)_touchGesture;
- (bool)_transitionWithoutAnimation;
- (void)_updateDebugBadgeManager;
- (void)_updateDraggingAssetReferencesWithDataSource:(id)arg1;
- (void)_updateHasLoadedContentData;
- (void)_updateLayoutEngineIfNeeded;
- (void)_updateShowCurationButton;
- (void)_updateShowSelectionButton;
- (void)_updateTilingLayoutIfNeeded;
- (void)_userDidSelectCurationButton;
- (struct CGPoint { double x1; double x2; })_visibleOriginScrollTarget;
- (bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;
- (bool)allowUserInteractionWithSubtitle;
- (void)assetsScene:(id)arg1 didTransitionToDataSource:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (id)assetsScene:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)assetsScene:(id)arg1 willTransitionToDataSource:(id)arg2;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 forCoordinateSpace:(id)arg2;
- (long long)contentLayoutStyle;
- (id)contentTilingController;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (id)context;
- (id)dataSourceManager;
- (void)dealloc;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragSession;
- (double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 forAspectRatio:(double)arg3;
- (double)engineDrivenLayout:(id)arg1 zPositionForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)environmentDidUpdateFocusInContext:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleTouch:(id)arg1;
- (bool)hasLoadedContentData;
- (id)imageViewBasicTileForPreviewingAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (bool)isFaceModeEnabled;
- (bool)isSelecting;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (id)localizedDisclosureTitle;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (struct CGSize { double x1; double x2; })minimumItemSizeForPlaybackInController:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpPresentation;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)oneUpPresentationPhotosDetailsContext:(id)arg1;
- (bool)oneUpPresentationShouldAutoPlay:(id)arg1;
- (void)playButtonTileWasTapped:(id)arg1;
- (struct NSObject { Class x1; }*)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(struct NSObject { Class x1; }*)arg2;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (id)selectionManager;
- (void)setContext:(id)arg1;
- (void)setDragSession:(id)arg1;
- (void)setFaceModeEnabled:(bool)arg1;
- (void)setOneUpPresentation:(id)arg1;
- (void)setSelecting:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (bool)shouldEnablePlaybackForController:(id)arg1;
- (id)spec;
- (bool)supportsFaceMode;
- (bool)supportsSelection;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManager:(id)arg1 shouldBeginSelectionAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectSubtitle;
- (id)widgetDelegate;

@end
