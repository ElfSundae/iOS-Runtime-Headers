/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDWifiMeasurement : PBCodable <NSCopying> {
    unsigned long long  _entryTime;
    unsigned long long  _exitTime;
    struct { 
        unsigned int has_entryTime : 1; 
        unsigned int has_exitTime : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_locations : 1; 
        unsigned int read_wifiAccessPoints : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_entryTime : 1; 
        unsigned int wrote_exitTime : 1; 
        unsigned int wrote_locations : 1; 
        unsigned int wrote_wifiAccessPoints : 1; 
    }  _flags;
    NSMutableArray * _locations;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _wifiAccessPoints;
}

@property (nonatomic) unsigned long long entryTime;
@property (nonatomic) unsigned long long exitTime;
@property (nonatomic) bool hasEntryTime;
@property (nonatomic) bool hasExitTime;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *wifiAccessPoints;

+ (bool)isValid:(id)arg1;
+ (Class)locationType;
+ (Class)wifiAccessPointType;

- (void).cxx_destruct;
- (void)_addNoFlagsLocation:(id)arg1;
- (void)_addNoFlagsWifiAccessPoint:(id)arg1;
- (void)_readLocations;
- (void)_readWifiAccessPoints;
- (void)addLocation:(id)arg1;
- (void)addWifiAccessPoint:(id)arg1;
- (void)clearLocations;
- (void)clearSensitiveFields;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearWifiAccessPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)entryTime;
- (unsigned long long)exitTime;
- (bool)hasEntryTime;
- (bool)hasExitTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntryTime:(unsigned long long)arg1;
- (void)setExitTime:(unsigned long long)arg1;
- (void)setHasEntryTime:(bool)arg1;
- (void)setHasExitTime:(bool)arg1;
- (void)setLocations:(id)arg1;
- (void)setWifiAccessPoints:(id)arg1;
- (id)unknownFields;
- (id)wifiAccessPointAtIndex:(unsigned long long)arg1;
- (id)wifiAccessPoints;
- (unsigned long long)wifiAccessPointsCount;
- (void)writeTo:(id)arg1;

@end
