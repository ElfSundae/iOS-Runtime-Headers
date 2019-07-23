/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardViewController : UICollectionViewController <PKDashboardDataSourceDelegate, PKDashboardViewControllerDelegateFlowLayout, UICollectionViewDataSourcePrefetching> {
    NSMutableDictionary * _blocksOnVisibilityChange;
    PKUISpringAnimationFactory * _collectionViewFactory;
    bool  _contentIsLoaded;
    UICollectionViewLayout<PKDashboardLayout> * _customLayout;
    <PKDashboardDataSource> * _dataSource;
    <PKDashboardDelegate> * _delegate;
    NSMutableDictionary * _footersForSection;
    bool  _inScrollViewDidScroll;
    bool  _isHidingContent;
    bool  _isPresentingContent;
    double  _lastScrollOffset;
    bool  _navigationBarVisible;
    double  _navigationBarVisiblityTopInset;
    bool  _presentationAnimated;
    NSArray * _presenters;
    NSMutableDictionary * _presentersPerItemClassName;
    PKDashboardFooterTextView * _sampleFooterView;
    PKDashboardTitleHeaderView * _sampleHeaderView;
    bool  _shouldAnimateNavigationBarAppearance;
    bool  _shouldPresentAllContent;
    bool  _shouldUseClearNavigationBar;
    NSMutableDictionary * _titlesForSection;
    unsigned char  _visibilityState;
    NSSet * _visibleCellsExcludingSafeArea;
}

@property (nonatomic, readonly) <PKDashboardDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKDashboardDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPresentingContent;
@property (nonatomic, readonly) bool navigationBarVisible;
@property (nonatomic) double navigationBarVisiblityTopInset;
@property (nonatomic) bool shouldAnimateNavigationBarAppearance;
@property (nonatomic) bool shouldUseClearNavigationBar;
@property (readonly) Class superclass;

+ (id)backgroundColor;

- (void).cxx_destruct;
- (id)_actualItemIndexPathForIndexPath:(id)arg1;
- (void)_hideAllContentAnimated:(bool)arg1;
- (id)_internalIndexPathForItemIndexPath:(id)arg1;
- (bool)_isCellVisibleAtIndexPath:(id)arg1 withTopSafeArea:(double)arg2 contentOffset:(double)arg3;
- (bool)_isIndexPathAFooter:(id)arg1;
- (bool)_isIndexPathAHeader:(id)arg1;
- (void)_presentAllContent;
- (void)_updateNavigationBarForVisible;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)contentIsLoaded;
- (id)dataSource;
- (id)delegate;
- (void)deleteSections:(id)arg1;
- (id)initWithDataSource:(id)arg1 presenters:(id)arg2 layout:(id)arg3;
- (void)insertSections:(id)arg1;
- (bool)isPresentingContent;
- (void)itemChanged:(id)arg1 atIndexPath:(id)arg2;
- (bool)itemIsIndependentInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (bool)itemIsStackableInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (bool)navigationBarVisible;
- (double)navigationBarVisiblityTopInset;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (double)pkui_preferredNavigationBarBackgroundOpacity;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (long long)preferredStatusBarStyle;
- (void)reloadSections:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setActionForVisibilityChange:(id /* block */)arg1 indexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNavigationBarVisiblityTopInset:(double)arg1;
- (void)setShouldAnimateNavigationBarAppearance:(bool)arg1;
- (void)setShouldUseClearNavigationBar:(bool)arg1;
- (bool)shouldAnimateNavigationBarAppearance;
- (void)shouldPresentAllContent:(bool)arg1 animated:(bool)arg2;
- (bool)shouldUseClearNavigationBar;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
