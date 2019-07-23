/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource> {
    PLPhotoLibrary * _backgroundQueueObjectFetchingPhotoLibrary;
    PLPhotoLibrary * _backgroundQueuePhotoLibrary;
    PLPhotoLibrary * _changeHandlingPhotoLibrary;
    NSMutableDictionary * _changeNotificationInfo;
    NSMutableDictionary * _changeRequests;
    BOOL  _clearsOIDCacheAfterFetchResultDealloc;
    NSMutableSet * _deletes;
    NSHashTable * _externalObservers;
    NSHashTable * _fetchResults;
    NSMutableSet * _inserts;
    NSHashTable * _internalObservers;
    BOOL  _isChangeProcessingPending;
    double  _lastChangeProcessingStarted;
    PLPhotoLibrary * _mainQueuePhotoLibrary;
    PLPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _saveTokensToKnownUUIDs;
    NSObject<OS_dispatch_queue> * _transactionQueue;
    BOOL  _unknownMergeEvent;
    NSMutableSet * _updates;
}

@property (nonatomic, retain) PLPhotoLibrary *backgroundQueueObjectFetchingPhotoLibrary;
@property (nonatomic, retain) PLPhotoLibrary *backgroundQueuePhotoLibrary;
@property (nonatomic, retain) PLPhotoLibrary *changeHandlingPhotoLibrary;
@property (nonatomic, retain) NSMutableDictionary *changeNotificationInfo;
@property (nonatomic, retain) NSMutableDictionary *changeRequests;
@property (nonatomic) BOOL clearsOIDCacheAfterFetchResultDealloc;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableSet *deletes;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *externalObservers;
@property (nonatomic, retain) NSHashTable *fetchResults;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableSet *inserts;
@property (nonatomic, retain) NSHashTable *internalObservers;
@property (nonatomic) BOOL isChangeProcessingPending;
@property (nonatomic) double lastChangeProcessingStarted;
@property (nonatomic, retain) PLPhotoLibrary *mainQueuePhotoLibrary;
@property (nonatomic, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *saveTokensToKnownUUIDs;
@property (readonly) Class superclass;
@property (nonatomic, retain) <PLPhotoAnalysisServiceTaxonomyResolver> *taxonomyResolver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionQueue;
@property (nonatomic) BOOL unknownMergeEvent;
@property (nonatomic, retain) NSMutableSet *updates;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (Class)PHObjectClassForEntityName:(id)arg1;
+ (Class)PHObjectClassForOID:(id)arg1;
+ (id)_effectiveRootEntity:(id)arg1;
+ (void)_forceUserInterfaceReload;
+ (BOOL)_isInternalObserver:(id)arg1;
+ (int)authorizationStatus;
+ (Class)classForFetchType:(id)arg1;
+ (int)collectionListTypeForIdentifierCode:(id)arg1;
+ (id)fetchTypeForLocalIdentifierCode:(id)arg1;
+ (void)removeAllUniquedOIDs;
+ (void)requestAuthorization:(id /* block */)arg1;
+ (id)sharedPhotoLibrary;
+ (id)uniquedOID:(id)arg1;
+ (id)uniquedOIDs:(id)arg1;
+ (id)uniquedOIDsFromObjects:(id)arg1;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_beginTransaction;
- (void)_cancelTransaction:(id /* block */)arg1;
- (void)_checkForPeopleUIFeatureWithFetchRequest:(id)arg1 comparator:(id /* block */)arg2;
- (void)_commitTransaction:(id /* block */)arg1;
- (void)_processPendingChanges;
- (void)_removeObserver:(id)arg1;
- (void)_requestAnalysisProgressWithCompletion:(id /* block */)arg1;
- (void)_unauthorized:(id /* block */)arg1 error:(id*)arg2;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id*)arg2;
- (void)assertTransaction;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id*)arg2;
- (id)backgroundQueueObjectFetchingPhotoLibrary;
- (id)backgroundQueuePhotoLibrary;
- (id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned int)arg2;
- (id)bfa_photoLibrary;
- (id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned int)arg3;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (id)changeHandlingPhotoLibrary;
- (id)changeNotificationInfo;
- (id)changeRequestForUUID:(id)arg1;
- (id)changeRequests;
- (BOOL)cleanupInvalidIgnoreUntilDatesWithError:(id*)arg1;
- (BOOL)clearsOIDCacheAfterFetchResultDealloc;
- (id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned int)arg2 error:(id*)arg3;
- (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned int)arg2 error:(id*)arg3;
- (id)deletes;
- (void)enableNamingFlow;
- (id)exportGraphForPurpose:(id)arg1 error:(id*)arg2;
- (id)externalObservers;
- (id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2;
- (void)faceProcessingStatusForUserInterface:(id /* block */)arg1;
- (id)faceSuggestionsForFaceClusterSequenceNumbers:(id)arg1 excludeFaceLocalIdentifers:(id)arg2;
- (BOOL)featureEnabledForWorkerType:(short)arg1;
- (BOOL)featureEnabledForWorkerType:(short)arg1 completion:(id /* block */)arg2;
- (id)fetchDictionariesByPHClassForOIDs:(id)arg1 propertyHint:(unsigned int)arg2 includeTrash:(BOOL)arg3;
- (id)fetchPHObjectsForOIDs:(id)arg1;
- (id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned int)arg2 includeTrash:(BOOL)arg3;
- (id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2;
- (id)fetchResults;
- (id)fetchUpdatedObject:(id)arg1;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(id /* block */)arg1;
- (id)graphStatisticsDescription:(id*)arg1;
- (id)graphStatusDescription:(id*)arg1;
- (void)handleMergeNotification:(id)arg1;
- (id)init;
- (id)initSharedLibrary;
- (id)inserts;
- (id)internalObservers;
- (BOOL)invalidatePersistentGraphCachesAndReturnError:(id*)arg1;
- (BOOL)invalidateTransientGraphCachesAndReturnError:(id*)arg1;
- (BOOL)isApplyingRequestedChanges;
- (BOOL)isChangeProcessingPending;
- (BOOL)isNamingFlowEnabled:(id /* block */)arg1;
- (double)lastChangeProcessingStarted;
- (id)mainQueueManagedObjectContext;
- (id)mainQueuePhotoLibrary;
- (id)managedObjectContext;
- (id)managedObjectContextForCurrentQueueQoS;
- (BOOL)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id*)arg2;
- (id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned int)arg2 error:(id*)arg3;
- (id)objectFetchingContextForCurrentQueueQoS;
- (id)objectFetchingManagedObjectContextForObject:(id)arg1 propertySet:(id)arg2;
- (void)performCancellableChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)performCancellableChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (void)performChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)performChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (id)photoLibrary;
- (id)photoLibraryForCurrentQueueQoS;
- (id)pl_syncProgressAlbums;
- (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(BOOL)arg3;
- (id)queue;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)registerAvailabilityObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)registerFetchResult:(id)arg1;
- (void)registerUUID:(id)arg1 forSaveToken:(id)arg2;
- (id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned int)arg3 relatedType:(unsigned int)arg4 error:(id*)arg5;
- (id)relatedDebugInformationBetweenMomentForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned int)arg3 relatedType:(unsigned int)arg4 error:(id*)arg5;
- (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2;
- (id)removeUuidForSaveToken:(id)arg1;
- (void)requestAnalysisProgressCountsWithCompletion:(id /* block */)arg1;
- (void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(id /* block */)arg1;
- (void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestGraphRebuildProgressWithCompletion:(id /* block */)arg1;
- (void)requestGraphRebuildWithProgress:(id)arg1 completion:(id /* block */)arg2;
- (void)requestPermissionToDownloadFaceResourcesOfCount:(unsigned int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(id /* block */)arg3;
- (void)requestTotalProgressCountsWithCompletion:(id /* block */)arg1;
- (BOOL)resetPendingAnalysisStatesWithError:(id*)arg1;
- (id)saveTokensToKnownUUIDs;
- (BOOL)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (void)setBackgroundQueueObjectFetchingPhotoLibrary:(id)arg1;
- (void)setBackgroundQueuePhotoLibrary:(id)arg1;
- (void)setChangeHandlingPhotoLibrary:(id)arg1;
- (void)setChangeNotificationInfo:(id)arg1;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (void)setChangeRequests:(id)arg1;
- (void)setClearsOIDCacheAfterFetchResultDealloc:(BOOL)arg1;
- (void)setDeletes:(id)arg1;
- (void)setExternalObservers:(id)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setInserts:(id)arg1;
- (void)setInternalObservers:(id)arg1;
- (void)setIsChangeProcessingPending:(BOOL)arg1;
- (void)setLastChangeProcessingStarted:(double)arg1;
- (void)setMainQueuePhotoLibrary:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSaveTokensToKnownUUIDs:(id)arg1;
- (void)setTaxonomyResolver:(id)arg1;
- (void)setTransactionQueue:(id)arg1;
- (void)setUnknownMergeEvent:(BOOL)arg1;
- (void)setUpdates:(id)arg1;
- (id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id*)arg2;
- (id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id*)arg2;
- (id)taxonomyResolver;
- (id)transactionContext;
- (id)transactionPLPhotoLibrary;
- (id)transactionQueue;
- (BOOL)unknownMergeEvent;
- (void)unregisterAvailabilityObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)unregisterFetchResult:(id)arg1;
- (void)updateClusterUsabilityCriteria;
- (id)updates;
- (id)urlForApplicationDataFolderIdentifier:(int)arg1;
- (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned int)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph

- (id)pg_urlForGraphApplicationData;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

+ (id)prohibitedSharedPhotoLibrary;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_appPhotoLibrary;

- (id)px_beginPausingChangesWithTimeout:(double)arg1;
- (id)px_changeDistributor;
- (void)px_endPausingChanges:(id)arg1;
- (void)px_registerChangeObserver:(id)arg1;
- (void)px_unregisterChangeObserver:(id)arg1;

@end
