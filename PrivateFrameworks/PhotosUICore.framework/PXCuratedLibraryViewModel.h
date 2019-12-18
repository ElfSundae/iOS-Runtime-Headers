/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryViewModel : PXObservable <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXCuratedLibraryAssetsDataSourceManagerDelegate, PXInfoProvider, PXInfoUpdaterObserver, PXMutablePhotosLibraryViewModel> {
    PXCuratedLibraryActionManager * _actionManager;
    NSArray * _allPhotosAllowedColumnWidths;
    NSArray * _allPhotosAllowedColumns;
    PXCuratedLibraryAllPhotosAlphaAnimator * _allPhotosAlphaAnimator;
    PXAssetReference * _allPhotosAnchorAssetReference;
    bool  _allPhotosAspectFit;
    bool  _allPhotosCaptionsVisible;
    <PXFilterState> * _allPhotosFilterState;
    bool  _allPhotosLayoutIsAnimating;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } normalizedScaleCenter; 
        double scale; 
        double scaleVelocity; 
        long long columns; 
        long long columnIndex; 
        double normalizedColumnWidth; 
        bool isAnimating; 
        bool isInteractive; 
        long long fromColumnIndex; 
        long long toColumnIndex; 
        double interactiveProgress; 
        double animatedProgress; 
        double stickyHeaderOpacity; 
    }  _allPhotosZoomState;
    NSSet * _allowedActions;
    PXCuratedLibraryAnalysisStatus * _analysisStatus;
    bool  _animatePendingZoom;
    PXCuratedLibraryAssetsDataSourceManager * _assetsDataSourceManager;
    bool  _attemptedLazyCreationOfCplServiceUI;
    long long  _chromeVisibilityAnimationCount;
    PXNumberAnimator * _columnWidthAnimator;
    NSObject<OS_dispatch_queue> * _countUpdateQueue;
    PXCPLServiceUI * _cplServiceUI;
    PXAssetsDataSource * _currentDataSource;
    <PXFilterState> * _currentFilterState;
    double  _daysMarginScale;
    NSSet * _draggedAssetReferences;
    double  _interactiveZoomColumnIndex;
    bool  _isAppearing;
    bool  _isInteractiveZooming;
    bool  _isPerformingInitialChanges;
    bool  _isPinching;
    bool  _isSelecting;
    bool  _isUpdatingAllPhotosZoomState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastScrollDirection;
    unsigned long long  _libraryState;
    UIBarButtonItem * _navigationDisplayModeButtonItem;
    double  _normalizedColumnWidthWhenPinchStarted;
    id  _pauseToken;
    long long  _pendingZoomColumnIndex;
    double  _pinchLastDate;
    double  _pinchLogValue;
    double  _pinchLogVelocity;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } normalizedInitialPosition; 
        double normalizedInitialPinchDistance; 
        struct CGPoint { 
            double x; 
            double y; 
        } normalizedPosition; 
        double initialScale; 
        double scale; 
        double scaleVelocity; 
        long long events; 
        double lastEventTime; 
    }  _pinchState;
    NSHashTable * _presenters;
    long long  _scrollRegime;
    PXScrollViewSpeedometer * _scrollingSpeedometer;
    NSString * _selectModeCaption;
    PXInfoUpdater * _selectedAssetsTypeCountUpdater;
    struct { 
        unsigned long long count; 
        long long type; 
    }  _selectedAssetsTypedCount;
    PXSectionedSelectionManager * _selectionManager;
    PXCuratedLibraryAssetCollectionSkimmingInfo * _skimmingInfo;
    PXCuratedLibraryLayoutSpecManager * _specManager;
    PXCuratedLibraryStyleGuide * _styleGuide;
    PXUpdater * _updater;
    bool  _viewBasedDecorationsEnabled;
    long long  _viewTimeSignpostID;
    NSHashTable * _views;
    NSMutableSet * _visibleAssetCollections;
    bool  _wantsDarkStatusBar;
    bool  _wantsSecondaryToolbarVisible;
    bool  _wantsTabBarVisible;
    bool  _wantsToolbarVisible;
    bool  _wasInteractiveZooming;
    bool  _wasPinching;
    long long  _zoomLevel;
    long long  _zoomLevelTransitionPhase;
}

