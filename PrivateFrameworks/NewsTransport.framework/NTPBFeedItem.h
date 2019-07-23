/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedItem : PBCodable <FCClassifiable, FCFeedTransformationItem, NSCopying> {
    NSString * _articleID;
    NSString * _clusterID;
    unsigned long long  _contentType;
    unsigned long long  _feedHalfLifeMilliseconds;
    NSString * _feedID;
    double  _globalUserFeedback;
    struct { 
        unsigned int contentType : 1; 
        unsigned int feedHalfLifeMilliseconds : 1; 
        unsigned int globalUserFeedback : 1; 
        unsigned int minimumNewsVersion : 1; 
        unsigned int order : 1; 
        unsigned int publishDateMilliseconds : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int hasCoverArt : 1; 
        unsigned int hasThumbnail : 1; 
        unsigned int isExplicitContent : 1; 
        unsigned int isFromBlockedStorefront : 1; 
        unsigned int isPaid : 1; 
    }  _has;
    BOOL  _hasCoverArt;
    BOOL  _hasThumbnail;
    BOOL  _isExplicitContent;
    BOOL  _isFromBlockedStorefront;
    BOOL  _isPaid;
    long long  _minimumNewsVersion;
    unsigned long long  _order;
    unsigned long long  _publishDateMilliseconds;
    long long  _publisherArticleVersion;
    NSString * _sourceChannelID;
    NSMutableArray * _topicIDs;
}

@property (nonatomic, readonly) unsigned long long articleContentType;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, readonly) unsigned long long articleRecordModificationDateMilliseconds;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (nonatomic, retain) NSString *clusterID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic) unsigned long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExplicitContent, nonatomic, readonly) BOOL explicitContent;
@property (nonatomic, readonly) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic, readonly, copy) NSString *feedID;
@property (nonatomic, retain) NSString *feedID;
@property (getter=isFromBlockedStorefront, nonatomic, readonly) BOOL fromBlockedStorefront;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic) double globalUserFeedback;
@property (nonatomic, readonly) unsigned long long halfLife;
@property (nonatomic, readonly) BOOL hasArticleID;
@property (nonatomic, readonly) BOOL hasClusterID;
@property (nonatomic) BOOL hasContentType;
@property (nonatomic) BOOL hasCoverArt;
@property (nonatomic) BOOL hasFeedHalfLifeMilliseconds;
@property (nonatomic, readonly) BOOL hasFeedID;
@property (nonatomic, readonly) BOOL hasGlobalUserFeedback;
@property (nonatomic) BOOL hasGlobalUserFeedback;
@property (nonatomic) BOOL hasHasCoverArt;
@property (nonatomic) BOOL hasHasThumbnail;
@property (nonatomic) BOOL hasIsExplicitContent;
@property (nonatomic) BOOL hasIsFromBlockedStorefront;
@property (nonatomic) BOOL hasIsPaid;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic) BOOL hasOrder;
@property (nonatomic) BOOL hasPublishDateMilliseconds;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic, readonly) BOOL hasSourceChannelID;
@property (nonatomic) BOOL hasThumbnail;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) BOOL isExplicitContent;
@property (nonatomic) BOOL isFromBlockedStorefront;
@property (nonatomic) BOOL isPaid;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic, readonly) unsigned long long order;
@property (nonatomic) unsigned long long order;
@property (getter=isPaid, nonatomic, readonly) BOOL paid;
@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic, readonly) unsigned long long publishDateMilliseconds;
@property (nonatomic) unsigned long long publishDateMilliseconds;
@property (nonatomic) long long publisherArticleVersion;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, readonly, copy) NSString *sourceChannelID;
@property (nonatomic, retain) NSString *sourceChannelID;
@property (nonatomic, readonly, copy) NSString *sourceFeedID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *topicIDs;
@property (nonatomic, retain) NSMutableArray *topicIDs;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)topicIDsType;

