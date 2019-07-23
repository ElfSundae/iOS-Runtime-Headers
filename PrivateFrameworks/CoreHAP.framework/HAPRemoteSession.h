/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRemoteSession : NSObject {
    unsigned char _cipherReadKey;
    unsigned char _cipherReadNonce;
    unsigned char _cipherWriteKey;
    unsigned char _cipherWriteNonce;
    unsigned long long _clientIdleTimeoutNanos;
    BOOL _commitResponded;
    unsigned long long _commitTimeoutNanos;
    id /* block */ _findPeerHandler;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id /* block */ _internalRequestHandler;
    const char *_label;
    unsigned char _pairVerifyDone;
    struct PairingSessionPrivate { } *_pairVerifySession;
    NSMutableDictionary *_prepareRequests;
    BOOL _prepareResponded;
    id /* block */ _requestHandler;
    unsigned long long _sendInternalTimeoutNanos;
    unsigned long long _sendUserTimeoutNanos;
    unsigned long long _serverIdleTimeoutNanos;
    NSString *_sessionID;
    BOOL _started;
    int _state;
    id /* block */ _stoppedHandler;
    NSMutableDictionary *_transactions;
    id /* block */ _transportSendMessage;
    int _type;
    NSObject<OS_dispatch_queue> *_userQueue;
    NSMutableArray *_userTransactions;
}

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy) id /* block */ findPeerHandler;
@property (copy) id /* block */ internalRequestHandler;
@property (copy) id /* block */ requestHandler;
@property (copy) id /* block */ stoppedHandler;
@property (copy) id /* block */ transportSendMessage;

- (void).cxx_destruct;
- (long)_clientHandleCommitResponse:(id)arg1;
- (long)_clientHandlePrepareResponse:(id)arg1;
- (long)_clientPairVerifyExchange:(id)arg1;
- (void)_clientRunStateMachine;
- (long)_clientSendCommitRequest:(id)arg1;
- (long)_clientSendPrepareRequest:(id)arg1;
- (void)_completeTransaction:(id)arg1 response:(id)arg2 status:(long)arg3;
- (void)_completeUserTransaction:(id)arg1 response:(id)arg2 status:(long)arg3;
- (void)_runStateMachine;
- (void)_sendRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_sendUserRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_serverCompletePrepareRequest:(id)arg1;
- (long)_serverHandleCommitRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (long)_serverHandleDecryptedRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_serverHandleEncryptedRequest:(id)arg1;
- (long)_serverHandlePrepareRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_serverPairVerifyExchange:(id)arg1;
- (void)_serverRunStateMachine;
- (long)_setupEncryption;
- (void)_start;
- (void)_stop:(long)arg1;
- (void)_transportReceivedMessage:(id)arg1;
- (long)_updateIdleTimer;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)findPeerHandler;
- (id)init;
- (id)initWithType:(int)arg1 commitTimeout:(unsigned long long)arg2 clientIdleTimeout:(unsigned long long)arg3 serverIdleTimeout:(unsigned long long)arg4 sendInternalTimeout:(unsigned long long)arg5 sendUserTimeout:(unsigned long long)arg6;
- (id /* block */)internalRequestHandler;
- (id /* block */)requestHandler;
- (void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setFindPeerHandler:(id /* block */)arg1;
- (void)setInternalRequestHandler:(id /* block */)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (void)setStoppedHandler:(id /* block */)arg1;
- (void)setTransportSendMessage:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (id /* block */)stoppedHandler;
- (void)transportReceivedMessage:(id)arg1;
- (id /* block */)transportSendMessage;

@end
