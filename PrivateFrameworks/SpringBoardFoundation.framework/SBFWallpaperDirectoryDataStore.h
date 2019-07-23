/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperDirectoryDataStore : NSObject <BSDescriptionProviding, SBFWallpaperDataStore> {
    NSURL * _directoryURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *directoryCreationAttributes;
@property (nonatomic, readonly, copy) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultDirectoryURL;

- (void).cxx_destruct;
- (bool)copyVideoAtURL:(id)arg1 toURL:(id)arg2;
- (void)createDirectory;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didWriteFileToURL:(id)arg1;
- (id)directoryCreationAttributes;
- (id)directoryURL;
- (bool)hasWallpaperImageForVariant:(long long)arg1;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (bool)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2;
- (bool)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
- (bool)setVideoURL:(id)arg1 forVariant:(long long)arg2;
- (bool)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperImage:(id)arg1 forVariant:(long long)arg2;
- (bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2;
- (bool)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unverifiedVideoURLForVariant:(long long)arg1;
- (id)verifiedOriginalVideoURLForVariant:(long long)arg1;
- (id)verifiedVideoURLForVariant:(long long)arg1;
- (id)wallpaperColorForVariant:(long long)arg1;
- (id)wallpaperColorNameForVariant:(long long)arg1;
- (id)wallpaperImageDataForVariant:(long long)arg1 error:(id*)arg2;
- (id)wallpaperImageForVariant:(long long)arg1;
- (id)wallpaperImageURLForVariant:(long long)arg1;
- (id)wallpaperOptionsForVariant:(long long)arg1;
- (id)wallpaperOriginalImageForVariant:(long long)arg1;
- (id)wallpaperOriginalImageURLForVariant:(long long)arg1;
- (id)wallpaperOriginalVideoURLForVariant:(long long)arg1;
- (id)wallpaperThumbnailDataForVariant:(long long)arg1;
- (id)wallpaperThumbnailURLForVariant:(long long)arg1;
- (id)wallpaperVideoURLForVariant:(long long)arg1;

@end
