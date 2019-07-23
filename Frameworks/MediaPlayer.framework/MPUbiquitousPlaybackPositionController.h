/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPUbiquitousPlaybackPositionController : NSObject {
    BOOL  _applicationBecomingActive;
    BOOL  _beganUsingPlaybackPositionMetadata;
    BOOL  _databaseHasBookmarkableContents;
    BOOL  _externallyActive;
    BOOL  _isServiceActive;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    SBCPlaybackPositionDomain * _uppDomain;
    SBCPlaybackPositionSyncService * _uppServiceProxy;
}

@property (nonatomic, readonly) BOOL applicationBecomingActive;
@property (getter=isServiceActive, nonatomic) BOOL beganUsingPlaybackPositionMetadata;
@property (nonatomic) BOOL databaseHasBookmarkableContents;
@property (nonatomic) BOOL externallyActive;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isServiceActive, nonatomic) BOOL serviceActive;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (nonatomic, retain) SBCPlaybackPositionDomain *uppDomain;
@property (nonatomic, retain) SBCPlaybackPositionSyncService *uppServiceProxy;

+ (id)sharedUbiquitousPlaybackPositionController;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidEnterForegroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (BOOL)_onQueue_isEnabled;
- (BOOL)_onQueue_shouldBeActive;
- (void)_onServiceQueue_becomeActiveService;
- (id)_onServiceQueue_connectedUPPServiceProxy;
- (void)_onServiceQueue_resignActiveService;
- (void)_onServiceQueue_updateActiveServiceIfNeeded;
- (id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)arg1;
- (BOOL)applicationBecomingActive;
- (void)beginUsingPlaybackPositionMetadata;
- (BOOL)databaseHasBookmarkableContents;
- (void)dealloc;
- (BOOL)externallyActive;
- (id)init;
- (BOOL)isServiceActive;
- (BOOL)isServiceActive;
- (void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2;
- (void)persistPlaybackPositionMetadataEntity:(id)arg1 isCheckpoint:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)playbackPositionForLocalEntityIdentifier:(id)arg1;
- (id)playbackPositionForLocalEntityIdentifiers:(id)arg1;
- (id)queue;
- (id)serviceQueue;
- (void)setBeganUsingPlaybackPositionMetadata:(BOOL)arg1;
- (void)setDatabaseHasBookmarkableContents:(BOOL)arg1;
- (void)setExternallyActive:(BOOL)arg1;
- (void)setServiceActive:(BOOL)arg1;
- (void)setUppDomain:(id)arg1;
- (void)setUppServiceProxy:(id)arg1;
- (id)uppDomain;
- (id)uppServiceProxy;

@end
