/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPoiIconCategoryFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _excludeCategoryFilters;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_excludeCategoryFilters : 1; 
        unsigned int read_includeCategoryFilters : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_excludeCategoryFilters : 1; 
        unsigned int wrote_includeCategoryFilters : 1; 
    }  _flags;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _includeCategoryFilters;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned int*excludeCategoryFilters;
@property (nonatomic, readonly) unsigned long long excludeCategoryFiltersCount;
@property (nonatomic, readonly) unsigned int*includeCategoryFilters;
@property (nonatomic, readonly) unsigned long long includeCategoryFiltersCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsExcludeCategoryFilter:(unsigned int)arg1;
- (void)_addNoFlagsIncludeCategoryFilter:(unsigned int)arg1;
- (void)_readExcludeCategoryFilters;
- (void)_readIncludeCategoryFilters;
- (void)addExcludeCategoryFilter:(unsigned int)arg1;
- (void)addIncludeCategoryFilter:(unsigned int)arg1;
- (void)clearExcludeCategoryFilters;
- (void)clearIncludeCategoryFilters;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)excludeCategoryFilterAtIndex:(unsigned long long)arg1;
- (unsigned int*)excludeCategoryFilters;
- (unsigned long long)excludeCategoryFiltersCount;
- (unsigned long long)hash;
- (unsigned int)includeCategoryFilterAtIndex:(unsigned long long)arg1;
- (unsigned int*)includeCategoryFilters;
- (unsigned long long)includeCategoryFiltersCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExcludeCategoryFilters:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setIncludeCategoryFilters:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