@property (nonatomic, readonly) PXCuratedLibraryActionManager *actionManager;
@property (nonatomic, readonly) NSArray *allPhotosAllowedColumnWidths;
@property (nonatomic, retain) NSArray *allPhotosAllowedColumns;
@property (nonatomic, readonly) PXAssetReference *allPhotosAnchorAssetReference;
@property (nonatomic, readonly) bool allPhotosAspectFit;
@property (nonatomic, readonly) bool allPhotosCaptionsVisible;
@property (nonatomic, readonly) <PXFilterState> *allPhotosFilterState;
@property (nonatomic, readonly) bool allPhotosIsDisplayingIndividualItems;
@property (nonatomic, readonly) bool allPhotosLayoutIsAnimating;
@property (nonatomic, readonly) bool allPhotosPresentingAspectFit;
@property (nonatomic) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; long long x4; long long x5; double x6; bool x7; bool x8; long long x9; long long x10; double x11; double x12; double x13; } allPhotosZoomState;
@property (nonatomic, readonly) NSSet *allowedActions;
@property (nonatomic, readonly) PXCuratedLibraryAnalysisStatus *analysisStatus;
@property (nonatomic, readonly) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic) long long chromeVisibilityAnimationCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *countUpdateQueue;
@property (nonatomic, readonly) PXCPLServiceUI *cplServiceUI;
@property (nonatomic, retain) PXAssetsDataSource *currentDataSource;
@property (nonatomic, readonly) <PXFilterState> *currentFilterState;
@property (nonatomic, readonly) double daysMarginScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *draggedAssetReferences;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double interactiveZoomColumnIndex;
@property (nonatomic, readonly) bool isAnimatingChromeVisibility;
@property (nonatomic, readonly) bool isAppearing;
@property (nonatomic, readonly) bool isInteractiveZooming;
@property (nonatomic, readonly) bool isPerformingInitialChanges;
@property (nonatomic, readonly) bool isPinching;
@property (nonatomic, readonly) bool isSelecting;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastScrollDirection;
@property (nonatomic, readonly) unsigned long long libraryState;
@property (nonatomic, readonly) <PXCuratedLibraryViewModelPresenter> *mainPresenter;
@property (nonatomic, readonly) UIBarButtonItem *navigationDisplayModeButtonItem;
@property (nonatomic, readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; long long x7; double x8; } pinchState;
@property (nonatomic, readonly) NSArray *presenters;
@property (nonatomic) long long scrollRegime;
@property (nonatomic, retain) PXScrollViewSpeedometer *scrollingSpeedometer;
@property (nonatomic, readonly) NSString *selectModeCaption;
@property (nonatomic, readonly) PXInfoUpdater *selectedAssetsTypeCountUpdater;
@property (nonatomic, readonly) struct { unsigned long long x1; long long x2; } selectedAssetsTypedCount;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic, readonly) PXCuratedLibraryAssetCollectionSkimmingInfo *skimmingInfo;
@property (nonatomic, readonly) PXCuratedLibraryLayoutSpecManager *specManager;
@property (nonatomic, readonly) PXCuratedLibraryStyleGuide *styleGuide;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) bool viewBasedDecorationsEnabled;
@property (nonatomic) long long viewTimeSignpostID;
@property (nonatomic, readonly) NSArray *views;
@property (nonatomic, readonly) NSSet *visibleAssetCollections;
@property (nonatomic, readonly) bool wantsDarkStatusBar;
@property (nonatomic) bool wantsSecondaryToolbarVisible;
@property (nonatomic) bool wantsTabBarVisible;
@property (nonatomic) bool wantsToolbarVisible;
@property (nonatomic, readonly) long long zoomLevel;
@property (nonatomic, readonly) long long zoomLevelTransitionPhase;

+ (id)_cplServiceUI;

