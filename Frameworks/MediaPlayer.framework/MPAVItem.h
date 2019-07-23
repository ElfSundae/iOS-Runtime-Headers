/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVItem : NSObject <MPAVMetadataItem, MusicEntityValueProviding, RURadioItemIdentifier> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned int _advancedDuringPlayback;
    long long _albumStoreID;
    BOOL _allowsAirPlayFromCloud;
    BOOL _allowsExternalPlayback;
    MPAlternateTracks *_alternateTracks;
    NSArray *_artworkTimeMarkers;
    AVAsset *_asset;
    NSError *_assetError;
    NSObject<OS_dispatch_queue> *_assetQueue;
    AVPlayerItem *_avPlayerItem;
    NSArray *_buyOffers;
    double _cachedDuration;
    double _cachedPlayableDuration;
    NSArray *_cachedSeekableTimeRanges;
    BOOL _canReusePlayerItem;
    NSArray *_chapterTimeMarkers;
    NSArray *_closedCaptionTimeMarkers;
    NSString *_copyrightText;
    float _currentPlaybackRate;
    float _defaultPlaybackRate;
    BOOL _didAttemptToLoadAsset;
    MPQueueFeeder *_feeder;
    unsigned int _handledFinishTime;
    BOOL _hasLoadedPlaybackMode;
    unsigned int _hasPlayedThisSession;
    BOOL _hasPostedNaturalSizeChange;
    BOOL _hasRegisteredForCaptionsAppearanceChanged;
    BOOL _hasValidPlayerItemDuration;
    unsigned int _indexInQueueFeeder;
    BOOL _isAssetLoaded;
    unsigned int _isStreamable;
    int _likedState;
    BOOL _likedStateEnabled;
    BOOL _limitReadAhead;
    float _loudnessInfoVolumeNormalization;
    unsigned int _lyricsAvailable;
    MPMediaItem *_mediaItem;
    int _playbackMode;
    MPAVController *_player;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _playerItemDuration;
    <MPAVItemPlaylistIdentifier> *_playlistIdentifier;
    <MPAVItemQueueIdentifier> *_queueIdentifier;
    double _seekableTimeRangesCacheTime;
    float _soundCheckVolumeNormalization;
    long long _storeItemInt64ID;
    long long _storeSubscriptionAdamID;
    BOOL _supportsLikedState;
    unsigned int _timeMarkersNeedLoading;
    unsigned int _type;
    NSArray *_urlTimeMarkers;
    unsigned int _userChangedItemsDuringPlayback;
    unsigned int _wasCountedAsSkipped;
    unsigned int _watchingAttributes;
}

