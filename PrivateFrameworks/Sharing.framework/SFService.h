/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface> {
    bool  _activateCalled;
    bool  _activateCompleted;
    bool  _activateInProgress;
    long long  _advertiseRate;
    NSData * _authTagOverride;
    bool  _autoUnlockEnabled;
    bool  _autoUnlockWatch;
    unsigned char  _deviceActionType;
    unsigned char  _deviceClassCode;
    unsigned char  _deviceColorCode;
    unsigned char  _deviceModelCode;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _duetSync;
    id /* block */  _errorHandler;
    id /* block */  _eventMessageHandler;
    NSString * _fixedPIN;
    bool  _hasProblem;
    id /* block */  _hidePINHandler;
    NSString * _identifier;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSString * _myAppleID;
    CUAppleIDClient * _myAppleIDInfoClient;
    bool  _needsAWDL;
    bool  _needsKeyboard;
    bool  _needsSetup;
    bool  _overrideScreenOff;
    NSDictionary * _pairSetupACL;
    id /* block */  _pairSetupCompletionHandler;
    bool  _pairSetupDisabled;
    NSDictionary * _pairVerifyACL;
    NSString * _peerAppleID;
    id /* block */  _peerDisconnectedHandler;
    unsigned int  _pinType;
    unsigned long long  _problemFlags;
    id /* block */  _receivedFramePeerHandler;
    id /* block */  _receivedObjectHandler;
    id /* block */  _receivedRequestHandler;
    id /* block */  _requestMessageHandler;
    struct NSMutableDictionary { Class x1; } * _requestQueue;
    NSString * _requestSSID;
    id /* block */  _responseMessageInternalHandler;
    id /* block */  _sendFramePeerHandler;
    unsigned char  _serviceType;
    NSUUID * _serviceUUID;
    id /* block */  _sessionEndedHandler;
    unsigned int  _sessionFlags;
    id /* block */  _sessionSecuredHandler;
    id /* block */  _sessionStartedHandler;
    struct NSMutableDictionary { Class x1; } * _sessions;
    id /* block */  _showPINHandler;
    id /* block */  _showPINHandlerEx;
    bool  _supportsAirPlayReceiver;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    bool  _touchRemoteEnabled;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucatCore;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucatCrypto;
    bool  _wakeDevice;
    bool  _watchLocked;
    bool  _wifiP2P;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) long long advertiseRate;
