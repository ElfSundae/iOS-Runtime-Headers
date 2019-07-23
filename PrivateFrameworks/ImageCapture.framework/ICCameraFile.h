/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFile : ICCameraItem {
    void * _fileProperties;
    unsigned int  _ptpObjectHandle;
    bool  _retrievedMetadata;
    bool  _retrievedThumbnail;
}

@property (readonly) bool burstFavorite;
@property (readonly) bool burstPicked;
@property (readonly) NSString *burstUUID;
@property (readonly) NSString *createdFilename;
@property (readonly) double duration;
@property (readonly) NSDate *exifCreationDate;
@property (readonly) NSDate *exifModificationDate;
@property bool fetchingMetadata;
@property bool fetchingThumbnail;
@property (readonly) NSDate *fileCreationDate;
@property (readonly) NSDate *fileModificationDate;
@property long long fileSize;
@property (readonly) bool firstPicked;
@property (readonly) NSString *groupUUID;
@property (readonly) long long height;
@property (readonly) bool highFramerate;
@property (readonly) NSString *mediaBase;
@property unsigned long long orientation;
@property (readonly) bool orientationOverridden;
@property (readonly) NSString *originalFilename;
@property (readonly) NSString *originatingAssetID;
@property (retain) ICCameraFile *pairedRawImage;
@property (readonly) unsigned int ptpObjectHandle;
@property (getter=isRaw) bool raw;
@property (readonly) NSString *relatedUUID;
@property (readonly) bool retrievedMetadata;
@property (readonly) bool retrievedThumbnail;
@property (readonly) NSArray *sidecarFiles;
@property (readonly) bool timeLapse;
@property (readonly) long long width;

// Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture

- (void)addSidecarFile:(id)arg1;
- (void)addSubImageDict:(id)arg1;
- (id)base;
- (bool)burstFavorite;
- (bool)burstPicked;
- (id)burstUUID;
- (bool)convertedFamily;
- (id)createdFilename;
- (id)creationDate;
- (void)dealloc;
- (id)debugIdentity;
- (id)debugMediaMetadata;
- (id)description;
- (double)duration;
- (id)exifCreationDate;
- (id)exifModificationDate;
- (bool)fetchingMetadata;
- (bool)fetchingThumbnail;
- (id)fileCreationDate;
- (id)fileModificationDate;
- (long long)fileSize;
- (bool)firstPicked;
- (void)flagAsSidecar;
- (void)flagMediaMetadata:(unsigned long long)arg1;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (id)groupUUID;
- (void)handleCommandCompletionNotification:(id)arg1;
- (bool)hasMetadata;
- (bool)hasThumbnail;
- (long long)height;
- (bool)highFramerate;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (bool)isAudio;
- (bool)isConverted;
- (bool)isData;
- (bool)isDataUniversal;
- (bool)isEdited:(unsigned long long)arg1;
- (bool)isEditedConverted;
- (bool)isEditedOriginal;
- (bool)isEditedUniversal;
- (bool)isImage;
- (bool)isJPEG;
- (bool)isLegacy;
- (bool)isMovie;
- (bool)isNonRawImage;
- (bool)isOriginal;
- (bool)isRaw;
- (bool)isSidecar;
- (bool)isUniversal;
- (bool)isUntouched:(unsigned long long)arg1;
- (id)mediaBase;
- (id)mediaData;
- (id)metadata;
- (id)modificationDate;
- (unsigned long long)orientation;
- (bool)orientationOverridden;
- (bool)originalFamily;
- (id)originalFilename;
- (id)originatingAssetID;
- (void)overrideOrientation:(unsigned long long)arg1;
- (id)pairedRawImage;
- (bool)partOfFamily:(unsigned long long)arg1;
- (unsigned int)ptpObjectHandle;
- (id)relatedUUID;
- (void)requestMetadata;
- (void)requestMetadataWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)requestThumbnail;
- (void)requestThumbnailWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (bool)retrievedMetadata;
- (bool)retrievedThumbnail;
- (void)setBurstFavorite:(bool)arg1;
- (void)setBurstPicked:(bool)arg1;
- (void)setBurstUUID:(id)arg1;
- (void)setCreatedFilename:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setExifCreationDate:(id)arg1;
- (void)setExifModificationDate:(id)arg1;
- (void)setFetchingMetadata:(bool)arg1;
- (void)setFetchingThumbnail:(bool)arg1;
- (void)setFileCreationDate:(id)arg1;
- (void)setFileModificationDate:(id)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setFirstPicked:(bool)arg1;
- (void)setGroupUUID:(id)arg1;
- (void)setHasMetadata:(bool)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (void)setHeight:(long long)arg1;
- (void)setHighFramerate:(bool)arg1;
- (void)setKeywordPropertiesFromMetadata;
- (bool)setMetadata:(id)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setOriginatingAssetID:(id)arg1;
- (void)setPairedRawImage:(id)arg1;
- (void)setRaw:(bool)arg1;
- (void)setRelatedUUID:(id)arg1;
- (bool)setThumbnailData:(struct __CFData { }*)arg1 withOrientation:(id)arg2;
- (void)setTimeLapse:(bool)arg1;
- (void)setUTI:(id)arg1;
- (void)setUTime:(unsigned long long)arg1;
- (void)setWidth:(long long)arg1;
- (id)sidecarFiles;
- (id)subImageDictForPixelWidth:(id)arg1;
- (id)subImages;
- (struct CGImage { }*)thumbnail;
- (bool)timeLapse;
- (unsigned long long)uTime;
- (bool)universalFamily;
- (long long)width;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (id)uti;
- (id)uuid;

@end
