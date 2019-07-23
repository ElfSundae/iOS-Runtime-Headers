/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying> {
    NSMutableArray * _applicationMessageSyncResponses;
}

@property (nonatomic, retain) NSMutableArray *applicationMessageSyncResponses;

+ (Class)applicationMessageSyncResponsesType;

- (void).cxx_destruct;
- (void)addApplicationMessageSyncResponses:(id)arg1;
- (id)applicationMessageSyncResponses;
- (id)applicationMessageSyncResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationMessageSyncResponsesCount;
- (void)clearApplicationMessageSyncResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApplicationMessageSyncResponses:(id)arg1;
- (void)writeTo:(id)arg1;

@end
