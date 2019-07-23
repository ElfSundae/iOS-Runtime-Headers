/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedUIViewController : UIViewController <PXActionPerformerDelegate, PXChangeObserver, PXMemoriesFeedViewControllerHelperDelegate, PXMemoriesOnboardingViewControllerDelegate, PXMemoriesUITileSourceDelegate, PXReusableObjectPoolDelegate, PXScrollViewControllerObserver, PXSectionedDataSourceManagerObserver, PXTilingControllerZoomAnimationCoordinatorDelegate, PXUIViewControllerZoomTransitionEndPoint, PXUserInterfaceFeatureViewController, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerPreviewingDelegate> {
    _UIContentUnavailableView * __contentUnavailableView;
    UIBarButtonItem * __feedbackBarButtonItem;
    PXPhotoAnalysisStatusController * __graphStatusController;
    PXMemoriesFeedViewControllerHelper * __helper;
    UILongPressGestureRecognizer * __longPressRecognizer;
    PXMemoriesOnboardingUIViewController * __onboardingViewController;
    <UIViewControllerPreviewing> * __previewingContext;
    PXUIScrollViewController * __scrollViewController;
    UIBarButtonItem * __searchBarButtonItem;
    PXUITapGestureRecognizer * __tapRecognizer;
    PXBasicUIViewTileAnimator * __tileAnimator;
    PXMemoriesUITileSource * __tileSource;
    PXTouchingUIGestureRecognizer * __touchRecognizer;
    BOOL  _hasAppeared;
    BOOL  _isInitialized;
    struct { 
        BOOL navigationItem; 
        BOOL contentUnavailablePlaceholder; 
    }  _needsUpdateFlags;
}

@property (setter=_setContentUnavailableView:, nonatomic, retain) _UIContentUnavailableView *_contentUnavailableView;
@property (nonatomic, readonly) UIBarButtonItem *_feedbackBarButtonItem;
@property (nonatomic, readonly) PXPhotoAnalysisStatusController *_graphStatusController;
@property (nonatomic, readonly) PXMemoriesFeedViewControllerHelper *_helper;
@property (setter=_setLongPressRecognizer:, nonatomic, retain) UILongPressGestureRecognizer *_longPressRecognizer;
@property (setter=_setOnboardingViewController:, nonatomic, retain) PXMemoriesOnboardingUIViewController *_onboardingViewController;
@property (setter=_setPreviewingContext:, nonatomic, retain) <UIViewControllerPreviewing> *_previewingContext;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (nonatomic, readonly) UIBarButtonItem *_searchBarButtonItem;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXMemoriesUITileSource *_tileSource;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL keepsSourceRegionOfInterestContent;
@property (nonatomic, readonly) UIScrollView *ppt_scrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int userInterfaceFeature;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)_setCurrentFeedViewController:(id)arg1;

- (void).cxx_destruct;
- (id)_contentUnavailableView;
- (id)_feedbackBarButtonItem;
- (id)_graphStatusController;
- (void)_handleScrollViewLongPress:(id)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (void)_handleSpecChange;
- (void)_handleTouch:(id)arg1;
- (id)_helper;
- (void)_invalidateContentUnavailablePlaceholder;
- (void)_invalidateNavigationItem;
- (id)_longPressRecognizer;
- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })_memoryIndexPathForViewController:(id)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (void)_navigateToMemoryAtSectionObjectReference:(id)arg1;
- (BOOL)_needsUpdate;
- (id)_onboardingViewController;
- (id)_photosDetailsContextForMemory:(id)arg1;
- (id)_photosDetailsContextForMemoryObjectReference:(id)arg1;
- (void)_preloadFontSpecs;
- (void)_presentActionsForMemoryReference:(id)arg1;
- (id)_previewingContext;
- (id)_scrollViewController;
- (id)_searchBarButtonItem;
- (void)_searchBarButtonItemAction:(id)arg1;
- (void)_setContentUnavailableView:(id)arg1;
- (void)_setLongPressRecognizer:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setOnboardingViewController:(id)arg1;
- (void)_setPreviewingContext:(id)arg1;
- (id)_showMemoryDetailsForContext:(id)arg1 animated:(BOOL)arg2;
- (id)_sourceViewForMemoryActionsController;
- (void)_startRefresh;
- (id)_tapRecognizer;
- (id)_tileAnimator;
- (id)_tileSource;
- (id)_touchRecognizer;
- (void)_updateBarAppearance;
- (void)_updateContentUnavailablePlaceholderIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLongPressGestureRecognizer;
- (void)_updateNavigationItemIfNeeded;
- (void)_updatePreviewing;
- (void)_updateScrollViewControllerContentInset;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1;
- (void)memoriesOnboardingViewControllerDidTapContinueButton:(id)arg1;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2;
- (void)observable:(id)arg1 didChange:(unsigned int)arg2 context:(void*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)ppt_navigateToLatestMemoryAnimated:(BOOL)arg1;
- (id)ppt_scrollView;
- (id)preferredFocusEnvironments;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { float x1; float x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (id)showDetailsForMemoryWithLocalIdentifier:(id)arg1;
- (void)showFeedbackUI;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(int)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(id /* block */)arg5;
- (int)userInterfaceFeature;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_searchPresentation;

@end
