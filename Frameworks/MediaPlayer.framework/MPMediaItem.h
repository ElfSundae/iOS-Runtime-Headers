/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaItem : MPMediaEntity

@property (nonatomic, readonly) NSString *albumArtist;
@property (nonatomic, readonly) unsigned long long albumArtistPersistentID;
@property (nonatomic, readonly) NSString *albumArtistWithFallback;
@property (nonatomic, readonly) unsigned long long albumPersistentID;
@property (nonatomic, readonly) NSString *albumTitle;
@property (nonatomic, readonly) NSString *albumTitleWithFallback;
@property (nonatomic, readonly) unsigned int albumTrackCount;
@property (nonatomic, readonly) unsigned int albumTrackNumber;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) unsigned long long artistPersistentID;
@property (nonatomic, readonly) NSString *artistWithFallback;
@property (nonatomic, readonly) MPMediaItemArtwork *artwork;
@property (nonatomic, readonly) NSURL *assetURL;
@property (nonatomic, readonly) unsigned int beatsPerMinute;
@property (nonatomic, readonly) double bookmarkTime;
@property (nonatomic, readonly) NSArray *chapters;
@property (getter=isCloudItem, nonatomic, readonly) BOOL cloudItem;
@property (nonatomic, readonly) NSString *comments;
@property (getter=isCompilation, nonatomic, readonly) BOOL compilation;
@property (nonatomic, readonly) NSString *composer;
@property (nonatomic, readonly) unsigned long long composerPersistentID;
@property (nonatomic, copy) NSDate *dateAccessed;
@property (nonatomic, readonly) unsigned int discCount;
@property (nonatomic, readonly) unsigned int discNumber;
@property (nonatomic, readonly) NSString *effectiveAlbumArtist;
@property (nonatomic, readonly) double effectiveStopTime;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) unsigned long long genrePersistentID;
@property (nonatomic) BOOL hasBeenPlayed;
@property (nonatomic, readonly) BOOL isITunesU;
@property (nonatomic, readonly) BOOL isRental;
@property (nonatomic, readonly) BOOL isUsableAsRepresentativeItem;
@property (nonatomic, copy) NSDate *lastPlayedDate;
@property (nonatomic, copy) NSDate *lastSkippedDate;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) BOOL mediaTypeCanSeedGenius;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) unsigned int playCount;
@property (nonatomic) unsigned int playCountSinceSync;
@property (nonatomic, readonly) double playbackDuration;
@property (nonatomic, readonly) unsigned long long podcastPersistentID;
@property (nonatomic, readonly) NSString *podcastTitle;
@property (nonatomic, readonly) unsigned int rating;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) BOOL rememberBookmarkTime;
@property (nonatomic, readonly) unsigned int skipCount;
@property (nonatomic) unsigned int skipCountSinceSync;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double stopTime;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *titleWithFallback;
@property (nonatomic, readonly) NSString *userGrouping;
@property (nonatomic, readonly) unsigned int year;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)MPSD_mediaItemPropertiesForDownloadability;
+ (void)_createFilterableDictionary;
+ (BOOL)_isValidItemProperty:(id)arg1;
+ (id)artworkCatalogCacheProperties;
+ (BOOL)canFilterByProperty:(id)arg1;
+ (id)dynamicProperties;
+ (id)fallbackTitlePropertyForGroupingType:(int)arg1;
+ (id)persistentIDPropertyForGroupingType:(int)arg1;
+ (id)screenshotArtworkCatalogCacheProperties;
+ (id)titlePropertyForGroupingType:(int)arg1;

- (BOOL)MPSD_isDownloadInProgress;
- (BOOL)MPSD_isDownloadable;
- (id)_artworkCatalogWithArtworkType:(int)arg1;
- (id)_bestStoreURL;
- (id)_directStoreURL;
- (id)_libraryLinkArtist;
- (id)_libraryLinkKind;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkURL;
- (id)albumArtist;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)albumPersistentID;
- (id)albumTitle;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (id)artist;
- (unsigned long long)artistPersistentID;
- (id)artwork;
- (id)artworkCatalog;
- (id)assetURL;
- (unsigned int)beatsPerMinute;
- (double)bookmarkTime;
- (id)chapterOfType:(int)arg1 atIndex:(unsigned int)arg2;
- (id)chapterOfType:(int)arg1 atTime:(double)arg2;
- (id)chapters;
- (id)chaptersOfType:(int)arg1;
- (void)clearLocationProperties;
- (id)comments;
- (id)composer;
- (unsigned long long)composerPersistentID;
- (unsigned int)countOfChaptersOfType:(int)arg1;
- (id)dateAccessed;
- (void)didReceiveMemoryWarning;
- (BOOL)didSkipWithPlayedToTime:(double)arg1;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (id)effectiveAlbumArtist;
- (double)effectiveStopTime;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)existsInLibrary;
- (void)gaplessHeuristicInfo:(unsigned int*)arg1 durationInSamples:(unsigned long long*)arg2 lastPacketsResync:(unsigned long long*)arg3 encodingDelay:(unsigned int*)arg4 encodingDrain:(unsigned int*)arg5;
- (id)genre;
- (unsigned long long)genrePersistentID;
- (BOOL)hasBeenPlayed;
- (unsigned int)hash;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementSkipCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (BOOL)isCloudItem;
- (BOOL)isCompilation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isITunesU;
- (BOOL)isRental;
- (BOOL)isUsableAsRepresentativeItem;
- (Class)itemArrayCoderPIDDataCodingClass;
- (id)lastPlayedDate;
- (id)lastSkippedDate;
- (id)lyrics;
- (void)markNominalAmountHasBeenPlayed;
- (unsigned int)mediaType;
- (BOOL)mediaTypeCanSeedGenius;
- (id)multiverseIdentifier;
- (double)nominalHasBeenPlayedThreshold;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2;
- (unsigned int)playCount;
- (unsigned int)playCountSinceSync;
- (double)playbackDuration;
- (unsigned long long)podcastPersistentID;
- (id)podcastTitle;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(int)arg2;
- (id)predicateForProperty:(id)arg1;
- (unsigned int)rating;
- (id)releaseDate;
- (BOOL)rememberBookmarkTime;
- (id)representativeItem;
- (id)screenshotArtworkCatalog;
- (void)setDateAccessed:(id)arg1;
- (void)setHasBeenPlayed:(BOOL)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastSkippedDate:(id)arg1;
- (void)setPlayCount:(unsigned int)arg1;
- (void)setPlayCountSinceSync:(unsigned int)arg1;
- (void)setRating:(unsigned int)arg1;
- (void)setSkipCount:(unsigned int)arg1;
- (void)setSkipCountSinceSync:(unsigned int)arg1;
- (unsigned int)skipCount;
- (unsigned int)skipCountSinceSync;
- (double)startTime;
- (double)stopTime;
- (id)title;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)arg1;
- (id)userGrouping;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;
- (unsigned int)year;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (void)registerSupportedCustomProperties;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

- (id)MPU_containerLibraryLinkURL;
- (id)MPU_directStoreURL;
- (id)MPU_libraryLinkArtist;
- (id)MPU_libraryLinkKind;
- (id)MPU_libraryLinkPlaylistName;
- (id)MPU_libraryLinkURL;
- (id)MPU_libraryLinkURL:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI

- (id)SAMPMediaItemRepresentation;
- (id)albumArtistWithFallback;
- (id)albumImageWithFallbackForSize:(struct CGSize { float x1; float x2; })arg1 doubleLineRow:(BOOL)arg2;
- (id)albumTitleWithFallback;
- (id)artistWithFallback;
- (id)titleWithFallback;

@end