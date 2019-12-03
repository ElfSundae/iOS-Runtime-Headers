/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPRecordStorageHelper : NSObject {
    NSString * _clusterIdentifierColumn;
    PPDKStorage * _duetStorage;
    _DKEventStream * _duetStream;
    NSString * _lastDuetDeletionDateKey;
    NSString * _lastDuetImportDateKey;
    unsigned int  _maxRecords;
    NSString * _table;
}

- (void).cxx_destruct;
- (void)_addEventsSourcedOnLastImportDateToSet:(id)arg1 lastDKImportDate:(id*)arg2 txnWitness:(id)arg3;
- (void)_cleanDatabaseOfEventsWithUUIDs:(id)arg1 txnWitness:(id)arg2;
- (void)_deleteAllRemotelyGeneratedRecordsMissingInDuetFromDatabase:(id)arg1 withClient:(unsigned char)arg2 tempTableName:(id)arg3;
- (void)_deleteDKEventsWithRowIdQuery:(id)arg1 txnWitness:(id)arg2;
- (void)_deleteRecordsWithRowIdsFromQuery:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 bind:(id /* block */)arg5;
- (id)_importDuetEventBatch:(id)arg1 lastDKImportDate:(id)arg2 isComplete:(bool*)arg3 eventImportBlock:(id /* block */)arg4 txnWitness:(id)arg5;
- (id)_lastDeletionDateWithTransaction:(id)arg1;
- (struct _PASDBIterAction_ { bool x1; })_processRowForDeletionWithStatement:(id)arg1 handle:(id)arg2;
- (void)_processTombstoneEventBatch:(id)arg1 database:(id)arg2 client:(unsigned char)arg3 lastTombstoneDate:(id*)arg4;
- (id)blobFromUUID:(id)arg1;
- (bool)clearWithDatabase:(id)arg1 client:(unsigned char)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 clearExternalTableReferences:(id /* block */)arg5;
- (id)createTempRowIdTableForRecordsOlderThanDate:(id)arg1 txnWitness:(id)arg2;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2;
- (id)createTempRowIdTableForRecordsToDropMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (id)createTempTableContainingRowsFromQuery:(id)arg1 descriptiveTableName:(id)arg2 txnWitness:(id)arg3 bind:(id /* block */)arg4;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned int)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(bool*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned int)arg4 txnWitness:(id)arg5 atLeastOneRecordClusterRemoved:(bool*)arg6 deletedCount:(unsigned long long*)arg7 error:(id*)arg8;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(bool*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned int)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(bool*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllRecordsWithClusterIdentifier:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllRecordsWithClusterIdentifier:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (void)deleteAllRemotelyGeneratedRecordsMissingInDuetFromDatabase:(id)arg1 withClient:(unsigned char)arg2;
- (void)deleteRecordsWithRowIdsFromTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4;
- (void)disableSyncForBundleIds:(id)arg1 txnWitness:(id)arg2;
- (id /* block */)duetEventDeletionProcessingBlockWithDatabase:(id)arg1 client:(unsigned char)arg2;
- (void)fixupDKEventsWithDatabase:(id)arg1 fixup49995922Table:(id)arg2 batchSize:(unsigned int)arg3 createRecordWithStatement:(id /* block */)arg4 eventForRecord:(id /* block */)arg5 isComplete:(bool*)arg6;
- (void)importDuetEventsWithLimit:(unsigned int)arg1 database:(id)arg2 client:(unsigned char)arg3 remoteEventsOnly:(bool)arg4 isComplete:(bool*)arg5 eventImportBlock:(id /* block */)arg6;
- (id)init;
- (id)initWithName:(id)arg1 table:(id)arg2 clusterIdentifierColumn:(id)arg3 maxRecords:(unsigned int)arg4 duetStorage:(id)arg5 duetStream:(id)arg6;
- (void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (id)uuidForStatement:(id)arg1 referencingBlobInColumn:(int)arg2;

@end
