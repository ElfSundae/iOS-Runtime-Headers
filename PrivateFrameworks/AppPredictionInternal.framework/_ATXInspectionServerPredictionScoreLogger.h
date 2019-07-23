/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXInspectionServerPredictionScoreLogger : NSObject <_ATXAppPredictorScoreLogger> {
    NSMutableDictionary * _inputsAndSubscores;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _stageScores;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)inputsAndSubscores;
- (void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)logStageScores:(id)arg1 secondStageScores:(id)arg2 thirdStageScores:(id)arg3;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setCacheAge:(double)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (void)setPredictionClass:(id)arg1;
- (id)stageScores;

@end
