/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLModelMigrator : NSObject {
    NSFileManager *_fileManager;
    PLPhotoLibrary *_photoLibrary;
    long _photoLibraryOnce;
    double _startTime;
    NSDictionary *_syncedPropertiesByUUID;
    PLXPCTransaction *_transaction;
}

@property (nonatomic, retain) NSFileManager *fileManager;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

+ (BOOL)_addCameraCaptureDeviceForAssetsInStore:(id)arg1;
+ (BOOL)_addCloudKindSubtypeAndBurstFlagsInStore:(id)arg1;
+ (BOOL)_addLocationHashesToAssets:(id)arg1;
+ (BOOL)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(BOOL)arg2;
+ (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;
+ (BOOL)_batchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned int)arg3 objectHandler:(id /* block */)arg4 error:(id*)arg5;
+ (BOOL)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (BOOL)_cacheDateCreatedOnResources:(id)arg1;
+ (BOOL)_cacheItemIdentifierOnResources:(id)arg1;
+ (BOOL)_clearChangeStore;
+ (BOOL)_convertManagedAdjustmentsInStore:(id)arg1;
+ (void)_createDatabase;
+ (void)_createPhotoDataDirectoryFailedWithNoPermission:(id)arg1;
+ (BOOL)_createPhotoDataDirectoryIfNecessary;
+ (id)_dateWithiTunesTimeInterval:(double)arg1;
+ (BOOL)_deleteAllMomentsViaSQLFromStore:(id)arg1;
+ (BOOL)_deleteCloudSharedAndSyncedAssetReferencesInStore:(id)arg1;
+ (BOOL)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (BOOL)_deletePhotoStreamAssetReferencesInStore:(id)arg1;
+ (BOOL)_disableICloudPhoto;
+ (BOOL)_fixAdjustedAssets:(id)arg1;
+ (BOOL)_fixAlbumAndFolderSortAscending:(id)arg1;
+ (BOOL)_fixCorruptedOrientationsInStore:(id)arg1;
+ (BOOL)_fixDuplicatedAssets:(id)arg1;
+ (BOOL)_fixEmptyVideoDerivativePathsInStore:(id)arg1;
+ (BOOL)_fixIncorrectAddedDateForAssetsInStore:(id)arg1;
+ (BOOL)_fixItemIdentifierForVideoCmplInStore:(id)arg1;
+ (BOOL)_fixLocalPathForVideoCmplDerivativesInStore:(id)arg1;
+ (BOOL)_fixNonDuplicatedAssets:(id)arg1 adjusted:(BOOL)arg2;
+ (void)_fixPathForResource:(id)arg1 withPath:(id)arg2;
+ (BOOL)_fixPossiblyIncorrectAddedDateForAsset:(id)arg1;
+ (BOOL)_fixUploadAttempts:(id)arg1;
+ (BOOL)_fixVideoDimensionsForAsset:(id)arg1;
+ (BOOL)_fixVideoDimensionsInStore:(id)arg1;
+ (BOOL)_fixVideoJPGPath:(id)arg1;
+ (BOOL)_fixVisibleBurstAsset:(id)arg1;
+ (BOOL)_fixupAlbumOrderInAlbumListInStore:(id)arg1;
+ (BOOL)_fixupAssetPersistence:(id)arg1;
+ (BOOL)_fixupAssetSubtypeForPhotosInStore:(id)arg1;
+ (BOOL)_fixupBrokenBurstPicksInStore:(id)arg1;
+ (BOOL)_fixupCloudResourcesInStore:(id)arg1;
+ (BOOL)_fixupEditorBundleIDsInStore:(id)arg1;
+ (BOOL)_fixupImportedAssetsInStore:(id)arg1;
+ (BOOL)_fixupImportedEventsInStore:(id)arg1;
+ (BOOL)_fixupKeyAssetsForAlbumsInStore:(id)arg1;
+ (BOOL)_fixupSharedStreamOrientationsInStore:(id)arg1;
+ (BOOL)_fixupSharedVideosWithoutThumbnailsInStore:(id)arg1;
+ (BOOL)_fixupSyncedAssetAttributesInStore:(id)arg1;
+ (BOOL)_forceAlbumMetadataToDiskInStore:(id)arg1;
+ (void)_forceCreateIndexOnOrderedAssets:(BOOL)arg1;
+ (BOOL)_forceDupeAnalysis;
+ (BOOL)_forceSoftResetSync;
+ (BOOL)_generateAddedDateForAssetsInStore:(id)arg1;
+ (BOOL)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;
+ (BOOL)_isReasonableCreationDate:(id)arg1;
+ (BOOL)_markOldPhotoIrisEditsEvaluatedInStore:(id)arg1;
+ (BOOL)_markPhotoIrisVideoOrphansInStore:(id)arg1;
+ (BOOL)_markThumbnailsAsAltAvailable:(id)arg1;
+ (BOOL)_migrateAssetLocationData:(id)arg1;
+ (BOOL)_migrateForEachAsset:(id /* block */)arg1 usingStore:(id)arg2;
+ (int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1;
+ (BOOL)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(BOOL)arg2;
+ (BOOL)_migrateRevGeoLocationDataFromKeyedArchiverFormat:(id)arg1;
+ (BOOL)_migrateTransformableUUIDsToStringsInStore:(id)arg1;
+ (id)_modelMigrator;
+ (BOOL)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;
+ (id)_newSyncedPropertiesByAssetUUIDs:(BOOL)arg1;
+ (void)_persistMetadataToFileSystemForAlbum:(id)arg1;
+ (BOOL)_persistPhotoIrisVisibilityStateToDiskInStore:(id)arg1;
+ (BOOL)_persistPlaceAnnotationData:(id)arg1;
+ (BOOL)_persistVideoComplPropertiesInStore:(id)arg1;
+ (BOOL)_populateAdjustmentTimestampsOnAssets:(id)arg1;
+ (BOOL)_populateAlbumAndFolderOrderKeysInStagedStore:(id)arg1;
+ (BOOL)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStore:(id)arg1;
+ (void)_populateFaceRegionsForAsset:(id)arg1;
+ (BOOL)_populateFaceRegionsInStore:(id)arg1;
+ (BOOL)_populateHasAdjustmentsForAssetsInStore:(id)arg1;
+ (BOOL)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (BOOL)_populateUnmanagedAdjustmentsFromFileSystemInManagedObjectContext:(id)arg1;
+ (BOOL)_postProcessFromVersion6006Store:(id)arg1;
+ (BOOL)_rebuildAllMomentsInStore:(id)arg1;
+ (BOOL)_recoverSingleBurstPhotos:(id)arg1;
+ (BOOL)_removeAllWallpaperAssetsInStore:(id)arg1;
+ (BOOL)_removeEvents:(id)arg1;
+ (void)_removeFileAt:(id)arg1 forResource:(id)arg2;
+ (void)_repairCloudPlaceholderKindForVideoAsset:(id)arg1;
+ (void)_repairRootFolderFixedOrderKeysInContext:(id)arg1;
+ (BOOL)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1;
+ (BOOL)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id*)arg2;
+ (BOOL)_repersistDuplicatedAssets:(id)arg1;
+ (BOOL)_resetAlbumToFolderOrderKeyForAlbums:(id)arg1;
+ (BOOL)_resetAndReimportUnmanagedAdjustmentInStore:(id)arg1;
+ (void)_resetCloudCacheState:(id)arg1;
+ (BOOL)_resetDupesAnalysisInStore:(id)arg1;
+ (BOOL)_resetThumbnailsAndInitiateRebuildRequestIfNeeded;
+ (BOOL)_setupRootFolderInStore:(id)arg1;
+ (id)_sharedModelMigratorForImport;
+ (BOOL)_shouldConvertManagedAdjustmentsForAsset:(id)arg1;
+ (BOOL)_tagScreenshotsForAssetsInStore:(id)arg1;
+ (BOOL)_trimInvalidAlbumAssetsMappingRecords;
+ (BOOL)_updateKindSubtypeForPanoramaPhotosNeedsReset:(BOOL)arg1 inStore:(id)arg2;
+ (void)_validateCurrentModelVersionFailedWithMismatchedVersion:(int)arg1;
+ (void)_validateCurrentModelVersionFailedWithNoVersionFromServer;
+ (BOOL)_validateOrDeleteFileAtPath:(id)arg1 forCloudResource:(id)arg2;
+ (BOOL)_verifyCloudAssetsLocalAvailability:(id)arg1;
+ (void)applyDataProtectionToAllPhotosFiles;
+ (void)applyDataProtectionToPhotosPaths:(id)arg1;
+ (void)archiveAssetUUIDForPathPlist:(id)arg1;
+ (id)archivedAssetUUIDForURL:(id)arg1;
+ (id)assetUUIDForPathPlistURL;
+ (BOOL)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6;
+ (int)checkForceMigrationTypeRequestedAndGetOptionalSourceModelVersion:(id*)arg1;
+ (void)cleanupModelForDataMigration;
+ (void)createDatabase;
+ (int)currentModelVersion;
+ (BOOL)debug_resetThumbnailsAndInitiateRebuildRequest;
+ (id)descriptionForForceMigrationType:(int)arg1;
+ (BOOL)didCreateSqliteErrorFileForLightweightMigration;
+ (BOOL)didImportFileSystemAssets;
+ (BOOL)didImportFileSystemAssetsWithMOC:(id)arg1;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (id)eventNameFromDate:(id)arg1;
+ (void)fixupUnmanagedAdjustmentsFromFileSystemForAsset:(id)arg1;
+ (void)forceImportFileSystemDataIntoDatabase;
+ (id)generateAssetUUIDForPathPlist;
+ (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id /* block */)arg3;
+ (BOOL)isPostProcessingLightweightMigration;
+ (void)loadFileSystemDataIntoDatabase;
+ (id)managedObjectModelForLightweightMigrationStageWithURL:(id)arg1;
+ (id)nextRequiredStagedMigrationVersionAfterVersion:(id)arg1;
+ (void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1;
+ (BOOL)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2;
+ (BOOL)postProcessThumbnailsOnlyIfObsoleteOrMissing:(BOOL*)arg1;
+ (BOOL)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4;
+ (void)repairPotentialModelCorruption;
+ (void)repairSingletonObjectsInDatabaseWithCompletionHandler:(id /* block */)arg1;
+ (BOOL)restartingAfterOTAMigration;
+ (BOOL)restartingAfterRestoreFromBackup;
+ (void)setDidImportFileSystemAssets:(BOOL)arg1;
+ (BOOL)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 assetsKind:(int*)arg3;
+ (BOOL)skipDataProtectionForFilePath:(id)arg1;
+ (void)validateCurrentModelVersion;
+ (BOOL)waitForDataMigratorToExit;

- (void)_importAllDCIMAssets;
- (id)_importFileSystemImportAssets:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)_orderedAssetsToImportCameraRollOnly:(BOOL)arg1;
- (id)_syncedPropertiesForAssetUUID:(id)arg1;
- (void)cleanupModelForDataMigration;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (void)collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 testCreationDates:(BOOL)arg5;
- (void)dealloc;
- (void)dontImportFileSystemDataIntoDatabase;
- (id)fileManager;
- (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithImplicitTransaction:(BOOL)arg1;
- (void)loadFileSystemDataIntoDatabase;
- (void)pausePhotoStreams;
- (id)photoLibrary;
- (void)repairPotentialModelCorruption;
- (void)resumePhotoStreams;
- (void)setFileManager:(id)arg1;
- (BOOL)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(BOOL*)arg3 isCPLAssets:(BOOL*)arg4 cameraRollOnly:(BOOL)arg5;

@end
