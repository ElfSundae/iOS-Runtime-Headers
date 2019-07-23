/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCLocalContainer : NSObject <BRCContainer> {
    NSMutableSet *_XPCClientsUsingUbiquity;
    BOOL _activated;
    unsigned int _activeAliasQueries;
    unsigned int _activeQueries;
    unsigned int _activeRecursiveQueries;
    NSMutableIndexSet *_appliedTombstoneRanks;
    NSString *_containerID;
    NSDate *_dateWhenLastForegroundClientLeft;
    PQLConnection *_db;
    NSNumber *_dbRowID;
    NSNumber *_deepScanStamp;
    <BRCLocalContainerDelegate> *_delegate;
    NSMutableDictionary *_downloadedBlockToPerformForItemID;
    NSNumber *_fileID;
    NSMutableSet *_foregroundClients;
    NSObject<OS_dispatch_queue> *_foregroundStateQueue;
    NSNumber *_generationID;
    BOOL _isInitialCreation;
    NSString *_lastForegroundClientDescription;
    long long _lastInsertedRank;
    NSDate *_lastSyncDownDate;
    NSError *_lastSyncDownError;
    NSError *_lastSyncUpError;
    long long _lostHeapKey;
    NSString *_mangledID;
    unsigned long long _maxLostStamp;
    BOOL _needsSave;
    int _notifyTokenForFramework;
    NSMutableDictionary *_onDiskBlockToPerformForItemID;
    NSMutableIndexSet *_pendingCoordinatedIOs;
    NSMutableSet *_pendingFileCoordinators;
    BRCThrottleBase *_readerThrottle;
    unsigned long long _requestID;
    NSObject<OS_dispatch_source> *_resetTimer;
    BRCServerZone *_serverZone;
    BRCAccountSession *_session;
    BOOL _shouldForceContainerForeground;
    unsigned int _state;
    BRCDeadlineToken *_syncDeadlineToken;
    id _syncDeadlineTokenResumer;
    NSMutableDictionary *_syncDownBlockToPerformForBookmarkData;
    NSMutableDictionary *_syncDownBlockToPerformForItemID;
    BRCSyncDownOperation *_syncDownOperation;
    BRCSyncOperationThrottle *_syncDownThrottle;
    unsigned int _syncState;
    NSArray *_syncThrottles;
    BRCSyncBudgetThrottle *_syncUpBudget;
    BRCSyncUpOperation *_syncUpOperation;
    long long _syncUpRetryAfter;
    BRCSyncOperationThrottle *_syncUpThrottle;
    NSObject<OS_dispatch_source> *_timerForGraceForegroundPeriod;
}

