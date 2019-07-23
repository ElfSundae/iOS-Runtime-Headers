/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCClientZone : NSObject <BRCReachabilityDelegate, BRCZone> {
    BOOL  _activated;
    NSMutableArray * _allItemsDidUploadTrackers;
    NSMutableSet * _appLibraries;
    NSMutableIndexSet * _appliedTombstoneRanks;
    UMUserSyncTask * _bubbleSyncTask;
    BRCCreateZoneAndSubscribeOperation * _createZoneOperation;
    NSObject<OS_dispatch_queue> * _createZoneQueue;
    NSMutableArray * _currentSyncDownBarriers;
    BRCPQLConnection * _db;
    BRCZoneRowID * _dbRowID;
    BRCAppLibrary * _defaultAppLibrary;
    <BRCClientZoneDelegate> * _delegate;
    NSMutableDictionary * _downloadedBlockToPerformForItemID;
    BOOL  _isInitialCreation;
    NSDate * _lastAttemptedSyncDownDate;
    long long  _lastInsertedRank;
    NSDate * _lastSyncDownDate;
    NSError * _lastSyncDownError;
    NSError * _lastSyncUpError;
    NSString * _mangledID;
    BOOL  _needsSave;
    NSMutableArray * _nextIdleHandlers;
    NSMutableArray * _nextSyncDownBarriers;
    NSMutableDictionary * _onDiskBlockToPerformForItemID;
    NSString * _osNameRequiredToSync;
    NSString * _ownerName;
    BRCThrottleBase * _readerThrottle;
    unsigned long long  _requestID;
    NSObject<OS_dispatch_source> * _resetTimer;
    BRCServerZone * _serverZone;
    BRCAccountSession * _session;
    BOOL  _shouldShowiCloudDriveAppInstallationNotification;
    unsigned int  _state;
    BRCDeadlineSource * _syncDeadlineSource;
    id  _syncDeadlineSourceResumer;
    NSMutableDictionary * _syncDownBlockToPerformForBookmarkData;
    NSMutableDictionary * _syncDownBlockToPerformForItemID;
    NSMutableArray * _syncDownDependencies;
    BRCSyncDownOperation * _syncDownOperation;
    BRCSyncOperationThrottle * _syncDownThrottle;
    unsigned int  _syncState;
    NSArray * _syncThrottles;
    float  _syncUpBatchSizeMultiplier;
    BRCSyncBudgetThrottle * _syncUpBudget;
    BRCSyncUpOperation * _syncUpOperation;
    long long  _syncUpRetryAfter;
    BRCSyncOperationThrottle * _syncUpThrottle;
    NSMutableDictionary * _t_osNamesByItemIDBlockedForSyncUp;
    NSString * _t_syncBlockedUntilOSName;
    BOOL  _t_syncDownBlocked;
    brc_task_tracker * _taskTracker;
    NSMutableArray * _zoneCreationCompletionBlocks;
    NSString * _zoneID;
    NSString * _zoneName;
}

@property (nonatomic, readonly) NSMutableDictionary *_t_osNamesByItemIDBlockedForSyncUp;
@property (nonatomic, readonly) NSString *_t_syncBlockedUntilOSName;
@property (nonatomic, readonly) BOOL _t_syncDownBlocked;
@property (nonatomic, readonly) BOOL activated;
@property (nonatomic, readonly) NSSet *appLibraries;
@property (nonatomic, readonly) NSSet *appLibraryIDs;
@property (nonatomic, readonly) unsigned long long currentRequestID;
@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, retain) BRCZoneRowID *dbRowID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) BRCAppLibrary *defaultAppLibrary;
@property (nonatomic, retain) <BRCClientZoneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasDefaultAppLibrary;
@property (nonatomic, readonly) BOOL hasHighPriorityWatchers;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isCloudDocsZone;
@property (nonatomic, readonly) BOOL isForeground;
@property (nonatomic, readonly) BOOL isPrivateZone;
@property (nonatomic, readonly) BOOL isSharedZone;
@property (nonatomic, retain) NSDate *lastAttemptedSyncDownDate;
@property (nonatomic, readonly) long long lastInsertedRank;
@property (nonatomic) BOOL needsSave;
@property (nonatomic, readonly) NSString *osNameRequiredToSync;
@property (nonatomic, readonly) NSMutableDictionary *plist;
@property (nonatomic, retain) BRCServerZone *serverZone;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BRCDeadlineSource *syncDeadlineSource;
@property (readonly) unsigned int syncState;
@property (nonatomic, readonly) NSArray *syncThrottles;
@property (nonatomic, readonly) unsigned int syncUpBatchSize;
@property (nonatomic, readonly) brc_task_tracker *taskTracker;
@property (nonatomic, readonly) NSString *zoneID;
@property (nonatomic, readonly) NSString *zoneName;

