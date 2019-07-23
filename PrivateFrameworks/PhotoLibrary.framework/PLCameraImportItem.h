/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImportItem : NSObject {
    NSString *_basePath;
    NSString *_identifier;
    NSError *_importError;
    BOOL _metadataRequested;
    NSString *_parentFolder;
    NSMutableDictionary *_representationsMapping;
    BOOL _shouldImport;
    UIImage *_thumbnail;
    NSData *_thumbnailData;
    BOOL _thumbnailRequested;
    int _thumbnailState;
    NSString *eventName;
    PLManagedAsset *importedAsset;
}

@property (nonatomic, retain) NSString *basePath;
@property (nonatomic, retain) NSString *eventName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSError *importError;
@property (nonatomic, retain) PLManagedAsset *importedAsset;
@property (nonatomic, readonly, copy) NSString *parentFolder;
@property (nonatomic) BOOL shouldImport;
@property (nonatomic, readonly, retain) UIImage *thumbnail;
@property (nonatomic, retain) NSData *thumbnailData;

- (void)_addRepresentation:(id)arg1;
- (id)_fileExtensionForTypeWithSelector:(SEL)arg1;
- (BOOL)_isTypeWithSelector:(SEL)arg1;
- (void)_removeRepresentation:(id)arg1;
- (void)addRepresentationForCameraFile:(id)arg1;
- (id)audioExtension;
- (id)basePath;
- (BOOL)canRequestMetadata;
- (BOOL)canRequestThumbnail;
- (void)cancelThumbnailRequest;
- (void)clearMetadata;
- (void)clearThumbnail;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)eventName;
- (id)fileExtensions;
- (unsigned long long)fileSize;
- (BOOL)hasAllMetadata;
- (id)identifier;
- (id)importError;
- (id)importedAsset;
- (id)initWithIdentifier:(id)arg1 parentFolder:(id)arg2;
- (BOOL)isAudio;
- (BOOL)isInDatabaseForce:(BOOL)arg1;
- (BOOL)isJPEG;
- (BOOL)isLocked;
- (BOOL)isMovie;
- (BOOL)isOnDisk;
- (BOOL)isRaw;
- (BOOL)isStandaloneMovie;
- (BOOL)isStandalonePhoto;
- (id)jpgExtension;
- (void)markRepresentationsInDatabase;
- (id)metadataForRepresentationWithFileExtension:(id)arg1;
- (id)movieExtension;
- (id)otherExtensions;
- (id)parentFolder;
- (id)rawExtension;
- (void)removeRepresentationForCameraFile:(id)arg1;
- (id)representationForCameraFile:(id)arg1;
- (id)representations;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setBasePath:(id)arg1;
- (void)setEventName:(id)arg1;
- (void)setImportError:(id)arg1;
- (void)setImportedAsset:(id)arg1;
- (void)setShouldImport:(BOOL)arg1;
- (void)setThumbnailData:(id)arg1;
- (void)setThumbnailState:(int)arg1;
- (void)setThumbnailWithImageRef:(struct CGImage { }*)arg1;
- (BOOL)shouldImport;
- (id)thumbnail;
- (id)thumbnailData;
- (int)thumbnailState;

@end