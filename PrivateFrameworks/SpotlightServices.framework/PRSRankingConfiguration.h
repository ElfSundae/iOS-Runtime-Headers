/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingConfiguration : NSObject {
    bool  _allow_coreduet_influence;
    NSMutableDictionary * _categoryEngagements;
    NSMutableOrderedSet * _cepBlacklistSet;
    bool  _disableResultTruncation;
    NSArray * _parsecCategoryOrder;
    NSMutableDictionary * _queryDependentCategoryProbabilities;
    SSPlistDataReader * _queryIndependentCategoryProbabilities;
    NSArray * _rankingQueries;
    NSDictionary * _serverFeatures;
    PRSRankingServerKnobs * _serverKnobs;
    NSString * _shortcutSectionBundleID;
    NSDictionary * _sqfData;
}

@property bool allow_coreduet_influence;
@property (retain) NSMutableDictionary *categoryEngagements;
@property (retain) NSMutableOrderedSet *cepBlacklistSet;
@property bool disableResultTruncation;
@property (retain) NSArray *parsecCategoryOrder;
@property (retain) NSMutableDictionary *queryDependentCategoryProbabilities;
@property (retain) SSPlistDataReader *queryIndependentCategoryProbabilities;
@property (retain) NSArray *rankingQueries;
@property (retain) NSDictionary *serverFeatures;
@property (retain) PRSRankingServerKnobs *serverKnobs;
@property (retain) NSString *shortcutSectionBundleID;
@property (retain) NSDictionary *sqfData;

- (void).cxx_destruct;
- (bool)allow_coreduet_influence;
- (void)appendToExistingCEPBlacklist:(id)arg1;
- (id)categoryEngagements;
- (id)cepBlacklistSet;
- (bool)disableResultTruncation;
- (float)engagementProbabilityForCategory:(id)arg1;
- (id)init;
- (void)mergeWith:(id)arg1;
- (id)parsecCategoryOrder;
- (id)queryDependentCategoryProbabilities;
- (double)queryDependentProbabilityForCategory:(id)arg1;
- (id)queryIndependentCategoryProbabilities;
- (double)queryIndependentProbabilityForCategory:(id)arg1;
- (id)rankingQueries;
- (id)serverFeatures;
- (id)serverKnobs;
- (void)setAllow_coreduet_influence:(bool)arg1;
- (void)setCategoryEngagements:(id)arg1;
- (void)setCepBlacklistSet:(id)arg1;
- (void)setDisableResultTruncation:(bool)arg1;
- (void)setParsecCategoryOrder:(id)arg1;
- (void)setQueryDependentCategoryProbabilities:(id)arg1;
- (void)setQueryIndependentCategoryProbabilities:(id)arg1;
- (void)setRankingQueries:(id)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setServerKnobs:(id)arg1;
- (void)setShortcutSectionBundleID:(id)arg1;
- (void)setSqfData:(id)arg1;
- (id)shortcutSectionBundleID;
- (id)sqfData;
- (void)updateQueryDependentProbabilityAndBlacklistSetWith:(id)arg1;
- (void)updateWithSQFData:(id)arg1;

@end
