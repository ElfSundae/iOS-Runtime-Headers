/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleEngagement : PBCodable <NSCopying> {
    int  _articleEngagementType;
    NSString * _articleId;
    long long  _articleOpenedAtTimestamp;
    NSString * _channelId;
    NSString * _countryCode;
    NSString * _deviceModel;
    long long  _eventTimestamp;
    struct { 
        unsigned int articleOpenedAtTimestamp : 1; 
        unsigned int eventTimestamp : 1; 
        unsigned int articleEngagementType : 1; 
        unsigned int utcOffset : 1; 
        unsigned int isPaidSubscriber : 1; 
    }  _has;
    bool  _isPaidSubscriber;
    NTPBIssueData * _issueData;
    NTPBIssueViewData * _issueViewData;
    NSData * _sessionId;
    NSString * _userId;
    int  _utcOffset;
}

@property (nonatomic) int articleEngagementType;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) long long articleOpenedAtTimestamp;
@property (nonatomic, retain) NSString *channelId;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic) long long eventTimestamp;
@property (nonatomic) bool hasArticleEngagementType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasArticleOpenedAtTimestamp;
@property (nonatomic, readonly) bool hasChannelId;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic) bool hasEventTimestamp;
@property (nonatomic) bool hasIsPaidSubscriber;
@property (nonatomic, readonly) bool hasIssueData;
@property (nonatomic, readonly) bool hasIssueViewData;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic) bool hasUtcOffset;
@property (nonatomic) bool isPaidSubscriber;
@property (nonatomic, retain) NTPBIssueData *issueData;
@property (nonatomic, retain) NTPBIssueViewData *issueViewData;
@property (nonatomic, retain) NSData *sessionId;
@property (nonatomic, retain) NSString *userId;
@property (nonatomic) int utcOffset;

- (void).cxx_destruct;
- (int)articleEngagementType;
- (id)articleId;
- (long long)articleOpenedAtTimestamp;
- (id)channelId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)deviceModel;
- (id)dictionaryRepresentation;
- (long long)eventTimestamp;
- (bool)hasArticleEngagementType;
- (bool)hasArticleId;
- (bool)hasArticleOpenedAtTimestamp;
- (bool)hasChannelId;
- (bool)hasCountryCode;
- (bool)hasDeviceModel;
- (bool)hasEventTimestamp;
- (bool)hasIsPaidSubscriber;
- (bool)hasIssueData;
- (bool)hasIssueViewData;
- (bool)hasSessionId;
- (bool)hasUserId;
- (bool)hasUtcOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPaidSubscriber;
- (id)issueData;
- (id)issueViewData;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setArticleEngagementType:(int)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleOpenedAtTimestamp:(long long)arg1;
- (void)setChannelId:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setEventTimestamp:(long long)arg1;
- (void)setHasArticleEngagementType:(bool)arg1;
- (void)setHasArticleOpenedAtTimestamp:(bool)arg1;
- (void)setHasEventTimestamp:(bool)arg1;
- (void)setHasIsPaidSubscriber:(bool)arg1;
- (void)setHasUtcOffset:(bool)arg1;
- (void)setIsPaidSubscriber:(bool)arg1;
- (void)setIssueData:(id)arg1;
- (void)setIssueViewData:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setUtcOffset:(int)arg1;
- (id)userId;
- (int)utcOffset;
- (void)writeTo:(id)arg1;

@end
