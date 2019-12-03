/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionResolution : NSObject {
    ATXSlotResolution * _slotResolver;
}

- (void).cxx_destruct;
- (id)actionPredictionsForActionKey:(id)arg1 statistics:(id)arg2 appActionPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[389]; float x4; }*)arg3 appActionLogProbability:(double)arg4 scoreLogger:(id)arg5 andLimit:(int)arg6 forMagicalMoments:(bool)arg7;
- (id)actionPredictionsForActionKey:(id)arg1 statistics:(id)arg2 appActionPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[389]; float x4; }*)arg3 appActionLogProbability:(double)arg4 scoreLogger:(id)arg5 andLimit:(int)arg6 forMagicalMoments:(bool)arg7 predictionItemsToKeep:(struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { }*)arg8;
- (id)init;
- (id)initWithSlotResolver:(id)arg1;
- (id)statisticsForActionKey:(id)arg1;

@end
