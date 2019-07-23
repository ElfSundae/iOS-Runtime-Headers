/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistorySQLiteStore : NSObject <WBSHistoryLoader, WBSHistoryLoaderDelegate> {
    long long _cachedNumberOfDevicesInSyncCircle;
    BOOL _checkpointWriteAheadLogOnNextWrite;
    NSMutableDictionary *_clientVersions;
    BOOL _commitGenerationValuesOnNextWrite;
    NSData *_cryptographicKey;
    long long _currentGeneration;
    WBSSQLiteDatabase *_database;
    int _databaseCoordinationLockFileDescriptor;
    int _databaseLockingPolicy;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSURL *_databaseURL;
    <WBSHistoryStoreDelegate> *_delegate;
    NSArray *_discardedItems;
    NSData *_fetchThrottlerData;
    double _historyAgeLimit;
    Class _historyItemClass;
    int _importState;
    BOOL _isClosed;
    unsigned int _itemCountLimit;
    NSMutableDictionary *_itemsByDatabaseID;
    NSDate *_lastMaintenanceDate;
    long long _lastSyncedGeneration;
    BOOL _loadInProgress;
    NSArray *_loadedItems;
    NSCountedSet *_loadedStringsForUserTypedDomainExpansion;
    WBSPeriodicActivityScheduler *_maintenanceScheduler;
    NSMutableSet *_pendingAddsOrUpdates;
    NSMutableSet *_pendingDeletes;
    NSMutableSet *_pendingTombstones;
    NSMutableSet *_pendingVisitDeletes;
    BOOL _pushNotificationsAreInitialized;
    NSData *_pushThrottlerData;
    NSData *_salt;
    NSMutableDictionary *_statements;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__first_; 
        } __ptr_; 
    } _suddenTerminationDisabler;
    NSData *_syncCircleSizeRetrievalThrottlerData;
    NSMapTable *_weakVisitsByDatabaseID;
    BOOL _writeLastMaintenanceDateOnNextWrite;
    NSTimer *_writeTimer;
}

