/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutineLocation : PBCodable <NSCopying> {
    double _confidence;
    NSData *_geoData;
    struct { 
        unsigned int confidence : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int uncertainty : 1; 
        unsigned int locationOfInterestType : 1; 
    } _has;
    double _latitude;
    int _locationOfInterestType;
    double _longitude;
    double _uncertainty;
    NSString *_uuid;
    NSMutableArray *_visits;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSData *geoData;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic, readonly) BOOL hasGeoData;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLocationOfInterestType;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic, readonly) BOOL hasUuid;
@property (nonatomic) double latitude;
@property (nonatomic) int locationOfInterestType;
@property (nonatomic) double longitude;
@property (nonatomic) double uncertainty;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) NSMutableArray *visits;

- (void).cxx_destruct;
- (void)addVisits:(id)arg1;
- (void)clearVisits;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoData;
- (BOOL)hasConfidence;
- (BOOL)hasGeoData;
- (BOOL)hasLatitude;
- (BOOL)hasLocationOfInterestType;
- (BOOL)hasLongitude;
- (BOOL)hasUncertainty;
- (BOOL)hasUuid;
- (unsigned int)hash;
- (id)initWithLocationOfInterest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (double)latitude;
- (int)locationOfInterestType;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setGeoData:(id)arg1;
- (void)setHasConfidence:(BOOL)arg1;
- (void)setHasLatitude:(BOOL)arg1;
- (void)setHasLocationOfInterestType:(BOOL)arg1;
- (void)setHasLongitude:(BOOL)arg1;
- (void)setHasUncertainty:(BOOL)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocationOfInterestType:(int)arg1;
- (void)setLongitude:(double)arg1;
- (void)setUncertainty:(double)arg1;
- (void)setUuid:(id)arg1;
- (void)setVisits:(id)arg1;
- (double)uncertainty;
- (id)uuid;
- (id)visits;
- (id)visitsAtIndex:(unsigned int)arg1;
- (unsigned int)visitsCount;
- (void)writeTo:(id)arg1;

@end
