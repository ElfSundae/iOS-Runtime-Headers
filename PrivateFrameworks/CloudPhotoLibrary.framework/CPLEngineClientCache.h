/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (id)_relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (BOOL)addRecord:(id)arg1 error:(id*)arg2;
- (BOOL)applyBatch:(id)arg1 withError:(id*)arg2;
- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (BOOL)deleteRecordWithIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)hasRecordWithIdentifier:(id)arg1;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3;
- (id)recordWithIdentifier:(id)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1;
- (id)relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (BOOL)resetWithError:(id*)arg1;
- (id)resourceOfType:(unsigned int)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)updateRecord:(id)arg1 error:(id*)arg2;

@end
