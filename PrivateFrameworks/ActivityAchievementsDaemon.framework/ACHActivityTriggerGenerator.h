/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

@interface ACHActivityTriggerGenerator : NSObject

+ (unsigned long long)allPossibleTriggers;

- (struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })_incrementWithInitialState:(struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })arg1 forGoalType:(long long)arg2 dataProvider:(id)arg3 goalMetHandler:(id /* block */)arg4;
- (unsigned long long)_triggersForNewActivityDataWithGoalType:(long long)arg1 dataProvider:(id)arg2 goalMetHandler:(id /* block */)arg3;
- (unsigned long long)triggersForNewExerciseDataWithDataProvider:(id)arg1;
- (unsigned long long)triggersForNewMoveDataWithDataProvider:(id)arg1;
- (unsigned long long)triggersForNewStandDataWithDataProvider:(id)arg1;

@end