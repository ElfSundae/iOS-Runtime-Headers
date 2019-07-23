/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardSlotEngine : NSObject <NSXPCListenerDelegate, TKProtocolSmartCardSlot> {
    BOOL  _apduSentSinceLastReset;
    TKSmartCardATR * _atr;
    NSHashTable * _clients;
    <TKSmartCardSlotDelegate> * _delegate;
    NSArray * _forProcesses;
    BOOL  _idlePowerDownPending;
    unsigned int  _lastId;
    NSXPCListener * _listener;
    struct __asl_object_s { } * _log;
    int  _maxInputLength;
    int  _maxOutputLength;
    NSString * _name;
    TKPowerMonitor * _powerMonitor;
    NSMutableArray * _powerRequests;
    int  _powerState;
    int  _previousState;
    unsigned int  _protocol;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _registrationConnection;
    NSMapTable * _reservations;
    BOOL  _securePINChangeSupported;
    BOOL  _securePINVerificationSupported;
    TKSmartCardSessionEngine * _session;
    NSMutableArray * _sessionRequests;
    int  _state;
}

@property BOOL apduSentSinceLastReset;
@property (readonly, copy) NSString *debugDescription;
@property <TKSmartCardSlotDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *forProcesses;
@property (readonly) unsigned int hash;
@property int maxInputLength;
@property int maxOutputLength;
@property (readonly) NSString *name;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL securePINChangeSupported;
@property BOOL securePINVerificationSupported;
@property TKSmartCardSessionEngine *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_findReservation:(id)arg1 connection:(id)arg2;
- (id)_getReservationId;
- (void)_setupWithName:(id)arg1 delegate:(id)arg2 firstPass:(bool)arg3 reply:(id /* block */)arg4;
- (BOOL)apduSentSinceLastReset;
- (void)cardPresent:(BOOL)arg1;
- (void)changeStateTo:(int)arg1 powerState:(int)arg2;
- (void)connectCardSessionWithParameters:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dictionaryForState:(int)arg1;
- (id)forProcesses;
- (void)getAttrib:(unsigned long)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)leaveSession:(id)arg1 reply:(id /* block */)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)logMessage:(id)arg1 bytes:(id)arg2;
- (int)maxInputLength;
- (int)maxOutputLength;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)powerDownWithEject:(BOOL)arg1 reply:(id /* block */)arg2;
- (void)powerRequestFinished;
- (id)queue;
- (void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(BOOL)arg3 reply:(id /* block */)arg4;
- (void)resetWithReply:(id /* block */)arg1;
- (void)runUserInteraction:(id)arg1 reply:(id /* block */)arg2;
- (void)scheduleIdlePowerDown;
- (void)schedulePowerRequest:(id /* block */)arg1;
- (BOOL)securePINChangeSupported;
- (BOOL)securePINVerificationSupported;
- (void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned long)arg3 reply:(id /* block */)arg4;
- (id)session;
- (void)sessionWithParameters:(id)arg1 reply:(id /* block */)arg2;
- (void)setApduSentSinceLastReset:(BOOL)arg1;
- (void)setAttrib:(unsigned long)arg1 data:(id)arg2 reply:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setForProcesses:(id)arg1;
- (void)setMaxInputLength:(int)arg1;
- (void)setMaxOutputLength:(int)arg1;
- (void)setProtocol:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)setQueue:(id)arg1;
- (void)setSecurePINChangeSupported:(BOOL)arg1;
- (void)setSecurePINVerificationSupported:(BOOL)arg1;
- (void)setSession:(id)arg1;
- (void)setupSlotWithReply:(id /* block */)arg1;
- (void)setupWithName:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;
- (void)terminate;

@end
