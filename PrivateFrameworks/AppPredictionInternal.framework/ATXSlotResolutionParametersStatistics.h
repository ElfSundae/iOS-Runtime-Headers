/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXSlotResolutionParametersStatistics : NSObject {
    double  _appSessionCountAsDocFreq;
    double  _coarseTimeOfDayCount;
    double  _confirmsCoarseTimeOfDayCountInLockscreen;
    double  _confirmsCoarseTimeOfDayCountInSpotlight;
    double  _confirmsDayCountInLockscreen;
    double  _confirmsDayCountInSpotlight;
    double  _confirmsPartOfWeekCountInLockscreen;
    double  _confirmsPartOfWeekCountInSpotlight;
    double  _confirmsTimeOfDayCountInLockscreen;
    double  _confirmsTimeOfDayCountInSpotlight;
    double  _dayAndLocationCount;
    double  _dayAndPrevLocationCount;
    double  _dayOfWeekCount;
    NSDate * _earliestOccurrenceTime;
    double  _eightHourWindowCount;
    double  _hourWindowCount;
    NSDate * _latestAppSessionStartDate;
    NSDate * _latestOccurrenceTime;
    double  _locationCount;
    double  _minutesSinceLastConfirmInLockscreen;
    double  _minutesSinceLastConfirmInSpotlight;
    double  _minutesSinceLastExplicitRejectInLockscreen;
    double  _minutesSinceLastExplicitRejectInSpotlight;
    double  _minutesSinceLastRejectInLockscreen;
    double  _motionTypeCount;
    int  _numParameters;
    double  _partOfWeekAndLocationCount;
    double  _partOfWeekAndTimeCount;
    double  _partOfWeekCount;
    double  _prevLocationAndLocationCount;
    double  _prevLocationAndMotionTypeCount;
    double  _prevLocationCount;
    double  _thirtyMinuteWindowCount;
    double  _timeAndDayAndLocationCount;
    double  _timeAndDayCount;
    double  _timeAndLocationCount;
    double  _timeAndPrevLocationCount;
    double  _timeOfDayBudget;
    double  _timeOfDayBudgetCount;
    double  _timeOfDayBudgetMean;
    double  _timeOfDayBudgetSumOfSquaresOfDifferencesFromMean;
    double  _timeOfDayCount;
    double  _todaysTimeOfDayBudget;
    double  _totalConfirms;
    double  _totalConfirmsInLastHourInSpotlight;
    double  _totalConfirmsInLastTwoHoursInSpotlight;
    double  _totalConfirmsInLockscreen;
    double  _totalConfirmsInSpotlight;
    double  _totalConfirmsTodayInLockscreen;
    double  _totalConfirmsTodayInSpotlight;
    double  _totalDayAndLocationOccurrences;
    double  _totalDayAndPrevLocationOccurrences;
    double  _totalDayOfWeekOccurrences;
    double  _totalLocationOccurrences;
    double  _totalMotionTypeOccurrences;
    double  _totalOccurrences;
    double  _totalPartOfWeekAndLocationOccurrences;
    double  _totalPartOfWeekAndTimeOccurrences;
    double  _totalPartOfWeekOccurrences;
    double  _totalPrevLocationAndLocationOccurrences;
    double  _totalPrevLocationAndMotionTypeOccurrences;
    double  _totalPreviousLocationOccurrences;
    double  _totalRejects;
    double  _totalRejectsInLastHourInSpotlight;
    double  _totalRejectsInLastTwoHoursInSpotlight;
    double  _totalRejectsInLockscreen;
    double  _totalRejectsInSpotlight;
    double  _totalRejectsTodayInLockscreen;
    double  _totalRejectsTodayInSpotlight;
    double  _totalTimeAndDayAndLocationOccurrences;
    double  _totalTimeAndDayOccurrences;
    double  _totalTimeAndLocationOccurrences;
    double  _totalTimeAndPrevLocationOccurrences;
    double  _totalTimeOfDayOccurrences;
    int  _totalUndecayedOccurrences;
    NSMutableSet * _uniqueDaysLaunched;
    double  _weightedNumOccurrences;
}

+ (double)_smoothedBudgetForTimeOfDay:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedCountForCoarseTimeOfDay:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedCountForEightHourWindow:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedCountForHourWindow:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedCountForThirtyMinuteWindow:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedCountForTimeOfDay:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)smoothedRatio:(double)arg1 over:(double)arg2;

- (void).cxx_destruct;
- (double)_confirmRatio;
- (double)_timeOfDayBudgetStandardDeviation;
- (double)_totalFeedbackEvents;
- (void)_updateTimeOfDayBudgetStatisticsForNewTimeOfDayBudget:(double)arg1;
- (id)description;
- (id)init;
- (id)initWithNumParameters:(int)arg1;

@end
