/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesisResponse : PBCodable <NSCopying> {
    GEODirectionsResponse *_directionsResponse;
    GEOETAResponse *_etaResponse;
    struct { 
        unsigned int updatedTimeStamp : 1; 
    } _has;
    double _updatedTimeStamp;
}

@property (nonatomic, retain) GEODirectionsResponse *directionsResponse;
@property (nonatomic, retain) GEOETAResponse *etaResponse;
@property (nonatomic, readonly) BOOL hasDirectionsResponse;
@property (nonatomic, readonly) BOOL hasEtaResponse;
@property (nonatomic) BOOL hasUpdatedTimeStamp;
@property (nonatomic) double updatedTimeStamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponse;
- (id)etaResponse;
- (BOOL)hasDirectionsResponse;
- (BOOL)hasEtaResponse;
- (BOOL)hasUpdatedTimeStamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDirectionsResponse:(id)arg1;
- (void)setEtaResponse:(id)arg1;
- (void)setHasUpdatedTimeStamp:(BOOL)arg1;
- (void)setUpdatedTimeStamp:(double)arg1;
- (double)updatedTimeStamp;
- (void)writeTo:(id)arg1;

@end
