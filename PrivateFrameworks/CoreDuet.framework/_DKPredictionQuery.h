/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPredictionQuery : _DKEventQuery {
    NSDate * _asOfDate;
    bool  _isTopNPrediction;
    double  _minLikelihood;
    int  _minimumDaysOfHistory;
    unsigned long long  _partitionType;
    id /* block */  _predictionHandler;
    int  _slotDuration;
    _DKKnowledgeStorage * _storage;
    long long  _topN;
    int  _totalSlotsInDay;
    unsigned long long  _type;
    bool  _useHistoricalHistogram;
}

@property (nonatomic, retain) NSDate *asOfDate;
@property (nonatomic) bool isTopNPrediction;
@property (nonatomic) double minLikelihood;
@property (nonatomic) int minimumDaysOfHistory;
@property (nonatomic) unsigned long long partitionType;
@property (copy) id /* block */ predictionHandler;
@property (nonatomic) int slotDuration;
@property (nonatomic, retain) _DKKnowledgeStorage *storage;
@property (nonatomic) long long topN;
@property (nonatomic) int totalSlotsInDay;
@property (nonatomic) unsigned long long type;
@property (nonatomic) bool useHistoricalHistogram;

+ (id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;
+ (id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4;

- (void).cxx_destruct;
- (void)addEventsToObservations:(id)arg1 startingHistogram:(id)arg2 endingHistogram:(id)arg3 withPredictionDate:(id)arg4;
- (id)asOfDate;
- (bool)both:(id)arg1 and:(id)arg2 areSameDayOfWeekWith:(id)arg3;
- (bool)both:(id)arg1 and:(id)arg2 areWeekendOrWeekdayWithCalendar:(id)arg3;
- (int)computeSlotForDate:(id)arg1 relativeToDate:(id)arg2;
- (int)computeSlotFromMidnightForDate:(id)arg1;
- (id)constructTimelineWithObservations:(id)arg1 withFirstEventDate:(id)arg2 withHistogramInterval:(id)arg3 withPredictionStartDate:(id)arg4 durationSinceFirstEvent:(double)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2;
- (void)handleEventPredictionWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 predictionStartDate:(id)arg3 durationSinceFirstEvent:(double)arg4 calendar:(id)arg5 observations:(id)arg6 useWeights:(bool)arg7;
- (void)handleImpulsePredictionWithEventStartDate:(id)arg1 predictionStartDate:(id)arg2 durationSinceFirstEvent:(double)arg3 calendar:(id)arg4 observations:(id)arg5 lastDate:(id*)arg6 lastSlot:(int*)arg7;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isTopNPrediction;
- (id)likelihoodForTopN:(long long)arg1 withMinLikelihood:(double)arg2 withData:(id)arg3;
- (double)minLikelihood;
- (int)minimumDaysOfHistory;
- (unsigned long long)partitionType;
- (id /* block */)predictionHandler;
- (id)predictionOfType:(unsigned long long)arg1 withData:(id)arg2;
- (void)setAsOfDate:(id)arg1;
- (void)setIsTopNPrediction:(bool)arg1;
- (void)setMinLikelihood:(double)arg1;
- (void)setMinimumDaysOfHistory:(int)arg1;
- (void)setPartitionType:(unsigned long long)arg1;
- (void)setPredictionHandler:(id /* block */)arg1;
- (void)setSlotDuration:(int)arg1;
- (void)setStorage:(id)arg1;
- (void)setTopN:(long long)arg1;
- (void)setTotalSlotsInDay:(int)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUseHistoricalHistogram:(bool)arg1;
- (void)setValueForIndex:(int)arg1 forObservations:(id)arg2 withDenominator:(double)arg3;
- (bool)shouldIncludeEventWithStartDate:(id)arg1 eventSlot:(int)arg2 withPredictionStartDate:(id)arg3 withPartitionType:(unsigned long long)arg4 andCalendar:(id)arg5;
- (int)slotDuration;
- (id)storage;
- (long long)topN;
- (int)totalSlotsInDay;
- (unsigned long long)type;
- (bool)useHistoricalHistogram;

@end
