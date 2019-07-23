/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBLanguageConfig : PBCodable <NSCopying> {
    NSString * _appleEditorialChannelId;
    NTPBCoverArticlesConfig * _coverArticlesConfig;
    NSString * _forYouConfigId;
    NSString * _hiddenFeedId;
    NSString * _languageTag;
    NSMutableArray * _onboardingTagIds;
    NSMutableArray * _preSubscribedFeedIds;
    NSMutableArray * _preSubscribedNotificationsChannelIds;
    NSMutableArray * _recommendedNotificationChannels;
    NTPBCategory * _rootCategory;
    NTPBTopStoriesConfig * _topStoriesConfig;
}

@property (nonatomic, retain) NSString *appleEditorialChannelId;
@property (nonatomic, retain) NTPBCoverArticlesConfig *coverArticlesConfig;
@property (nonatomic, retain) NSString *forYouConfigId;
@property (nonatomic, readonly) BOOL hasAppleEditorialChannelId;
@property (nonatomic, readonly) BOOL hasCoverArticlesConfig;
@property (nonatomic, readonly) BOOL hasForYouConfigId;
@property (nonatomic, readonly) BOOL hasHiddenFeedId;
@property (nonatomic, readonly) BOOL hasLanguageTag;
@property (nonatomic, readonly) BOOL hasRootCategory;
@property (nonatomic, readonly) BOOL hasTopStoriesConfig;
@property (nonatomic, retain) NSString *hiddenFeedId;
@property (nonatomic, retain) NSString *languageTag;
@property (nonatomic, retain) NSMutableArray *onboardingTagIds;
@property (nonatomic, retain) NSMutableArray *preSubscribedFeedIds;
@property (nonatomic, retain) NSMutableArray *preSubscribedNotificationsChannelIds;
@property (nonatomic, retain) NSMutableArray *recommendedNotificationChannels;
@property (nonatomic, retain) NTPBCategory *rootCategory;
@property (nonatomic, retain) NTPBTopStoriesConfig *topStoriesConfig;

+ (Class)onboardingTagIdsType;
+ (Class)preSubscribedFeedIdsType;
+ (Class)preSubscribedNotificationsChannelIdsType;
+ (Class)recommendedNotificationChannelsType;

- (void).cxx_destruct;
- (void)addOnboardingTagIds:(id)arg1;
- (void)addPreSubscribedFeedIds:(id)arg1;
- (void)addPreSubscribedNotificationsChannelIds:(id)arg1;
- (void)addRecommendedNotificationChannels:(id)arg1;
- (id)appleEditorialChannelId;
- (void)clearOnboardingTagIds;
- (void)clearPreSubscribedFeedIds;
- (void)clearPreSubscribedNotificationsChannelIds;
- (void)clearRecommendedNotificationChannels;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArticlesConfig;
- (id)description;
- (id)dictionaryRepresentation;
- (id)forYouConfigId;
- (BOOL)hasAppleEditorialChannelId;
- (BOOL)hasCoverArticlesConfig;
- (BOOL)hasForYouConfigId;
- (BOOL)hasHiddenFeedId;
- (BOOL)hasLanguageTag;
- (BOOL)hasRootCategory;
- (BOOL)hasTopStoriesConfig;
- (unsigned int)hash;
- (id)hiddenFeedId;
- (BOOL)isEqual:(id)arg1;
- (id)languageTag;
- (void)mergeFrom:(id)arg1;
- (id)onboardingTagIds;
- (id)onboardingTagIdsAtIndex:(unsigned int)arg1;
- (unsigned int)onboardingTagIdsCount;
- (id)preSubscribedFeedIds;
- (id)preSubscribedFeedIdsAtIndex:(unsigned int)arg1;
- (unsigned int)preSubscribedFeedIdsCount;
- (id)preSubscribedNotificationsChannelIds;
- (id)preSubscribedNotificationsChannelIdsAtIndex:(unsigned int)arg1;
- (unsigned int)preSubscribedNotificationsChannelIdsCount;
- (BOOL)readFrom:(id)arg1;
- (id)recommendedNotificationChannels;
- (id)recommendedNotificationChannelsAtIndex:(unsigned int)arg1;
- (unsigned int)recommendedNotificationChannelsCount;
- (id)rootCategory;
- (void)setAppleEditorialChannelId:(id)arg1;
- (void)setCoverArticlesConfig:(id)arg1;
- (void)setForYouConfigId:(id)arg1;
- (void)setHiddenFeedId:(id)arg1;
- (void)setLanguageTag:(id)arg1;
- (void)setOnboardingTagIds:(id)arg1;
- (void)setPreSubscribedFeedIds:(id)arg1;
- (void)setPreSubscribedNotificationsChannelIds:(id)arg1;
- (void)setRecommendedNotificationChannels:(id)arg1;
- (void)setRootCategory:(id)arg1;
- (void)setTopStoriesConfig:(id)arg1;
- (id)topStoriesConfig;
- (void)writeTo:(id)arg1;

@end
