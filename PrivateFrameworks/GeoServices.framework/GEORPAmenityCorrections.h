/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPAmenityCorrections : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _addedAmenities;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addedAmenities : 1; 
        unsigned int read_removedAmenities : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_addedAmenities : 1; 
        unsigned int wrote_removedAmenities : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _removedAmenities;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*addedAmenities;
@property (nonatomic, readonly) unsigned long long addedAmenitiesCount;
@property (nonatomic, readonly) int*removedAmenities;
@property (nonatomic, readonly) unsigned long long removedAmenitiesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAddedAmenities:(id)arg1;
- (int)StringAsRemovedAmenities:(id)arg1;
- (void)_addNoFlagsAddedAmenities:(int)arg1;
- (void)_addNoFlagsRemovedAmenities:(int)arg1;
- (void)_readAddedAmenities;
- (void)_readRemovedAmenities;
- (void)addAddedAmenities:(int)arg1;
- (void)addRemovedAmenities:(int)arg1;
- (int*)addedAmenities;
- (id)addedAmenitiesAsString:(int)arg1;
- (int)addedAmenitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)addedAmenitiesCount;
- (void)clearAddedAmenities;
- (void)clearRemovedAmenities;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int*)removedAmenities;
- (id)removedAmenitiesAsString:(int)arg1;
- (int)removedAmenitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)removedAmenitiesCount;
- (void)setAddedAmenities:(int*)arg1 count:(unsigned long long)arg2;
- (void)setRemovedAmenities:(int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
