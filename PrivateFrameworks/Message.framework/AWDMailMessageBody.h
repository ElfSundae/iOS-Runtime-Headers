/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface AWDMailMessageBody : PBCodable <NSCopying> {
    struct { 
        unsigned int totalTextSize : 1; 
    }  _has;
    NSString * _mimeSubtype;
    NSString * _mimeType;
    unsigned long long  _totalTextSize;
}

@property (nonatomic, readonly) BOOL hasMimeSubtype;
@property (nonatomic, readonly) BOOL hasMimeType;
@property (nonatomic) BOOL hasTotalTextSize;
@property (nonatomic, retain) NSString *mimeSubtype;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic) unsigned long long totalTextSize;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMimeSubtype;
- (BOOL)hasMimeType;
- (BOOL)hasTotalTextSize;
- (unsigned int)hash;
- (id)initWithMIMEBody:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mimeSubtype;
- (id)mimeType;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTotalTextSize:(BOOL)arg1;
- (void)setMimeSubtype:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setTotalTextSize:(unsigned long long)arg1;
- (unsigned long long)totalTextSize;
- (void)writeTo:(id)arg1;

@end
