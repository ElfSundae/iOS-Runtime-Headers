/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEOPDClientMetadata * _clientMetadata;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    struct { 
        unsigned int has_requestType : 1; 
        unsigned int has_needLatency : 1; 
        unsigned int has_suppressResultsRequiringAttribution : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_analyticMetadata : 1; 
        unsigned int read_clientMetadata : 1; 
        unsigned int read_displayLanguages : 1; 
        unsigned int read_displayRegion : 1; 
        unsigned int read_handleData : 1; 
        unsigned int read_placeRequestParameters : 1; 
        unsigned int read_requestedComponents : 1; 
        unsigned int read_spokenLanguages : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_analyticMetadata : 1; 
        unsigned int wrote_clientMetadata : 1; 
        unsigned int wrote_displayLanguages : 1; 
        unsigned int wrote_displayRegion : 1; 
        unsigned int wrote_handleData : 1; 
        unsigned int wrote_placeRequestParameters : 1; 
        unsigned int wrote_requestedComponents : 1; 
        unsigned int wrote_spokenLanguages : 1; 
        unsigned int wrote_requestType : 1; 
        unsigned int wrote_needLatency : 1; 
        unsigned int wrote_suppressResultsRequiringAttribution : 1; 
    }  _flags;
    NSData * _handleData;
    bool  _needLatency;
    GEOPDPlaceRequestParameters * _placeRequestParameters;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _requestType;
    NSMutableArray * _requestedComponents;
    NSMutableArray * _spokenLanguages;
    bool  _suppressResultsRequiringAttribution;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, retain) NSData *handleData;
