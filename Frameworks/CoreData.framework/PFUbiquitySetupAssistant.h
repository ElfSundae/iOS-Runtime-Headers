/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySetupAssistant : NSObject {
    BOOL _abortSetup;
    NSURL *_actualStoreFileURL;
    PFUbiquityBaseline *_baseline;
    BOOL _baselineFileExistsInCloud;
    PFUbiquityKnowledgeVector *_baselineKV;
    BOOL _cacheFilePresenterForUbiquityRoot;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    BOOL _didBaselineCopy;
    BOOL _didMigrateBaseline;
    NSMutableDictionary *_entityNameToGidSet;
    PFUbiquitySwitchboardEntry *_entry;
    BOOL _failSetup;
    NSError *_failSetupError;
    NSMutableDictionary *_gidToRid;
    BOOL _gotAccountChange;
    BOOL _gotExportNotification;
    BOOL _hasContainerUUID;
    BOOL _hasContainerUUIDInStore;
    BOOL _hasLocalTransactionLogs;
    BOOL _hasMigrationOptions;
    BOOL _hasStoreMetadataEntry;
    BOOL _hasStoreMetadataFile;
    BOOL _hasUploadingBaseline;
    BOOL _haveExistingUUIDMappings;
    int _initialSyncComplete;
    NSObject<OS_dispatch_semaphore> *_initialSyncSemaphore;
    NSString *_localPeerID;
    PFUbiquityPeerReceipt *_localPeerReceipt;
    PFUbiquityPeerState *_localPeerState;
    PFUbiquityLocation *_localRootLocation;
    NSMutableSet *_logLocationsExportedDuringSideLoad;
    PFUbiquityKnowledgeVector *_metaKV;
    PFUbiquityMigrationAssistant *_migrationAssistant;
    PFUbiquityMigrationManager *_migrationManager;
    NSString *_modelVersionHash;
    BOOL _monitorUploadingBaselineAsync;
    BOOL _needsMetadataRecovery;
    BOOL _needsMetadataWrite;
    BOOL _notifyAboutSetupProgress;
    int _numSetupTries;
    NSMutableDictionary *_options;
    NSString *_preStoreContainerUUID;
    NSString *_previousModelVersionHash;
    NSPersistentStoreCoordinator *_psc;
    NSMutableArray *_queryLocations;
    BOOL _reapUbiquitousLogs;
    PFUbiquityKnowledgeVector *_receiptKV;
    BOOL _replayLogsSynchronously;
    BOOL _respondToBaselineRoll;
    unsigned int _retryDelaySec;
    BOOL _seedStore;
    NSURL *_seedStoreURL;
    int _sideLoadLock;
    _PFUbiquityStack *_stack;
    NSPersistentStore *_store;
    BOOL _storeFileExists;
    BOOL _storeFileIsReadOnly;
    PFUbiquityKnowledgeVector *_storeKV;
    PFUbiquityStoreMetadata *_storeMetadata;
    NSMutableDictionary *_storeMetadataDict;
    NSString *_storeType;
    NSURL *_storeURL;
    BOOL _storeWasMigrated;
    NSString *_ubiquityContainerIdentifier;
    BOOL _ubiquityEnabled;
    <NSObject><NSCopying><NSCoding> *_ubiquityIdentityToken;
    NSString *_ubiquityName;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootSubpath;
    NSURL *_ubiquityRootURL;
    BOOL _useLocalAccount;
    BOOL _usedExistingUUIDMapping;
    BOOL _votedOffIsland;
}

@property (nonatomic) BOOL abortSetup;
@property (nonatomic, readonly) NSURL *actualStoreFileURL;
@property (nonatomic) BOOL cacheFilePresenterForUbiquityRoot;
@property (nonatomic, readonly) PFUbiquityContainerIdentifier *containerIdentifier;
@property (nonatomic) BOOL failSetup;
@property (nonatomic, retain) NSError *failSetupError;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) PFUbiquityLocation *localRootLocation;
@property (nonatomic, readonly) BOOL needsMetadataRecovery;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic) unsigned int retryDelaySec;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *storeKV;
@property (nonatomic) BOOL storeWasMigrated;
@property (nonatomic, readonly) BOOL ubiquityEnabled;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSURL *ubiquityRootURL;
@property (nonatomic, readonly) BOOL useLocalAccount;

