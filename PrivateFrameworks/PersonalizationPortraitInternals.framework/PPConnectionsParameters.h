/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPConnectionsParameters : NSObject {
    NSDictionary * _assets;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)appSwitcherPredictionExpiry;
- (id)assetValueForKey:(id)arg1;
- (bool)boolValueForKey:(id)arg1 default:(bool)arg2;
- (double)calendarEventLocationExpirySeconds;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (id)donationBlacklistApps;
- (id)donationBlacklistWebsites;
- (id)donationWhitelistApps;
- (id)donationWhitelistWebsites;
- (double)doubleValueForKey:(id)arg1 default:(long long)arg2;
- (long long)expirySeconds;
- (id)init;
- (long long)integerValueForKey:(id)arg1 default:(long long)arg2;
- (double)linguisticTriggerExpirySeconds;
- (double)locationAppLastUseTimeoutSeconds;
- (long long)locationAppPredictionInstallHalflife;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (long long)locationAppPredictionOverallLaunchFactor;
- (id)locationPredictionBlacklistApps;
- (double)namedEntitySourceExpirySeconds;
- (double)namedEntitySourceLookBackSeconds;
- (double)pasteboardItemExpirySeconds;
- (unsigned long long)quickTypePredictionLimit;
- (bool)shouldUseWhitelistApps;
- (bool)shouldUseWhitelistWebsite;
- (long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2;
- (unsigned long long)userActivityBatchSize;
- (double)userActivityCandidateScore;
- (double)userActivityExpirySeconds;

@end
