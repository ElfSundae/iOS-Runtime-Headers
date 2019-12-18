/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBForYouConfigRecord : PBCodable <NSCopying> {
    NTPBRecordBase * _base;
    NSMutableArray * _breakingNewsArticleIDs;
    NSString * _configuration;
    NSString * _coverArticlesArticleListID;
    NSMutableArray * _editorialArticleListIDs;
    NSMutableArray * _editorialSectionTagIDs;
    NSString * _moreVideosArticleListID;
    NSMutableArray * _specialEventArticleIDs;
    NSString * _spotlightArticleID;
    NSString * _todayFeedConfiguration;
    NSMutableArray * _todayFeedTopStoriesArticleIDs;
    NSMutableArray * _topStoriesCombinedArticleIDs;
    NSMutableArray * _topVideosArticleIDs;
    NSString * _trendingArticleListID;
}

@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, retain) NSMutableArray *breakingNewsArticleIDs;
@property (nonatomic, retain) NSString *configuration;
@property (nonatomic, retain) NSString *coverArticlesArticleListID;
@property (nonatomic, retain) NSMutableArray *editorialArticleListIDs;
@property (nonatomic, retain) NSMutableArray *editorialSectionTagIDs;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic, readonly) bool hasCoverArticlesArticleListID;
@property (nonatomic, readonly) bool hasMoreVideosArticleListID;
@property (nonatomic, readonly) bool hasSpotlightArticleID;
@property (nonatomic, readonly) bool hasTodayFeedConfiguration;
@property (nonatomic, readonly) bool hasTrendingArticleListID;
@property (nonatomic, retain) NSString *moreVideosArticleListID;
@property (nonatomic, retain) NSMutableArray *specialEventArticleIDs;
@property (nonatomic, retain) NSString *spotlightArticleID;
@property (nonatomic, retain) NSString *todayFeedConfiguration;
@property (nonatomic, retain) NSMutableArray *todayFeedTopStoriesArticleIDs;
@property (nonatomic, retain) NSMutableArray *topStoriesCombinedArticleIDs;
@property (nonatomic, retain) NSMutableArray *topVideosArticleIDs;
@property (nonatomic, retain) NSString *trendingArticleListID;

+ (Class)breakingNewsArticleIDsType;
+ (Class)editorialArticleListIDsType;
+ (Class)editorialSectionTagIDsType;
+ (Class)specialEventArticleIDsType;
+ (Class)todayFeedTopStoriesArticleIDsType;
+ (Class)topStoriesCombinedArticleIDsType;
+ (Class)topVideosArticleIDsType;

- (void)addBreakingNewsArticleIDs:(id)arg1;
- (void)addEditorialArticleListIDs:(id)arg1;
- (void)addEditorialSectionTagIDs:(id)arg1;
- (void)addSpecialEventArticleIDs:(id)arg1;
- (void)addTodayFeedTopStoriesArticleIDs:(id)arg1;
- (void)addTopStoriesCombinedArticleIDs:(id)arg1;
- (void)addTopVideosArticleIDs:(id)arg1;
- (id)base;
- (id)breakingNewsArticleIDs;
- (id)breakingNewsArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)breakingNewsArticleIDsCount;
- (void)clearBreakingNewsArticleIDs;
- (void)clearEditorialArticleListIDs;
- (void)clearEditorialSectionTagIDs;
- (void)clearSpecialEventArticleIDs;
- (void)clearTodayFeedTopStoriesArticleIDs;
- (void)clearTopStoriesCombinedArticleIDs;
- (void)clearTopVideosArticleIDs;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArticlesArticleListID;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)editorialArticleListIDs;
- (id)editorialArticleListIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)editorialArticleListIDsCount;
- (id)editorialSectionTagIDs;
- (id)editorialSectionTagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)editorialSectionTagIDsCount;
- (bool)hasBase;
- (bool)hasConfiguration;
- (bool)hasCoverArticlesArticleListID;
- (bool)hasMoreVideosArticleListID;
- (bool)hasSpotlightArticleID;
- (bool)hasTodayFeedConfiguration;
- (bool)hasTrendingArticleListID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)moreVideosArticleListID;
- (bool)readFrom:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setBreakingNewsArticleIDs:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCoverArticlesArticleListID:(id)arg1;
- (void)setEditorialArticleListIDs:(id)arg1;
- (void)setEditorialSectionTagIDs:(id)arg1;
- (void)setMoreVideosArticleListID:(id)arg1;
- (void)setSpecialEventArticleIDs:(id)arg1;
- (void)setSpotlightArticleID:(id)arg1;
- (void)setTodayFeedConfiguration:(id)arg1;
- (void)setTodayFeedTopStoriesArticleIDs:(id)arg1;
- (void)setTopStoriesCombinedArticleIDs:(id)arg1;
- (void)setTopVideosArticleIDs:(id)arg1;
- (void)setTrendingArticleListID:(id)arg1;
- (id)specialEventArticleIDs;
- (id)specialEventArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)specialEventArticleIDsCount;
- (id)spotlightArticleID;
- (id)todayFeedConfiguration;
- (id)todayFeedTopStoriesArticleIDs;
- (id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)todayFeedTopStoriesArticleIDsCount;
- (id)topStoriesCombinedArticleIDs;
- (id)topStoriesCombinedArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topStoriesCombinedArticleIDsCount;
- (id)topVideosArticleIDs;
- (id)topVideosArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topVideosArticleIDsCount;
- (id)trendingArticleListID;
- (void)writeTo:(id)arg1;

@end