+ (void)cleanUserDefaultsForStore:(id)arg1;
+ (id)createActualStoreURLForStoreURL:(id)arg1 localPeerID:(id)arg2 containerIdentifier:(id)arg3 andStoreName:(id)arg4;
+ (id)createBaselineFromMostRecentLocation:(id)arg1 localPeerID:(id)arg2 error:(id*)arg3;
+ (id)createDefaultLocalPeerID;
+ (BOOL)doBasicSanityCheckForUbiquityRootURL:(id)arg1 withError:(id*)arg2;
+ (id)findContainerIDForToken:(id)arg1 storeName:(id)arg2 haveExistingMappings:(BOOL*)arg3;
+ (id)generateMachineUUIDString;
+ (void)removeUbiquityMetadataFromStore:(id)arg1;
+ (void)setContainerIdentifierUUID:(id)arg1 forIdentityToken:(id)arg2 forStoreName:(id)arg3;
+ (BOOL)ubiquityMetadataTablesPresentInStore:(id)arg1;

- (void)_setUbiquityRootLocation:(id)arg1 storeName:(id)arg2 localPeerID:(id)arg3 andModelVersionHash:(id)arg4;
- (BOOL)abortSetup;
- (id)actualStoreFileURL;
- (BOOL)attemptMetadataRecoveryForStore:(id)arg1 error:(id*)arg2;
- (BOOL)cacheFilePresenterForUbiquityRoot;
- (BOOL)canReadFromUbiquityRootLocation:(id*)arg1;
- (BOOL)checkAndPerformMigrationForStore:(id)arg1 error:(id*)arg2;
- (BOOL)checkKnowledgeVectorsAndBaselineWithStore:(id)arg1 error:(id*)arg2;
- (BOOL)cleanUpFromFailedSetup:(id*)arg1;
- (id)containerIdentifier;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (id)createSetOfLocalLogLocations:(id*)arg1;
- (void)dealloc;
- (BOOL)detectAndFixForkedContainer:(BOOL)arg1 store:(id)arg2 error:(id*)arg3;
- (BOOL)doPostValidationInit:(id*)arg1;
- (void)exportedLog:(id)arg1;
- (BOOL)failSetup;
- (id)failSetupError;
- (BOOL)finishSetupForStore:(id)arg1 error:(id*)arg2;
- (void)finishSetupWithRetry:(id)arg1;
- (void)fixdictionary:(id)arg1 withDeletes:(id)arg2;
- (id)getCurrentUbiquityIdentityToken;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4;
- (void)initialSyncComplete;
- (BOOL)initializeBaselineForStore:(id)arg1 error:(id*)arg2;
- (BOOL)initializeContainerIdentifierWithStore:(id)arg1 error:(id*)arg2;
- (BOOL)initializeReceiptFile:(id*)arg1;
- (BOOL)initializeStack:(id*)arg1;
- (BOOL)initializeStoreKnowledgeVectorFromStore:(id)arg1 error:(id*)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inBigramManagedObjectContext:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryJPManagedObjectContext:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryManagedObjectContext:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inUserDictionaryManagedObjectContext:(id)arg2;
- (BOOL)isInitialSyncComplete;
- (id)localPeerID;
- (id)localRootLocation;
- (id)longDescription;
- (BOOL)migrateMetadataRoot:(id*)arg1;
- (id)migrationAssistant;
- (BOOL)moveLocalLogFilesToUbiquityLocation:(id*)arg1;
- (BOOL)needsMetadataRecovery;
- (id)options;
- (BOOL)performCoordinatorPostStoreSetup:(id)arg1 error:(id*)arg2;
- (BOOL)pruneStagingDirectoryForStore:(id)arg1 error:(id*)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (BOOL)respondToBaselineRoll:(id*)arg1;
- (unsigned int)retryDelaySec;
- (BOOL)rewriteTransactionLogs:(id)arg1 toMatchStore:(id)arg2 error:(id*)arg3;
- (BOOL)seedStore:(id)arg1 error:(id*)arg2;
- (void)setAbortSetup:(BOOL)arg1;
- (void)setCacheFilePresenterForUbiquityRoot:(BOOL)arg1;
- (void)setFailSetup:(BOOL)arg1;
- (void)setFailSetupError:(id)arg1;
- (void)setRetryDelaySec:(unsigned int)arg1;
- (void)setStoreWasMigrated:(BOOL)arg1;
- (BOOL)sideLoadStore:(id)arg1 error:(id*)arg2;
- (id)storeKV;
- (BOOL)storeWasMigrated;
- (BOOL)tryToReplaceLocalStore:(id)arg1 withStoreSideLoadedByImporter:(id)arg2;
- (BOOL)ubiquityEnabled;
- (void)ubiquityIdentityTokenChanged:(id)arg1;
- (id)ubiquityRootLocation;
- (id)ubiquityRootURL;
- (void)updateDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)updateDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (BOOL)useLocalAccount;
- (BOOL)validateOptionsWithError:(id*)arg1;

@end
