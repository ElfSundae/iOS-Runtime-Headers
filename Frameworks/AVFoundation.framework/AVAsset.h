/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAsset : NSObject <AVAsynchronousKeyValueLoading, NSCopying> {
    AVAssetInternal * _asset;
}

@property (getter=MP_canAffectNetworkPlayability, setter=MP_setCanAffectNetworkPlayability:, nonatomic) BOOL MP_canAffectNetworkPlayability;
@property (readonly) NSArray *availableChapterLocales;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) BOOL isProxy;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } naturalSize;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } naturalSizeWithPreferredTransforms;
@property (nonatomic, readonly) float preferredRate;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } preferredTransform;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) id propertyListForProxy;
@property (nonatomic, readonly) NSValue *pu_cachedDuration;
@property (setter=rc_setComposedAVURL:, nonatomic, retain) NSURL *rc_composedAVURL;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
+ (id)assetWithURL:(id)arg1;
+ (id)assetWithURL:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4;

- (id)_ID3Metadata;
- (id)_URLSessionDataDelegate;
- (id)_URLSessionOperationQueue;
- (id)_absoluteURL;
- (unsigned int)_addChapterMetadataItem:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toChapters:(id)arg3 fromIndex:(unsigned int)arg4;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (id)_availableCanonicalizedChapterLanguages;
- (id)_chapterDataTypeForMediaSubType:(long)arg1;
- (id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3;
- (id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterTracks;
- (Class)_classForTrackInspectors;
- (id)_comparisonToken;
- (BOOL)_containsAtLeastOnePlayableAudioTrack;
- (BOOL)_containsAtLeastOnePlayableVideoTrack;
- (id)_exportURL;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_firstTrackGroupWithMediaTypes:(id)arg1;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (double)_fragmentMindingInterval;
- (void)_handleURLRequest:(id)arg1;
- (BOOL)_hasResourceLoaderDelegate;
- (BOOL)_isStreaming;
- (void)_loadChapterInfo;
- (void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2;
- (id)_mediaSelectionGroupDictionaries;
- (BOOL)_mindsFragments;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (BOOL)_needsLegacyChangeNotifications;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)_resourceLoaderURLSession;
- (void)_serverHasDied;
- (void)_setFragmentMindingInterval:(double)arg1;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1;
- (void)_tracksDidChange;
- (id)_tracksWithClass:(Class)arg1;
- (id)_weakReference;
- (id)alternateTrackGroups;
- (id)audioAlternatesTrackGroup;
- (id)availableChapterLanguages;
- (id)availableChapterLocales;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (void)cancelLoading;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)commonMetadata;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (BOOL)containsFragments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (BOOL)hasProtectedContent;
- (unsigned int)hash;
- (id)init;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isProxy;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)lyrics;
- (id)makePropertyListForProxyWithOptions:(id)arg1;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (id)preferredMediaSelection;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (BOOL)providesPreciseDurationAndTiming;
- (unsigned int)referenceRestrictions;
- (int)statusOfValueForKey:(id)arg1;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)subtitleAlternatesTrackGroup;
- (id)trackGroups;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaCharacteristics:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (int)unusedTrackID;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (BOOL)MP_canAffectNetworkPlayability;
- (void)MP_setCanAffectNetworkPlayability:(BOOL)arg1;
- (id)createLanguageOptionGroups;
- (void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)_pu_setCachedDuration:(id)arg1;
- (id)pu_cachedDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })pu_duration;
- (void)pu_loadDurationWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (struct CGImageSource { }*)newPreviewImageSource;
- (struct UIImage { Class x1; }*)previewImage;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (float)is_cropFactor;
- (id)is_valueForMetadataIdentifier:(id)arg1;
- (struct CGSize { float x1; float x2; })is_videoSize;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

- (id)vcp_enabledTracksWithMediaType:(id)arg1;
- (id)vcp_firstEnabledTrackWithMediaType:(id)arg1;
- (BOOL)vcp_isMontage;
- (BOOL)vcp_isShortMovie;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (id)rc_composedAVURL;
- (void)rc_setComposedAVURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;

- (struct CGSize { float x1; float x2; })naturalSizeWithPreferredTransforms;

@end
