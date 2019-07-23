/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionPredictions : NSObject

+ (id)_predictionWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7;
+ (void)fetchDataAndUpdateContentAttributeSetForAction:(id)arg1;
+ (void)fetchDataAndUpdateContentAttributeSetForActions:(id)arg1;
+ (void)penalizeMultipleActionsPerAppAndKeepSorted:(id)arg1;
+ (id)predictionsWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7;
+ (id)scoredActionsWithoutLog:(id)arg1;
+ (id)showInSpotlightActionsForActionPredictions:(id)arg1 withThreshold:(double)arg2 predictionItems:(struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem {} *x_3_1_1; } x3; }*)arg3;
+ (id)sortStageScores:(id)arg1;

- (id)init;

@end
