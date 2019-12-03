/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSOSClawGestureObserver : NSObject <SBVolumePressBandit, SOSManagerClientObserver> {
    NSMutableSet * _activePressTypes;
    SBClawGestureLogger * _clawGestureLogger;
    <SBSOSClawGestureObserverDelegate> * _delegate;
    SBSOSDefaults * _sosDefaults;
    bool  _sosEnabled;
    SOSManager * _sosManager;
    BSTimer * _sosTriggerTimer;
    bool  _wasSOSTiggeredByClaw;
    SBMainWorkspace * _workspace;
}

@property (nonatomic, retain) NSMutableSet *activePressTypes;
@property (getter=isClawActivated, nonatomic, readonly) bool clawActivated;
@property (nonatomic, retain) SBClawGestureLogger *clawGestureLogger;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSOSClawGestureObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isGestureLoggingEnabled, nonatomic) bool gestureLoggingEnabled;
@property (readonly) unsigned long long hash;
@property (getter=_isSOSActivated, nonatomic, readonly) bool sosActivated;
@property (nonatomic, readonly) SBSOSDefaults *sosDefaults;
@property (getter=isSOSEnabled, setter=setSOSEnabled:, nonatomic) bool sosEnabled;
@property (nonatomic, retain) BSTimer *sosTriggerTimer;
@property (readonly) Class superclass;
@property (getter=_wasSOSTriggeredByClaw, setter=_setWasSOSTriggeredByClaw:, nonatomic) bool wasSOSTiggeredByClaw;

- (void).cxx_destruct;
- (id)_initWithSOSManager:(id)arg1 workspace:(id)arg2;
- (bool)_isAutomaticCallCountdownEnabled;
- (bool)_isSOSActivated;
- (void)_presentSOSInterface;
- (void)_setWasSOSTriggeredByClaw:(bool)arg1;
- (bool)_wasSOSTriggeredByClaw;
- (id)activePressTypes;
- (id)clawGestureLogger;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
- (bool)isClawActivated;
- (bool)isGestureLoggingEnabled;
- (bool)isSOSEnabled;
- (void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2;
- (void)setActivePressTypes:(id)arg1;
- (void)setClawGestureLogger:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureLoggingEnabled:(bool)arg1;
- (void)setSOSEnabled:(bool)arg1;
- (void)setSosTriggerTimer:(id)arg1;
- (id)sosDefaults;
- (id)sosTriggerTimer;

@end
