/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncRapportContextStorage : _DKSyncRapportStorage <_DKSyncRemoteContextStorage> {
    <_DKSyncRemoteContextStorageDelegate> * _delegate;
}

@property (nonatomic, retain) <_DKSyncRemoteContextStorageDelegate> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)fetchContextValuesFromPeer:(id)arg1 forKeyPaths:(id)arg2 highPriority:(bool)arg3 completion:(id /* block */)arg4;
- (void)handleFetchContextValuesWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleFetchContextValuesWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(id /* block */)arg6;
- (void)handleSendContextValuesWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleSendContextValuesWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(id /* block */)arg6;
- (void)handleSubscribeToContextValueChangeNotificationsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleSubscribeToContextValueChangeNotificationsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(id /* block */)arg6;
- (void)handleUnsubscribeToContextValueChangeNotificationsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleUnsubscribeToContextValueChangeNotificationsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(id /* block */)arg6;
- (void)registerRequestIDsWithClient:(id)arg1;
- (void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 archivedObjects:(id)arg3 highPriority:(bool)arg4 completion:(id /* block */)arg5;
- (void)setDelegate:(id)arg1;
- (void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(bool)arg4 completion:(id /* block */)arg5;
- (void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(bool)arg4 completion:(id /* block */)arg5;

@end
