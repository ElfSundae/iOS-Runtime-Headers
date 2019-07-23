/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSummaryQueryServer : HDQueryServer {
    BOOL _deliversUpdates;
    NSDate *_endDate;
    NSDate *_noonEndDate;
    NSDate *_noonStartDate;
    _HKFilter *_noonStartEndFilter;
    NSDate *_startDate;
    HDListByTypeStatisticsBuilder *_statisticsBuilder;
}

- (void).cxx_destruct;
- (void)_queue_fetchAndDeliverAllStatisticsInitial:(BOOL)arg1;
- (void)_queue_start;
- (void)_queue_updateStatisticsWithObjects:(id)arg1 anchor:(id)arg2;
- (BOOL)_shouldAcceptSample:(id)arg1;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveAllSampleTypes;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end
