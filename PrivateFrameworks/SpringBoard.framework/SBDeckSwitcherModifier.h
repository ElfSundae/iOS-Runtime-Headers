/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeckSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProviding> {
    long long  _grabbedDraggingIndex;
    double  _initialTranslationAdjustment;
    double  _inputContentOffsetAdjustmentForIndexChange;
    unsigned long long  _ongoingAppLayoutRemovals;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalLocationInView;
    double  _outputContentOffsetAdjustmentForIndexChange;
    <SBFluidSwitcherScrollProvidingDelegate> * _scrollDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _start;
    bool  _useTitleOpacityPrototypeSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBFluidSwitcherScrollProvidingDelegate> *scrollDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_adjustedOffsetForIndex:(long long)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 start:(struct CGPoint { double x1; double x2; })arg3 originalLocationInView:(struct CGPoint { double x1; double x2; })arg4 locationInView:(struct CGPoint { double x1; double x2; })arg5;
- (void)_applyPrototypeSettings;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollProgress:(double)arg1;
- (double)_counteractScrollingForOffset:(double)arg1 scrollProgress:(double)arg2;
- (unsigned long long)_directionForRemovingIndex:(unsigned long long)arg1 centeredIndex:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ignoringScrollOffset:(bool)arg4;
- (unsigned long long)_indexOfCurrentCenteredCard;
- (unsigned long long)_newIndexOfItemAtIndex:(unsigned long long)arg1 afterRemovingItemAtIndex:(unsigned long long)arg2;
- (double)_preferredVisibleMarginForTopPage;
- (bool)_priorIndex:(unsigned long long)arg1 fullyObscuresCardForIndex:(unsigned long long)arg2;
- (double)_restingScrollProgressForProgress:(double)arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (double)_scaleForTransformForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)_scaleInSwitcherViewForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaleTransformedFrameForIndex:(unsigned long long)arg1 withUntransformedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scrollProgress:(double)arg3;
- (double)_scaleTransformedXOrigin:(double)arg1 scrollProgress:(double)arg2;
- (double)_scrollMin;
- (double)_scrollProgress;
- (double)_scrollProgressForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 depth:(double)arg3;
- (long long)_topIndexForLocationInContainerCoordinateSpace:(struct CGPoint { double x1; double x2; })arg1;
- (double)_unscaledCardCornerRadius;
- (double)_valueAlongDepthCurveForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 aCoefficient:(double)arg3 bCoefficient:(double)arg4;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (struct CGPoint { double x1; double x2; })adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 locationInView:(struct CGPoint { double x1; double x2; })arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsForInsertionOrRemoval;
- (double)backdropBlurProgress;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)cardCornerRadiusInSwitcher;
- (bool)cardsNeedBackgroundWallpaperTreatment;
- (double)centerYOffsetWhenPresented;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)containerStatusBarAnimationDuration;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 centered:(bool)arg2;
- (struct CGSize { double x1; double x2; })contentSize;
- (double)contentViewScale;
- (id)cornerRadiusSettingsForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (id)debugDescription;
- (double)decelerationRate;
- (double)depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)desiredXOriginForQuantizedTopPage;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dimmingAlpha;
- (bool)dimmingViewBlocksTouches;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (struct CGSize { double x1; double x2; })fittedContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fullSizeSnapshotsRange;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenScale;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })interpageSpacingForPaging;
- (bool)interpolatesDuringSwipeToKill;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeGrabberVisible;
- (bool)isHomeScreenContentRequired;
- (bool)isIndexKillable:(unsigned long long)arg1;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (bool)isScrollEnabled;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isTetheredScrollingEnabled;
- (bool)isWallpaperRequiredForSwitcher;
- (bool)itemContainersAllowContentViewTouches;
- (bool)itemContainersUseBrightMaterial;
- (long long)keyboardSuppressionMode;
- (id)layoutSettings;
- (id)layoutSettingsForIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (double)leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (unsigned long long)numberOfDefaultAppLayoutsToCacheSnapshots;
- (unsigned long long)numberOfItems;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (id)opacitySettings;
- (struct CGPoint { double x1; double x2; })pagingOrigin;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (id)positionSettingsForIndex:(unsigned long long)arg1;
- (long long)preferredSnapshotOrientation;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (void)resetAdjustedScrollingState;
- (struct CGPoint { double x1; double x2; })restingOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)scaleSettingsForIndex:(unsigned long long)arg1;
- (long long)sceneDeactivationReason;
- (unsigned long long)scrollAxis;
- (id)scrollDelegate;
- (double)scrollProgressForIndex:(unsigned long long)arg1;
- (double)scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3;
- (double)scrollRange;
- (bool)scrollViewPagingEnabled;
- (void)setScrollDelegate:(id)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (bool)shouldAcceleratedHomeButtonPressBegin;
- (bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (bool)shouldConfigureInAppDockHiddenAssertion;
- (bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (bool)shouldPerformRotationAnimationForOrientationChange;
- (bool)shouldRubberbandHomeGrabberView;
- (bool)shouldTetherTransitionCompletion;
- (bool)shouldTruncateAnimationsUponTransitionCompletion;
- (bool)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;
- (double)snapshotScale;
- (double)switcherCardScale;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (id)topMostAppLayouts;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;
- (long long)wallpaperStyle;
- (bool)wantsAsynchronousSurfaceRetentionAssertion;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsDockWindowLevelAssertion;
- (bool)wantsMinificationFilter;
- (bool)wantsResignActiveAssertion;

@end
