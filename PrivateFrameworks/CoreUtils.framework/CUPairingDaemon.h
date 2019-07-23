/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned long long  _stateHandle;
    BOOL  _testMode;
    struct NSMutableSet { Class x1; } * _xpcConnections;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) BOOL testMode;

- (void).cxx_destruct;
- (void)_activate;
- (void)_connectionInvalidated:(id)arg1;
- (id)_copyIdentityWithOptions:(unsigned int)arg1 error:(int*)arg2;
- (id)_copyOrCreateIdentityWithOptions:(unsigned int)arg1 error:(int*)arg2;
- (long)_deleteIdentityWithOptions:(unsigned int)arg1;
- (id)_findPairedPeer:(id)arg1 options:(unsigned int)arg2 error:(int*)arg3;
- (id)_getPairedPeersWithOptions:(unsigned int)arg1 error:(int*)arg2;
- (void)_invalidate;
- (long)_removePairedPeer:(id)arg1 options:(unsigned int)arg2;
- (long)_saveIdentity:(id)arg1 options:(unsigned int)arg2;
- (long)_savePairedPeer:(id)arg1 options:(unsigned int)arg2;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)_stateDump;
- (void)activate;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)reset;
- (void)setDispatchQueue:(id)arg1;
- (void)setTestMode:(BOOL)arg1;
- (id)testListenerEndpoint;
- (BOOL)testMode;

@end