@property (nonatomic, readonly) bool hasAnalyticMetadata;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic, readonly) bool hasHandleData;
@property (nonatomic) bool hasNeedLatency;
@property (nonatomic, readonly) bool hasPlaceRequestParameters;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasSuppressResultsRequiringAttribution;
@property (nonatomic) bool needLatency;
@property (nonatomic, retain) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (nonatomic) int requestType;
@property (nonatomic, retain) NSMutableArray *requestedComponents;
@property (nonatomic, retain) NSMutableArray *spokenLanguages;
@property (nonatomic) bool suppressResultsRequiringAttribution;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)componentInfoWithType:(int)arg1 count:(unsigned int)arg2 traits:(id)arg3;
+ (id)createRequestedComponentsForReason:(unsigned long long)arg1 traits:(id)arg2 count:(unsigned int)arg3;
+ (Class)displayLanguageType;
+ (bool)isValid:(id)arg1;
+ (Class)requestedComponentType;
+ (Class)spokenLanguageType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (void)_addNoFlagsDisplayLanguage:(id)arg1;
- (void)_addNoFlagsRequestedComponent:(id)arg1;
- (void)_addNoFlagsSpokenLanguage:(id)arg1;
- (id)_initWithTraits:(id)arg1 includeHistoricalLocations:(bool)arg2;
- (id)_initWithTransitScheduleRequestForStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (void)_readAnalyticMetadata;
- (void)_readClientMetadata;
- (void)_readDisplayLanguages;
- (void)_readDisplayRegion;
- (void)_readHandleData;
- (void)_readPlaceRequestParameters;
- (void)_readRequestedComponents;
- (void)_readSpokenLanguages;
- (void)addDisplayLanguage:(id)arg1;
- (void)addRequestedComponent:(id)arg1;
- (void)addRequestedComponents:(id)arg1;
- (void)addRequestedComponentsForReason:(unsigned long long)arg1 traits:(id)arg2 count:(unsigned int)arg3;
- (void)addSpokenLanguage:(id)arg1;
- (id)analyticMetadata;
- (id)cacheKey;
- (void)clearDisplayLanguages;
- (void)clearRequestedComponents;
- (void)clearSensitiveFields;
- (void)clearSpokenLanguages;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (id)displayLanguages;
- (unsigned long long)displayLanguagesCount;
- (id)displayRegion;
- (int)geoUserPreferredTransportType;
- (id)handleData;
- (bool)hasAnalyticMetadata;
- (bool)hasClientMetadata;
- (bool)hasDisplayRegion;
- (bool)hasHandleData;
- (bool)hasNeedLatency;
- (bool)hasPlaceRequestParameters;
- (bool)hasRequestType;
- (bool)hasResultProviderID;
- (bool)hasSuppressResultsRequiringAttribution;
- (unsigned long long)hash;
- (id)init;
- (id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned int)arg2;
- (id)initForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)initForCategoryListWithTraits:(id)arg1 isFromNoQueryState:(bool)arg2;
- (id)initForDFRCategoryListWithTraits:(id)arg1;
- (id)initForDatasetCheckWithTraits:(id)arg1;
- (id)initForGeoIpLookupWithIpAddress:(id)arg1 traits:(id)arg2;
- (id)initForNearestTransitStationWithLine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)initForSpotlightCategoryListWithTraits:(id)arg1;
- (id)initForWifiFingerprintLookupWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 entryTime:(unsigned long long)arg4 exitTime:(unsigned long long)arg5 traits:(id)arg6;
- (id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 filters:(id)arg4 retainedSearch:(id)arg5 tappedQuerySuggestion:(id)arg6 error:(id*)arg7;
- (id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithCollectionIdentifier:(id)arg1 traits:(id)arg2;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4;
- (id)initWithData:(id)arg1;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)initWithInitialRequestData:(id)arg1 traits:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 terminalId:(id)arg8 transactionCurrencyCode:(id)arg9 transactionType:(int)arg10 transactionId:(id)arg11 warsawMerchantDomain:(id)arg12 warsawMerchantName:(id)arg13 warsawMerchantId:(id)arg14 adamId:(id)arg15 merchantId:(id)arg16 merchantDoingBizAsName:(id)arg17 merchantEnhancedName:(id)arg18 merchantCity:(id)arg19 merchantRawCity:(id)arg20 merchantState:(id)arg21 merchantRawState:(id)arg22 merchantZip:(id)arg23 merchantAddress:(id)arg24 merchantRawAddress:(id)arg25 merchantCountryCode:(id)arg26 merchantType:(id)arg27 merchantCleanConfidenceLevel:(id)arg28 merchantAdditionalData:(id)arg29 merchantCanl:(id)arg30 fuzzyMatched:(id)arg31 traits:(id)arg32;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 floorOrdinal:(int)arg2 includeEntryPoints:(bool)arg3 preserveOriginalLocation:(bool)arg4 traits:(id)arg5;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 preserveOriginalLocation:(bool)arg3 traits:(id)arg4;
- (id)initWithSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 filters:(id)arg7 suppressResultsRequiringAttribution:(bool)arg8 traits:(id)arg9 error:(id*)arg10;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithSpatialEventLookupParameters:(id)arg1 traits:(id)arg2;
- (id)initWithSpatialPlaceLookupParameters:(id)arg1 traits:(id)arg2;
- (id)initWithTransitDeparturesAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (id)initWithTransitScheduleAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (id)initWithTransitTripDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (id)initWithTripIds:(id)arg1 traits:(id)arg2;
- (id)initWithUpdatedTransitScheduleDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 traits:(id)arg4;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (bool)isBrandLookupRequest;
- (bool)isCanonicalLocationSearchRequest;
- (bool)isEqual:(id)arg1;
- (bool)isForwardGeocoderRequest;
- (bool)isMerchantRequest;
- (bool)isPlaceRefinementRequest;
- (void)mergeFrom:(id)arg1;
- (bool)needLatency;
- (id)pdSpatialEventLookupParametersArrayForParameters:(id)arg1;
- (id)pdSpatialEventLookupParametersForParameters:(id)arg1;
- (id)pdSpatialPlaceLookupParametersArrayForParameters:(id)arg1;
- (id)pdSpatialPlaceLookupParametersForParameters:(id)arg1;
- (id)placeRequestParameters;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedComponentAtIndex:(unsigned long long)arg1;
- (id)requestedComponents;
- (unsigned long long)requestedComponentsCount;
- (Class)responseClass;
- (int)resultProviderID;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setHandleData:(id)arg1;
- (void)setHasNeedLatency:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(bool)arg1;
- (void)setNeedLatency:(bool)arg1;
- (void)setPlaceRequestParameters:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setRequestedComponents:(id)arg1;
- (void)setSpokenLanguages:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(bool)arg1;
- (bool)shouldConsiderCaching;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (id)spokenLanguages;
- (unsigned long long)spokenLanguagesCount;
- (bool)suppressResultsRequiringAttribution;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
