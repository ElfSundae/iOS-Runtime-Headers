/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLConfigAgent : PLAgent {
    PLTimer *_timedTrigger;
}

@property (retain) PLTimer *timedTrigger;

+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitionConfig;
+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (int)autolockTime;
- (id)baseband;
- (id)basebandFirmware;
- (id)bootArgs;
- (id)buildVersion;
- (id)crashReporterKey;
- (id)deviceName;
- (BOOL)disableCABlanking;
- (id)hardwareModel;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (id)logAutomatedDeviceGroup;
- (void)logEventNoneConfig;
- (void)logEventNonePairedDeviceConfig;
- (BOOL)noWatchdogs;
- (id)seedGroup;
- (void)setTimedTrigger:(id)arg1;
- (id)timedTrigger;

@end
