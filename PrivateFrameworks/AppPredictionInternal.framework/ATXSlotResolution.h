/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXSlotResolution : NSObject {
    _ATXDataStore * _dataStore;
}

+ (double)exponentialDecay:(double)arg1 withHalflife:(double)arg2;
+ (bool)isNotLaunchedWithinShortTimeSpan:(id)arg1;
+ (void)setSlotLogProbabilityForCandidateActionPredictions:(id)arg1;
+ (void)setSlotResolutionPredictionItemForTopUpcomingMediaActionContainer:(id)arg1 appActionPredictionItem:(const struct ATXPredictionItem { id x1; float x2[259]; float x3; }*)arg2 appActionLogProbability:(double)arg3;
+ (id)sharedInstance;
+ (id)yearMonthDayComponentsForDate:(id)arg1;

- (void).cxx_destruct;
- (id)actionPredictionsForStatistics:(id)arg1;
- (id)actionPredictionsForStatistics:(id)arg1 appActionPredictionItem:(const struct ATXPredictionItem { id x1; float x2[259]; float x3; }*)arg2 appActionLogProbability:(double)arg3 scoreLogger:(id)arg4;
- (id)fastStatisticsOnSlotsForBundleId:(id)arg1 actionType:(id)arg2 currentDate:(id)arg3 previousLocationUUID:(id)arg4 currentLocationUUID:(id)arg5 currentMotionType:(long long)arg6;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)statisticsForActionKey:(id)arg1;
- (id)statisticsForActionKey:(id)arg1 currentDate:(id)arg2 previousLocationUUID:(id)arg3 currentLocationUUID:(id)arg4 currentMotionType:(long long)arg5;
- (id)statisticsOnSlotsForBundleId:(id)arg1 actionType:(id)arg2 currentDate:(id)arg3 previousLocationUUID:(id)arg4 currentLocationUUID:(id)arg5 currentMotionType:(long long)arg6;
- (id)updateStatisticsWithFeedbackForBundleId:(id)arg1 actionType:(id)arg2 statistics:(id)arg3;
- (id)updateStatisticsWithHigherLevelFeaturesForStatistics:(id)arg1;

@end