- (void)addTopicIDs:(id)arg1;
- (id)articleID;
- (void)clearTopicIDs;
- (id)clusterID;
- (unsigned long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)feedHalfLifeMilliseconds;
- (id)feedID;
- (double)globalUserFeedback;
- (BOOL)hasArticleID;
- (BOOL)hasClusterID;
- (BOOL)hasContentType;
- (BOOL)hasCoverArt;
- (BOOL)hasFeedHalfLifeMilliseconds;
- (BOOL)hasFeedID;
- (BOOL)hasGlobalUserFeedback;
- (BOOL)hasHasCoverArt;
- (BOOL)hasHasThumbnail;
- (BOOL)hasIsExplicitContent;
- (BOOL)hasIsFromBlockedStorefront;
- (BOOL)hasIsPaid;
- (BOOL)hasMinimumNewsVersion;
- (BOOL)hasOrder;
- (BOOL)hasPublishDateMilliseconds;
- (BOOL)hasPublisherArticleVersion;
- (BOOL)hasSourceChannelID;
- (BOOL)hasThumbnail;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitContent;
- (BOOL)isFromBlockedStorefront;
- (BOOL)isPaid;
- (void)mergeFrom:(id)arg1;
- (long long)minimumNewsVersion;
- (unsigned long long)order;
- (unsigned long long)publishDateMilliseconds;
- (long long)publisherArticleVersion;
- (BOOL)readFrom:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setClusterID:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setFeedHalfLifeMilliseconds:(unsigned long long)arg1;
- (void)setFeedID:(id)arg1;
- (void)setGlobalUserFeedback:(double)arg1;
- (void)setHasContentType:(BOOL)arg1;
- (void)setHasCoverArt:(BOOL)arg1;
- (void)setHasFeedHalfLifeMilliseconds:(BOOL)arg1;
- (void)setHasGlobalUserFeedback:(BOOL)arg1;
- (void)setHasHasCoverArt:(BOOL)arg1;
- (void)setHasHasThumbnail:(BOOL)arg1;
- (void)setHasIsExplicitContent:(BOOL)arg1;
- (void)setHasIsFromBlockedStorefront:(BOOL)arg1;
- (void)setHasIsPaid:(BOOL)arg1;
- (void)setHasMinimumNewsVersion:(BOOL)arg1;
- (void)setHasOrder:(BOOL)arg1;
- (void)setHasPublishDateMilliseconds:(BOOL)arg1;
- (void)setHasPublisherArticleVersion:(BOOL)arg1;
- (void)setHasThumbnail:(BOOL)arg1;
- (void)setIsExplicitContent:(BOOL)arg1;
- (void)setIsFromBlockedStorefront:(BOOL)arg1;
- (void)setIsPaid:(BOOL)arg1;
- (void)setMinimumNewsVersion:(long long)arg1;
- (void)setOrder:(unsigned long long)arg1;
- (void)setPublishDateMilliseconds:(unsigned long long)arg1;
- (void)setPublisherArticleVersion:(long long)arg1;
- (void)setSourceChannelID:(id)arg1;
- (void)setTopicIDs:(id)arg1;
- (id)sourceChannelID;
- (id)topicIDs;
- (id)topicIDsAtIndex:(unsigned int)arg1;
- (unsigned int)topicIDsCount;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)cloudKitKeys;
+ (id)feedItemWithCKFeedItemAndArticleRecord:(id)arg1 storefrontID:(id)arg2;

- (unsigned long long)articleContentType;
- (unsigned long long)articleRecordModificationDateMilliseconds;
- (int)compareOrder:(id)arg1;
- (int)compareOrderDescending:(id)arg1;
- (id)description;
- (void)enumerateFeaturesWithBlock:(id /* block */)arg1;
- (unsigned long long)halfLife;
- (BOOL)hasFeature:(id)arg1;
- (BOOL)hasGlobalUserFeedback;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mustShow;
- (id)publishDate;
- (id)publisherID;
- (id)sourceFeedID;

@end
