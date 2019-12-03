/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDElectrocardiogramFilterDataProvider : NSObject <HKSampleTypeUpdateControllerObserver> {
    HKSampleCountQuery * _atrialFibrillationCountQuery;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableDictionary * _counts;
    <WDElectrocardiogramFilterDataProviderDelegate> * _delegate;
    HKSampleCountQuery * _electrocardiogramCountQuery;
    HKSampleCountQuery * _highLowHeartRateCountQuery;
    HKSampleCountQuery * _inconclusiveCountQuery;
    WDProfile * _profile;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    HKSampleCountQuery * _sinusRhythmCountQuery;
}

@property (nonatomic, retain) HKSampleCountQuery *atrialFibrillationCountQuery;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSMutableDictionary *counts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WDElectrocardiogramFilterDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKSampleCountQuery *electrocardiogramCountQuery;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKSampleCountQuery *highLowHeartRateCountQuery;
@property (nonatomic, retain) HKSampleCountQuery *inconclusiveCountQuery;
@property (nonatomic) WDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, retain) HKSampleCountQuery *sinusRhythmCountQuery;
@property (readonly) Class superclass;

+ (id)_atrialFibrillationClassificationPredicateWithClassifications:(id)arg1;
+ (id)_atrialFibrillationClassificationPredicateWithValue:(unsigned long long)arg1;
+ (id)_atrialFibrillationClassificationPredicateWithValues:(id)arg1;
+ (id)_atrialFibrillationClassifications;
+ (id)_highLowHeartRateClassifications;
+ (id)_inconclusiveClassifications;
+ (id)cellTitleForType:(long long)arg1;
+ (id)electrocardiogramPredicateForType:(long long)arg1;
+ (id)viewControllerTitleForType:(long long)arg1;

- (void).cxx_destruct;
- (id)_countQueryForType:(long long)arg1;
- (id)_filterSamples:(id)arg1 matchingAtrialFibrillationClassification:(unsigned long long)arg2;
- (id)_filterSamples:(id)arg1 matchingAtrialFibrillationClassifications:(id)arg2;
- (long long)_rQueue_countForType:(long long)arg1;
- (void)_rQueue_notifyDelegateDidUpdateCountForType:(long long)arg1;
- (void)_rQueue_setCount:(long long)arg1 forType:(long long)arg2;
- (void)_safelyStopQuery:(id)arg1;
- (void)_stopQueries;
- (id)atrialFibrillationCountQuery;
- (id)clientQueue;
- (long long)countForType:(long long)arg1;
- (id)counts;
- (id)delegate;
- (id)displayStringCountForType:(long long)arg1;
- (id)electrocardiogramCountQuery;
- (id)highLowHeartRateCountQuery;
- (id)inconclusiveCountQuery;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (id)profile;
- (id)resourceQueue;
- (void)setAtrialFibrillationCountQuery:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setCounts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElectrocardiogramCountQuery:(id)arg1;
- (void)setHighLowHeartRateCountQuery:(id)arg1;
- (void)setInconclusiveCountQuery:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setResourceQueue:(id)arg1;
- (void)setSinusRhythmCountQuery:(id)arg1;
- (id)sinusRhythmCountQuery;
- (void)start;
- (void)stop;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;

@end
