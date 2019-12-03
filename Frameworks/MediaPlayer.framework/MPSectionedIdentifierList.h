/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSectionedIdentifierList : NSObject <MPExclusiveAccessible, NSSecureCoding, _MPSectionedIdentifierListEncodableNextEntriesProviding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <MPSectionedIdentifierListAnnotationDelegate> * _annotationDelegate;
    bool  _automaticallyReversesNonDestructiveDataSourceEdits;
    <MPSectionedIdentifierListDelegate> * _delegate;
    MPSectionedIdentifierListEntry * _endEntry;
    NSString * _identifier;
    long long  _itemCount;
    NSMutableDictionary * _sectionHeadEntryMap;
    NSMutableArray * _startEntries;
}

@property (nonatomic) <MPSectionedIdentifierListAnnotationDelegate> *annotationDelegate;
@property (nonatomic) bool automaticallyReversesNonDestructiveDataSourceEdits;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPSectionedIdentifierListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long itemCount;
@property (getter=_sectionDataSources, nonatomic, readonly) NSDictionary *sectionDataSources;
@property (readonly) Class superclass;

+ (void)_performWithoutRequiringExclusivity:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addBranchToEntry:(id)arg1 entries:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_beforeInitWithCoder:(id)arg1;
- (id)_dataSourceInsertItems:(id)arg1 fromSection:(id)arg2 afterEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (id)_dataSourceMoveItem:(id)arg1 inSection:(id)arg2 afterEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (id)_debugDescriptionWithEnumerator:(id)arg1 lengths:(struct { int x1; int x2; int x3; int x4; }*)arg2;
- (id)_encodeEntry:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (id)_endEntryWithExclusiveAccessToken:(id)arg1;
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_insertDataSource:(id)arg1 forSection:(id)arg2 afterEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (void)_insertDataSourceHead:(id)arg1 afterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (long long)_itemCountWithExclusiveAccessToken:(id)arg1;
- (id)_itemEntry:(id)arg1 sectionIdentifier:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_loadDataSource:(id)arg1 forSection:(id)arg2 completion:(id /* block */)arg3;
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (id)_sectionDataSources;
- (id)_sectionHeadEntryMapWithExclusiveAccessToken:(id)arg1;
- (id)_startEntriesWithExclusiveAccessToken:(id)arg1;
- (void)_stitchLastItemEntryToHeadEntry:(id)arg1 branchList:(id)arg2;
- (void)_stitchPreviousEntry:(id)arg1 toEntry:(id)arg2 cloneIndex:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)_stitchWithPreviousEntry:(id)arg1 list:(id)arg2 cloneIndex:(struct NSMutableDictionary { Class x1; }*)arg3;
- (id)_tailEntryForSectionIdentifier:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3 completion:(id /* block */)arg4;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4 completion:(id /* block */)arg5;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterTailOfSection:(id)arg3 completion:(id /* block */)arg4;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 completion:(id /* block */)arg3;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 completion:(id /* block */)arg3;
- (id)annotationDelegate;
- (bool)automaticallyReversesNonDestructiveDataSourceEdits;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceMoveItem:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceMoveItemToHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceMoveItemToTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;
- (void)dataSourceUpdateSection:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionStartingAtItem:(id)arg1 inSection:(id)arg2;
- (id)delegate;
- (id)encodableNextEntriesWithExclusiveAccessToken:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtTailOfSection:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtTailOfSection:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (id)enumeratorWithOptions:(unsigned long long)arg1 withExclusiveAccessToken:(id)arg2;
- (bool)hasItem:(id)arg1 inSection:(id)arg2;
- (bool)hasSection:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isDeletedItem:(id)arg1 inSection:(id)arg2;
- (long long)itemCount;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3;
- (void)moveItemToEnd:(id)arg1 fromSection:(id)arg2;
- (void)moveItemToStart:(id)arg1 fromSection:(id)arg2;
- (void)performWithExclusiveAccess:(id /* block */)arg1;
- (bool)performWithExclusiveAccessAndReturnBOOL:(id /* block */)arg1;
- (long long)performWithExclusiveAccessAndReturnInteger:(id /* block */)arg1;
- (id)performWithExclusiveAccessAndReturnObject:(id /* block */)arg1;
- (void)removeItem:(id)arg1 fromSection:(id)arg2;
- (void)replaceDataSource:(id)arg1 forSection:(id)arg2 completion:(id /* block */)arg3;
- (void)setAnnotationDelegate:(id)arg1;
- (void)setAutomaticallyReversesNonDestructiveDataSourceEdits:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
