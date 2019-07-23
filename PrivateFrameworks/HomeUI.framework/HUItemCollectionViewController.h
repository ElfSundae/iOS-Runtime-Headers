/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemCollectionViewController : HUCollectionViewController <HFItemManagerDelegate, HUItemManagerContainer, HUPreloadableViewController> {
    NSHashTable * _childViewControllersAtViewWillAppearTime;
    NSHashTable * _childViewControllersAtViewWillDisappearTime;
    BOOL  _hasFinishedInitialLoad;
    HFItemManager * _itemManager;
    BOOL  _wantsPreferredContentSize;
}

@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillAppearTime;
@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillDisappearTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFinishedInitialLoad;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HFItemManager *itemManager;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsPreferredContentSize;

+ (unsigned int)updateMode;

- (void).cxx_destruct;
- (void)_updateTitle;
- (id)allCellClasses;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersAtViewWillAppearTime;
- (id)childViewControllersAtViewWillDisappearTime;
- (id)childViewControllersToPreload;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (BOOL)hasFinishedInitialLoad;
- (id)hu_preloadContent;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)itemManager;
- (void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned int)arg2;
- (void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didInsertSections:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 didMoveSection:(int)arg2 toSection:(int)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (BOOL)itemManager:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(id)arg2;
- (void)setChildViewControllersAtViewWillAppearTime:(id)arg1;
- (void)setChildViewControllersAtViewWillDisappearTime:(id)arg1;
- (void)setHasFinishedInitialLoad:(BOOL)arg1;
- (void)setItemManager:(id)arg1;
- (void)setWantsPreferredContentSize:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldCoalesceBatchUpdatesBeforeViewDidAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsPreferredContentSize;

@end
