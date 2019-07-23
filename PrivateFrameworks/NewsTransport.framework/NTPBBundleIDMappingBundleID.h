/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBBundleIDMappingBundleID : PBCodable <NSCopying> {
    NSString * _bundleId;
    NSMutableArray * _channelTags;
    NSMutableArray * _sectionTags;
    NSMutableArray * _topicTags;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSMutableArray *channelTags;
@property (nonatomic, retain) NSMutableArray *sectionTags;
@property (nonatomic, retain) NSMutableArray *topicTags;

+ (Class)channelTagsType;
+ (Class)sectionTagsType;
+ (Class)topicTagsType;

- (void).cxx_destruct;
- (void)addChannelTags:(id)arg1;
- (void)addSectionTags:(id)arg1;
- (void)addTopicTags:(id)arg1;
- (id)bundleId;
- (id)channelTags;
- (id)channelTagsAtIndex:(unsigned int)arg1;
- (unsigned int)channelTagsCount;
- (void)clearChannelTags;
- (void)clearSectionTags;
- (void)clearTopicTags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sectionTags;
- (id)sectionTagsAtIndex:(unsigned int)arg1;
- (unsigned int)sectionTagsCount;
- (void)setBundleId:(id)arg1;
- (void)setChannelTags:(id)arg1;
- (void)setSectionTags:(id)arg1;
- (void)setTopicTags:(id)arg1;
- (id)topicTags;
- (id)topicTagsAtIndex:(unsigned int)arg1;
- (unsigned int)topicTagsCount;
- (void)writeTo:(id)arg1;

@end
