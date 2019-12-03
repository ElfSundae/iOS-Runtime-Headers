/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJournalManager : PLJournalManagerCore {
    NSPersistentHistoryToken * _currentHistoryToken;
    int  _notifyToken;
    PLPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_group> * _startupWaitGroup;
    unsigned short  _state;
    PLPhotoLibrary * _transientPhotoLibrary;
}

+ (bool)assetJournalExists:(id)arg1;
+ (id)entriesByPayloadClassIDFromHistoryToken:(id)arg1 currentHistoryToken:(id*)arg2 withManagedObjectContext:(id)arg3 payloadIDsToSkipInserts:(id)arg4;
+ (bool)existingJournalsCompatibleForRebuild:(id)arg1 error:(id*)arg2;
+ (Class)payloadClassForAdditionalEntityName:(id)arg1;
+ (id)payloadClasses;

- (void).cxx_destruct;
- (bool)_appendEntriesByPayloadClassID:(id)arg1 withCurrentHistoryToken:(id)arg2;
- (id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (bool)_coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2;
- (bool)_createSnapshotsForceFull:(bool)arg1 error:(id*)arg2;
- (void)_handleChangeHubNotification;
- (void)_loadHistoryToken;
- (bool)_needFullSnapshot;
- (bool)_needPartialSnapshot:(id)arg1;
- (bool)_needSnapshot;
- (void)_recreateAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)_recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (unsigned int)_registerToChangeHubNotification;
- (void)_removeLegacyPersistedMetadataIfNecessary;
- (bool)_replayFromCurrentHistoryToken;
- (bool)_replayFromCurrentHistoryTokenWithPayloadIDsToSkipInserts:(id)arg1;
- (void)_start;
- (void)_startAfterRebuild;
- (id)_transientPhotoLibrary;
- (void)_unregisterToChangeHubNotification;
- (id)assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(id /* block */)arg3;
- (bool)forceFullSnapshot:(id*)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)notifyDidImportFileSystemAssets;
- (void)notifyWillImportFileSystemAssets;
- (void)recreateAllObjectsInManagedObjectContext:(id)arg1;
- (void)recreateAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)start;
- (void)stop;

@end
