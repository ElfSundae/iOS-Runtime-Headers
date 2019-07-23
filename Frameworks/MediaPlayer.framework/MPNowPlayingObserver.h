/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingObserver : NSObject <MPStoreDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPStoreDownload * _activeDownload;
    NSData * _currentArtworkData;
    UIImage * _currentArtworkImage;
    BOOL  _enabled;
    BOOL  _hasSeenAnyItem;
    NSMutableDictionary * _mediaItemCoalescedUpdateDateAccessedTimers;
    MPAVController * _player;
    BOOL  _scheduledNowPlayingInfoUpdate;
    NSObject<OS_dispatch_queue> * _statusBarQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MPAVController *player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_MPNowPlayingDownloadStateForDownload:(id)arg1;
- (id)_activeDownloadForItemWithStoreID:(long long)arg1;
- (id)_additionalKeysForNowPlayingItem:(id)arg1;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)_avItemDurationDidChangeNotification:(id)arg1;
- (void)_avItemIsExplicitDidChangeNotification:(id)arg1;
- (void)_avItemLikedStateDidChangeNotification:(id)arg1;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_coalescedUpdateLastUsedDateForCurrentItem;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (BOOL)_hasProperConditionsToLoadArtwork;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemDidFinishLoadingNotification:(id)arg1;
- (BOOL)_itemNotificationIsRelevantToObservedPlayer:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_playbackErrorNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_postNowPlayingInfo;
- (void)_postNowPlayingInfoForItem:(id)arg1;
- (void)_prefetchArtworkForNextItem;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_registerForNotificationsForPlayer:(id)arg1;
- (BOOL)_reloadArtworkIfPossible;
- (void)_repeatTypeDidChangeNotification:(id)arg1;
- (void)_setNeedsNowPlayingInfoUpdate;
- (void)_setNowPlayingInfo:(id)arg1 forItem:(id)arg2;
- (id)_storeDownloadForNowPlayingItemInArray:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_unregisterForNotificationsForPlayer:(id)arg1;
- (void)_updateProgressForDownload:(id)arg1;
- (void)configureArtworkCatalog:(id)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (BOOL)isEnabled;
- (id)player;
- (void)setEnabled:(BOOL)arg1;
- (void)setPlayer:(id)arg1;

@end
