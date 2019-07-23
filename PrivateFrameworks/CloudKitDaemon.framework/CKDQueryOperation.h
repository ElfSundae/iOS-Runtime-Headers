/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueryOperation : CKDDatabaseOperation <CKDOperationPipelining> {
    CKQueryCursor * _cursor;
    NSSet * _desiredKeySet;
    BOOL  _fetchAllResults;
    NSObject<OS_dispatch_group> * _fetchRecordsGroup;
    BOOL  _hasCalledQueryCursorUpdatedBlock;
    unsigned int  _numRequestsSent;
    CKQuery * _query;
    id /* block */  _queryCursorUpdatedBlock;
    id /* block */  _recordFetchedBlock;
    CKDRecordFetchAggregator * _recordFetcher;
    NSMutableArray * _requestInfos;
    CKQueryCursor * _resultsCursor;
    unsigned int  _resultsLimit;
    BOOL  _shouldFetchAssetContent;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) CKQueryCursor *cursor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *desiredKeySet;
@property (nonatomic) BOOL fetchAllResults;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) BOOL hasCalledQueryCursorUpdatedBlock;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int numRequestsSent;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (nonatomic, readonly) CKQuery *query;
@property (nonatomic, copy) id /* block */ queryCursorUpdatedBlock;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, retain) CKDRecordFetchAggregator *recordFetcher;
@property (nonatomic, retain) NSMutableArray *requestInfos;
@property (nonatomic, retain) CKQueryCursor *resultsCursor;
@property (nonatomic, readonly) unsigned int resultsLimit;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleQueryRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_handleRecordResponse:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (void)_sendQueryRequestWithCursor:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (id)activityCreate;
- (id)cursor;
- (id)desiredKeySet;
- (BOOL)fetchAllResults;
- (id)fetchRecordsGroup;
- (void)fillOutOperationResult:(id)arg1;
- (BOOL)hasCalledQueryCursorUpdatedBlock;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (unsigned int)numRequestsSent;
- (Class)operationResultClass;
- (id)pipeliningDescription;
- (id)query;
- (id /* block */)queryCursorUpdatedBlock;
- (id /* block */)recordFetchedBlock;
- (id)recordFetcher;
- (id)requestInfos;
- (id)resultsCursor;
- (unsigned int)resultsLimit;
- (void)setDesiredKeySet:(id)arg1;
- (void)setFetchAllResults:(BOOL)arg1;
- (void)setFetchRecordsGroup:(id)arg1;
- (void)setHasCalledQueryCursorUpdatedBlock:(BOOL)arg1;
- (void)setNumRequestsSent:(unsigned int)arg1;
- (void)setQueryCursorUpdatedBlock:(id /* block */)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setRecordFetcher:(id)arg1;
- (void)setRequestInfos:(id)arg1;
- (void)setResultsCursor:(id)arg1;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (void)setZoneID:(id)arg1;
- (BOOL)shouldFetchAssetContent;
- (id)zoneID;

@end
