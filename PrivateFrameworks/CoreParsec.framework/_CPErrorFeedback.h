/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPErrorFeedback : PBCodable <NSCopying> {
    int  _code;
    NSString * _domain;
    struct { 
        unsigned int code : 1; 
    }  _has;
    NSString * _reason;
    unsigned long long  _timestamp;
    NSData * _userInfo;
}

@property (nonatomic) int code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) BOOL hasCode;
@property (nonatomic, readonly) BOOL hasDomain;
@property (nonatomic, readonly) BOOL hasReason;
@property (nonatomic, readonly) BOOL hasUserInfo;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *userInfo;

- (void).cxx_destruct;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (BOOL)hasCode;
- (BOOL)hasDomain;
- (BOOL)hasReason;
- (BOOL)hasUserInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reason;
- (void)setCode:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCode:(BOOL)arg1;
- (void)setReason:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)timestamp;
- (id)userInfo;
- (void)writeTo:(id)arg1;

@end
