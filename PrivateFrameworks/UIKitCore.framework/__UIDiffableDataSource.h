/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface __UIDiffableDataSource : NSObject <UICollectionViewDataSource, UITableViewDataSource> {
    NSObject<OS_dispatch_queue> * _applyQueue;
    UICollectionView * _collectionView;
    id /* block */  _collectionViewCellConfigurationHandler;
    id /* block */  _collectionViewCellProvider;
    NSUUID * _dataSourceGeneration;
    _UIDataSourceSnapshotter * _dataSourceSnapshot;
    NSOrderedSet * _identifiers;
    bool  _isSnapshot;
    unsigned long long  _mutationQueueSource;
    int  _outstandingApplyCount;
    NSMutableArray * _pendingSnapshotUpdates;
    id /* block */  _reuseIdentifierProvider;
    NSOrderedSet * _sections;
    NSObject<OS_dispatch_queue> * _snapshotQueue;
    id /* block */  _supplementaryReuseIdentifierProvider;
    id /* block */  _supplementaryViewConfigurationHandler;
    id /* block */  _supplementaryViewProvider;
    UITableView * _tableView;
    id /* block */  _tableViewCellConfigurationHandler;
    id /* block */  _tableViewCellProvider;
    _UIDiffableDataSourceViewUpdater * _viewUpdater;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *applyQueue;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, copy) id /* block */ collectionViewCellConfigurationHandler;
@property (nonatomic, copy) id /* block */ collectionViewCellProvider;
@property (nonatomic, retain) NSUUID *dataSourceGeneration;
@property (nonatomic, retain) _UIDataSourceSnapshotter *dataSourceSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOrderedSet *identifiers;
@property (nonatomic, readonly) bool isSnapshot;
@property (nonatomic, readonly) NSArray *itemIdentifiers;
@property unsigned long long mutationQueueSource;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) int outstandingApplyCount;
@property (nonatomic, readonly) NSMutableArray *pendingSnapshotUpdates;
@property (nonatomic, copy) id /* block */ reuseIdentifierProvider;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;
@property (nonatomic, retain) NSOrderedSet *sections;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *snapshotQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ supplementaryReuseIdentifierProvider;
@property (nonatomic, copy) id /* block */ supplementaryViewConfigurationHandler;
@property (nonatomic, copy) id /* block */ supplementaryViewProvider;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, copy) id /* block */ tableViewCellConfigurationHandler;
@property (nonatomic, copy) id /* block */ tableViewCellProvider;
@property (nonatomic) long long tableViewDefaultRowAnimation;
@property (nonatomic, retain) _UIDiffableDataSourceViewUpdater *viewUpdater;

