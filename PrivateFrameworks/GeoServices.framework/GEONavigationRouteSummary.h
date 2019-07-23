/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {
    GEOComposedWaypoint *_destination;
    NSString *_destinationName;
    struct { 
        unsigned int travelTime : 1; 
        unsigned int transportType : 1; 
    } _has;
    GEOComposedWaypoint *_origin;
    int _transportType;
    double _travelTime;
}

@property (nonatomic, retain) GEOComposedWaypoint *destination;
@property (nonatomic, retain) NSString *destinationName;
@property (nonatomic, readonly) BOOL hasDestination;
@property (nonatomic, readonly) BOOL hasDestinationName;
@property (nonatomic, readonly) BOOL hasOrigin;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic, retain) GEOComposedWaypoint *origin;
@property (nonatomic) int transportType;
@property (nonatomic) double travelTime;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destination;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (BOOL)hasDestination;
- (BOOL)hasDestinationName;
- (BOOL)hasOrigin;
- (BOOL)hasTransportType;
- (BOOL)hasTravelTime;
- (unsigned int)hash;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (BOOL)readFrom:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHasTravelTime:(BOOL)arg1;
- (void)setOrigin:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelTime:(double)arg1;
- (int)transportType;
- (double)travelTime;
- (void)writeTo:(id)arg1;

@end
