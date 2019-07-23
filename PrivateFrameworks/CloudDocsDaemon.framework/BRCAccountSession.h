/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver> {
    NSString * _accountID;
    bool  _accountIsReady;
    BRCAccountWaitOperation * _accountWaitOperation;
    NSMutableDictionary * _appLibrariesByRowID;
    BRCThrottle * _appLibraryAliasRemovalThrottle;
    BRCThrottle * _appLibraryResetThrottle;
    BRCThrottle * _appLibraryScanThrottle;
    NSString * _appSupportDirPath;
    BRCApplyScheduler * _applyScheduler;
    unsigned long long  _availableDiskSpace;
    NSString * _cacheDirPath;
    BRCPQLConnection * _clientDB;
    BRCClientState * _clientState;
    int  _cloudDocsFD;
    BRCContainerScheduler * _containerScheduler;
    CDSession * _coreDuetSession;
    NSString * _databaseID;
    NSObject<OS_dispatch_queue> * _dbCorruptionQueue;
    id /* block */  _dbProfilingHook;
    NSURL * _dbURL;
    NSObject<OS_dispatch_source> * _dbWatcher;
    NSObject<OS_dispatch_queue> * _dbWatcherQueue;
    BRCDeadlineScheduler * _defaultScheduler;
    BRCDiskSpaceReclaimer * _diskReclaimer;
    BRCDownloadTrackers * _downloadTrackers;
    BRCPQLConnection * _expensiveReadOnlyDB;
    BRCFairScheduler * _fairClientDBScheduler;
    BRCFSDownloader * _fsDownloader;
    NSMutableDictionary * _fsEventsMonitors;
    BRCFSReader * _fsReader;
    BRCFSUploader * _fsUploader;
    BRCFSWriter * _fsWriter;
    BRCGlobalProgress * _globalProgress;
    bool  _isCancelled;
    bool  _isDBOpened;
    bool  _isGreedy;
    BRCItemTransmogrifier * _itemTransmogrifier;
    unsigned long long  _lastDiskSpaceCheckTime;
    NSMutableDictionary * _libraryRowIDsByMangledID;
    BRCThrottle * _lostItemThrottle;
    NSHashTable * _miscOperations;
    BRCNotificationManager * _notificationManager;
    BRCThrottle * _operationFailureThrottle;
    BRCPowerLogReporter * _powerlogReporter;
    NSMutableDictionary * _privateClientZonesByID;
    NSMutableDictionary * _privateServerZonesByID;
    BRCPQLConnection * _readOnlyDB;
    BRCRecentsEnumerator * _recentsEnumerator;
    br_pacer * _reschedulePendingDiskItemsPacer;
    NSObject<OS_dispatch_queue> * _resetQueue;
    bool  _resumed;
    NSMutableDictionary * _rootsByFolderType;
    BRCPQLConnection * _serverDB;
    BRCServerPersistedState * _serverState;
    NSMutableDictionary * _serverZonesByZoneRowID;
    BRCThrottle * _sharedAppLibraryResetThrottle;
    NSMutableDictionary * _sharedClientZonesByMangledID;
    NSMutableDictionary * _sharedServerZonesByMangledID;
    BRCStageRegistry * _stageRegistry;
    BRCThrottle * _syncClientZoneErrorThrottle;
    BRCThrottle * _syncClientZoneThrottle;
    NSMutableDictionary * _syncContexts;
    BRCSyncUpScheduler * _syncUpScheduler;
    unsigned long long  _totalDiskSpace;
    NSString * _ubiquityTokenSalt;
    br_pacer * _updateDiskSpacePacer;
    BRCUserNotification * _userNotification;
    BRCVolume * _volume;
    NSMutableSet * _xpcClients;
    struct brc_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } pthread; 
    }  _zonesCreationLock;
    struct brc_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } pthread; 
    }  _zonesLock;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) BRCAccountWaitOperation *accountWaitOperation;
