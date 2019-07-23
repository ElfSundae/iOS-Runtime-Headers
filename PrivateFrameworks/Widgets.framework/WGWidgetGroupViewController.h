/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetGroupViewController : UIViewController <WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetExtensionVisibilityProviding, WGWidgetListViewControllerDelegatePrivate> {
    <WGWidgetGroupViewControllerDelegate> * _delegate;
    WGWidgetDiscoveryController * _discoveryController;
    unsigned int  _lastWidgetCount;
    unsigned int  _location;
    NSMapTable * _transitionCoordinatorToTargetColumnMode;
    NSArray * _widgetListViewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WGWidgetGroupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int location;
@property (nonatomic, readonly) UIScrollView *majorScrollView;
@property (nonatomic, readonly) UIScrollView *minorScrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int widgetCount;

- (void).cxx_destruct;
- (int)_activeColumnMode;
- (int)_activeLayoutMode;
- (int)_columnModeForLayoutMode:(int)arg1;
- (int)_columnModeForSize:(struct CGSize { float x1; float x2; })arg1;
- (int)_layoutModeForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_loadWidgetListViewControllersForColumnModes:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_majorColumnFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 columnMode:(int)arg2;
- (id)_majorColumnListViewController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_minorColumnFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 columnMode:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_minorColumnFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 targetBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 columnMode:(int)arg3;
- (id)_minorColumnListViewController;
- (id)_scrollViewForListViewController:(id)arg1;
- (BOOL)_supportedColumnModesIncludesTwoColumns;
- (int)activeColumnModeForWidgetListViewController:(id)arg1;
- (id)delegate;
- (void)editViewDidAppear:(id)arg1;
- (void)editViewDidDisappear:(id)arg1;
- (void)editViewWillAppear:(id)arg1;
- (void)editViewWillDisappear:(id)arg1;
- (id)initWithWidgetDiscoveryController:(id)arg1;
- (void)invalidateVisibleWidgets;
- (void)invalidateWidgetBackgroundViews;
- (BOOL)isWidgetExtensionVisible:(id)arg1;
- (unsigned int)location;
- (id)majorScrollView;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)minorScrollView;
- (void)presentEditViewWithCompletion:(id /* block */)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLocation:(unsigned int)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (unsigned int)widgetCount;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3;
- (int)widgetListViewController:(id)arg1 columnModeForTransitionToSize:(struct CGSize { float x1; float x2; })arg2 withCoordinator:(id)arg3;
- (id)widgetListViewController:(id)arg1 newCustomBackgroundViewForItemInList:(id)arg2;

@end
