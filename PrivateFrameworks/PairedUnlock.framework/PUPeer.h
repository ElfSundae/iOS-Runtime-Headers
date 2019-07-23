/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@interface PUPeer : NSObject <IDSServiceDelegate> {
    <PUPeerDelegate> *_delegate;
    NSMutableDictionary *_errorHandlers;
    NSObject<OS_dispatch_queue> *_handlerManagementQueue;
    NSObject<OS_dispatch_queue> *_idsQueue;
    PUKeyStore *_keyStore;
    NSMutableDictionary *_responseHandlers;
    IDSService *_service;
    BOOL _unlockEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPeerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *errorHandlers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerManagementQueue;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PUKeyStore *keyStore;
@property (nonatomic, retain) NSMutableDictionary *responseHandlers;
@property (readonly) Class superclass;
@property (getter=isUnlockEnabled, nonatomic) BOOL unlockEnabled;

- (void).cxx_destruct;
- (id)_createAndStoreNewPasscodeWithCurrentPasscode:(id)arg1;
- (void)_notifyPairResult:(BOOL)arg1 error:(id)arg2 handler:(id /* block */)arg3;
- (void)_notifyStateHasPasscode:(BOOL)arg1 isLocked:(BOOL)arg2 isOnlyRemoteUnlock:(BOOL)arg3 reliably:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (id)_retrieveUnlockOnlyPasscode;
- (id)_sendProtobuf:(id)arg1 reliably:(BOOL)arg2 expectsResponse:(BOOL)arg3 responseIdentifier:(id)arg4 error:(id*)arg5;
- (id)_sendRequest:(unsigned short)arg1 data:(id)arg2 reliably:(BOOL)arg3 expectResponse:(BOOL)arg4 handler:(id /* block */)arg5 error:(id*)arg6;
- (void)_sendResponse:(unsigned short)arg1 toRequestID:(id)arg2 data:(id)arg3 error:(id*)arg4;
- (void)_sendResultOfMessage:(unsigned short)arg1 requestID:(id)arg2 success:(BOOL)arg3 error:(id)arg4;
- (id)delegate;
- (void)didCompleteRequest:(id)arg1;
- (void)didGetPasscodeState:(id)arg1;
- (void)didUnlock:(id)arg1;
- (void)disableOnlyRemoteUnlock:(id)arg1;
- (void)disableOnlyRemoteUnlockWithCompletionHandler:(id /* block */)arg1;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)errorHandlerForRequest:(id)arg1;
- (id)errorHandlers;
- (void)getPasscodeState:(id)arg1;
- (void)getRemoteDeviceState:(id /* block */)arg1;
- (id)handlerManagementQueue;
- (id)init;
- (BOOL)isUnlockEnabled;
- (id)keyStore;
- (void)notifyCurrentState;
- (void)notifyThisDeviceDidUnlock;
- (void)pairForUnlockWithPasscode:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeErrorHandlerForRequest:(id)arg1;
- (void)removeLockout:(id)arg1;
- (void)removeResponseHandlerForRequestMessageID:(id)arg1;
- (void)requestRemoteDeviceDisableOnlyRemoteUnlock;
- (void)requestRemoteDevicePasscodeAction:(int)arg1 type:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)requestRemoteDeviceRemoveLockout:(id /* block */)arg1;
- (void)requestRemoteDeviceUnlockNotification;
- (id)responseHandlerForRequestMessageID:(id)arg1;
- (id)responseHandlers;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1 forRequest:(id)arg2;
- (void)setErrorHandlers:(id)arg1;
- (void)setHandlerManagementQueue:(id)arg1;
- (void)setKeyStore:(id)arg1;
- (void)setResponseHandler:(id)arg1 forRequestMessageID:(id)arg2;
- (void)setResponseHandlers:(id)arg1;
- (void)setShouldNotifyNextUnlock:(id)arg1;
- (void)setUnlockEnabled:(BOOL)arg1;
- (void)startPasscodeAction:(id)arg1;
- (void)unpairForUnlockWithCompletionHandler:(id /* block */)arg1;

@end
