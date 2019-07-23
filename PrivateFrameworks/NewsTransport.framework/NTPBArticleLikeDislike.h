/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleLikeDislike : PBCodable <NSCopying> {
    NSString * _articleId;
    NSData * _articleSessionId;
    int  _articleType;
    NSData * _articleViewingSessionId;
    int  _backendArticleVersion;
    NSString * _campaignId;
    NSString * _campaignType;
    int  _characterCount;
    NSString * _creativeId;
    NSString * _feedId;
    int  _feedType;
    NSData * _feedViewExposureId;
    BOOL  _fromNextArticleAffordanceTap;
    NSString * _groupFeedId;
    int  _groupType;
    struct { 
        unsigned int personalizationTreatmentId : 1; 
        unsigned int articleType : 1; 
        unsigned int backendArticleVersion : 1; 
        unsigned int characterCount : 1; 
        unsigned int feedType : 1; 
        unsigned int groupType : 1; 
        unsigned int likeDislikeLocation : 1; 
        unsigned int nextArticleAffordanceType : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int userAction : 1; 
        unsigned int fromNextArticleAffordanceTap : 1; 
        unsigned int isCoverArticle : 1; 
        unsigned int isDigitalReplicaAd : 1; 
        unsigned int isFreeArticle : 1; 
        unsigned int isGroupedArticle : 1; 
        unsigned int isPaidSubscriberToSourceChannel : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
    }  _has;
    BOOL  _isCoverArticle;
    BOOL  _isDigitalReplicaAd;
    BOOL  _isFreeArticle;
    BOOL  _isGroupedArticle;
    BOOL  _isPaidSubscriberToSourceChannel;
    BOOL  _isUserSubscribedToFeed;
    NSString * _language;
    int  _likeDislikeLocation;
    NSMutableArray * _namedEntities;
    int  _nextArticleAffordanceType;
    NSString * _nextArticleAffordanceTypeFeedId;
    long long  _personalizationTreatmentId;
    int  _publisherArticleVersion;
    NSString * _referencedArticleId;
    NSString * _sectionHeadlineId;
    NSString * _sourceChannelId;
    NSString * _surfacedByChannelId;
    NSString * _surfacedBySectionId;
    NSString * _surfacedByTopicId;
    int  _userAction;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic) int articleType;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic) int characterCount;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) BOOL fromNextArticleAffordanceTap;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) BOOL hasArticleId;
@property (nonatomic, readonly) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic, readonly) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic, readonly) BOOL hasCampaignId;
@property (nonatomic, readonly) BOOL hasCampaignType;
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic, readonly) BOOL hasCreativeId;
@property (nonatomic, readonly) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasFromNextArticleAffordanceTap;
@property (nonatomic, readonly) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasIsCoverArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsFreeArticle;
@property (nonatomic) BOOL hasIsGroupedArticle;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic, readonly) BOOL hasLanguage;
@property (nonatomic) BOOL hasLikeDislikeLocation;
@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (nonatomic, readonly) BOOL hasNextArticleAffordanceTypeFeedId;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic, readonly) BOOL hasReferencedArticleId;
@property (nonatomic, readonly) BOOL hasSectionHeadlineId;
@property (nonatomic, readonly) BOOL hasSourceChannelId;
@property (nonatomic, readonly) BOOL hasSurfacedByChannelId;
@property (nonatomic, readonly) BOOL hasSurfacedBySectionId;
@property (nonatomic, readonly) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL isCoverArticle;
@property (nonatomic) BOOL isDigitalReplicaAd;
@property (nonatomic) BOOL isFreeArticle;
@property (nonatomic) BOOL isGroupedArticle;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) int likeDislikeLocation;
@property (nonatomic, retain) NSMutableArray *namedEntities;
@property (nonatomic) int nextArticleAffordanceType;
@property (nonatomic, retain) NSString *nextArticleAffordanceTypeFeedId;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *surfacedByChannelId;
@property (nonatomic, retain) NSString *surfacedBySectionId;
@property (nonatomic, retain) NSString *surfacedByTopicId;
@property (nonatomic) int userAction;

