/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingContentItem : MPContentItem <NSCopying> {
    <MPNowPlayingContentItemArtworkDataSource> * _artworkDataSource;
    NSDictionary * _nowPlayingInfo;
}

@property (nonatomic, copy) NSString *albumArtistName;
@property (nonatomic, copy) NSString *albumName;
@property (getter=isAlwaysLiveItem, nonatomic) bool alwaysLiveItem;
@property (nonatomic, retain) MPMediaItemArtwork *artwork;
@property (nonatomic, retain) <MPNowPlayingContentItemArtworkDataSource> *artworkDataSource;
@property (nonatomic, copy) NSString *artworkIdentifier;
@property (nonatomic, copy) NSString *artworkURL;
@property (nonatomic, copy) NSArray *artworkURLTemplates;
@property (nonatomic, readonly) NSDictionary *auxiliaryNowPlayingInfo;
@property (nonatomic, copy) NSArray *availableLanguageOptions;
@property (nonatomic, copy) NSString *collectionIdentifier;
@property (nonatomic, copy) NSDictionary *collectionInfo;
@property (nonatomic, copy) NSString *composerName;
@property (nonatomic, copy) NSArray *currentLanguageOptions;
@property (nonatomic) float defaultPlaybackRate;
@property (nonatomic, copy) NSDictionary *deviceSpecificUserInfo;
@property (nonatomic, copy) NSString *directorName;
@property (nonatomic) long long discNumber;
@property (nonatomic) double duration;
@property (nonatomic) long long editingStyleFlags;
@property (nonatomic) double elapsedTime;
@property (nonatomic, readonly) double elapsedTimeTimestamp;
@property (nonatomic) long long episodeNumber;
@property (getter=isExplicitItem, nonatomic) bool explicitItem;
@property (nonatomic, copy) NSString *externalContentIdentifier;
@property (nonatomic, copy) NSString *genreName;
@property (nonatomic) bool hasArtwork;
@property (nonatomic) bool hasDescription;
@property (nonatomic) bool hasLanguageOptions;
@property (nonatomic) bool hasLyrics;
@property (nonatomic, copy) NSString *info;
@property (nonatomic) long long legacyUniqueID;
@property (nonatomic, copy) NSString *localizedContentRating;
@property (nonatomic, copy) MPNowPlayingInfoLyricsItem *lyrics;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic) long long numberOfChildren;
@property (nonatomic) long long playCount;
@property (nonatomic) float playbackRate;
@property (nonatomic) long long playlistType;
@property (nonatomic, copy) NSString *profileIdentifier;
@property (nonatomic, copy) NSString *radioStationName;
@property (nonatomic, copy) NSString *radioStationStringIdentifier;
@property (nonatomic) long long radioStationType;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic) long long seasonNumber;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, copy) NSString *seriesName;
@property (getter=isSharableItem, nonatomic) bool sharableItem;
@property (nonatomic) double startTime;
@property (getter=isSteerable, nonatomic) bool steerable;
@property (nonatomic) long long storeAlbumID;
@property (nonatomic) long long storeArtistID;
@property (nonatomic) long long storeID;
@property (nonatomic) long long storeSubscriptionID;
@property (nonatomic) long long totalDiscCount;
@property (nonatomic) long long totalTrackCount;
@property (nonatomic, copy) NSString *trackArtistName;
@property (nonatomic) long long trackNumber;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)shouldPushArtworkData;

- (void).cxx_destruct;
- (void)_mergeContentItem:(id)arg1;
- (id)albumArtistName;
- (id)albumName;
- (id)artworkDataSource;
- (id)artworkIdentifier;
- (id)artworkURL;
- (id)artworkURLTemplates;
- (id)auxiliaryNowPlayingInfo;
- (id)availableLanguageOptions;
- (id)collectionIdentifier;
- (id)collectionInfo;
- (id)composerName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLanguageOptions;
- (float)defaultPlaybackRate;
- (id)deviceSpecificUserInfo;
- (id)directorName;
- (long long)discNumber;
- (double)duration;
- (long long)editingStyleFlags;
- (double)elapsedTime;
- (double)elapsedTimeTimestamp;
- (long long)episodeNumber;
- (id)externalContentIdentifier;
- (id)genreName;
- (bool)hasArtwork;
- (bool)hasDescription;
- (bool)hasLanguageOptions;
- (bool)hasLyrics;
- (id)info;
- (void)invalidateArtwork;
- (void)invalidateDescription;
- (void)invalidateLanguageOptions;
- (void)invalidateLyrics;
- (bool)isAlwaysLiveItem;
- (bool)isExplicitItem;
- (bool)isSharableItem;
- (bool)isSteerable;
- (long long)legacyUniqueID;
- (id)localizedContentRating;
- (id)lyrics;
- (unsigned long long)mediaType;
- (id)nowPlayingInfo;
- (long long)numberOfChildren;
- (long long)playCount;
- (float)playbackRate;
- (long long)playlistType;
- (id)profileIdentifier;
- (id)radioStationName;
- (id)radioStationStringIdentifier;
- (long long)radioStationType;
- (id)releaseDate;
- (long long)seasonNumber;
- (id)sections;
- (id)seriesName;
- (void)setAlbumArtistName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setAlwaysLiveItem:(bool)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkDataSource:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setArtworkURLTemplates:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setCollectionInfo:(id)arg1;
- (void)setComposerName:(id)arg1;
- (void)setCurrentLanguageOptions:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setDeviceSpecificUserInfo:(id)arg1;
- (void)setDirectorName:(id)arg1;
- (void)setDiscNumber:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditingStyleFlags:(long long)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setElapsedTime:(double)arg1 playbackRate:(float)arg2;
- (void)setEpisodeNumber:(long long)arg1;
- (void)setExplicitItem:(bool)arg1;
- (void)setExternalContentIdentifier:(id)arg1;
- (void)setGenreName:(id)arg1;
- (void)setHasArtwork:(bool)arg1;
- (void)setHasDescription:(bool)arg1;
- (void)setHasLanguageOptions:(bool)arg1;
- (void)setHasLyrics:(bool)arg1;
- (void)setInfo:(id)arg1;
- (void)setLegacyUniqueID:(long long)arg1;
- (void)setLocalizedContentRating:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setMediaType:(unsigned long long)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setNumberOfChildren:(long long)arg1;
- (void)setPlayCount:(long long)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setPlaylistType:(long long)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setRadioStationName:(id)arg1;
- (void)setRadioStationStringIdentifier:(id)arg1;
- (void)setRadioStationType:(long long)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSeasonNumber:(long long)arg1;
- (void)setSections:(id)arg1;
- (void)setSeriesName:(id)arg1;
- (void)setSharableItem:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSteerable:(bool)arg1;
- (void)setStoreAlbumID:(long long)arg1;
- (void)setStoreArtistID:(long long)arg1;
- (void)setStoreID:(long long)arg1;
- (void)setStoreSubscriptionID:(long long)arg1;
- (void)setTotalDiscCount:(long long)arg1;
- (void)setTotalTrackCount:(long long)arg1;
- (void)setTrackArtistName:(id)arg1;
- (void)setTrackNumber:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (double)startTime;
- (long long)storeAlbumID;
- (long long)storeArtistID;
- (long long)storeID;
- (long long)storeSubscriptionID;
- (long long)totalDiscCount;
- (long long)totalTrackCount;
- (id)trackArtistName;
- (long long)trackNumber;
- (id)userInfo;

@end
