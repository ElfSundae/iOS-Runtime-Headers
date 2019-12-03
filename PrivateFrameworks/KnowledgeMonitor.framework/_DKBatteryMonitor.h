/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKBatteryMonitor : _DKMonitor {
    unsigned int  _batteryNotification;
    bool  _hasInternalBattery;
    int  _immediateShutdownThreshold;
    struct IONotificationPort { } * _notifyPort;
    unsigned int  _powerService;
    NSDictionary * _previousBatteryState;
    double  _previousPercentage;
    bool  _previouslyFullyCharged;
}

@property (nonatomic) bool hasInternalBattery;
@property (nonatomic) int immediateShutdownThreshold;
@property (nonatomic, retain) NSDictionary *previousBatteryState;
@property (nonatomic) double previousPercentage;
@property (nonatomic) bool previouslyFullyCharged;

+ (id)_eventWithBatteryPercentage:(double)arg1 isFullyCharged:(bool)arg2;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setCurrentBatteryPercentage:(double)arg1;

- (void).cxx_destruct;
- (void)_handleBatteryNotification;
- (bool)adapterType:(id)arg1 differsFrom:(id)arg2;
- (double)batteryPercentageFromPowerSourceDictionary:(id)arg1;
- (double)currentBatteryPercentage;
- (void)deactivate;
- (void)dealloc;
- (bool)externalConnected:(id)arg1 differsFrom:(id)arg2;
- (bool)fullyCharged:(id)arg1 differsFrom:(id)arg2;
- (bool)fullyChargedFromPowerSourceDictionary:(id)arg1;
- (id)getBatteryProperties;
- (bool)hasInternalBattery;
- (int)immediateShutdownThreshold;
- (bool)isCharging:(id)arg1 differsFrom:(id)arg2;
- (bool)newBatteryState:(id)arg1 differsSignificantlyFromState:(id)arg2;
- (bool)percentage:(id)arg1 differsFrom:(id)arg2;
- (void)postImminentShutdownNotification:(double)arg1;
- (id)previousBatteryState;
- (double)previousPercentage;
- (bool)previouslyFullyCharged;
- (void)setHasInternalBattery:(bool)arg1;
- (void)setImmediateShutdownThreshold:(int)arg1;
- (void)setPreviousBatteryState:(id)arg1;
- (void)setPreviousPercentage:(double)arg1;
- (void)setPreviouslyFullyCharged:(bool)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (bool)temperature:(id)arg1 differsFrom:(id)arg2;
- (void)updateBatteryStateDictionary:(id)arg1;
- (bool)voltage:(id)arg1 differsFrom:(id)arg2;

@end
