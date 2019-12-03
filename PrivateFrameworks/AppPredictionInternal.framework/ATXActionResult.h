/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionResult : NSObject {
    NSString * _actionKey;
    bool  _hasPredictionItem;
    struct ATXPredictionItem { 
        NSString *key; 
        unsigned long long actionHash; 
        float inputSignals[389]; 
        float score; 
    }  _predictionItem;
    struct ATXScoredPrediction { Class x1; } * _scoredAction;
}

@property (nonatomic, readonly) NSString *actionKey;
@property (nonatomic, readonly) const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[389]; float x4; }*predictionItem;
@property (nonatomic, readonly) ATXScoredPrediction *scoredAction;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionKey;
- (id)initWithScoredAction:(struct ATXScoredPrediction { Class x1; }*)arg1 predictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[389]; float x4; }*)arg2 actionKey:(id)arg3;
- (const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[389]; float x4; }*)predictionItem;
- (struct ATXScoredPrediction { Class x1; }*)scoredAction;
- (void)setPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[389]; float x4; }*)arg1;

@end