@property (nonatomic, copy) NSData *authTagOverride;
@property (nonatomic) bool autoUnlockEnabled;
@property (nonatomic) bool autoUnlockWatch;
@property (nonatomic) unsigned char deviceActionType;
@property (nonatomic) unsigned char deviceClassCode;
@property (nonatomic) unsigned char deviceColorCode;
@property (nonatomic) unsigned char deviceModelCode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool duetSync;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ eventMessageHandler;
@property (nonatomic, copy) NSString *fixedPIN;
@property (nonatomic) bool hasProblem;
@property (nonatomic, copy) id /* block */ hidePINHandler;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *myAppleID;
@property (nonatomic, retain) CUAppleIDClient *myAppleIDInfoClient;
@property (nonatomic) bool needsAWDL;
@property (nonatomic) bool needsKeyboard;
@property (nonatomic) bool needsSetup;
@property (nonatomic) bool overrideScreenOff;
@property (nonatomic, copy) NSDictionary *pairSetupACL;
@property (nonatomic, copy) id /* block */ pairSetupCompletionHandler;
@property (nonatomic) bool pairSetupDisabled;
@property (nonatomic, copy) NSDictionary *pairVerifyACL;
@property (nonatomic, copy) NSString *peerAppleID;
@property (nonatomic, copy) id /* block */ peerDisconnectedHandler;
@property (nonatomic) unsigned int pinType;
@property (nonatomic) unsigned long long problemFlags;
@property (nonatomic, copy) id /* block */ receivedFramePeerHandler;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;
@property (nonatomic, copy) id /* block */ receivedRequestHandler;
@property (nonatomic, copy) id /* block */ requestMessageHandler;
@property (nonatomic, copy) NSString *requestSSID;
@property (nonatomic, copy) id /* block */ responseMessageInternalHandler;
@property (nonatomic, copy) id /* block */ sendFramePeerHandler;
@property (nonatomic) unsigned char serviceType;
@property (nonatomic, copy) NSUUID *serviceUUID;
@property (nonatomic, copy) id /* block */ sessionEndedHandler;
@property (nonatomic) unsigned int sessionFlags;
@property (nonatomic, copy) id /* block */ sessionSecuredHandler;
@property (nonatomic, copy) id /* block */ sessionStartedHandler;
@property (nonatomic, copy) id /* block */ showPINHandler;
@property (nonatomic, copy) id /* block */ showPINHandlerEx;
@property (nonatomic) bool supportsAirPlayReceiver;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) bool touchRemoteEnabled;
@property (nonatomic) bool wakeDevice;
@property (nonatomic) bool watchLocked;
@property (nonatomic) bool wifiP2P;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_activated;
- (void)_cleanup;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_performActivateSafeChange:(id /* block */)arg1;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 unencryptedObject:(id)arg3;
- (void)activateWithCompletion:(id /* block */)arg1;
- (long long)advertiseRate;
- (id)authTagOverride;
- (bool)autoUnlockEnabled;
- (bool)autoUnlockWatch;
- (void)clearEncryptionInfoForPeer:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned char)deviceActionType;
- (unsigned char)deviceClassCode;
- (unsigned char)deviceColorCode;
- (unsigned char)deviceModelCode;
- (id)dispatchQueue;
- (bool)duetSync;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)errorHandler;
- (id /* block */)eventMessageHandler;
- (id)fixedPIN;
- (bool)hasProblem;
- (id /* block */)hidePINHandler;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)myAppleID;
- (id)myAppleIDInfoClient;
- (bool)needsAWDL;
- (bool)needsKeyboard;
- (bool)needsSetup;
- (bool)overrideScreenOff;
- (id)pairSetupACL;
- (id /* block */)pairSetupCompletionHandler;
- (bool)pairSetupDisabled;
- (id)pairVerifyACL;
- (id)peerAppleID;
- (id /* block */)peerDisconnectedHandler;
- (unsigned int)pinType;
- (unsigned long long)problemFlags;
- (id /* block */)receivedFramePeerHandler;
- (id /* block */)receivedObjectHandler;
- (id /* block */)receivedRequestHandler;
- (id /* block */)requestMessageHandler;
- (id)requestSSID;
- (id /* block */)responseMessageInternalHandler;
- (void)sendEvent:(id)arg1;
- (id /* block */)sendFramePeerHandler;
- (void)sendRequest:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)sendToPeer:(id)arg1 flags:(unsigned int)arg2 object:(id)arg3;
- (void)sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (void)serviceError:(id)arg1;
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;
- (void)serviceReceivedEvent:(id)arg1;
- (void)serviceReceivedFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;
- (void)serviceReceivedRequest:(id)arg1;
- (void)serviceReceivedResponse:(id)arg1;
- (void)serviceSessionFailed:(id)arg1 error:(id)arg2;
- (unsigned char)serviceType;
- (id)serviceUUID;
- (id /* block */)sessionEndedHandler;
- (unsigned int)sessionFlags;
- (id /* block */)sessionSecuredHandler;
- (id /* block */)sessionStartedHandler;
- (void)setAdvertiseRate:(long long)arg1;
- (void)setAuthTagOverride:(id)arg1;
- (void)setAutoUnlockEnabled:(bool)arg1;
- (void)setAutoUnlockWatch:(bool)arg1;
- (void)setDeviceActionType:(unsigned char)arg1;
- (void)setDeviceClassCode:(unsigned char)arg1;
- (void)setDeviceColorCode:(unsigned char)arg1;
- (void)setDeviceModelCode:(unsigned char)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDuetSync:(bool)arg1;
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4 peer:(id)arg5;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setEventMessageHandler:(id /* block */)arg1;
- (void)setFixedPIN:(id)arg1;
- (void)setHasProblem:(bool)arg1;
- (void)setHidePINHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setMyAppleID:(id)arg1;
- (void)setMyAppleIDInfoClient:(id)arg1;
- (void)setNeedsAWDL:(bool)arg1;
- (void)setNeedsKeyboard:(bool)arg1;
- (void)setNeedsSetup:(bool)arg1;
- (void)setOverrideScreenOff:(bool)arg1;
- (void)setPairSetupACL:(id)arg1;
- (void)setPairSetupCompletionHandler:(id /* block */)arg1;
- (void)setPairSetupDisabled:(bool)arg1;
- (void)setPairVerifyACL:(id)arg1;
- (void)setPeerAppleID:(id)arg1;
- (void)setPeerDisconnectedHandler:(id /* block */)arg1;
- (void)setPinType:(unsigned int)arg1;
- (void)setProblemFlags:(unsigned long long)arg1;
- (void)setReceivedFramePeerHandler:(id /* block */)arg1;
- (void)setReceivedObjectHandler:(id /* block */)arg1;
- (void)setReceivedRequestHandler:(id /* block */)arg1;
- (void)setRequestMessageHandler:(id /* block */)arg1;
- (void)setRequestSSID:(id)arg1;
- (void)setResponseMessageInternalHandler:(id /* block */)arg1;
- (void)setSendFramePeerHandler:(id /* block */)arg1;
- (void)setServiceType:(unsigned char)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSessionEndedHandler:(id /* block */)arg1;
- (void)setSessionFlags:(unsigned int)arg1;
- (void)setSessionSecuredHandler:(id /* block */)arg1;
- (void)setSessionStartedHandler:(id /* block */)arg1;
- (void)setShowPINHandler:(id /* block */)arg1;
- (void)setShowPINHandlerEx:(id /* block */)arg1;
- (void)setSupportsAirPlayReceiver:(bool)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (void)setTouchRemoteEnabled:(bool)arg1;
- (void)setWakeDevice:(bool)arg1;
- (void)setWatchLocked:(bool)arg1;
- (void)setWifiP2P:(bool)arg1;
- (id /* block */)showPINHandler;
- (id /* block */)showPINHandlerEx;
- (bool)supportsAirPlayReceiver;
- (id)testListenerEndpoint;
- (bool)touchRemoteEnabled;
- (void)updateWithService:(id)arg1;
- (bool)wakeDevice;
- (bool)watchLocked;
- (bool)wifiP2P;

@end
