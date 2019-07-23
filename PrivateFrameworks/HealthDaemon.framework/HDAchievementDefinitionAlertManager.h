/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDefinitionAlertManager : NSObject <HDAchievementAssetObserver, HDAchievementDefinitionAlertSuppressorDelegate, HDHealthDaemonReadyObserver> {
    <HDAchievementDefinitionAlertNotifier> * _alertNotifier;
    <HDAchievementDefinitionAlertSuppressor> * _alertSuppressor;
    HDBackgroundTaskScheduler * _backgroundTaskScheduler;
    NSDate * _dateOverride;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _waitingToRun;
}

@property (nonatomic, readonly) <HDAchievementDefinitionAlertNotifier> *alertNotifier;
@property (nonatomic, retain) NSDate *dateOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_availableDefinitionIdentifiersWithProfile:(id)arg1 error:(id*)arg2;
+ (void)_clearBookkeepingKeyValuesWithProfile:(id)arg1;
+ (id)_definitionIdentifiersInAlertedState:(unsigned int)arg1 amongDefinitions:(id)arg2 withProfile:(id)arg3 error:(id*)arg4;
+ (id)_findDefinitionsToAlertWithProfile:(id)arg1 currentDate:(id)arg2 amongDefinitions:(id)arg3 getExpiredDefinitions:(id*)arg4;
+ (id)_findNextDefinitionToScheduleAmongDefinitions:(id)arg1 withCurrentDate:(id)arg2;

- (void).cxx_destruct;
- (void)_queue_cleanUpIdentifierAvailabilityWithAvailableIdentifiers:(id)arg1;
- (void)_queue_findAndNotifyAlerts;
- (BOOL)_queue_markDefinitions:(id)arg1 asAlertedState:(unsigned int)arg2;
- (void)_queue_markDefinitionsAvailable:(id)arg1;
- (void)_queue_rescheduleNewAchievementAlertsWithDefinitions:(id)arg1;
- (void)_synthesizeAlert;
- (void)achievementDefinitionsDidChangeToDefinitions:(id)arg1;
- (id)alertNotifier;
- (void)alertSuppressionStatusDidChange:(id)arg1;
- (void)clearBookkeepingKeyValues;
- (id)currentDate;
- (void)daemonReady:(id)arg1;
- (id)dateOverride;
- (void)dealloc;
- (id)definitionIdentifiersInAlertedState:(unsigned int)arg1 withError:(id*)arg2;
- (id)initWithProfile:(id)arg1 backgroundTaskScheduler:(id)arg2 alertSuppressor:(id)arg3 alertNotifier:(id)arg4;
- (BOOL)markDefinitionIdentifiers:(id)arg1 asAlertedState:(unsigned int)arg2 withProfile:(id)arg3 error:(id*)arg4;
- (BOOL)markDefinitionIdentifiers:(id)arg1 asAvailable:(BOOL)arg2 withProfile:(id)arg3 error:(id*)arg4;
- (id)nextScheduledTaskDate;
- (void)setDateOverride:(id)arg1;
- (id)unviewedDefinitionsWithError:(id*)arg1;
- (void)updateDefinitionsToAlert;
- (BOOL)wantsToAlert;

@end
