/* Generated by RuntimeBrowser.
 */

@protocol PLPhotoLibraryPathManagerCore <NSObject>

@required

+ (bool)isSystemLibraryURLDefined;
+ (bool)isSystemPhotoLibraryURL:(NSURL *)arg1;
+ (bool)setSystemLibraryURL:(NSURL *)arg1 options:(unsigned short)arg2 error:(id*)arg3;
+ (NSString *)systemLibraryBaseDirectory;
+ (NSURL *)systemLibraryURL;

- (NSString *)assetUUIDRecoveryMappingPath;
- (NSString *)baseDirectory;
- (PLFileSystemCapabilities *)capabilities;
- (void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (bool)isDataProtectionComplete;
- (NSArray *)knownDBPaths;
- (NSURL *)libraryURL;
- (NSString *)pathToAssetsToAlbumsMapping;
- (void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg1;
- (void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (NSURL *)readOnlyUrlWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1;
- (void)setDataProtectionComplete:(bool)arg1;
- (void)setExtendedAttributesWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1;
- (void)setExtendedAttributesWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1 andURL:(NSURL *)arg2;
- (NSString *)syncInfoPath;
- (NSString *)temporaryDragAndDropDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (NSString *)temporaryFileBackedDebugDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;

@end