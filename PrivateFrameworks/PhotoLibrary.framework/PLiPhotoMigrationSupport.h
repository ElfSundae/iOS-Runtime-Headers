/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLiPhotoMigrationSupport : NSObject {
    _Atomic int  _inFlightMigrationCount;
}

@property (nonatomic, readonly) bool migrationWasInterrupted;

+ (id)sharedInstance;

- (bool)_createParentDirectoryIfNecessaryWithPath:(id)arg1;
- (void)_decrementInFlightMigrationCount;
- (void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg1 subDirectoryName:(id)arg2 description:(id)arg3;
- (id)_displayableUuidWithUuid:(id)arg1;
- (id)_firstFilePathWithAnyExtensionAtPath:(id)arg1 extension:(id*)arg2;
- (id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg1;
- (id)_iPhotoToPhotosUuidMapTable;
- (id)_inFlightMigrationMarkerFilePath;
- (void)_incrementInFlightMigrationCount;
- (bool)_isMigrating;
- (id)_migratediPhotoDir;
- (void)_migrateiPhotoLibraryWithProgressHandler:(id /* block */)arg1;
- (void)_migrateiPhotoLibraryWorkerWithProgressHandler:(id /* block */)arg1 iPhotoLibraryDir:(id)arg2;
- (id)_preMigratediPhotoDir;
- (bool)_validateUuid:(id)arg1;
- (void)checkForUnmigratediPhotoContentWithCompletion:(id /* block */)arg1;
- (void)fireMigrationOfiPhotoLibraryWithProgressHandler:(id /* block */)arg1;
- (void)migrateEachPreMigratediPhotoLibrary:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (bool)migrationWasInterrupted;

@end
