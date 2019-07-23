/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteInformation : PBCodable <NSCopying> {
    GEOFormattedString * _detail;
    GEOFormattedString * _duration;
}

@property (nonatomic, retain) GEOFormattedString *detail;
@property (nonatomic, retain) GEOFormattedString *duration;
@property (nonatomic, readonly) BOOL hasDetail;
@property (nonatomic, readonly) BOOL hasDuration;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (id)duration;
- (BOOL)hasDetail;
- (BOOL)hasDuration;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)writeTo:(id)arg1;

@end
