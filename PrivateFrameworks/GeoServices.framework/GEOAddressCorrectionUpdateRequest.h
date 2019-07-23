/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {
    NSString *_addressID;
    NSMutableArray *_addressResults;
    int _correctionStatus;
    struct { 
        unsigned int correctionStatus : 1; 
    } _has;
    NSMutableArray *_significantLocations;
}

@property (nonatomic, retain) NSString *addressID;
@property (nonatomic, retain) NSMutableArray *addressResults;
@property (nonatomic) int correctionStatus;
@property (nonatomic, readonly) BOOL hasAddressID;
@property (nonatomic) BOOL hasCorrectionStatus;
@property (nonatomic, retain) NSMutableArray *significantLocations;

- (void)addAddressResult:(id)arg1;
- (void)addSignificantLocation:(id)arg1;
- (id)addressID;
- (id)addressResultAtIndex:(unsigned int)arg1;
- (id)addressResults;
- (unsigned int)addressResultsCount;
- (void)clearAddressResults;
- (void)clearSignificantLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)correctionStatus;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressID;
- (BOOL)hasCorrectionStatus;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAddressID:(id)arg1;
- (void)setAddressResults:(id)arg1;
- (void)setCorrectionStatus:(int)arg1;
- (void)setHasCorrectionStatus:(BOOL)arg1;
- (void)setSignificantLocations:(id)arg1;
- (id)significantLocationAtIndex:(unsigned int)arg1;
- (id)significantLocations;
- (unsigned int)significantLocationsCount;
- (void)writeTo:(id)arg1;

@end
