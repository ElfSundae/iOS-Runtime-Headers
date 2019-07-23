/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTransientAchievementDataStore : HDAchievementDataStore {
    NSMutableArray *_achievements;
    NSMutableSet *_addedAchievements;
    NSMutableArray *_commitExpects;
    NSMutableDictionary *_dict;
    NSMutableSet *_unalertedAchievements;
}

@property (nonatomic, retain) NSMutableArray *achievements;
@property (nonatomic, retain) NSMutableSet *addedAchievements;
@property (nonatomic, retain) NSMutableArray *commitExpects;
@property (nonatomic, retain) NSMutableDictionary *dict;
@property (nonatomic, retain) NSMutableSet *unalertedAchievements;

- (void).cxx_destruct;
- (id)achievements;
- (void)addAchievement:(id)arg1;
- (id)addedAchievements;
- (id)allAchievements;
- (void)clearAddedAchievements;
- (BOOL)commit:(id*)arg1;
- (id)commitExpects;
- (unsigned int)countOfUnalertedAchievements;
- (id)dateForKey:(id)arg1;
- (id)dict;
- (double)doubleForKey:(id)arg1;
- (void)expectCommitWithCompletion:(id /* block */)arg1;
- (id)initWithHealthDaemon:(id)arg1;
- (long long)int64ForKey:(id)arg1;
- (void)markAchievementAlerted:(id)arg1;
- (id)modifiedKeyValues;
- (void)setAchievements:(id)arg1;
- (void)setAddedAchievements:(id)arg1;
- (void)setCommitExpects:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setDict:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
- (void)setUnalertedAchievements:(id)arg1;
- (void)setUnsignedInteger:(unsigned int)arg1 forKey:(id)arg2;
- (id)unalertedAchievements;
- (id)uncommittedAchievements;
- (unsigned int)unsignedIntegerForKey:(id)arg1;

@end
