/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TAFilterVisitsSettings : NSObject {
    double  _entryDisplayOnBudget;
    double  _exitDisplayOnBudget;
    unsigned long long  _maxNSigmaBetweenLastLocationAndVisit;
    double  _maxSuspiciousDuration;
    double  _minInterVisitDistance;
    unsigned long long  _minNSigmaBetweenVisits;
}

@property (nonatomic, readonly) double entryDisplayOnBudget;
@property (nonatomic, readonly) double exitDisplayOnBudget;
@property (nonatomic, readonly) unsigned long long maxNSigmaBetweenLastLocationAndVisit;
@property (nonatomic, readonly) double maxSuspiciousDuration;
@property (nonatomic, readonly) double minInterVisitDistance;
@property (nonatomic, readonly) unsigned long long minNSigmaBetweenVisits;

- (double)entryDisplayOnBudget;
- (double)exitDisplayOnBudget;
- (id)initWithDefaults;
- (id)initWithMaxSuspiciousDuration:(double)arg1 minInterVisitDistance:(double)arg2 minNSigmaBetweenVisits:(unsigned long long)arg3 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)arg4 entryDisplayOnBudget:(double)arg5 exitDisplayOnBudget:(double)arg6;
- (id)initWithMaxSuspiciousDurationOrDefault:(id)arg1 minInterVisitDistanceOrDefault:(id)arg2 minNSigmaBetweenVisitsOrDefault:(id)arg3 maxNSigmaBetweenLastLocationAndVisitOrDefault:(id)arg4 entryDisplayOnBudgetOrDefault:(id)arg5 exitDisplayOnBudgetOrDefault:(id)arg6;
- (unsigned long long)maxNSigmaBetweenLastLocationAndVisit;
- (double)maxSuspiciousDuration;
- (double)minInterVisitDistance;
- (unsigned long long)minNSigmaBetweenVisits;

@end
