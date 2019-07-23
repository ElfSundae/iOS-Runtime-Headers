/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSyncDefaults : NSObject {
    BOOL _assetSyncEnabled;
    NSNumber *_assetSyncLimit;
    unsigned int _assetSyncLimitType;
    NSNumber *_assetSyncPlaylistPersistentID;
    NPSDomainAccessor *_domainAccessor;
    NSObject<OS_dispatch_queue> *_domainAccessorQueue;
    NSNumber *_lastFullySentAssetSyncPlaylistPersistentID;
    NSNumber *_lastFullySentAssetSyncPlaylistVersion;
    NSDate *_modificationDate;
    BOOL _needsSync;
    int _notifyToken;
    NSNumber *_numberOfSyncedAssetSyncPlaylistSongs;
    NSString *_pairingID;
}

@property (getter=isAssetSyncEnabled, nonatomic) BOOL assetSyncEnabled;
@property (nonatomic, copy) NSNumber *assetSyncLimit;
@property (nonatomic) unsigned int assetSyncLimitType;
@property (nonatomic, retain) MPMediaPlaylist *assetSyncPlaylist;
@property (nonatomic, copy) NSNumber *assetSyncPlaylistPersistentID;
@property (nonatomic, copy) NSNumber *lastFullySentAssetSyncPlaylistPersistentID;
@property (nonatomic, copy) NSNumber *lastFullySentAssetSyncPlaylistVersion;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, copy) NSNumber *numberOfSyncedAssetSyncPlaylistSongs;

+ (id)sharedDefaults;

- (void).cxx_destruct;
- (id)_associatedObject;
- (void)_clearAssetSyncPlaylistDependentDefaults;
- (id)_companionSidePerDeviceDefaults;
- (void)_handleRemoteChangeIgnoringSenderPID:(BOOL)arg1;
- (void)_perDeviceSettingsDidResetNotification:(id)arg1;
- (void)_reloadPropertiesFromDefaults;
- (void)_resetDomainAccessor;
- (void)_setNeedsSynchronize;
- (void)_writePropertiesToDefaults;
- (id)assetSyncLimit;
- (unsigned int)assetSyncLimitType;
- (id)assetSyncPlaylist;
- (id)assetSyncPlaylistPersistentID;
- (id)description;
- (id)init;
- (BOOL)isAssetSyncEnabled;
- (id)lastFullySentAssetSyncPlaylistPersistentID;
- (id)lastFullySentAssetSyncPlaylistVersion;
- (id)modificationDate;
- (id)numberOfSyncedAssetSyncPlaylistSongs;
- (void)setAssetSyncEnabled:(BOOL)arg1;
- (void)setAssetSyncLimit:(id)arg1;
- (void)setAssetSyncLimitType:(unsigned int)arg1;
- (void)setAssetSyncPlaylist:(id)arg1;
- (void)setAssetSyncPlaylistPersistentID:(id)arg1;
- (void)setLastFullySentAssetSyncPlaylistPersistentID:(id)arg1;
- (void)setLastFullySentAssetSyncPlaylistVersion:(id)arg1;
- (void)setNumberOfSyncedAssetSyncPlaylistSongs:(id)arg1;

@end
