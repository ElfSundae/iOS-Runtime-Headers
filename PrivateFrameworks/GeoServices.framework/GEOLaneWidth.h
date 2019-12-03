/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLaneWidth : PBCodable <NSCopying> {
    struct { 
        unsigned int has_offset : 1; 
        unsigned int has_width : 1; 
    }  _flags;
    unsigned int  _offset;
    PBUnknownFields * _unknownFields;
    unsigned int  _width;
}

@property (nonatomic) bool hasOffset;
@property (nonatomic) bool hasWidth;
@property (nonatomic) unsigned int offset;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int width;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOffset;
- (bool)hasWidth;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offset;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (id)unknownFields;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end