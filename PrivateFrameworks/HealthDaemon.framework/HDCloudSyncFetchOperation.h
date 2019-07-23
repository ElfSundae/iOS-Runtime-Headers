/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncFetchOperation : NSObject <NSProgressReporting> {
    NSSet * _allContainers;
    NSSet * _allOwnerIdentifiers;
    NSString * _cloudKitIdentifier;
    id /* block */  _completion;
    HDCloudSyncOperationConfiguration * _configuration;
    NSUUID * _operationIdentifier;
    NSMutableArray * _pendingFetchRecordZonesOperations;
    NSMutableArray * _pendingFetchRecordsOperations;
    HDCloudSyncZone * _primaryPushZone;
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasStarted;
    NSDate * _startTime;
    double  _timeIntervalBeforeOwnershipTransfer;
    NSMutableDictionary * _zonesByIdentifier;
    NSMutableArray * _zonesPendingDeletion;
    NSMutableArray * _zonesPendingPushSequenceValidation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canIgnorePartialFailureError:(id)arg1 error:(id*)arg2;
- (void)_deleteRecordZones:(id)arg1 container:(id)arg2;
- (void)_deleteRecordZonesWithLostManateeIdentitiesForPartialError:(id)arg1 container:(id)arg2;
- (id)_fetchRecordsOperationForZones:(id)arg1 container:(id)arg2;
- (bool)_isValidChangeRecord:(id)arg1 forStoreRecord:(id)arg2;
- (bool)_orderedChangeRecordSequenceRequiresRebase:(id)arg1;
- (void)_persistState:(id)arg1 syncStore:(id)arg2;
- (long long)_queue_checkForExpiredEmptyZonesWithStore:(id)arg1 pushZone:(id)arg2 state:(id)arg3 error:(id*)arg4;
- (void)_queue_checkForHeaderRecordFetchCompletion;
- (void)_queue_checkForHeaderValidationCompletion;
- (bool)_queue_checkForOrphanedSequenceRecords;
- (long long)_queue_checkForOwnershipLoss;
- (long long)_queue_checkForOwnershipTakeover;
- (void)_queue_checkForZoneFetchCompletion;
- (void)_queue_fetchHeaderRecords;
- (void)_queue_fetchHeaderRecordsByZoneForZoneIDs:(id)arg1 container:(id)arg2;
- (void)_queue_fetchSyncZones;
- (id)_queue_findAbandonedZones;
- (long long)_queue_findPushZonesWithError:(id*)arg1;
- (void)_queue_finishWithStatus:(long long)arg1 error:(id)arg2;
- (void)_queue_garbageCollectZones;
- (bool)_queue_hasFinished;
- (void)_queue_markOwnedZonesAsSeized;
- (void)_queue_performCleanupAndFinishFetch;
- (long long)_queue_processFetchedRecord:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (long long)_queue_processFetchedRecord:(id)arg1 recordClass:(Class)arg2 zone:(id)arg3 error:(id*)arg4;
- (void)_queue_processFetchedRecords:(id)arg1 container:(id)arg2;
- (long long)_queue_requestOwnershipChangeWithReason:(id)arg1 error:(id*)arg2;
- (void)_queue_scheduleZoneForDeletion:(id)arg1;
- (void)_queue_startHeaderRecordFetchForContainer:(id)arg1;
- (void)_queue_startHeaderRecordFetchForZoneIDs:(id)arg1 container:(id)arg2;
- (void)_queue_startZoneFetchForContainer:(id)arg1;
- (long long)_queue_validateAnchorRangesForPushZone:(id)arg1 error:(id*)arg2;
- (long long)_queue_validateAnchorRangesForPushZone:(id)arg1 sequenceRecord:(id)arg2 error:(id*)arg3;
- (void)_queue_validateFetchedZones;
- (long long)_queue_validatePushZone:(id)arg1 inContainer:(id)arg2 error:(id*)arg3;
- (long long)_queue_validateStoreRecordForPushZone:(id)arg1 error:(id*)arg2;
- (void)_queue_verifySequenceForPushZone:(id)arg1 container:(id)arg2 store:(id)arg3;
- (id)_queue_zoneForIdentifier:(id)arg1;
- (id)_queue_zoneForIdentifier:(id)arg1 container:(id)arg2;
- (long long)_typeForZoneIdentifier:(id)arg1;
- (void)_verifySequenceForPushStore:(id)arg1 inContainer:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithConfiguration:(id)arg1;
- (id)progress;
- (void)startWithCompletion:(id /* block */)arg1;

@end