- (void).cxx_destruct;
- (long long)_allPhotosMaxColumnsForIndividualItems;
- (long long)_clampColumnIndexToValidIndex:(long long)arg1;
- (long long)_closestColumnIndexForAnimatedValue:(double)arg1;
- (long long)_closestColumnIndexForColumnWidth:(double)arg1;
- (double)_columnIndexForItemWidth:(double)arg1;
- (double)_columnWidthForDesiredColumnIndex:(double)arg1;
- (id)_cpAnalyticsClassNameWithZoomLevel:(long long)arg1;
- (void)_handleIsSelectingChange;
- (void)_handleSelectionManagerChange:(unsigned long long)arg1;
- (void)_handleSpecChange;
- (id)_indexPathsForAssetCollectionReference:(id)arg1;
- (void)_invalidateAllPhotosAllowedColumns;
- (void)_invalidateAllPhotosAlphaAnimator;
- (void)_invalidateAllPhotosZoomState;
- (void)_invalidateAllowedActions;
- (void)_invalidateAssetsDataSourceManager;
- (void)_invalidateChromeVisibility;
- (void)_invalidateCurrentDataSource;
- (void)_invalidateCurrentFilterState;
- (void)_invalidateDraggedAssetReferences;
- (void)_invalidateLibraryState;
- (void)_invalidatePinchVelocity;
- (void)_invalidateScrollingProperties;
- (void)_invalidateScrollingSpeedometer;
- (void)_invalidateSelectModeCaption;
- (void)_invalidateSelectedAssetsTypedCount;
- (long long)_nextColumnIndexForInitialColumnWidth:(double)arg1 currentColumnWidth:(double)arg2 velocity:(double)arg3;
- (void)_setNeedsUpdate;
- (void)_systemPhotoLibraryDidChange;
- (void)_updateAllPhotosAllowedColumns;
- (void)_updateAllPhotosAlphaAnimator;
- (void)_updateAllPhotosZoomState;
- (void)_updateAllowedActions;
- (void)_updateAssetsDataSourceManager;
- (void)_updateChromeVisibility;
- (void)_updateCurrentDataSource;
- (void)_updateCurrentFilterState;
- (void)_updateDraggedAssetReferences;
- (void)_updateLibraryState;
- (void)_updatePinchVelocity;
- (void)_updateScrollingProperties;
- (void)_updateScrollingSpeedometer;
- (void)_updateSelectModeCaption;
- (id)actionManager;
- (void)addPresenter:(id)arg1;
- (void)addView:(id)arg1;
- (id)allPhotosAllowedColumnWidths;
- (id)allPhotosAllowedColumns;
- (id)allPhotosAnchorAssetReference;
- (bool)allPhotosAspectFit;
- (bool)allPhotosCaptionsVisible;
- (id)allPhotosFilterState;
- (bool)allPhotosIsDisplayingIndividualItems;
- (bool)allPhotosLayoutIsAnimating;
- (bool)allPhotosPresentingAspectFit;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; long long x4; long long x5; double x6; bool x7; bool x8; long long x9; long long x10; double x11; double x12; double x13; })allPhotosZoomState;
- (id)allowedActions;
- (id)analysisStatus;
- (id)assetsDataSourceManager;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg1;
- (long long)bestColumnIndexForPreferredNumberOfColumns:(long long)arg1;
- (long long)chromeVisibilityAnimationCount;
- (id)countUpdateQueue;
- (id)cplServiceUI;
- (void)curatedLibraryAssetsDataSourceManager:(id)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (id)curatedLibraryAssetsDataSourceManager:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;
- (long long)curatedLibraryAssetsDataSourceManager:(id)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)curatedLibraryAssetsDataSourceManager:(id)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (id)currentDataSource;
- (id)currentFilterState;
- (double)daysMarginScale;
- (id)description;
- (void)didPerformChanges;
- (id)draggedAssetReferences;
- (void)endAnimationToToggleChromeVisibility;
- (void)endCPAnalyticsViewWithZoomLevel:(long long)arg1;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (id)init;
- (id)initWithAssetsDataSourceManagerConfiguration:(id)arg1 zoomLevel:(long long)arg2 specManager:(id)arg3 styleGuide:(id)arg4;
- (id)initWithPhotoLibrary:(id)arg1 zoomLevel:(long long)arg2 specManager:(id)arg3 styleGuide:(id)arg4;
- (double)interactiveZoomColumnIndex;
- (bool)isAnimatingChromeVisibility;
- (bool)isAppearing;
- (bool)isInteractiveZooming;
- (bool)isPerformingInitialChanges;
- (bool)isPinching;
- (bool)isSelecting;
- (bool)isSelectingAssetsFromCuratedLibraryAssetsDataSourceManager:(id)arg1;
- (struct CGPoint { double x1; double x2; })lastScrollDirection;
- (unsigned long long)libraryState;
- (id)mainPresenter;
- (id)mutableChangeObject;
- (id)navigationDisplayModeButtonItem;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)performInitialChanges:(id /* block */)arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; long long x7; double x8; })pinchState;
- (id)presenters;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)removeView:(id)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)resetAllPhotosColumns;
- (long long)scrollRegime;
- (id)scrollingSpeedometer;
- (id)selectModeCaption;
- (id)selectedAssetsTypeCountUpdater;
- (struct { unsigned long long x1; long long x2; })selectedAssetsTypedCount;
- (id)selectionManager;
- (id)selectionSnapshot;
- (void)setAllPhotosAllowedColumns:(id)arg1;
- (void)setAllPhotosAspectFit:(bool)arg1;
- (void)setAllPhotosCaptionsVisible:(bool)arg1;
- (void)setAllPhotosFilterState:(id)arg1;
- (void)setAllPhotosLayoutIsAnimating:(bool)arg1;
- (void)setAllPhotosZoomState:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; long long x4; long long x5; double x6; bool x7; bool x8; long long x9; long long x10; double x11; double x12; double x13; })arg1;
- (void)setAllowedActions:(id)arg1;
- (void)setChromeVisibilityAnimationCount:(long long)arg1;
- (void)setCplServiceUI:(id)arg1;
- (void)setCurrentDataSource:(id)arg1;
- (void)setCurrentFilterState:(id)arg1;
- (void)setDaysMarginScale:(double)arg1;
- (void)setDraggedAssetReferences:(id)arg1;
- (void)setInteractiveZoomColumnIndex:(double)arg1 withAnchorAssetReference:(id)arg2;
- (void)setIsAppearing:(bool)arg1;
- (void)setIsInteractiveZooming:(bool)arg1;
- (void)setIsPinching:(bool)arg1;
- (void)setIsSelecting:(bool)arg1;
- (void)setLastScrollDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLibraryState:(unsigned long long)arg1;
- (void)setNavigationDisplayModeButtonItem:(id)arg1;
- (void)setPinchState:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; long long x7; double x8; })arg1 withAnchorAssetReference:(id)arg2;
- (void)setScrollRegime:(long long)arg1;
- (void)setScrollingSpeedometer:(id)arg1;
- (void)setSelectModeCaption:(id)arg1;
- (void)setSelectedAssetsTypedCount:(struct { unsigned long long x1; long long x2; })arg1;
- (void)setSkimmingInfo:(id)arg1;
- (void)setViewBasedDecorationsEnabled:(bool)arg1;
- (void)setViewTimeSignpostID:(long long)arg1;
- (void)setWantsDarkStatusBar:(bool)arg1;
- (void)setWantsSecondaryToolbarVisible:(bool)arg1;
- (void)setWantsTabBarVisible:(bool)arg1;
- (void)setWantsToolbarVisible:(bool)arg1;
- (void)setZoomLevel:(long long)arg1;
- (void)setZoomLevelTransitionPhase:(long long)arg1;
- (id)skimmingInfo;
- (id)specManager;
- (void)startAnimationToToggleChromeVisibility;
- (void)startCPAnalyticsViewWithZoomLevel:(long long)arg1;
- (id)styleGuide;
- (void)toggleSelectionForAssetCollectionReference:(id)arg1;
- (void)toggleSelectionForAssetReference:(id)arg1;
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)updater;
- (bool)viewBasedDecorationsEnabled;
- (long long)viewTimeSignpostID;
- (id)views;
- (id)visibleAssetCollections;
- (id)visibleAssetCollectionsFromCuratedLibraryAssetsDataSourceManager:(id)arg1;
- (bool)wantsDarkStatusBar;
- (bool)wantsSecondaryToolbarVisible;
- (bool)wantsTabBarVisible;
- (bool)wantsToolbarVisible;
- (void)zoomAllPhotosToColumnIndex:(long long)arg1 withAnchorAssetReference:(id)arg2 animated:(bool)arg3;
- (void)zoomInAllPhotosToLastRememberedWithAnchorAssetReference:(id)arg1 animated:(bool)arg2;
- (long long)zoomLevel;
- (long long)zoomLevelTransitionPhase;

@end
