/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXHeuristicActionProducer : NSObject <ATXActionProducer> {
    <ATXActionProducerDelegate> * _delegate;
    id  _expireNotificationHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXActionProducerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)actionExperienceForScoredHeuristicAction:(struct ATXScoredPrediction { Class x1; }*)arg1;
+ (double)computeHeuristicEngagementScoreWithPriorAlpha:(int)arg1 priorBeta:(int)arg2 confirms:(double)arg3 rejects:(double)arg4 totalConfirms:(double)arg5 totalRejects:(double)arg6;
+ (double)generateScoreForHeuristic:(id)arg1;

- (void).cxx_destruct;
- (id)actionPredictionBlacklist;
- (id)blacklistSubstitutionForBundleId:(id)arg1;
- (id)bundleIdForAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)digitalHealthBlacklist;
- (id)init;
- (void)invalidate;
- (bool)isActionBlacklisted:(id)arg1;
- (id)produceActions;
- (void)setDelegate:(id)arg1;
- (bool)userAlreadyEngagedWithAction:(id)arg1;

@end
