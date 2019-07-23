/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REMLPrediction : NSObject <NSCopying> {
    float  _actionProbability;
    float  _appActionProbability;
    float  _mean;
    float  _pessimistic;
    float  _probability;
    float  _variance;
}

@property (nonatomic) float actionProbability;
@property (nonatomic) float appActionProbability;
@property (nonatomic, readonly) float mean;
@property (nonatomic, readonly) float pessimistic;
@property (nonatomic, readonly) float probability;
@property (nonatomic, readonly) float variance;

+ (id)predictionWithProbability:(float)arg1 mean:(float)arg2 variance:(float)arg3 pessimistic:(float)arg4;

- (float)actionProbability;
- (float)appActionProbability;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)mean;
- (float)pessimistic;
- (float)probability;
- (void)setActionProbability:(float)arg1;
- (void)setAppActionProbability:(float)arg1;
- (float)variance;

@end
