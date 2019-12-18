/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARBag : NSObject <NSSecureCoding> {
    NSData * _bagData;
    NSString * _clientName;
    NSString * _userAgent;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) long long abTest2WeekZoneSize;
@property (nonatomic, readonly) NSArray *anonymousMetadataPreference;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly) NSNumber *cohortsLookbackInDays;
@property (nonatomic, readonly) bool collectAnonymousMetadata;
@property (nonatomic, readonly) bool collectScores;
@property (nonatomic, readonly) NSURL *crowdsourcingURL;
@property (nonatomic, readonly, copy) NSString *customFlight;
@property (nonatomic, readonly) bool disableAsTypedSuggestion;
@property (nonatomic, readonly) NSArray *downloadResourcesList;
@property (nonatomic, readonly) NSNumber *duetExpertCustomFeedbackSamplingPercentage;
@property (nonatomic, readonly) NSNumber *eagerFeedbackSamplingPercentage;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSArray *enabledDomains;
@property (nonatomic, readonly) bool feedbackEnabled;
@property (nonatomic, readonly) NSNumber *feedbackMaxAgeInDays;
@property (nonatomic, readonly) NSURL *feedbackURL;
@property (nonatomic, readonly, copy) NSString *firstUseContinueText;
@property (nonatomic, readonly, copy) NSString *firstUseDescriptionText;
@property (nonatomic, readonly, copy) NSString *firstUseLearnMoreText;
@property (nonatomic, readonly, copy) NSString *firstUseLearnMoreURL;
@property (nonatomic, readonly) NSURL *flightURL;
@property (nonatomic, readonly) bool imageTimingFeedbackEnabled;
@property (nonatomic, readonly) unsigned long long maximumCachedQueriesToSend;
@property (nonatomic, readonly) unsigned long long maximumCachedResultsToSend;
@property (nonatomic, readonly) NSDictionary *maximumCustomFeedbackSizes;
@property (nonatomic, readonly) NSNumber *minSearchRenderTimeout;
@property (nonatomic, readonly) NSNumber *minSuggestionRenderTimeout;
@property (nonatomic, readonly) double minThresholdToSend;
@property (nonatomic, readonly) double minimumIntervalBetweenQueriesFromBag;
@property (nonatomic, readonly) unsigned long long minimumQueryLength;
@property (nonatomic, readonly) NSNumber *otherRenderTimeout;
@property (nonatomic, readonly, copy) NSString *parsecFeedbackFormat;
@property (nonatomic, readonly) long long protocolVersion;
@property (nonatomic, readonly, copy) NSDictionary *rawBag;
@property (nonatomic, readonly, copy) NSArray *recentlyUsedAppIdentifierWhitelist;
@property (nonatomic, readonly, copy) NSString *releaseTag;
@property (nonatomic, readonly, copy) NSDictionary *resources;
@property (nonatomic, readonly) double safariAll;
@property (nonatomic, readonly) double safariDecay;
@property (nonatomic, readonly) double safariLast1day;
@property (nonatomic, readonly) double safariLast1hour;
@property (nonatomic, readonly) double safariLast1month;
@property (nonatomic, readonly) double safariLast1week;
@property (nonatomic, readonly) double safariMostRecent;
@property (nonatomic, readonly) bool sampleClientTiming;
@property (nonatomic, readonly) bool sampleFeatures;
@property (nonatomic, readonly) NSNumber *searchRenderTimeout;
@property (nonatomic, readonly) NSURL *searchURL;
@property (nonatomic, readonly) bool sendGeoEnvironmentHeader;
@property (nonatomic, readonly, copy) NSArray *skuUploadWhitelist;
@property (nonatomic, readonly) unsigned long long smartHistoryCompletionReturnCount;
@property (nonatomic, readonly) bool smartHistoryEnabled;
@property (nonatomic, readonly) bool smartHistoryFeatureFeedbackEnabled;
@property (nonatomic, readonly) unsigned long long smartHistoryMaxRows;
@property (nonatomic, readonly) unsigned long long smartHistoryMinimumQueryLength;
@property (nonatomic, readonly) unsigned long long smartHistorySampleThreshold;
@property (nonatomic, readonly) unsigned long long smartHistoryTimeout;
@property (nonatomic, readonly) NSArray *subscriptionProviderBundleIdentifierWhitelist;
@property (nonatomic, readonly) NSArray *subscriptionProviderDomainWhitelist;
@property (nonatomic, readonly) double subscriptionTTL;
@property (nonatomic, readonly) NSArray *suggestionRankerModel;
@property (nonatomic, readonly) NSArray *supportedGeoLocationSources;
@property (nonatomic, readonly) double timeoutIntervalForRequest;
@property (nonatomic, readonly) NSDictionary *tuscanyConfiguration;
@property (nonatomic, readonly) bool use2LayerRanking;
@property (nonatomic, readonly, copy) NSString *userAgent;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly, copy) NSString *version;
@property (nonatomic, readonly) NSURL *warmURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bag_objectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_bag_objectOfClass:(Class)arg1 forKey:(id)arg2 override:(bool)arg3;
- (long long)abTest2WeekZoneSize;
- (id)anonymousMetadataPreference;
- (id)bagURL;
- (id)bag_URLForKey:(id)arg1;
- (id)bag_arrayForKey:(id)arg1;
- (bool)bag_boolForKey:(id)arg1;
- (id)bag_dictionaryForKey:(id)arg1;
- (id)bag_numberForKey:(id)arg1;
- (id)bag_stringForKey:(id)arg1;
- (id)clientName;
- (id)cohortsLookbackInDays;
- (bool)collectAnonymousMetadata;
- (bool)collectScores;
- (id)crowdsourcingURL;
- (id)customFlight;
- (id)description;
- (bool)disableAsTypedSuggestion;
- (id)downloadResourcesList;
- (id)duetExpertCustomFeedbackSamplingPercentage;
- (id)eagerFeedbackSamplingPercentage;
- (id)enabledDomains;
- (void)encodeWithCoder:(id)arg1;
- (double)expirationDate;
- (bool)feedbackEnabled;
- (id)feedbackMaxAgeInDays;
- (id)feedbackURL;
- (id)firstUseContinueText;
- (id)firstUseDescriptionText;
- (id)firstUseLearnMoreText;
- (id)firstUseLearnMoreURL;
- (id)flightURL;
- (bool)imageTimingFeedbackEnabled;
- (id)initWithBag:(id)arg1 userAgent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 userAgent:(id)arg2;
- (id)initWithData:(id)arg1 userAgent:(id)arg2 userDefaults:(id)arg3;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2 userDefaults:(id)arg3;
- (id)initWithURL:(id)arg1 userDefaults:(id)arg2;
- (bool)isEnabled;
- (bool)isRefreshDisabled;
- (unsigned long long)maximumCachedQueriesToSend;
- (unsigned long long)maximumCachedResultsToSend;
- (id)maximumCustomFeedbackSizes;
- (unsigned long long)maximumSizeForFeedbackType:(id)arg1;
- (id)minSearchRenderTimeout;
- (id)minSuggestionRenderTimeout;
- (double)minThresholdToSend;
- (double)minimumIntervalBetweenQueriesFromBag;
- (unsigned long long)minimumQueryLength;
- (id)otherRenderTimeout;
- (id)parsecFeedbackFormat;
- (id)personalizationParameters;
- (long long)protocolVersion;
- (id)rawBag;
- (id)recentlyUsedAppIdentifierWhitelist;
- (id)releaseTag;
- (id)resources;
- (double)safariAll;
- (double)safariDecay;
- (double)safariLast1day;
- (double)safariLast1hour;
- (double)safariLast1month;
- (double)safariLast1week;
- (double)safariMostRecent;
- (bool)sampleClientTiming;
- (bool)sampleFeatures;
- (id)searchRenderTimeout;
- (id)searchURL;
- (bool)sendGeoEnvironmentHeader;
- (id)skuUploadWhitelist;
- (unsigned long long)smartHistoryCompletionReturnCount;
- (bool)smartHistoryEnabled;
- (bool)smartHistoryFeatureFeedbackEnabled;
- (unsigned long long)smartHistoryMaxRows;
- (unsigned long long)smartHistoryMinimumQueryLength;
- (unsigned long long)smartHistorySampleThreshold;
- (unsigned long long)smartHistoryTimeout;
- (id)subscriptionProviderBundleIdentifierWhitelist;
- (id)subscriptionProviderDomainWhitelist;
- (double)subscriptionTTL;
- (id)suggestionRankerModel;
- (id)supportedGeoLocationSources;
- (double)timeoutIntervalForRequest;
- (id)tuscanyConfiguration;
- (id)urlForIdentifier:(id)arg1;
- (bool)use2LayerRanking;
- (id)userAgent;
- (id)userDefaults;
- (id)valueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 override:(bool)arg2;
- (id)version;
- (id)warmURL;

@end
