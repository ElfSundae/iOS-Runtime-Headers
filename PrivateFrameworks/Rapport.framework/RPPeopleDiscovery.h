/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPPeopleDiscovery : NSObject <NSSecureCoding, RPPeopleXPCClientInterface> {
    bool  _activateCalled;
    unsigned int  _changeFlags;
    struct NSMutableDictionary { Class x1; } * _discoveredPeople;
    int  _discoveryMode;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    id /* block */  _personChangedHandler;
    id /* block */  _personFoundHandler;
    id /* block */  _personLostHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, readonly, copy) NSArray *discoveredPeople;
@property (nonatomic) int discoveryMode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ personChangedHandler;
@property (nonatomic, copy) id /* block */ personFoundHandler;
@property (nonatomic, copy) id /* block */ personLostHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_lostAllPeople;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)changeFlags;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)discoveredPeople;
- (int)discoveryMode;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)personChangedHandler;
- (id /* block */)personFoundHandler;
- (id /* block */)personLostHandler;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDiscoveryMode:(int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPersonChangedHandler:(id /* block */)arg1;
- (void)setPersonFoundHandler:(id /* block */)arg1;
- (void)setPersonLostHandler:(id /* block */)arg1;
- (void)xpcPersonChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)xpcPersonFound:(id)arg1;
- (void)xpcPersonLost:(id)arg1;

@end