- (void).cxx_destruct;
- (bool)_canApplySnapshotUpdateWithoutDiffing:(id)arg1;
- (id)_cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_cellForItemAtIndexPathDeprecatedSPI:(id)arg1 collectionView:(id)arg2;
- (id)_cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_cellForRowAtIndexPathDeprecatedSPI:(id)arg1 tableView:(id)arg2;
- (void)_commitNewDataSource:(id)arg1 withViewUpdates:(id)arg2 completion:(id /* block */)arg3;
- (void)_commitStateAtomicallyWithIdentifiers:(id)arg1 sections:(id)arg2 dataSourceSnapshot:(id)arg3 shouldAdvanceGenerationalUUID:(bool)arg4 shouldCopy:(bool)arg5;
- (void)_commitUpdate:(id)arg1;
- (void)_commitUpdate:(id)arg1 completion:(id /* block */)arg2;
- (long long)_numberOfItemsInSection:(long long)arg1 collectionView:(id)arg2;
- (long long)_numberOfItemsInSectionDeprecatedSPI:(long long)arg1 collectionView:(id)arg2;
- (long long)_numberOfRowsInSection:(long long)arg1 tableView:(id)arg2;
- (long long)_numberOfRowsInSectionDeprecatedSPI:(long long)arg1 tableView:(id)arg2;
- (long long)_numberOfSectionsForCollectionView:(id)arg1;
- (long long)_numberOfSectionsForCollectionViewDeprecatedSPI:(id)arg1;
- (long long)_numberOfSectionsForTableView:(id)arg1;
- (long long)_numberOfSectionsForTableViewDeprecatedSPI:(id)arg1;
- (id)_pendingReloadUpdatesForDataSource:(id)arg1;
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1;
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1 dataSource:(id)arg2 ignoreInvalidItems:(bool)arg3;
- (id)_snapshotWithHandlerAtomic:(id /* block */)arg1;
- (id)_viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;
- (id)_viewForSupplementaryElementOfKindDeprecatedSPI:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)appendSectionWithIdentifier:(id)arg1;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(bool)arg2;
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(bool)arg2 completion:(id /* block */)arg3;
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (id)applyQueue;
- (void)applySnapshot:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id /* block */)collectionViewCellConfigurationHandler;
- (id /* block */)collectionViewCellProvider;
- (id)dataSourceGeneration;
- (id)dataSourceSnapshot;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (id)description;
- (id)emptySnapshot;
- (id)identifiers;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* block */)arg2;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* block */)arg2 dataSource:(id)arg3;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* block */)arg2 reuseIdentifierProvider:(id /* block */)arg3 cellConfigurationHandler:(id /* block */)arg4 dataSourceGeneration:(id)arg5 sectionIdentifiers:(id)arg6 identifiers:(id)arg7 dataSourceSnapshot:(id)arg8 dataSource:(id)arg9;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(id /* block */)arg2 cellConfigurationHandler:(id /* block */)arg3;
- (id)initWithDataSourceGeneration:(id)arg1 sectionIdentifiers:(id)arg2 identifiers:(id)arg3 dataSourceSnapshot:(id)arg4;
- (id)initWithTableView:(id)arg1 cellProvider:(id /* block */)arg2;
- (id)initWithTableView:(id)arg1 cellProvider:(id /* block */)arg2 reuseIdentifierProvider:(id /* block */)arg3 cellConfigurationHandler:(id /* block */)arg4 dataSourceGeneration:(id)arg5 sectionIdentifiers:(id)arg6 identifiers:(id)arg7 dataSourceSnapshot:(id)arg8 dataSource:(id)arg9;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(id /* block */)arg2 cellConfigurationHandler:(id /* block */)arg3;
- (id)initWithViewUpdatesSink:(id)arg1;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (bool)isSnapshot;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)itemIdentifiers;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (unsigned long long)mutationQueueSource;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (int)outstandingApplyCount;
- (id)pendingSnapshotUpdates;
- (void)reloadFromSnapshot:(id)arg1;
- (void)reloadFromSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (id /* block */)reuseIdentifierProvider;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (id)sections;
- (void)setCollectionViewCellConfigurationHandler:(id /* block */)arg1;
- (void)setCollectionViewCellProvider:(id /* block */)arg1;
- (void)setDataSourceGeneration:(id)arg1;
- (void)setDataSourceSnapshot:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setMutationQueueSource:(unsigned long long)arg1;
- (void)setReuseIdentifierProvider:(id /* block */)arg1;
- (void)setSections:(id)arg1;
- (void)setSupplementaryReuseIdentifierProvider:(id /* block */)arg1;
- (void)setSupplementaryViewConfigurationHandler:(id /* block */)arg1;
- (void)setSupplementaryViewProvider:(id /* block */)arg1;
- (void)setTableViewCellConfigurationHandler:(id /* block */)arg1;
- (void)setTableViewCellProvider:(id /* block */)arg1;
- (void)setTableViewDefaultRowAnimation:(long long)arg1;
- (void)setViewUpdater:(id)arg1;
- (id)snapshot;
- (id)snapshotQueue;
- (id /* block */)supplementaryReuseIdentifierProvider;
- (id /* block */)supplementaryViewConfigurationHandler;
- (id /* block */)supplementaryViewProvider;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id /* block */)tableViewCellConfigurationHandler;
- (id /* block */)tableViewCellProvider;
- (long long)tableViewDefaultRowAnimation;
- (id)viewUpdater;

@end
