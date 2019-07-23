/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying> {
    GEOPDAutocompleteParametersAddressOnly * _addressOnly;
    GEOPDAutocompleteParametersAllEntries * _allEntries;
    GEOPDAutocompleteParametersAllEntriesWithBrowse * _allEntriesWithBrowse;
    GEOPDAutocompleteParametersBrandProfileSearch * _brandProfileSearch;
    GEOPDAutocompleteParametersFullEntriesOnly * _fullEntries;
    struct { 
        unsigned int requestType : 1; 
    }  _has;
    GEOPDAutocompleteParametersLocalitiesAndLandmarks * _localitiesAndLandmarks;
    GEOPDAutocompleteParametersPoiAddressOnly * _poiAddressOnly;
    int  _requestType;
    GEOPDAutocompleteParametersSiriSearch * _siriSearch;
    PBUnknownFields * _unknownFields;
    GEOPDAutocompleteParametersVenueSearch * _venueSearch;
}

@property (nonatomic, retain) GEOPDAutocompleteParametersAddressOnly *addressOnly;
@property (nonatomic, retain) GEOPDAutocompleteParametersAllEntries *allEntries;
@property (nonatomic, retain) GEOPDAutocompleteParametersAllEntriesWithBrowse *allEntriesWithBrowse;
@property (nonatomic, retain) GEOPDAutocompleteParametersBrandProfileSearch *brandProfileSearch;
@property (nonatomic, retain) GEOPDAutocompleteParametersFullEntriesOnly *fullEntries;
@property (nonatomic, readonly) bool hasAddressOnly;
@property (nonatomic, readonly) bool hasAllEntries;
@property (nonatomic, readonly) bool hasAllEntriesWithBrowse;
@property (nonatomic, readonly) bool hasBrandProfileSearch;
@property (nonatomic, readonly) bool hasFullEntries;
@property (nonatomic, readonly) bool hasLocalitiesAndLandmarks;
@property (nonatomic, readonly) bool hasPoiAddressOnly;
@property (nonatomic) bool hasRequestType;
@property (nonatomic, readonly) bool hasSiriSearch;
@property (nonatomic, readonly) bool hasVenueSearch;
@property (nonatomic, retain) GEOPDAutocompleteParametersLocalitiesAndLandmarks *localitiesAndLandmarks;
@property (nonatomic, retain) GEOPDAutocompleteParametersPoiAddressOnly *poiAddressOnly;
@property (nonatomic) int requestType;
@property (nonatomic, retain) GEOPDAutocompleteParametersSiriSearch *siriSearch;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDAutocompleteParametersVenueSearch *venueSearch;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (id)addressOnly;
- (id)allEntries;
- (id)allEntriesWithBrowse;
- (id)brandProfileSearch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fullEntries;
- (bool)hasAddressOnly;
- (bool)hasAllEntries;
- (bool)hasAllEntriesWithBrowse;
- (bool)hasBrandProfileSearch;
- (bool)hasFullEntries;
- (bool)hasLocalitiesAndLandmarks;
- (bool)hasPoiAddressOnly;
- (bool)hasRequestType;
- (bool)hasSiriSearch;
- (bool)hasVenueSearch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localitiesAndLandmarks;
- (void)mergeFrom:(id)arg1;
- (id)poiAddressOnly;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (void)setAddressOnly:(id)arg1;
- (void)setAllEntries:(id)arg1;
- (void)setAllEntriesWithBrowse:(id)arg1;
- (void)setBrandProfileSearch:(id)arg1;
- (void)setFullEntries:(id)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setLocalitiesAndLandmarks:(id)arg1;
- (void)setPoiAddressOnly:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setSiriSearch:(id)arg1;
- (void)setVenueSearch:(id)arg1;
- (id)siriSearch;
- (id)unknownFields;
- (id)venueSearch;
- (void)writeTo:(id)arg1;

@end
