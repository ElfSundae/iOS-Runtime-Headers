/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventGridDurationEndStateErrorInfo : PBCodable <NSCopying> {
    unsigned int  _count;
    struct { 
        unsigned int has_count : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    int  _type;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