@property (nonatomic, readonly) NSString *absolutePath;
@property (nonatomic, readonly) BOOL activated;
@property (nonatomic, retain) NSString *containerID;
@property (nonatomic, readonly) unsigned long long currentRequestID;
@property (nonatomic, readonly) PQLConnection *db;
@property (nonatomic, retain) NSNumber *dbRowID;
@property (nonatomic, readonly) NSNumber *deepScanStamp;
@property (nonatomic, retain) <BRCLocalContainerDelegate> *delegate;
@property (nonatomic, readonly) NSNumber *fileID;
@property (nonatomic, readonly) NSNumber *generationID;
@property (readonly) BOOL hasActiveAliasQueries;
@property (readonly) BOOL hasActiveQueries;
@property (readonly) BOOL hasActiveRecursiveQueries;
@property (nonatomic, readonly) BOOL hasHighPriorityWatchers;
@property (nonatomic, readonly) BOOL isForeground;
@property (nonatomic, readonly) BOOL isGreedy;
@property (nonatomic, readonly) BOOL isPrivateContainer;
@property (nonatomic, readonly) BOOL isSharedContainer;
@property (nonatomic, readonly) long long lastInsertedRank;
@property (nonatomic, readonly) unsigned long long lostHeapKey;
@property (nonatomic, readonly) NSString *mangledID;
@property (nonatomic) BOOL needsSave;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSString *pathRelativeToRoot;
@property (nonatomic, readonly) NSMutableIndexSet *pendingCoordinatedIOs;
@property (nonatomic, readonly) NSMutableDictionary *plist;
@property (nonatomic, retain) BRCServerZone *serverZone;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) BRCDeadlineToken *syncDeadlineToken;
@property (readonly) unsigned int syncState;
@property (nonatomic, readonly) NSArray *syncThrottles;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_armForegroundGraceTimerForClientDescription:(id)arg1;
- (id)_cancelAllOperationsForReset;
- (BOOL)_dumpItemsToContext:(id)arg1 error:(id*)arg2;
- (BOOL)_fetchNextLostItemID:(id*)arg1 parentID:(id*)arg2 stamp:(long long*)arg3;
- (void)_finishedReset:(unsigned int)arg1;
- (void)_learnCKInfosFromSavedRecords:(id)arg1;
- (void)_markLatestSyncRequestFailed;
- (void)_markRequestIDAcked;
- (void)_mkdirContainerIfNeeded;
- (void)_notifyContainerBeingNowForeground;
- (void)_notifyFrameworkContainersMonitorWithState:(BOOL)arg1;
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
- (void)_showiCloudDriveAppUpSellDialogIfNeeded;
- (void)_startSync;
- (void)_syncUpOfRecords:(id)arg1 didFinishWithError:(id)arg2;
- (id)absolutePath;
- (BOOL)activated;
- (void)addClientUsingUbiquity:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (unsigned long long)allocateLostStampAddingBackoff:(BOOL)arg1;
- (id)asPrivateContainer;
- (id)asSharedContainer;
- (void)associateWithServerZone:(id)arg1;
- (unsigned long long)backoffBeforeProcessingLostItemWithStamp:(unsigned long long)arg1;
- (void)cancelFileCoordinators;
- (void)cancelReset;
- (void)clearStateBits:(unsigned int)arg1;
- (void)clearSyncStateBits:(unsigned int)arg1;
- (void)clearSyncUpError;
- (void)close;
- (id)containerID;
- (id)coordinatorForItem:(id)arg1 forRead:(BOOL)arg2;
- (unsigned long long)currentRequestID;
- (id)db;
- (id)dbRowID;
- (void)dealloc;
- (id)deepScanStamp;
- (id)delegate;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (void)didApplyTombstoneForRank:(long long)arg1;
- (void)didClearOutOfQuota;
- (void)didCreateDocumentScopedItem;
- (void)didFindLostItem:(id)arg1;
- (void)didGCTombstoneRanks:(id)arg1;
- (void)didReceiveHandoffRequest;
- (void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(BOOL)arg3 syncDownDate:(id)arg4;
- (id)directoryItemIDByFileID:(unsigned long long)arg1;
- (unsigned long long)documentCount;
- (unsigned long long)documentEvictableSizeUsage;
- (unsigned long long)documentEvictableSizeUsageWithAccessTimeDelta:(double)arg1;
- (unsigned long long)documentEvictableSizeUsageWithUrgency:(int)arg1;
- (id)documentItemByItemID:(id)arg1;
- (unsigned long long)documentSizeUsage;
- (struct PQLResultSet { Class x1; }*)documentsNotIdleEnumerator;
- (BOOL)dumpActivityToContext:(id)arg1 error:(id*)arg2;
- (BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (BOOL)evictItem:(id)arg1 group:(id)arg2 error:(id*)arg3;
- (BOOL)existsByItemID:(id)arg1;
- (id)fileID;
- (id)fileIDForDirectoryItemID:(id)arg1 db:(id)arg2;
- (id)generationID;
- (BOOL)handleResetErrorIfNeeded:(id)arg1;
- (void)handleRootRecordDeletion;
- (BOOL)hasActiveAliasQueries;
- (BOOL)hasActiveQueries;
- (BOOL)hasActiveRecursiveQueries;
- (BOOL)hasCompletedInitialSyncDownOnce;
- (BOOL)hasDocumentsOrDirectory;
- (BOOL)hasHighPriorityWatchers;
- (BOOL)hasLocalChanges;
- (BOOL)hasUbiquitousDocuments;
- (BOOL)hasUbiquityClientsConnected;
- (unsigned int)hash;
- (id)init;
- (id)initForCreationWithContainerID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 session:(id)arg4;
- (id)initWithContainerID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 session:(id)arg4 initialCreation:(BOOL)arg5;
- (id)initWithPlist:(id)arg1 containerID:(id)arg2 dbRowID:(id)arg3 db:(id)arg4 session:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForeground;
- (BOOL)isGreedy;
- (BOOL)isPrivateContainer;
- (BOOL)isSharedContainer;
- (id)itemByDocumentID:(unsigned int)arg1;
- (id)itemByFileID:(unsigned long long)arg1;
- (id)itemByItemID:(id)arg1;
- (id)itemByRowID:(unsigned long long)arg1;
- (struct PQLResultSet { Class x1; }*)itemsEnumerator;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithDB:(id)arg1;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 shouldIncludeFolders:(BOOL)arg4 shouldIncludeAliases:(BOOL)arg5 shouldIncludeDataScope:(BOOL)arg6 shouldIncludeDocumentsScope:(BOOL)arg7 count:(unsigned long long)arg8;
- (struct PQLResultSet { Class x1; }*)itemsWithInFlightDiffsEnumerator;
- (long long)lastInsertedRank;
- (struct PQLResultSet { Class x1; }*)liveTargetedAliasesEnumeratorWithCount:(unsigned long long)arg1;
- (unsigned long long)lostHeapKey;
- (id)mangledID;
- (unsigned int)markChildrenLostForItemID:(id)arg1;
- (BOOL)needsSave;
- (id)newLocalItemFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)nextLostItemIDWithBackoff:(long long*)arg1 now:(long long)arg2;
- (unsigned long long)nextSyncUpRequestID;
- (id)ownerName;
- (id)pathRelativeToRoot;
- (id)pendingCoordinatedIOs;
- (void)performBlock:(id /* block */)arg1 whenItemWithIDIsDownloaded:(id)arg2;
- (void)performBlock:(id /* block */)arg1 whenItemWithIDIsOnDisk:(id)arg2;
- (void)performBlock:(id /* block */)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2;
- (id)plist;
- (id /* block */)popDownloadedBlockForItemID:(id)arg1;
- (id /* block */)popOnDiskBlockForItemID:(id)arg1;
- (void)registerQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
- (void)removeClientUsingUbiquity:(id)arg1;
- (void)removeForegroundClient:(id)arg1;
- (BOOL)removeItemIsDownloadedBlock:(id)arg1;
- (BOOL)removeItemOnDiskBlock:(id)arg1;
- (BOOL)removeSyncDownForItemIDBlock:(id)arg1;
- (void)resetSyncBudgetAndThrottle;
- (void)resume;
- (void)scheduleDeepScan;
- (void)scheduleReset:(unsigned int)arg1;
- (void)scheduleResetServerAndClientTruthsForReason:(const char *)arg1;
- (void)scheduleSyncDown;
- (void)scheduleSyncDownFirst;
- (void)scheduleSyncUp;
- (id)serverItemByItemID:(id)arg1;
- (long long)serverRankByItemID:(id)arg1;
- (id)serverZone;
- (id)session;
- (void)setContainerID:(id)arg1;
- (void)setDbRowID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setServerZone:(id)arg1;
- (void)setSession:(id)arg1;
- (BOOL)setStateBits:(unsigned int)arg1;
- (void)setSyncDisabled:(BOOL)arg1;
- (void)setSyncStateBits:(unsigned int)arg1;
- (void)signalFaultingWatchers:(id)arg1;
- (void)startDownloadItem:(id)arg1 options:(unsigned int)arg2 group:(id)arg3;
- (void)startDownloadingItemsUsingGroup:(id)arg1;
- (unsigned int)state;
- (id)syncDeadlineToken;
- (id)syncDownImmediately;
- (void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2;
- (unsigned int)syncState;
- (id)syncThrottles;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)unregisterQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (id)url;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (id)xattrForSignature:(id)arg1;

@end