@property (nonatomic, readonly) BRCThrottle *appLibraryAliasRemovalThrottle;
@property (nonatomic, readonly) BRCThrottle *appLibraryResetThrottle;
@property (nonatomic, readonly) BRCThrottle *appLibraryScanThrottle;
@property (nonatomic, retain) NSString *appSupportDirPath;
@property (nonatomic, readonly) BRCApplyScheduler *applyScheduler;
@property (nonatomic, readonly) unsigned long long availableDiskSpace;
@property (nonatomic, retain) NSString *cacheDirPath;
@property (nonatomic, readonly) BRCPQLConnection *clientDB;
@property (nonatomic, readonly) BRCClientState *clientState;
@property (nonatomic, readonly) BRCContainerScheduler *containerScheduler;
@property (nonatomic, readonly) CDSession *coreDuetSession;
@property (nonatomic, readonly) unsigned long long databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) BRCDeadlineScheduler *defaultScheduler;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BRCDiskSpaceReclaimer *diskReclaimer;
@property (nonatomic, readonly) BRCDownloadTrackers *downloadTrackers;
@property (nonatomic, readonly) BRCPQLConnection *expensiveReadOnlyDB;
@property (nonatomic, readonly) BRCFairScheduler *fairClientDBScheduler;
@property (nonatomic, readonly) BRCFSDownloader *fsDownloader;
@property (nonatomic, readonly) BRCFSReader *fsReader;
@property (nonatomic, readonly) BRCFSUploader *fsUploader;
@property (nonatomic, readonly) BRCFSWriter *fsWriter;
@property (nonatomic, readonly) BRCGlobalProgress *globalProgress;
@property (nonatomic, readonly) bool hasOptimizeStorageEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isGreedy;
@property (nonatomic, readonly) BRCItemTransmogrifier *itemTransmogrifier;
@property (nonatomic, readonly) BRCThrottle *lostItemThrottle;
@property (nonatomic, readonly) BRCNotificationManager *notificationManager;
@property (nonatomic, readonly) BRCThrottle *operationFailureThrottle;
@property (nonatomic, readonly) BRCPowerLogReporter *powerLogReporter;
@property (nonatomic, readonly) BRCPQLConnection *readOnlyDB;
@property (nonatomic, readonly) BRCRecentsEnumerator *recentsEnumerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resetQueue;
@property (nonatomic, readonly) BRCPQLConnection *serverDB;
@property (nonatomic, readonly) BRCServerPersistedState *serverState;
@property (nonatomic, readonly) BRCThrottle *sharedAppLibraryResetThrottle;
@property (nonatomic, readonly) BRCStageRegistry *stageRegistry;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BRCThrottle *syncClientZoneErrorThrottle;
@property (nonatomic, readonly) BRCThrottle *syncClientZoneThrottle;
@property (nonatomic, readonly) BRCSyncUpScheduler *syncUpScheduler;
@property (nonatomic, readonly) NSString *ubiquityTokenSalt;
@property (nonatomic, readonly) BRCUserNotification *userNotification;
@property (nonatomic, readonly) BRCVolume *volume;

+ (bool)_checkIntegrity:(id)arg1 serverTruth:(bool)arg2 session:(id)arg3 skipBackupDetection:(bool)arg4 error:(id*)arg5;
+ (bool)_openConnection:(id)arg1 databaseName:(id)arg2 baseURL:(id)arg3 readonly:(bool)arg4 error:(id*)arg5;
+ (bool)_openConnection:(id)arg1 serverTruth:(bool)arg2 databaseName:(id)arg3 baseURL:(id)arg4 initialVersion:(unsigned int*)arg5 lastCurrentVersion:(unsigned int*)arg6 error:(id*)arg7;
+ (void)_registerLastBootIfNeeded:(id)arg1 table:(struct NSObject { Class x1; }*)arg2;
+ (bool)_registerStaticDBFunctions:(id)arg1 error:(id*)arg2;
+ (bool)_validateDatabase:(id)arg1 baseURL:(id)arg2 session:(id)arg3 serverTruth:(bool)arg4 initialVersion:(unsigned int)arg5 lastCurrentVersion:(unsigned int)arg6 error:(id*)arg7;
+ (bool)openAndValidateDatabase:(id)arg1 serverTruth:(bool)arg2 session:(id)arg3 baseURL:(id)arg4 skipBackupDetection:(bool)arg5 error:(id*)arg6;
+ (id)sessionForBackingUpDatabasesAtURL:(id)arg1;
+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;
+ (bool)upgradeOfflineDB:(id)arg1 serverTruth:(bool)arg2 session:(id)arg3 error:(id*)arg4;
+ (id)userIdentityForKey:(id)arg1 db:(id)arg2;
+ (id)userIdentityForName:(id)arg1 db:(id)arg2;

