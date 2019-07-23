/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDataSourceUpdateMap : NSObject {
    _UIDataSourceBatchUpdateMapHelper * _batchUpdateMapHelper;
    _UIDataSourceSnapshotter * _finalSnapshot;
    _UIDataSourceSnapshotter * _initialSnapshot;
    NSArray * _originalUpdateItems;
    NSArray * _reverseUpdateItems;
    NSArray * _updateItems;
}

@property (nonatomic, retain) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper;
@property (nonatomic, retain) _UIDataSourceSnapshotter *finalSnapshot;
@property (nonatomic, retain) _UIDataSourceSnapshotter *initialSnapshot;
@property (nonatomic, readonly) bool isBatchUpdateMap;
@property (nonatomic, copy) NSArray *originalUpdateItems;
@property (nonatomic, retain) NSArray *reverseUpdateItems;
@property (nonatomic, retain) NSArray *updateItems;

+ (id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3;
+ (id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2;

- (void).cxx_destruct;
- (void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1;
- (id)_findUpdateForIdentifier:(id)arg1;
- (bool)_isSectionOnlyIndexPath:(id)arg1;
- (bool)_mapIsSimpleInsertMoveSequence;
- (id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2;
- (void)_performAppendingInsertsFixups;
- (id)_rebasedUpdatesForUpdate:(id)arg1;
- (id)_sectionIndexPathForSection:(long long)arg1;
- (id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;
- (long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;
- (id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1;
- (void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2;
- (id)batchUpdateMapHelper;
- (id)description;
- (id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (id)finalSnapshot;
- (id)finalUpdateForInitialUpdate:(id)arg1;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (id)initialSnapshot;
- (id)initialUpdateForFinalUpdate:(id)arg1;
- (id)initialUpdateForUpdateIdentifier:(id)arg1;
- (bool)isBatchUpdateMap;
- (id)originalUpdateItems;
- (id)rebasedMapFromNewBaseMap:(id)arg1;
- (id)reverseUpdateItems;
- (void)setBatchUpdateMapHelper:(id)arg1;
- (void)setFinalSnapshot:(id)arg1;
- (void)setInitialSnapshot:(id)arg1;
- (void)setOriginalUpdateItems:(id)arg1;
- (void)setReverseUpdateItems:(id)arg1;
- (void)setUpdateItems:(id)arg1;
- (id)submapAfterUpdate:(id)arg1;
- (id)submapBeforeUpdate:(id)arg1;
- (id)updateItems;
- (id)updateMapByRevertingUpdateWithIdentifier:(id)arg1;
- (id)updates;

@end