- (void).cxx_destruct;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_allItemsDidUploadWithError:(id)arg1;
- (void)_appendToString:(id)arg1 descriptionOfFieldNamed:(id)arg2 inResultSet:(id)arg3 pos:(int*)arg4 containsSize:(BOOL)arg5 context:(id)arg6;
- (id)_cancelAllOperationsForReset;
- (void)_createCloudKitZoneWithCompletion:(id /* block */)arg1;
- (void)_decreaseSyncUpBatchSizeAfterError;
- (BOOL)_dumpItemsToContext:(id)arg1 error:(id*)arg2;
- (void)_dumpRecursivePropertiesOfItemByRowID:(unsigned long long)arg1 context:(id)arg2 depth:(int)arg3;
- (void)_finishedReset:(unsigned int)arg1;
- (void)_fixupMissingCrossMovedItems;
- (BOOL)_hasAllItemsDidUploadHandlers;
- (void)_increaseSyncUpBatchSizeAfterSuccess;
- (void)_markLatestSyncRequestFailed;
- (void)_markRequestIDAcked;
- (void)_mkdirAppLibraryIfNeeded:(id)arg1;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkData:(id /* block */)arg1;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(id /* block */)arg1;
- (void)_performWhileResettingClientTruths:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)_prepareForForegroundSyncDown;
- (void)_removeAllShareAcceptanceBlocks;
- (void)_removeDownloadedBlockToPerformForItemID:(id)arg1;
- (void)_removeOnDiskBlockToPerformForItemID:(id)arg1;
- (void)_removeTargetedAliasesWithCompletionBlock:(id /* block */)arg1;
- (void)_reset:(unsigned int)arg1;
- (BOOL)_resetItemsTable;
- (void)_showiCloudDriveAppInstallationNotificationIfNeeded;
- (void)_startSync;
- (void)_syncUpOfRecords:(id)arg1 createdAppLibraryNames:(id)arg2 didFinishWithError:(id)arg3;
- (void)_t_addItemID:(id)arg1 blockedForSyncUpUntilOSName:(id)arg2;
- (void)_t_flushIdleBlocks;
- (BOOL)_t_isIdle;
- (void)_t_markBlockedUntilOSName:(id)arg1;
- (id)_t_osNamesByItemIDBlockedForSyncUp;
- (void)_t_pauseSyncDown;
- (void)_t_removeAllItemIDsSyncUpBlocking;
- (void)_t_removeItemIDSyncUpBlocking:(id)arg1;
- (void)_t_resumeSyncDown;
- (id)_t_syncBlockedUntilOSName;
- (BOOL)_t_syncDownBlocked;
- (BOOL)activated;
- (void)addAppLibrary:(id)arg1;
- (void)addSyncDownDependency:(id)arg1;
- (id)appLibraries;
- (id)appLibraryIDs;
- (id)asPrivateClientZone;
- (id)asSharedClientZone;
- (void)associateWithServerZone:(id)arg1;
- (void)beginSyncBubbleActivityIfNecessary;
- (void)cancelReset;
- (void)clearStateBits:(unsigned int)arg1;
- (void)clearSyncStateBits:(unsigned int)arg1;
- (void)clearSyncUpError;
- (void)close;
- (void)createCloudKitZoneWithCompletion:(id /* block */)arg1;
- (unsigned long long)currentRequestID;
- (id)db;
- (id)dbRowID;
- (id)defaultAppLibrary;
- (id)delegate;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (void)didApplyTombstoneForRank:(long long)arg1;
- (void)didClearOutOfQuota;
- (void)didGCTombstoneRanks:(id)arg1;
- (void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(BOOL)arg3 syncDownDate:(id)arg4;
- (id)directoryItemIDByFileID:(unsigned long long)arg1;
- (id)directoryItemIDByFileID:(unsigned long long)arg1 db:(id)arg2;
- (void)disconnectNSMDQListenerAsync;
- (id)documentItemByItemID:(id)arg1;
- (id)documentItemByItemID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet { Class x1; }*)documentsNotIdleEnumerator;
- (BOOL)dumpActivityToContext:(id)arg1 error:(id*)arg2;
- (BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (BOOL)existsByItemID:(id)arg1;
- (BOOL)existsByItemID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet { Class x1; }*)faultsEnumerator;
- (void)handleRootRecordDeletion;
- (BOOL)handleZoneLevelErrorIfNeeded:(id)arg1;
- (BOOL)hasCompletedInitialSyncDownOnce;
- (BOOL)hasDefaultAppLibrary;
- (BOOL)hasHighPriorityWatchers;
- (BOOL)hasInitialFaultsEverLive;
- (BOOL)hasInitialFaultsLive;
- (unsigned int)hash;
- (id)init;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 db:(id)arg4 plist:(id)arg5 session:(id)arg6 initialCreation:(BOOL)arg7;
- (BOOL)isCloudDocsZone;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForeground;
- (BOOL)isPrivateZone;
- (BOOL)isSharedZone;
- (BOOL)isSyncBlocked;
- (BOOL)isSyncBlockedBecauseAppNotInstalled;
- (BOOL)isSyncBlockedBecauseOSNeedsUpgrade;
- (BOOL)isSyncBlockedOrBrokenStructure;
- (id)itemByDocumentID:(unsigned int)arg1;
- (id)itemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)itemByFileID:(unsigned long long)arg1;
- (id)itemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemByItemID:(id)arg1;
- (id)itemByItemID:(id)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemCountPendingUploadOrSyncUpAndReturnError:(id*)arg1;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithDB:(id)arg1;
- (struct PQLResultSet { Class x1; }*)itemsWithInFlightDiffsEnumerator;
- (id)lastAttemptedSyncDownDate;
- (long long)lastInsertedRank;
- (void)learnCKInfosFromSavedRecords:(id)arg1;
- (BOOL)needsSave;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (unsigned long long)nextSyncUpRequestID;
- (void)notifyClient:(id)arg1 afterNextSyncDown:(id /* block */)arg2;
- (void)notifyClient:(id)arg1 whenIdle:(id /* block */)arg2;
- (id)osNameRequiredToSync;
- (id)ownerName;
- (void)performBlock:(id /* block */)arg1 whenItemWithIDIsDownloaded:(id)arg2;
- (void)performBlock:(id /* block */)arg1 whenItemWithIDIsOnDisk:(id)arg2;
- (void)performBlock:(id /* block */)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2;
- (id)plist;
- (id /* block */)popDownloadedBlockForItemID:(id)arg1;
- (id /* block */)popOnDiskBlockForItemID:(id)arg1;
- (void)recomputeAllItemsDidUploadState;
- (void)registerAllItemsDidUploadTracker:(id)arg1;
- (void)removeAppLibrary:(id)arg1;
- (BOOL)removeItemIsDownloadedBlock:(id)arg1;
- (BOOL)removeItemOnDiskBlock:(id)arg1;
- (void)removeSyncDownDependency:(id)arg1;
- (BOOL)removeSyncDownForItemIDBlock:(id)arg1;
- (void)resetSyncBudgetAndThrottle;
- (void)resume;
- (void)scheduleReset:(unsigned int)arg1;
- (void)scheduleResetServerAndClientTruthsForReason:(const char *)arg1;
- (void)scheduleSyncDown;
- (void)scheduleSyncDownFirst;
- (void)scheduleSyncUp;
- (id)serverItemByItemID:(id)arg1;
- (id)serverItemByItemID:(id)arg1 db:(id)arg2;
- (id)serverItemByRowID:(unsigned long long)arg1;
- (id)serverItemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (long long)serverRankByItemID:(id)arg1;
- (long long)serverRankByItemID:(id)arg1 db:(id)arg2;
- (id)serverZone;
- (id)session;
- (void)setDbRowID:(id)arg1;
- (void)setDefaultAppLibrary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastAttemptedSyncDownDate:(id)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setServerZone:(id)arg1;
- (void)setSession:(id)arg1;
- (BOOL)setStateBits:(unsigned int)arg1;
- (void)setSyncStateBits:(unsigned int)arg1;
- (void)setupOperationForTestsIfNeeded:(id)arg1 recordsToSave:(id)arg2;
- (BOOL)shouldSyncContainerID:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (id)sizeOfItemsNeedingSyncUpOrUploadAndReturnError:(id*)arg1;
- (unsigned int)state;
- (id)syncDeadlineSource;
- (id)syncDownImmediately;
- (void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2 status:(int)arg3;
- (unsigned int)syncState;
- (id)syncThrottles;
- (unsigned int)syncUpBatchSize;
- (id)taskTracker;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)unregisterAllItemsDidUploadTracker:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (id)xattrForSignature:(id)arg1;
- (id)xattrForSignature:(id)arg1 db:(id)arg2;
- (id)zoneID;
- (id)zoneName;

@end