- (void).cxx_destruct;
- (bool)PCSMigrationComplete;
- (id)__getOrCreateAppLibrary:(id)arg1 rowID:(id)arg2 createOnDisk:(bool)arg3 alreadyExists:(bool*)arg4 withClientZone:(id)arg5 createCZMMoved:(bool)arg6;
- (id)__getOrCreateClientZone:(id)arg1 withServerZone:(id)arg2 alreadyExists:(bool*)arg3;
- (id)__getOrCreateServerZone:(id)arg1;
- (void)__registerServerZone:(id)arg1 clientZone:(id)arg2 appLibrary:(id)arg3 isShared:(bool)arg4;
- (struct PQLResultSet { Class x1; }*)_appLibrariesEnumerator:(id)arg1;
- (id)_appLibrariesMatchingSearchString:(id)arg1;
- (void)_clearNeedsUpgradeErrors:(id)arg1 brVersion:(id)arg2;
- (id)_clientZonesMatchingSearchString:(id)arg1;
- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(bool)arg2;
- (bool)_createAppLibrary:(id)arg1;
- (bool)_createAppLibraryRootIfNeededAtPath:(id)arg1 error:(id*)arg2;
- (bool)_createAppLibraryRootsIfNeededWithError:(id*)arg1;
- (bool)_createClientZone:(id)arg1;
- (bool)_createPrivateAppLibrary:(id)arg1;
- (bool)_createSharedAppLibrary:(id)arg1;
- (bool)_deleteAppLibrary:(id)arg1;
- (bool)_deleteClientZone:(id)arg1;
- (bool)_dumpClientZone:(id)arg1 toContext:(id)arg2 includeAllItems:(bool)arg3 error:(id*)arg4;
- (void)_dumpClientZoneBlockedState:(id)arg1 toContext:(id)arg2;
- (bool)_dumpClientZoneStatus:(id)arg1 toContext:(id)arg2 error:(id*)arg3;
- (void)_enumerateAccountHandlerSupportedFolderTypes:(id /* block */)arg1;
- (void)_enumerateAppLibraryRowIDs:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)_finishClientTruthConnectionSetupWithError:(id*)arg1;
- (bool)_finishServerTruthConnectionSetupWithError:(id*)arg1;
- (id)_getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 creationFlags:(unsigned int*)arg2;
- (bool)_getRootPathXattrValue:(id*)arg1 forRootPath:(id)arg2 error:(id*)arg3;
- (void)_loadClientZonesFromDisk;
- (id)_old_privateAppLibraryByZoneName:(id)arg1 db:(id)arg2;
- (bool)_openConnection:(id)arg1 databaseName:(id)arg2 readonly:(bool)arg3 error:(id*)arg4;
- (id)_privateClientZoneByID:(id)arg1 db:(id)arg2;
- (id)_privateClientZoneByName:(id)arg1 db:(id)arg2;
- (struct PQLResultSet { Class x1; }*)_privateClientZonesEnumerator:(id)arg1;
- (id)_privateServerZoneByName:(id)arg1 db:(id)arg2;
- (struct PQLResultSet { Class x1; }*)_privateServerZonesEnumerator:(id)arg1;
- (void)_recreateSymlinkIfNecessaryForDocumentsPath:(id)arg1 folderName:(id)arg2 destinationPath:(id)arg3;
- (bool)_recursivelyPrepareFolderForLogOutAtURL:(id)arg1 pruneEmptyFolders:(bool)arg2 pruneEmptyTopLevelFolder:(bool)arg3 maxDepth:(unsigned long long)arg4;
- (bool)_registerDynamicDBFunctions:(id)arg1 error:(id*)arg2;
- (id)_reserveRowIDForLibrary:(id)arg1;
- (void)_resolvePathInMobileDocsRoot:(id)arg1 appLibrary:(id*)arg2;
- (bool)_setRootPathXattrValue:(id)arg1 forRootPath:(id)arg2 error:(id*)arg3;
- (void)_setUserIdentity:(id)arg1 forName:(id)arg2;
- (bool)_setupBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (bool)_setupConnection:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (void)_setupSharedPackageExtensionsPlist;
- (void)_setupThrottles;
- (struct PQLResultSet { Class x1; }*)_sharedClientZonesEnumerator:(id)arg1;
- (id)_sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (struct PQLResultSet { Class x1; }*)_sharedServerZonesEnumerator:(id)arg1;
- (bool)_shouldPrivateAppLibraryBeCZMMoved:(id)arg1;
- (void)_startWatcher;
- (bool)_stepBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 newState:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg2 error:(id*)arg3;
- (id)_syncContextForContextIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 isShared:(bool)arg3 createIfNeeded:(bool)arg4;
- (id)_unloadClientZones;
- (id)accountID;
- (unsigned long long)accountSize;
- (id)accountStatisticsWithDB:(id)arg1;
- (id)accountWaitOperation;
- (void)addMiscOperation:(id)arg1;
- (void)addOfflineAppLibrary:(id)arg1;
- (void)addOfflineClientZone:(id)arg1;
- (void)addOfflineServerZone:(id)arg1;
- (id)allSyncContexts;
- (id)appLibraries;
- (id)appLibrariesMatchingSearchString:(id)arg1 error:(id*)arg2;
- (id)appLibraryAliasRemovalThrottle;
- (id)appLibraryByID:(id)arg1;
- (id)appLibraryByMangledID:(id)arg1;
- (id)appLibraryByRowID:(id)arg1;
- (id)appLibraryResetThrottle;
- (id)appLibraryScanThrottle;
- (id)appSupportDirPath;
- (id)applyScheduler;
- (bool)applySyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2 isInitialCreation:(bool)arg3 error:(id*)arg4;
- (unsigned long long)availableDiskSpace;
- (void)availableDiskSpaceDidChange;
- (unsigned long long)availableDiskSpaceUsingCache:(bool)arg1;
- (unsigned long long)availableDiskSpaceUsingCache:(bool)arg1 schedulingPendingDiskItemsIfNeeded:(bool)arg2;
- (bool)backupDatabaseToURL:(id)arg1 error:(id*)arg2;
- (struct PQLResultSet { Class x1; }*)bouncedItemsEnumerator;
- (id)cacheDirPath;
- (id)clientDB;
- (id)clientState;
- (id)clientZoneByMangledID:(id)arg1;
- (id)clientZones;
- (id)clientZonesMatchingSearchString:(id)arg1 error:(id*)arg2;
- (void)close;
- (void)closeAndResetLocalState;
- (void)closeDBs;
- (void)closeXPCClientsSync;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (id)cloudDocsClientZone;
- (id)containerScheduler;
- (id)coreDuetSession;
- (bool)createAppLibrariesIfNeededWithError:(id*)arg1;
- (bool)createAppLibraryOnDisk:(id)arg1 createdRoot:(bool*)arg2 createdDocuments:(bool*)arg3 rootFileID:(unsigned long long*)arg4;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (id)createFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)createRootForSyncedFolderType:(unsigned long long)arg1;
- (bool)createServerZone:(id)arg1;
- (id)createUserKeyForName:(id)arg1;
- (unsigned long long)databaseID;
- (void)dbBecameCorrupted;
- (void)dealloc;
- (id)defaultScheduler;
- (id)defaultSyncContext;
- (bool)deleteServerZone:(id)arg1;
- (id)description;
- (void)destroyLocalData;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(bool)arg1 pristineContainerIDs:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)destroyLocalDataWithPristineContainerIDs:(id)arg1;
- (void)destroySharedClientZone:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (id)dirPathForSyncedFolderType:(unsigned long long)arg1;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (bool)disableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(bool)arg2 error:(id*)arg3;
- (id)diskReclaimer;
- (id)downloadTrackers;
- (bool)dumpDatabaseToFileHandle:(id)arg1 zoneName:(id)arg2 includeAllItems:(bool)arg3 tracker:(id)arg4 error:(id*)arg5;
- (bool)dumpFileCoordinationInfoToFileHandle:(id)arg1 error:(id*)arg2;
- (void)dumpMiscOperationsToContext:(id)arg1;
- (bool)dumpStatusToFileHandle:(id)arg1 zoneName:(id)arg2 tracker:(id)arg3 error:(id*)arg4;
- (void)dumpXPCClientsToContext:(id)arg1;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (bool)enableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(bool)arg2 error:(id*)arg3;
- (void)enumerateAppLibraries:(id /* block */)arg1;
- (void)enumerateClientZones:(id /* block */)arg1;
- (void)enumerateFileTypesWithFilterBlock:(id /* block */)arg1 enumerationBlock:(id /* block */)arg2;
- (void)enumerateItemsWithShareIDUnderParent:(id)arg1 db:(id)arg2 block:(id /* block */)arg3;
- (void)enumeratePrivateClientZones:(id /* block */)arg1;
- (void)enumeratePrivateServerZones:(id /* block */)arg1;
- (void)enumerateServerZones:(id /* block */)arg1;
- (void)enumerateSharedClientZones:(id /* block */)arg1;
- (void)enumerateSupportedFolderTypes:(id /* block */)arg1;
- (id)expensiveReadOnlyDB;
- (id)fairClientDBScheduler;
- (id)fallbackAppLibraryForClientZone:(id)arg1 extension:(id)arg2;
- (id)fetchAccountWaitOperationWithAccountReady:(bool*)arg1;
- (struct PQLResultSet { Class x1; }*)foldersNeedingTransmogrifyEnumerator;
- (id)fsDownloader;
- (id)fsEventsMonitorForAppLibraryID:(id)arg1;
- (id)fsEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitors;
- (id)fsReader;
- (id)fsUploader;
- (id)fsWriter;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 appLibraryExists:(bool*)arg2;
- (id)getOrCreateSharedZones:(id)arg1;
- (id)getOrReserveLibraryRowIDForLibrary:(id)arg1;
- (bool)globalID:(id)arg1 isStrictChildOfGlobalID:(id)arg2;
- (id)globalItemByDocumentID:(unsigned int)arg1;
- (id)globalItemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)globalItemByFileID:(unsigned long long)arg1;
- (id)globalItemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)globalProgress;
- (bool)hasFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (bool)hasOptimizeStorageEnabled;
- (bool)hasRootForSyncedFolderType:(unsigned long long)arg1;
- (id)init;
- (id)initWithAccountID:(id)arg1 salt:(id)arg2;
- (bool)initializeOfflineDatabaseWhileUpgrading:(bool)arg1 error:(id*)arg2;
- (bool)isCancelled;
- (bool)isGreedy;
- (id)itemByItemGlobalID:(id)arg1;
- (id)itemByItemGlobalID:(id)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemTransmogrifier;
- (struct PQLResultSet { Class x1; }*)itemsNeedingIndexingEnumeratorFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;
- (void)learnOwnerIdentityForShare:(id)arg1 forceUpdate:(bool)arg2;
- (id)localAliasForSharedItem:(id)arg1 inZone:(id)arg2;
- (id)lostItemThrottle;
- (void)markAccountMigrationComplete;
- (id)newAppLibraryFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newConnection:(id)arg1;
- (id)newConnectionWithLabel:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (id)newLocalItemFromPQLResultSet:(id)arg1 db:(id)arg2 error:(id*)arg3;
- (id)newPrivateClientZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newServerItemFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newSharedClientZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)notificationManager;
- (bool)openAndValidateDatabase:(id)arg1 serverTruth:(bool)arg2 error:(id*)arg3;
- (bool)openDBWithError:(id*)arg1;
- (void)openForDumping;
- (bool)openWithError:(id*)arg1;
- (id)operationFailureThrottle;
- (id)pendingDownloadItemWithDocumentID:(unsigned int)arg1;
- (void)performBlock:(id /* block */)arg1 whileRemovingPrivateClientZone:(id)arg2;
- (id)powerLogReporter;
- (void)preventDatabaseFromBeingReused;
- (id)privateClientZoneByID:(id)arg1;
- (id)privateServerZoneByID:(id)arg1;
- (id)readOnlyDB;
- (id)recentsEnumerator;
- (void)recomputeAppSyncBlockStateForPrivateClientZone:(id)arg1;
- (void)recreateDesktopSymlinksIfNecessary;
- (bool)registerClient:(id)arg1;
- (void)removeDesktopSymlink:(bool)arg1 andDocumentsSymlink:(bool)arg2;
- (void)removeFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (void)removeRootForSyncedFolderType:(unsigned long long)arg1;
- (id)resetQueue;
- (void)resetThrottles;
- (int)resolvePathAdditionalMetadata:(id)arg1 appLibrary:(id*)arg2;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(bool)arg2 allowResolveInPkg:(bool)arg3 errcode:(int*)arg4;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(bool)arg2 errcode:(int*)arg3;
- (void)resume;
- (id)rootForSyncedFolderType:(unsigned long long)arg1;
- (id)roots;
- (bool)saveAppLibraryToDB:(id)arg1;
- (bool)saveClientZoneToDB:(id)arg1;
- (bool)saveServerZoneToDB:(id)arg1;
- (void)scheduleZoneMovesToCloudDocs:(id)arg1;
- (id)serverAliasItemForSharedItem:(id)arg1;
- (id)serverAliasItemForSharedItem:(id)arg1 db:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2 db:(id)arg3;
- (id)serverDB;
- (id)serverState;
- (id)serverZoneByMangledID:(id)arg1;
- (id)serverZoneByName:(id)arg1 ownerName:(id)arg2;
- (id)serverZoneByRowID:(id)arg1;
- (void)setAppSupportDirPath:(id)arg1;
- (void)setCacheDirPath:(id)arg1;
- (void)setFSEventsMonitor:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)setNeedsPCSMigration:(bool)arg1;
- (void)setOptimizeStorageEnabled:(bool)arg1;
- (void)setRoot:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)setupDatabase;
- (id)sharedAppLibraryResetThrottle;
- (id)sharedClientZoneByMangledID:(id)arg1;
- (id)sharedServerZoneByMangledID:(id)arg1;
- (id)sharedSyncContext;
- (bool)shouldPathBeDesktopSymlink:(id)arg1;
- (bool)shouldPerformPCSMigration;
- (id)singleAppLibraryMatchingSearchString:(id)arg1 error:(id*)arg2;
- (id)singleClientZoneMatchingSearchString:(id)arg1 error:(id*)arg2;
- (id)stageRegistry;
- (struct PQLResultSet { Class x1; }*)stagedItemsEnumerator;
- (void)startDownloadsForGreediness;
- (void)stopDBWatcher;
- (id)syncClientZoneErrorThrottle;
- (id)syncClientZoneThrottle;
- (id)syncContextForMangledID:(id)arg1;
- (id)syncContextForMangledID:(id)arg1 createIfNeeded:(bool)arg2;
- (id)syncContextForMangledID:(id)arg1 metadata:(bool)arg2;
- (id)syncContextForMangledID:(id)arg1 metadata:(bool)arg2 createIfNeeded:(bool)arg3;
- (id)syncUpScheduler;
- (unsigned long long)syncedFolderTypeForURL:(id)arg1;
- (unsigned long long)totalEvictableSizeWithAccessTimeDelta:(double)arg1 db:(id)arg2;
- (id)ubiquityTokenSalt;
- (void)unregisterClient:(id)arg1;
- (void)userDefaultsChanged;
- (id)userIdentityForKey:(id)arg1;
- (id)userKeyForName:(id)arg1 db:(id)arg2;
- (id)userNameForKey:(id)arg1 db:(id)arg2;
- (id)userNotification;
- (id)volume;
- (id)zoneHealthSyncContext;

@end
