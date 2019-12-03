/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (bool)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id*)arg3;
- (bool)addRecord:(id)arg1 isFinal:(bool)arg2 error:(id*)arg3;
- (id)allRecordsIsFinal:(bool)arg1;
- (bool)applyBatch:(id)arg1 isFinal:(bool)arg2 direction:(unsigned long long)arg3 withError:(id*)arg4;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(bool)arg3 withError:(id*)arg4;
- (bool)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)confirmAllRecordsWithError:(id*)arg1;
- (bool)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(bool)arg2 error:(id*)arg3;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)discardStagedChangesWithScopeFilter:(id)arg1 error:(id*)arg2;
- (void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forScopedIdentifier:(id)arg3;
- (bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(bool*)arg2 isStaged:(bool*)arg3;
- (id)recordWithScopedIdentifier:(id)arg1 isFinal:(bool)arg2;
- (id)recordsOfClass:(Class)arg1 isFinal:(bool)arg2;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(bool)arg2;
- (bool)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id*)arg3;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id*)arg3;
- (unsigned long long)scopeType;
- (bool)updateFinalRecord:(id)arg1 confirmed:(bool)arg2 error:(id*)arg3;
- (bool)updateStagedRecord:(id)arg1 error:(id*)arg2;

@end
