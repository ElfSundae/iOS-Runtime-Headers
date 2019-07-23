/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProxyOperation : CKDOperation <CKDOperationInfoDelegate> {
    CKOperationResult * _cachedResult;
    BOOL  _didHandleCancel;
    id /* block */  _operationProgressedBlock;
}

@property (nonatomic, retain) CKOperationResult *cachedResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didHandleCancel;
@property (readonly) unsigned int hash;
@property (getter=isInvalidated, nonatomic, readonly) BOOL invalidated;
@property (nonatomic, copy) id /* block */ operationProgressedBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelOnCallbackQueueIfNecessary;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)cachedResult;
- (BOOL)didHandleCancel;
- (BOOL)isInvalidated;
- (BOOL)isProxyOperation;
- (void)main;
- (id /* block */)operationProgressedBlock;
- (id)operationResult;
- (void)operationWithID:(id)arg1 didComplete:(id)arg2;
- (void)operationWithID:(id)arg1 didProgress:(id)arg2;
- (void)setCachedResult:(id)arg1;
- (void)setDidHandleCancel:(BOOL)arg1;
- (void)setOperationProgressedBlock:(id /* block */)arg1;
- (BOOL)shouldCheckAppVersion;
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;

@end