@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (getter=_currentPlaybackRate, setter=_setCurrentPlaybackRate:, nonatomic) float _currentPlaybackRate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } _playerItemDurationIfAvailable;
@property (nonatomic, readonly) AVPlayerItemAccessLog *accessLog;
@property (nonatomic, readonly) RURadioAdTrack *adTrack;
@property (nonatomic, readonly, copy) NSString *aggregateDictionaryItemIdentifier;
@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) NSString *albumArtist;
@property (nonatomic, readonly, copy) NSString *albumBuyButtonText;
@property (nonatomic, readonly) int albumBuyButtonType;
@property (nonatomic, readonly) long long albumStoreID;
@property (nonatomic, readonly) unsigned int albumTrackCount;
@property (nonatomic, readonly) unsigned int albumTrackNumber;
@property (nonatomic, readonly) BOOL allowsAirPlayFromCloud;
@property (nonatomic, readonly) BOOL allowsEQ;
@property (nonatomic, readonly) BOOL allowsExternalPlayback;
@property (nonatomic, readonly) MPAlternateTracks *alternateTracks;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) long long artistStoreID;
@property (nonatomic, retain) NSArray *artworkTimeMarkers;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, retain) NSError *assetError;
@property (nonatomic, readonly, copy) NSString *assetFlavor;
@property (nonatomic, readonly) RadioAudioClip *audioClip;
@property (nonatomic, readonly, copy) NSArray *buyOffers;
@property (nonatomic, readonly) BOOL canReusePlayerItem;
@property (nonatomic, readonly) BOOL canSeedGenius;
@property (nonatomic, retain) NSArray *chapterTimeMarkers;
@property (nonatomic, retain) NSArray *closedCaptionTimeMarkers;
@property (nonatomic, readonly) NSString *composer;
@property (nonatomic, readonly, copy) NSString *copyrightText;
@property (nonatomic, readonly) double currentTimeDisplayOverride;
@property (nonatomic, readonly) int customAVEQPreset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float defaultPlaybackRate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL didAttemptToLoadAsset;
@property (nonatomic, readonly) unsigned int discCount;
@property (nonatomic, readonly) unsigned int discNumber;
@property (nonatomic, readonly) NSString *displayableText;
@property (nonatomic, readonly) BOOL displayableTextLoaded;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) double durationFromExternalMetadata;
@property (nonatomic, readonly) double durationIfAvailable;
@property (nonatomic, readonly) BOOL durationIsValid;
@property (nonatomic, readonly) RadioArtworkCollection *effectiveArtworkCollection;
@property (getter=isExplicitTrack, nonatomic, readonly) BOOL explicitTrack;
@property (nonatomic) MPQueueFeeder *feeder;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } forwardPlaybackEndTime;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) BOOL hasDisplayableText;
@property (nonatomic) BOOL hasPlayedThisSession;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int indexInQueueFeeder;
@property (nonatomic, readonly) BOOL isAd;
@property (nonatomic, readonly) BOOL isAlwaysLive;
@property BOOL isAssetLoaded;
@property (nonatomic, readonly) BOOL isCloudItem;
@property (nonatomic, readonly) BOOL isRadioItem;
@property (nonatomic, readonly) BOOL isStreamingLowQualityAsset;
@property (nonatomic) int likedState;
@property (getter=isLikedStateEnabled, nonatomic, readonly) BOOL likedStateEnabled;
@property (nonatomic) BOOL limitReadAhead;
@property (nonatomic, readonly) NSString *localizedPositionInPlaylistString;
@property (nonatomic) float loudnessInfoVolumeNormalization;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) NSString *mainTitle;
@property (nonatomic, readonly, retain) MPMediaItem *mediaItem;
@property (nonatomic, readonly, copy) NSString *mpuReporting_externalID;
@property (nonatomic, readonly) BOOL mpuReporting_isValidReportingItem;
@property (nonatomic, readonly) unsigned int mpuReporting_itemType;
@property (nonatomic, readonly, copy) NSData *mpuReporting_jingleTimedMetadata;
@property (nonatomic, readonly) BOOL mpuReporting_shouldReportPlayEventsToStore;
@property (nonatomic, readonly) BOOL mpuReporting_shouldUseRelativeTimePositions;
@property (nonatomic, readonly, copy) NSString *mpuReporting_storeItemID;
@property (nonatomic, readonly, copy) NSData *mpuReporting_trackInfo;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } naturalSize;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) double playableDurationIfAvailable;
@property (nonatomic) double playbackCheckpointCurrentTime;
@property (nonatomic, readonly) int playbackMode;
@property (nonatomic) MPAVController *player;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic, retain) <MPAVItemPlaylistIdentifier> *playlistIdentifier;
@property (nonatomic, readonly) NSURL *podcastURL;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } presentationSize;
@property (nonatomic, retain) <MPAVItemQueueIdentifier> *queueIdentifier;
@property (nonatomic, readonly) RadioTrack *radioTrack;
@property (nonatomic, retain) MPAlternateTextTrack *selectedAlternateTextTrack;
@property (nonatomic) float soundCheckVolumeNormalization;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) MPStoreDownload *storeDownload;
@property (nonatomic, readonly) NSString *storeItemID;
@property (nonatomic, readonly) long long storeItemInt64ID;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;
@property (nonatomic, readonly) RadioStreamTrack *streamTrack;
@property (getter=isStreamable, nonatomic, readonly) BOOL streamable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsLikedState;
@property (nonatomic, readonly) BOOL supportsRadioTrackActions;
@property (nonatomic, readonly) BOOL supportsRewindAndFastForward15Seconds;
@property (nonatomic, readonly) BOOL supportsSettingCurrentTime;
@property (nonatomic, readonly) BOOL supportsSkip;
@property (nonatomic, readonly) double timeOfSeekableEnd;
@property (nonatomic, readonly) double timeOfSeekableStart;
@property (nonatomic, readonly) NSArray *timedMetadataIfAvailable;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, retain) NSArray *urlTimeMarkers;
@property (nonatomic, readonly) BOOL useEmbeddedChapterData;
@property (nonatomic) BOOL userAdvancedDuringPlayback;
@property (nonatomic) BOOL userChangedItemsDuringPlayback;
@property (nonatomic, readonly) float userRating;
@property (nonatomic) BOOL userSkippedPlayback;
@property (nonatomic, readonly) BOOL usesSubscriptionLease;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)URLFromPath:(id)arg1;
+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (unsigned int)defaultScaleMode;
+ (void)setDefaultScaleMode:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_captionAppearanceSettingsChanged;
- (void)_checkAllowsBlockingDurationCall;
- (void)_clearAsset;
- (float)_currentPlaybackRate;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)_durationInSeconds;
- (int)_expectedPlaybackMode;
- (void)_handleUpdatedLikedState:(int)arg1 completion:(id /* block */)arg2;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (void)_internalLikedStateDidChangeNotification:(id)arg1;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_likedStateDidChange;
- (void)_loadAssetAndPlayerItem;
- (void)_loadAssetProperties;
- (void)_loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
- (int)_persistedLikedState;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_playerItemDurationIfAvailable;
- (void)_playerItemNewAccessLogEntryNotification:(id)arg1;
- (void)_realoadEmbeddedTimeMarkers;
- (void)_releaseAllTimeMarkers;
- (id)_seekableTimeRanges;
- (void)_setCurrentPlaybackRate:(float)arg1;
- (void)_setListeningForCaptionsAppearanceSettingsChanged:(BOOL)arg1;
- (void)_setNeedsPersistedLikedStateUpdate;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)accessLog;
- (id)aggregateDictionaryItemIdentifier;
- (id)album;
- (id)albumArtist;
- (long long)albumStoreID;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (BOOL)allowsAirPlayFromCloud;
- (BOOL)allowsEQ;
- (BOOL)allowsExternalPlayback;
- (id)alternateTracks;
- (unsigned int)alternatesCountForTypes:(unsigned int)arg1;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1;
- (id)artist;
- (long long)artistStoreID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)asset;
- (id)assetError;
- (id /* block */)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (id)buyOffers;
- (BOOL)canReusePlayerItem;
- (BOOL)canSeedGenius;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (id)closedCaptionTimeMarkers;
- (id)composer;
- (id)copyrightText;
- (double)currentTimeDisplayOverride;
- (int)customAVEQPreset;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (BOOL)didAttemptToLoadAsset;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (id)displayableText;
- (BOOL)displayableTextLoaded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (double)durationFromExternalMetadata;
- (double)durationIfAvailable;
- (double)durationInSeconds;
- (BOOL)durationIsValid;
- (id)feeder;
- (void)flushNowPlayingCaches;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)genre;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (BOOL)hasDataForItemArtwork;
- (BOOL)hasDisplayableText;
- (BOOL)hasPlayedThisSession;
- (id)inBandAlternateTextTracks;
- (unsigned int)indexInQueueFeeder;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isAd;
- (BOOL)isAlwaysLive;
- (BOOL)isAssetLoaded;
- (BOOL)isAssetURLValid;
- (BOOL)isCloudItem;
- (BOOL)isExplicitTrack;
- (BOOL)isLikedStateEnabled;
- (BOOL)isStreamable;
- (BOOL)isStreamingLowQualityAsset;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (int)likedState;
- (BOOL)limitReadAhead;
- (void)loadAssetAndPlayerItem;
- (id)localeForAssetTrack:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (float)loudnessInfoVolumeNormalization;
- (id)lyrics;
- (id)mainTitle;
- (id)mediaItem;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)notePlaybackFinishedByHittingEnd;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)path;
- (unsigned long long)persistentID;
- (double)playableDuration;
- (double)playableDurationIfAvailable;
- (double)playbackCheckpointCurrentTime;
- (int)playbackMode;
- (float)playbackRateForLevel:(unsigned int)arg1 direction:(int)arg2 paused:(BOOL)arg3;
- (id)player;
- (id)playerItem;
- (id)playlistIdentifier;
- (id)podcastURL;
- (void)prepareForRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (struct CGSize { float x1; float x2; })presentationSize;
- (id)queueIdentifier;
- (void)reevaluatePlaybackMode;
- (void)reevaluateType;
- (void)replaceOutOfBandAlternateTextTracksWithArray:(id)arg1;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)resetBookkeeping;
- (float)scanIntervalForLevel:(unsigned int)arg1 paused:(BOOL)arg2;
- (id)selectedAlternateTextTrack;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setArtworkTimeMarkers:(id)arg1;
- (void)setAssetError:(id)arg1;
- (void)setChapterTimeMarkers:(id)arg1;
- (void)setClosedCaptionTimeMarkers:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setFeeder:(id)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setHasPlayedThisSession:(BOOL)arg1;
- (void)setIndexInQueueFeeder:(unsigned int)arg1;
- (void)setIsAssetLoaded:(BOOL)arg1;
- (void)setLikedState:(int)arg1;
- (void)setLimitReadAhead:(BOOL)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setOverrideDuration:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlaylistIdentifier:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setUrlTimeMarkers:(id)arg1;
- (void)setUserAdvancedDuringPlayback:(BOOL)arg1;
- (void)setUserChangedItemsDuringPlayback:(BOOL)arg1;
- (void)setUserSkippedPlayback:(BOOL)arg1;
- (void)setupEQPresetWithDefaultPreset:(int)arg1;
- (void)setupPlaybackInfo;
- (float)soundCheckVolumeNormalization;
- (int)status;
- (id)storeDownload;
- (id)storeItemID;
- (long long)storeItemInt64ID;
- (long long)storeSubscriptionAdamID;
- (int)subtitleTrackID;
- (BOOL)supportsLikedState;
- (BOOL)supportsRewindAndFastForward15Seconds;
- (BOOL)supportsSettingCurrentTime;
- (BOOL)supportsSkip;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (id)timedMetadataIfAvailable;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;
- (id)url;
- (id)urlTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (BOOL)userAdvancedDuringPlayback;
- (BOOL)userChangedItemsDuringPlayback;
- (float)userRating;
- (BOOL)userSkippedPlayback;
- (BOOL)usesSubscriptionLease;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (id /* block */)_music_entityValueHandlerForProperty:(id)arg1;
+ (void)_registerEntityValueHandler:(id /* block */)arg1 forProperty:(id)arg2;
+ (void)initialize;

- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { float x1; float x2; })arg2 destinationScale:(float)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;
- (id)mpuReporting_externalID;
- (BOOL)mpuReporting_isValidReportingItem;
- (unsigned int)mpuReporting_itemType;
- (id)mpuReporting_jingleTimedMetadata;
- (BOOL)mpuReporting_shouldReportPlayEventsToStore;
- (BOOL)mpuReporting_shouldUseRelativeTimePositions;
- (id)mpuReporting_storeItemID;
- (id)mpuReporting_trackInfo;

// Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI

- (id)_plistKeyForMPMediaItemProperty:(id)arg1;
- (id)adTrack;
- (void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)albumBuyButtonText;
- (int)albumBuyButtonType;
- (id)assetFlavor;
- (id)audioClip;
- (id)effectiveArtworkCollection;
- (BOOL)isRadioItem;
- (id)radioIdentifier;
- (id)radioTrack;
- (id)streamTrack;
- (BOOL)supportsRadioTrackActions;

@end
