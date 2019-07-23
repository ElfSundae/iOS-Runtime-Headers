/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLServerFeedbackRequest : PBRequest <NSCopying> {
    NSMutableArray * _messages;
}

@property (nonatomic, retain) NSMutableArray *messages;

- (void).cxx_destruct;
- (void)addMessages:(id)arg1;
- (void)clearMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messages;
- (id)messagesAtIndex:(unsigned int)arg1;
- (unsigned int)messagesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setMessages:(id)arg1;
- (void)writeTo:(id)arg1;

@end
