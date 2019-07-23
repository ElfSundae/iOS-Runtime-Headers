/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleScroll : PBCodable <NSCopying> {
    BOOL  _adSupportedChannel;
    NSString * _articleId;
    NSData * _articleSessionId;
    NSData * _articleViewingSessionId;
    NSData * _feedViewExposureId;
    struct { 
        unsigned int scrollHostViewType : 1; 
        unsigned int scrollingVelocity : 1; 
        unsigned int verticalScrollPositionEnding : 1; 
        unsigned int verticalScrollPositionStarting : 1; 
        unsigned int adSupportedChannel : 1; 
    }  _has;
    NSString * _referencedArticleId;
    int  _scrollHostViewType;
    NSString * _scrollVelocity;
    float  _scrollingVelocity;
    NSString * _sectionHeadlineId;
    NSString * _sourceChannelId;
    NSString * _verticalScrollPositionEnd;
    float  _verticalScrollPositionEnding;
    NSString * _verticalScrollPositionStart;
    float  _verticalScrollPositionStarting;
}

@property (nonatomic) BOOL adSupportedChannel;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic, readonly) BOOL hasArticleId;
@property (nonatomic, readonly) BOOL hasArticleSessionId;
@property (nonatomic, readonly) BOOL hasArticleViewingSessionId;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic, readonly) BOOL hasReferencedArticleId;
@property (nonatomic) BOOL hasScrollHostViewType;
@property (nonatomic, readonly) BOOL hasScrollVelocity;
@property (nonatomic) BOOL hasScrollingVelocity;
@property (nonatomic, readonly) BOOL hasSectionHeadlineId;
@property (nonatomic, readonly) BOOL hasSourceChannelId;
@property (nonatomic, readonly) BOOL hasVerticalScrollPositionEnd;
@property (nonatomic) BOOL hasVerticalScrollPositionEnding;
@property (nonatomic, readonly) BOOL hasVerticalScrollPositionStart;
@property (nonatomic) BOOL hasVerticalScrollPositionStarting;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic) int scrollHostViewType;
@property (nonatomic, retain) NSString *scrollVelocity;
@property (nonatomic) float scrollingVelocity;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *verticalScrollPositionEnd;
@property (nonatomic) float verticalScrollPositionEnding;
@property (nonatomic, retain) NSString *verticalScrollPositionStart;
@property (nonatomic) float verticalScrollPositionStarting;

- (void).cxx_destruct;
- (BOOL)adSupportedChannel;
- (id)articleId;
- (id)articleSessionId;
- (id)articleViewingSessionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedViewExposureId;
- (BOOL)hasAdSupportedChannel;
- (BOOL)hasArticleId;
- (BOOL)hasArticleSessionId;
- (BOOL)hasArticleViewingSessionId;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasReferencedArticleId;
- (BOOL)hasScrollHostViewType;
- (BOOL)hasScrollVelocity;
- (BOOL)hasScrollingVelocity;
- (BOOL)hasSectionHeadlineId;
- (BOOL)hasSourceChannelId;
- (BOOL)hasVerticalScrollPositionEnd;
- (BOOL)hasVerticalScrollPositionEnding;
- (BOOL)hasVerticalScrollPositionStart;
- (BOOL)hasVerticalScrollPositionStarting;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)referencedArticleId;
- (int)scrollHostViewType;
- (id)scrollVelocity;
- (float)scrollingVelocity;
- (id)sectionHeadlineId;
- (void)setAdSupportedChannel:(BOOL)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasAdSupportedChannel:(BOOL)arg1;
- (void)setHasScrollHostViewType:(BOOL)arg1;
- (void)setHasScrollingVelocity:(BOOL)arg1;
- (void)setHasVerticalScrollPositionEnding:(BOOL)arg1;
- (void)setHasVerticalScrollPositionStarting:(BOOL)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setScrollHostViewType:(int)arg1;
- (void)setScrollVelocity:(id)arg1;
- (void)setScrollingVelocity:(float)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setVerticalScrollPositionEnd:(id)arg1;
- (void)setVerticalScrollPositionEnding:(float)arg1;
- (void)setVerticalScrollPositionStart:(id)arg1;
- (void)setVerticalScrollPositionStarting:(float)arg1;
- (id)sourceChannelId;
- (id)verticalScrollPositionEnd;
- (float)verticalScrollPositionEnding;
- (id)verticalScrollPositionStart;
- (float)verticalScrollPositionStarting;
- (void)writeTo:(id)arg1;

@end
