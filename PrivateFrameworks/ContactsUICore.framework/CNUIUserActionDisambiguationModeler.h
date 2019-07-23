/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionDisambiguationModeler : NSObject {
    <CNUIDefaultUserActionFetcher> * _defaultActionFetcher;
    <CNUIUserActionDiscoveringEnvironment> * _discoveringEnvironment;
    <CNUIUserActionRanking> * _rankingHelper;
    <CNUIUserActionTargetDiscovering> * _targetDiscoveringHelper;
    BOOL  _tracksChanges;
}

@property (nonatomic, retain) <CNUIDefaultUserActionFetcher> *defaultActionFetcher;
@property (nonatomic, retain) <CNUIUserActionDiscoveringEnvironment> *discoveringEnvironment;
@property (nonatomic, retain) <CNUIUserActionRanking> *rankingHelper;
@property (nonatomic, retain) <CNUIUserActionTargetDiscovering> *targetDiscoveringHelper;
@property (nonatomic) BOOL tracksChanges;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)defaultActionChangedObservable;
- (id)defaultActionFetcher;
- (id)defaultActionFromActions:(id)arg1;
- (id)defaultActionFromActions:(id)arg1 trackingChanges:(BOOL)arg2;
- (id)discoverActionsForContact:(id)arg1 actionType:(id)arg2;
- (id)discoverActionsForContact:(id)arg1 actionType:(id)arg2 trackingChanges:(BOOL)arg3;
- (id)discoveringEnvironment;
- (id)init;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)initWithTargetDiscoveringHelper:(id)arg1 rankingHelper:(id)arg2 defaultActionFetcher:(id)arg3 discoveringEnvironment:(id)arg4;
- (id)modelsWithContact:(id)arg1 actionType:(id)arg2;
- (id)modelsWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 sorts:(BOOL)arg6 throttles:(BOOL)arg7;
- (id)rankingHelper;
- (id)recentActionsFromActions:(id)arg1;
- (id)schedulerProvider;
- (void)setContactStore:(id)arg1;
- (void)setDefaultActionFetcher:(id)arg1;
- (void)setDiscoveringEnvironment:(id)arg1;
- (void)setRankingHelper:(id)arg1;
- (void)setTargetDiscoveringHelper:(id)arg1;
- (void)setTracksChanges:(BOOL)arg1;
- (id)sortActionsOnModel:(id)arg1;
- (id)targetDiscoveringHelper;
- (id)targetsChangedObservableForActionType:(id)arg1;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (BOOL)tracksChanges;

@end
