/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchNotificationChangesOperation : CKDOperation {
    BOOL  _moreComing;
    id /* block */  _notificationChangedBlock;
    CKServerChangeToken * _previousServerChangeToken;
    CKServerChangeToken * _resultServerChangeToken;
    unsigned int  _resultsLimit;
    BOOL  _wantsChanges;
}

@property (nonatomic) BOOL moreComing;
@property (nonatomic, copy) id /* block */ notificationChangedBlock;
@property (nonatomic, retain) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, retain) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic) BOOL wantsChanges;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangesRequestFinished:(id)arg1;
- (id)activityCreate;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)moreComing;
- (id /* block */)notificationChangedBlock;
- (Class)operationResultClass;
- (id)previousServerChangeToken;
- (id)resultServerChangeToken;
- (unsigned int)resultsLimit;
- (void)setMoreComing:(BOOL)arg1;
- (void)setNotificationChangedBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setWantsChanges:(BOOL)arg1;
- (BOOL)wantsChanges;

@end
