/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoPairingEntity : HDHealthEntity {
    NSString * _defaultSourceBundleIdentifier;
    NSString * _deviceIdentifier;
    HDNanoPairingEntity * _entity;
    NSUUID * _healthDatabaseUUID;
    NSUUID * _nanoRegistryUUID;
    NSUUID * _persistentUUID;
    bool  _restoreComplete;
    long long  _syncProvenance;
}

@property (nonatomic, copy) NSString *defaultSourceBundleIdentifier;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, retain) HDNanoPairingEntity *entity;
@property (nonatomic, copy) NSUUID *healthDatabaseUUID;
@property (nonatomic, copy) NSUUID *nanoRegistryUUID;
@property (nonatomic, copy) NSUUID *persistentUUID;
@property (getter=isRestoreComplete, nonatomic) bool restoreComplete;
@property (nonatomic) long long syncProvenance;

+ (id)_nanoPairingEntitiesWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_predicateWithRegistryUUID:(id)arg1;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)nanoPairingEntityWithRegistryUUID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)nanoPairingEntityWithRegistryUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)sourceEntityForRegistryUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_initWithNanoRegistryUUID:(id)arg1 persistentUUID:(id)arg2 healthDatabaseUUID:(id)arg3 sourceBundleIdentifier:(id)arg4 deviceIdentifier:(id)arg5 syncStoreEntity:(id)arg6 restoreComplete:(bool)arg7 database:(id)arg8 error:(id*)arg9;
- (id)defaultSourceBundleIdentifier;
- (id)description;
- (id)deviceIdentifier;
- (id)entity;
- (id)healthDatabaseUUID;
- (bool)isRestoreComplete;
- (id)nanoRegistryUUID;
- (id)persistentUUID;
- (bool)saveWithHealthDatabase:(id)arg1 error:(id*)arg2;
- (void)setDefaultSourceBundleIdentifier:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setHealthDatabaseUUID:(id)arg1;
- (void)setNanoRegistryUUID:(id)arg1;
- (void)setPersistentUUID:(id)arg1;
- (void)setRestoreComplete:(bool)arg1;
- (void)setSyncProvenance:(long long)arg1;
- (long long)syncProvenance;

@end
