/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementStoreProtocol> {
    _KSTextReplacementCKStore * _ckStore;
    <_KSMigrationDelegate> * _delegate;
    BOOL  _deviceDidMigrateOnCloud;
    BOOL  _didCheckMigrationOnCloud;
    BOOL  _didMigrateForCurrentAccount;
    NSString * _directoryPath;
    _KSTextReplacementLegacyStore * _legacyStore;
    NSObject<OS_dispatch_queue> * _migrationQueue;
    BOOL  _pendingMigration;
    NSObject<_KSTextReplacementStoreProtocol> * _textReplacementStore;
}

@property (nonatomic, retain) _KSTextReplacementCKStore *ckStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_KSMigrationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceDidMigrateOnCloud;
@property (nonatomic) BOOL didCheckMigrationOnCloud;
@property (nonatomic) BOOL didMigrateForCurrentAccount;
@property (nonatomic, copy) NSString *directoryPath;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _KSTextReplacementLegacyStore *legacyStore;
@property (nonatomic) BOOL pendingMigration;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<_KSTextReplacementStoreProtocol> *textReplacementStore;

+ (id)textReplacementStoreWithTestDirectory:(id)arg1 withDelegate:(id)arg2 forceMigration:(BOOL)arg3 forceCloudKitSync:(BOOL)arg4;

- (void).cxx_destruct;
- (void)_migrateDevice;
- (void)_migrateEntriesSinceDate:(id)arg1 repeatCount:(unsigned int)arg2;
- (void)accountDidChange:(id)arg1;
- (void)checkForMigration;
- (id)ckStore;
- (void)dealloc;
- (id)delegate;
- (BOOL)deviceDidMigrate;
- (BOOL)deviceDidMigrateOnCloud;
- (BOOL)didCheckMigrationOnCloud;
- (BOOL)didMigrateForCurrentAccount;
- (id)directoryPath;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithDirectoryPath:(id)arg1;
- (id)initWithDirectoryPath:(id)arg1 ignoreMigrationBatchCheck:(BOOL)arg2 forceCloudKitSync:(BOOL)arg3;
- (id)legacyStore;
- (void)migrateLegacyStore;
- (void)migrateLocallyCheckCompatibility:(BOOL)arg1;
- (double)minimumUptimeRemaining;
- (void)notifyTextReplacementDidChange;
- (BOOL)pendingMigration;
- (void)pullMigrationSettings;
- (void)pushAllLocalRecordsOnceIfNeeded;
- (void)recordSyncStatus;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)resetMigrationState;
- (void)respondToMigrationCompatibilityChange:(id)arg1;
- (void)respondToMigrationCompletion;
- (void)setCkStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceDidMigrateOnCloud:(BOOL)arg1;
- (void)setDidCheckMigrationOnCloud:(BOOL)arg1;
- (void)setDidMigrateForCurrentAccount:(BOOL)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setLegacyStore:(id)arg1;
- (void)setPendingMigration:(BOOL)arg1;
- (void)setTextReplacementStore:(id)arg1;
- (BOOL)shouldMigrateToCloudKit;
- (id)textReplacementStore;

@end
