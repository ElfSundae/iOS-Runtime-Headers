/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchModel : NSObject <PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver> {
    PSSearchOperation * _activeSearchOperation;
    NSString * _currentQuery;
    PSSearchResults * _currentResults;
    <PSSearchModelDataSource> * _dataSource;
    NSMutableArray * _deferredSpecifierUpdates;
    NSMutableSet * _delegates;
    NSMutableSet * _entriesBeingIndexed;
    NSMutableSet * _entriesPendingSearch;
    BOOL  _hasLoadedRootEntries;
    BOOL  _hasStartedIndexing;
    NSOperationQueue * _indexOperationQueue;
    BOOL  _indexing;
    NSMutableSet * _indexingEntriesWithLoadedDataSources;
    NSString * _queryForCurrentResults;
    NSMutableSet * _removedEntriesStillIndexing;
    NSMutableSet * _removedEntriesStillSearching;
    NSMutableArray * _rootEntries;
    NSOperationQueue * _searchOperationQueue;
    NSObject<OS_dispatch_queue> * _searchStateAccessQueue;
    BOOL  _showSectionInDetailText;
    NSMapTable * _specifierDataSources;
    BOOL  _waitUntilFinished;
}

@property (retain) PSSearchOperation *activeSearchOperation;
@property (copy) NSString *currentQuery;
@property (readonly) PSSearchResults *currentResults;
@property (nonatomic) <PSSearchModelDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasCompletedIndexing;
@property (readonly) unsigned int hash;
@property (getter=isIndexing, nonatomic, readonly) BOOL indexing;
@property (getter=isLoadingResults, nonatomic, readonly) BOOL loadingResults;
@property (nonatomic, readonly) int observerType;
@property (nonatomic, readonly) NSArray *rootEntries;
@property (nonatomic) BOOL showSectionInDetailText;
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitUntilFinished;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addSearchEntries:(id)arg1 parent:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_addSpecifierDataSource:(id)arg1 forSearchEntry:(id)arg2;
- (void)_beginIndexingIfNecessary;
- (void)_beginSearchingEntriesForCurrentQuery:(id)arg1 newSearch:(BOOL)arg2;
- (void)_cancelAllSearchOperations;
- (id /* block */)_defaultSearchResultsSectionComparator;
- (void)_enumerateDelegatesUsingBlock:(id /* block */)arg1;
- (void)_finishedIndexingEntry:(id)arg1;
- (void)_loadChildrenForEntry:(id)arg1;
- (void)_performDeferredUpdatesForEntry:(id)arg1;
- (void)_performSpecifierUpdates:(id)arg1 forSearchEntries:(id)arg2;
- (void)_reloadSearchEntries:(id)arg1;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(id /* block */)arg2 forReload:(BOOL)arg3;
- (id)_rootSpecifiers;
- (id)_searchEntriesForSpecifierDataSource:(id)arg1;
- (void)_updateWithNewSearchResults:(id)arg1 forQuery:(id)arg2 newSearch:(BOOL)arg3;
- (void)_updatedEntry:(id)arg1 withChildren:(id)arg2;
- (id)activeSearchOperation;
- (void)addDelegate:(id)arg1;
- (void)addRootSpecifier:(id)arg1;
- (id)currentQuery;
- (id)currentResults;
- (id)dataSource;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
- (void)dealloc;
- (BOOL)hasCompletedIndexing;
- (id)init;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (BOOL)isIndexing;
- (BOOL)isLoadingResults;
- (int)observerType;
- (void)preheat;
- (id)recursiveDescription;
- (void)reloadRootSpecifier:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeRootSpecifier:(id)arg1;
- (id)rootEntries;
- (void)searchForQuery:(id)arg1;
- (void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
- (void)searchIndexOperationDidCancel:(id)arg1;
- (void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;
- (void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
- (id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
- (void)searchOperationDidBegin:(id)arg1;
- (void)searchOperationDidCancel:(id)arg1;
- (void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
- (void)setActiveSearchOperation:(id)arg1;
- (void)setCurrentQuery:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setShowSectionInDetailText:(BOOL)arg1;
- (void)setWaitUntilFinished:(BOOL)arg1;
- (BOOL)showSectionInDetailText;
- (BOOL)waitUntilFinished;

@end