+ (Class)namedEntitiesType;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (id)articleId;
- (id)articleSessionId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (id)articleViewingSessionId;
- (int)backendArticleVersion;
- (id)campaignId;
- (id)campaignType;
- (int)characterCount;
- (void)clearNamedEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (BOOL)fromNextArticleAffordanceTap;
- (id)groupFeedId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (BOOL)hasArticleId;
- (BOOL)hasArticleSessionId;
- (BOOL)hasArticleType;
- (BOOL)hasArticleViewingSessionId;
- (BOOL)hasBackendArticleVersion;
- (BOOL)hasCampaignId;
- (BOOL)hasCampaignType;
- (BOOL)hasCharacterCount;
- (BOOL)hasCreativeId;
- (BOOL)hasFeedId;
- (BOOL)hasFeedType;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasFromNextArticleAffordanceTap;
- (BOOL)hasGroupFeedId;
- (BOOL)hasGroupType;
- (BOOL)hasIsCoverArticle;
- (BOOL)hasIsDigitalReplicaAd;
- (BOOL)hasIsFreeArticle;
- (BOOL)hasIsGroupedArticle;
- (BOOL)hasIsPaidSubscriberToSourceChannel;
- (BOOL)hasIsUserSubscribedToFeed;
- (BOOL)hasLanguage;
- (BOOL)hasLikeDislikeLocation;
- (BOOL)hasNextArticleAffordanceType;
- (BOOL)hasNextArticleAffordanceTypeFeedId;
- (BOOL)hasPersonalizationTreatmentId;
- (BOOL)hasPublisherArticleVersion;
- (BOOL)hasReferencedArticleId;
- (BOOL)hasSectionHeadlineId;
- (BOOL)hasSourceChannelId;
- (BOOL)hasSurfacedByChannelId;
- (BOOL)hasSurfacedBySectionId;
- (BOOL)hasSurfacedByTopicId;
- (BOOL)hasUserAction;
- (unsigned int)hash;
- (BOOL)isCoverArticle;
- (BOOL)isDigitalReplicaAd;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFreeArticle;
- (BOOL)isGroupedArticle;
- (BOOL)isPaidSubscriberToSourceChannel;
- (BOOL)isUserSubscribedToFeed;
- (id)language;
- (int)likeDislikeLocation;
- (void)mergeFrom:(id)arg1;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned int)arg1;
- (unsigned int)namedEntitiesCount;
- (int)nextArticleAffordanceType;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
- (id)nextArticleAffordanceTypeFeedId;
- (long long)personalizationTreatmentId;
- (int)publisherArticleVersion;
- (BOOL)readFrom:(id)arg1;
- (id)referencedArticleId;
- (id)sectionHeadlineId;
- (void)setArticleId:(id)arg1;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setBackendArticleVersion:(int)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCharacterCount:(int)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setFromNextArticleAffordanceTap:(BOOL)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasArticleType:(BOOL)arg1;
- (void)setHasBackendArticleVersion:(BOOL)arg1;
- (void)setHasCharacterCount:(BOOL)arg1;
- (void)setHasFeedType:(BOOL)arg1;
- (void)setHasFromNextArticleAffordanceTap:(BOOL)arg1;
- (void)setHasGroupType:(BOOL)arg1;
- (void)setHasIsCoverArticle:(BOOL)arg1;
- (void)setHasIsDigitalReplicaAd:(BOOL)arg1;
- (void)setHasIsFreeArticle:(BOOL)arg1;
- (void)setHasIsGroupedArticle:(BOOL)arg1;
- (void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1;
- (void)setHasIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setHasLikeDislikeLocation:(BOOL)arg1;
- (void)setHasNextArticleAffordanceType:(BOOL)arg1;
- (void)setHasPersonalizationTreatmentId:(BOOL)arg1;
- (void)setHasPublisherArticleVersion:(BOOL)arg1;
- (void)setHasUserAction:(BOOL)arg1;
- (void)setIsCoverArticle:(BOOL)arg1;
- (void)setIsDigitalReplicaAd:(BOOL)arg1;
- (void)setIsFreeArticle:(BOOL)arg1;
- (void)setIsGroupedArticle:(BOOL)arg1;
- (void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1;
- (void)setIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLikeDislikeLocation:(int)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setNextArticleAffordanceType:(int)arg1;
- (void)setNextArticleAffordanceTypeFeedId:(id)arg1;
- (void)setPersonalizationTreatmentId:(long long)arg1;
- (void)setPublisherArticleVersion:(int)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setSurfacedByChannelId:(id)arg1;
- (void)setSurfacedBySectionId:(id)arg1;
- (void)setSurfacedByTopicId:(id)arg1;
- (void)setUserAction:(int)arg1;
- (id)sourceChannelId;
- (id)surfacedByChannelId;
- (id)surfacedBySectionId;
- (id)surfacedByTopicId;
- (int)userAction;
- (void)writeTo:(id)arg1;

@end
