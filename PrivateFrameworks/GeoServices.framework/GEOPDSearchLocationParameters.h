/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchLocationParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int searchLocationParametersType : 1; 
    }  _has;
    int  _searchLocationParametersType;
    GEOPDTransportHint * _searchTransportHint;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) BOOL hasSearchLocationParametersType;
@property (nonatomic, readonly) BOOL hasSearchTransportHint;
@property (nonatomic) int searchLocationParametersType;
@property (nonatomic, retain) GEOPDTransportHint *searchTransportHint;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (int)StringAsSearchLocationParametersType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSearchLocationParametersType;
- (BOOL)hasSearchTransportHint;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)searchLocationParametersType;
- (id)searchLocationParametersTypeAsString:(int)arg1;
- (id)searchTransportHint;
- (void)setHasSearchLocationParametersType:(BOOL)arg1;
- (void)setSearchLocationParametersType:(int)arg1;
- (void)setSearchTransportHint:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
