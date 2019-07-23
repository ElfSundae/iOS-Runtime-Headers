/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSError : PBCodable <NSCopying> {
    int _code;
    NSString *_domain;
    struct { 
        unsigned int code : 1; 
    } _has;
    NSMutableArray *_underlyingErrors;
}

@property (nonatomic) int code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) BOOL hasCode;
@property (nonatomic, readonly) BOOL hasDomain;
@property (nonatomic, retain) NSMutableArray *underlyingErrors;

- (void)addUnderlyingErrors:(id)arg1;
- (void)clearUnderlyingErrors;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (BOOL)hasCode;
- (BOOL)hasDomain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCode:(BOOL)arg1;
- (void)setUnderlyingErrors:(id)arg1;
- (id)underlyingErrors;
- (id)underlyingErrorsAtIndex:(unsigned int)arg1;
- (unsigned int)underlyingErrorsCount;
- (void)writeTo:(id)arg1;

@end
