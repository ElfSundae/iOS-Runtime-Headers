/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDReviewFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int has_suppressSyntheticReviews : 1; 
    }  _flags;
    struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _photoSizeFilters;
    unsigned long long  _photoSizeFiltersCount;
    unsigned long long  _photoSizeFiltersSpace;
    bool  _suppressSyntheticReviews;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSuppressSyntheticReviews;
@property (nonatomic, readonly) struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*photoSizeFilters;
@property (nonatomic, readonly) unsigned long long photoSizeFiltersCount;
@property (nonatomic) bool suppressSyntheticReviews;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addPhotoSizeFilter:(struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearPhotoSizeFilters;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSuppressSyntheticReviews;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })photoSizeFilterAtIndex:(unsigned long long)arg1;
- (struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)photoSizeFilters;
- (unsigned long long)photoSizeFiltersCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSuppressSyntheticReviews:(bool)arg1;
- (void)setPhotoSizeFilters:(struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setSuppressSyntheticReviews:(bool)arg1;
- (bool)suppressSyntheticReviews;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