@property (nonatomic) unsigned int cachedNumberOfDevicesInSyncCircle;
@property (nonatomic, readonly) WBSSQLiteDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSHistoryStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *fetchThrottlerData;
@property (readonly) unsigned int hash;
@property (nonatomic) double historyAgeLimit;
@property (nonatomic) BOOL pushNotificationsAreInitialized;
@property (nonatomic, copy) NSData *pushThrottlerData;
@property (nonatomic, readonly) NSData *salt;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *syncCircleSizeRetrievalThrottlerData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_acquireDatabaseCoordinationLockForDatabaseURL:(id)arg1;
- (double)_ageLimitSinceReferenceDate;
- (unsigned int)_cachedNumberOfDevicesInSyncCircleOnDatabaseQueue;
- (BOOL)_checkDatabaseIntegrity;
- (void)_checkpointWriteAheadLog;
- (void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 addingTombstone:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_clearHistoryVisitsMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4 addingTombstone:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_clearHistoryVisitsMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 addingTombstone:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1;
- (long long)_currentGeneration;
- (id)_databaseCoordinationLockURLForDatabaseURL:(id)arg1;
- (id)_deletionPlanForDeletionOfVisits:(id)arg1;
- (void)_enforceAgeAndItemCountLimits:(id /* block */)arg1;
- (void)_expireOldVisits;
- (void)_finishLoadingOnMainThread;
- (void)_finishLoadingOnMainThreadIfNeeded;
- (void)_incrementCurrentGeneration;
- (void)_insertItem:(id)arg1;
- (void)_insertTombstone:(id)arg1;
- (void)_insertVisit:(id)arg1;
- (id)_itemsOrderedForInsertion:(id)arg1;
- (id)_lastSeenDateForCloudClientVersionOnDatabaseQueue:(unsigned int)arg1;
- (long long)_lastSyncedGeneration;
- (void)_loadClientVersions;
- (void)_loadFromDatabase;
- (void)_loadHistory;
- (void)_loadRedirectVisitsForLoadedItems:(id)arg1;
- (id)_metadataDataValueForKey:(id)arg1;
- (long long)_metadataInt64ValueForKey:(id)arg1;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_6;
- (int)_migrateToSchemaVersion_7;
- (int)_migrateToSchemaVersion_8;
- (void)_openDatabase:(id)arg1 andCheckIntegrity:(BOOL)arg2;
- (void)_performMaintenance:(id /* block */)arg1;
- (void)_processPendingDeletes;
- (void)_processPendingVisitDeletes;
- (void)_processPendingWrites;
- (void)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1;
- (void)_recomputeDerivedVisitCounts;
- (void)_releaseDatabaseCoordinationLock;
- (void)_removeVisitsProvidedByBlockInvokedOnDatabaseQueue:(id /* block */)arg1 addingTombstone:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_saltOnDatabaseQueue;
- (void)_scheduleMaintenance;
- (void)_scheduleWrite;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (void)_setLastSyncedGeneration:(unsigned long long)arg1;
- (void)_setMetadataDataValue:(id)arg1 forKey:(id)arg2;
- (void)_setMetadataInt64Value:(long long)arg1 forKey:(id)arg2;
- (int)_setOrigin:(int)arg1 forVisitsFromOrigin:(int)arg2;
- (BOOL)_shouldEmitLegacyTombstones;
- (BOOL)_shouldMigrateFromPropertyListWhenLoadingDatabase:(id)arg1;
- (id)_statementForQuery:(id)arg1;
- (id)_tombstonesNeedingSync;
- (void)_updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 convertTombstonesToSecureFormat:(BOOL)arg2;
- (void)_updateGenerationForVisits:(id)arg1;
- (void)_updateItem:(id)arg1;
- (void)_updateVisit:(id)arg1;
- (void)_updateVisitRedirectRelationships:(id)arg1;
- (id)_visitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (id)_visitsCreatedMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4;
- (id)_visitsCreatedMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3;
- (id)_visitsFromRows:(id)arg1 predicate:(id /* block */)arg2;
- (id)_visitsNeedingSyncWithVisitSyncWindow:(double)arg1;
- (id)_visitsOrderedForInsertion:(id)arg1;
- (id)_visitsWithOrigins:(id)arg1;
- (void)_writeTimerFired;
- (void)addOrUpdateItemsOnDatabaseQueue:(id)arg1;
- (unsigned int)cachedNumberOfDevicesInSyncCircle;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)close;
- (id)createCryptographicKey;
- (id)createOrLoadCryptographicKey;
- (id)database;
- (void)dealloc;
- (id)decryptDictionary:(id)arg1;
- (id)delegate;
- (id)encryptDictionary:(id)arg1;
- (id)existingItemFromVisitRow:(id)arg1;
- (id)fetchThrottlerData;
- (void)getAllTombstonesWithCompletion:(id /* block */)arg1;
- (void)getServerChangeTokenDataWithCompletion:(id /* block */)arg1;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(id /* block */)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)historyAgeLimit;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned int)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
- (void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
- (void)itemsWereAdded:(id)arg1;
- (void)itemsWereModified:(id)arg1;
- (id)lastSeenDateForCloudClientVersion:(unsigned int)arg1;
- (void)performMaintenance:(id /* block */)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
- (BOOL)pushNotificationsAreInitialized;
- (id)pushThrottlerData;
- (void)removeItemsOnDatabaseQueue:(id)arg1;
- (void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeVisitsOnDatabaseQueue:(id)arg1;
- (void)replayAndAddTombstone:(id)arg1;
- (void)resetCloudHistoryDataWithCompletionHandler:(id /* block */)arg1;
- (id)salt;
- (void)savePendingChangesWithCompletionHandler:(id /* block */)arg1;
- (void)setCachedNumberOfDevicesInSyncCircle:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchThrottlerData:(id)arg1;
- (void)setHistoryAgeLimit:(double)arg1;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned int)arg2;
- (void)setPushNotificationsAreInitialized:(BOOL)arg1;
- (void)setPushThrottlerData:(id)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setSyncCircleSizeRetrievalThrottlerData:(id)arg1;
- (void)startLoading;
- (id)syncCircleSizeRetrievalThrottlerData;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(id /* block */)arg2;
- (id)visitForItem:(id)arg1 row:(id)arg2;
- (id)visitForRow:(id)arg1;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)visitsWereAdded:(id)arg1;
- (void)visitsWereModified:(id)arg1;
- (void)waitForLoadingToComplete;

@end
