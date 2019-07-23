/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MigrationDirectives : NSObject {
    int _currentUserVersion;
    BOOL _forceUpdateOriginals;
    BOOL _needsAnalyze;
    BOOL _needsToAutogenerateArtworkVariants;
    BOOL _needsToRecreateIndexes;
    BOOL _needsToRecreateTriggers;
    BOOL _needsToReloadCollectionRepresentativeItems;
    BOOL _needsToReloadContainerMediaTypes;
    BOOL _needsToReloadStoreBookmarkMetadataIdentifiers;
    BOOL _needsToRemoveLocationsForItemsMissingAssets;
    BOOL _needsToUpdateSortMap;
    int _originalUserVersion;
}

@property (nonatomic) int currentUserVersion;
@property (nonatomic) BOOL forceUpdateOriginals;
@property (nonatomic) BOOL needsAnalyze;
@property (nonatomic) BOOL needsToAutogenerateArtworkVariants;
@property (nonatomic) BOOL needsToRecreateIndexes;
@property (nonatomic) BOOL needsToRecreateTriggers;
@property (nonatomic) BOOL needsToReloadCollectionRepresentativeItems;
@property (nonatomic) BOOL needsToReloadContainerMediaTypes;
@property (nonatomic) BOOL needsToReloadStoreBookmarkMetadataIdentifiers;
@property (nonatomic) BOOL needsToRemoveLocationsForItemsMissingAssets;
@property (nonatomic) BOOL needsToUpdateSortMap;
@property (nonatomic, readonly) int originalUserVersion;

- (int)currentUserVersion;
- (BOOL)forceUpdateOriginals;
- (id)initWithOriginalUserVersion:(int)arg1;
- (BOOL)needsAnalyze;
- (BOOL)needsToAutogenerateArtworkVariants;
- (BOOL)needsToRecreateIndexes;
- (BOOL)needsToRecreateTriggers;
- (BOOL)needsToReloadCollectionRepresentativeItems;
- (BOOL)needsToReloadContainerMediaTypes;
- (BOOL)needsToReloadStoreBookmarkMetadataIdentifiers;
- (BOOL)needsToRemoveLocationsForItemsMissingAssets;
- (BOOL)needsToUpdateSortMap;
- (int)originalUserVersion;
- (void)setCurrentUserVersion:(int)arg1;
- (void)setForceUpdateOriginals:(BOOL)arg1;
- (void)setNeedsAnalyze:(BOOL)arg1;
- (void)setNeedsToAutogenerateArtworkVariants:(BOOL)arg1;
- (void)setNeedsToRecreateIndexes:(BOOL)arg1;
- (void)setNeedsToRecreateTriggers:(BOOL)arg1;
- (void)setNeedsToReloadCollectionRepresentativeItems:(BOOL)arg1;
- (void)setNeedsToReloadContainerMediaTypes:(BOOL)arg1;
- (void)setNeedsToReloadStoreBookmarkMetadataIdentifiers:(BOOL)arg1;
- (void)setNeedsToRemoveLocationsForItemsMissingAssets:(BOOL)arg1;
- (void)setNeedsToUpdateSortMap:(BOOL)arg1;

@end
