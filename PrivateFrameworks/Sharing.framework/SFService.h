/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL  _activateCalled;
    int  _advertiseRate;
    BOOL  _autoUnlockEnabled;
    BOOL  _autoUnlockWatch;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    id /* block */  _eventMessageHandler;
    BOOL  _hasProblem;
    NSString * _identifier;
    id /* block */  _interruptionHandler;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id /* block */  _invalidationHandler;
    BOOL  _needsKeyboard;
    BOOL  _needsSetup;
    id /* block */  _requestMessageHandler;
    struct NSMutableDictionary { Class x1; } * _requestQueue;
    id /* block */  _responseMessageInternalHandler;
    NSUUID * _serviceUUID;
    BOOL  _supportsAirPlayReceiver;
    BOOL  _wakeDevice;
    BOOL  _watchLocked;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) int advertiseRate;
@property (nonatomic) BOOL autoUnlockEnabled;
@property (nonatomic) BOOL autoUnlockWatch;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ eventMessageHandler;
@property (nonatomic) BOOL hasProblem;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) BOOL needsKeyboard;
@property (nonatomic) BOOL needsSetup;
@property (nonatomic, copy) id /* block */ requestMessageHandler;
@property (nonatomic, copy) id /* block */ responseMessageInternalHandler;
@property (nonatomic, copy) NSUUID *serviceUUID;
@property (nonatomic) BOOL supportsAirPlayReceiver;
@property (nonatomic) BOOL wakeDevice;
@property (nonatomic) BOOL watchLocked;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_performActivateSafeChange:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)advertiseRate;
- (BOOL)autoUnlockEnabled;
- (BOOL)autoUnlockWatch;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)errorHandler;
- (id /* block */)eventMessageHandler;
- (BOOL)hasProblem;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (BOOL)needsKeyboard;
- (BOOL)needsSetup;
- (id /* block */)requestMessageHandler;
- (id /* block */)responseMessageInternalHandler;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)serviceError:(id)arg1;
- (void)serviceReceivedEvent:(id)arg1;
- (void)serviceReceivedRequest:(id)arg1;
- (void)serviceReceivedResponse:(id)arg1;
- (id)serviceUUID;
- (void)setAdvertiseRate:(int)arg1;
- (void)setAutoUnlockEnabled:(BOOL)arg1;
- (void)setAutoUnlockWatch:(BOOL)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setEventMessageHandler:(id /* block */)arg1;
- (void)setHasProblem:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setNeedsKeyboard:(BOOL)arg1;
- (void)setNeedsSetup:(BOOL)arg1;
- (void)setRequestMessageHandler:(id /* block */)arg1;
- (void)setResponseMessageInternalHandler:(id /* block */)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSupportsAirPlayReceiver:(BOOL)arg1;
- (void)setWakeDevice:(BOOL)arg1;
- (void)setWatchLocked:(BOOL)arg1;
- (BOOL)supportsAirPlayReceiver;
- (void)updateWithService:(id)arg1;
- (BOOL)wakeDevice;
- (BOOL)watchLocked;

@end
