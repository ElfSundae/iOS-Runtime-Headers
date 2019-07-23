/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItem : NSObject <GEOURLSerializable> {
    _MKMapItemPlaceAttribution * _attribution;
    <GEOMapItemTransitInfo> * _defaultTransitInfo;
    <NSObject> * _didResolveAttributionToken;
    NSString * _firstLocalizedCategoryName;
    <GEOMapItem> * _geoMapItem;
    BOOL  _isCurrentLocation;
    BOOL  _isPlaceHolder;
    BOOL  _isTransitInfoUpdated;
    BOOL  _isTransitItem;
    MKMapItemMetadata * _metadata;
    NSString * _name;
    NSNumberFormatter * _numberFormatterForAdamId;
    NSString * _phoneNumber;
    _MKMapItemPhotosAttribution * _photosAttribution;
    GEOPlace * _place;
    _MKPlaceReservationInfo * _reservationInfo;
    _MKMapItemReviewsAttribution * _reviewsAttribution;
    NSString * _shortAddress;
    NSTimeZone * _timeZone;
    <GEOTransitAttribution> * _updatedTransitAttribution;
    <GEOMapItemTransitInfo> * _updatedTransitInfo;
    NSURL * _url;
}

@property (getter=_acceptsApplePay, nonatomic, readonly) BOOL acceptsApplePay;
@property (getter=_alternativeAppAdamIds, nonatomic, readonly) NSArray *alternativeAppAdamIds;
@property (getter=_attribution, nonatomic, readonly) _MKMapItemPlaceAttribution *attribution;
@property (getter=_businessClaim, nonatomic, readonly) GEOPDBusinessClaim *businessClaim;
@property (getter=_coordinate, nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (getter=_customIconID, nonatomic, readonly) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_detourInfo, nonatomic, readonly) GEOMapItemDetourInfo *detourInfo;
@property (getter=_disambiguationName, nonatomic, readonly) NSString *disambiguationName;
@property (getter=_displayMapRegion, nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property (getter=_encyclopedicInfo, nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (getter=_externalTransitStationCode, nonatomic, readonly) NSData *externalTransitStationCode;
@property (getter=_firstLocalizedCategoryName, nonatomic, readonly) NSString *firstLocalizedCategoryName;
@property (getter=_flyover, nonatomic, readonly) GEOPDFlyover *flyover;
@property (getter=_flyoverAnnouncementMessage, nonatomic, readonly) NSString *flyoverAnnouncementMessage;
@property (nonatomic, readonly) NSString *formattedNumberOfReviews;
@property (nonatomic, readonly) NSString *formattedNumberOfReviewsIncludingProvider;
@property (getter=_geoAddress, nonatomic, readonly) GEOAddress *geoAddress;
@property (getter=_geoFenceMapRegion, nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property (getter=_geoMapItem, nonatomic, readonly) <GEOMapItemPrivate> *geoMapItem;
@property (getter=_goodForKids, nonatomic, readonly) BOOL goodForKids;
@property (getter=_handle, nonatomic, readonly) NSData *handle;
@property (getter=_hasAcceptsApplePayAmenity, nonatomic, readonly) BOOL hasAcceptsApplePayAmenity;
@property (getter=_hasAnyAmenities, nonatomic, readonly) BOOL hasAnyAmenities;
@property (getter=_hasBusinessClaim, nonatomic, readonly) BOOL hasBusinessClaim;
@property (getter=_hasCorrectedHomeWorkCoordinate, nonatomic, readonly) BOOL hasCorrectedHomeWorkCoordinate;
@property (getter=_hasDelivery, nonatomic, readonly) BOOL hasDelivery;
@property (getter=_hasDeliveryAmenity, nonatomic, readonly) BOOL hasDeliveryAmenity;
@property (getter=_hasDisplayableAmenities, readonly) BOOL hasDisplayableAmenities;
@property (getter=_hasEncyclopedicInfo, nonatomic, readonly) BOOL hasEncyclopedicInfo;
@property (getter=_hasFlyover, nonatomic, readonly) BOOL hasFlyover;
@property (getter=_hasGoodForKidsAmenity, nonatomic, readonly) BOOL hasGoodForKidsAmenity;
@property (getter=_hasLocalizedOperatingHours, nonatomic, readonly) BOOL hasLocalizedOperatingHours;
@property (getter=_hasMUID, nonatomic, readonly) BOOL hasMUID;
@property (getter=_hasOperatingHours, nonatomic, readonly) BOOL hasOperatingHours;
@property (getter=_hasPriceRange, nonatomic, readonly) BOOL hasPriceRange;
@property (getter=_hasResolvablePartialInformation, nonatomic, readonly) BOOL hasResolvablePartialInformation;
@property (getter=_hasResultProviderID, nonatomic, readonly) BOOL hasResultProviderID;
@property (getter=_hasTakesReservationsAmenity, nonatomic, readonly) BOOL hasTakesReservationsAmenity;
@property (getter=_hasTransit, nonatomic, readonly) BOOL hasTransit;
@property (getter=_hasTransitDisplayName, nonatomic, readonly) BOOL hasTransitDisplayName;
@property (getter=_hasTransitLabels, nonatomic, readonly) BOOL hasTransitLabels;
@property (getter=_hasUserRatingScore, nonatomic, readonly) BOOL hasUserRatingScore;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isCurrentLocation;
@property (getter=_isEmptyContactMapItem, readonly) BOOL isEmptyContactMapItem;
@property (nonatomic, readonly) BOOL isPlaceHolder;
@property (getter=_isTransitItem, nonatomic) BOOL isTransitItem;
@property (getter=_localizedOperatingHours, nonatomic, readonly) NSString *localizedOperatingHours;
@property (nonatomic, readonly) MKMapItemMetadata *metadata;
@property (getter=_muid, nonatomic, readonly) unsigned long long muid;
@property (nonatomic, copy) NSString *name;
@property (getter=_needsAttribution, nonatomic, readonly) BOOL needsAttribution;
@property (getter=_normalizedUserRatingScore, nonatomic, readonly) float normalizedUserRatingScore;
@property (getter=_openingHoursOptions, nonatomic, readonly) unsigned int openingHoursOptions;
@property (nonatomic, copy) NSString *phoneNumber;
@property (getter=_phoneNumberOptsOutOfAds, nonatomic, readonly) BOOL phoneNumberOptsOutOfAds;
@property (getter=_photosAttribution, nonatomic, readonly) _MKMapItemPhotosAttribution *photosAttribution;
@property (nonatomic, readonly) GEOPlace *place;
@property (getter=_placeDataAsData, nonatomic, readonly) NSData *placeDataAsData;
@property (nonatomic, readonly) MKPlacemark *placemark;
@property (getter=_poiPinpointURLString, nonatomic, readonly) NSString *poiPinpointURLString;
@property (getter=_poiSurveyURLString, nonatomic, readonly) NSString *poiSurveyURLString;
@property (getter=_preferedAppAdamID, nonatomic, readonly) NSNumber *preferedAppAdamID;
@property (getter=_priceRangeString, nonatomic, readonly) NSString *priceRangeString;
@property (getter=_providerURL, nonatomic, readonly, copy) NSURL *providerURL;
@property (nonatomic, retain) _MKPlaceReservationInfo *reservationInfo;
@property (getter=_resultProviderID, nonatomic, readonly) int resultProviderID;
@property (getter=_reviews, nonatomic, readonly) NSArray *reviews;
@property (getter=_reviewsAttribution, nonatomic, readonly) _MKMapItemReviewsAttribution *reviewsAttribution;
@property (getter=_reviewsDisplayName, nonatomic, readonly) NSString *reviewsDisplayName;
@property (nonatomic, readonly) NSString *reviewsProviderDisplayName;
@property (getter=_sampleSizeForUserRatingScore, nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property (getter=_shortAddress, nonatomic, readonly) NSString *shortAddress;
@property (getter=_styleAttributes, nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (getter=_takesReservations, nonatomic, readonly) BOOL takesReservations;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (getter=_tips, nonatomic, readonly) NSArray *tips;
@property (getter=_transitAttribution, nonatomic, readonly) <GEOTransitAttribution> *transitAttribution;
@property (getter=_transitDisplayName, nonatomic, readonly) NSString *transitDisplayName;
@property (getter=_transitInfo, nonatomic, readonly) <GEOMapItemTransitInfo> *transitInfo;
@property (nonatomic, retain) NSURL *url;
@property (getter=_vendorID, nonatomic, readonly, copy) NSString *vendorID;
@property (getter=_webURL, nonatomic, readonly, copy) NSURL *webURL;
@property (nonatomic, readonly) NSString *yelpID;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_deserializeResourceOptionsFromURL:(id)arg1 error:(out id*)arg2;
+ (void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2;
+ (id)_itemWithAddressBookRef:(void*)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithContact:(id)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithGeoMapItem:(id)arg1;
+ (id)_launchOptionsFromResourceOptionsDictionary:(id)arg1;
+ (id)_launchOptionsWithOptions:(id)arg1;
+ (void)_mapItemFromHandle:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
+ (void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(id /* block */)arg2;
+ (BOOL)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2;
+ (void)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)_sharedSessionURLForPunchoutURL:(id)arg1;
+ (id)_sharedSessionUserInfoForPunchoutUserInfo:(id)arg1;
+ (id)_sourceAppIdFromLaunchURL:(id)arg1;
+ (id)_sourceAppIdFromLaunchUserInfo:(id)arg1;
+ (id)_urlForMapItemHandles:(id)arg1 options:(id)arg2;
+ (id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg1;
+ (id)contactsAddressKeysForGeoAddressKeys;
+ (id)launchOptionsFromURL:(id)arg1;
+ (id)mapItemForCurrentLocation;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2 currentLocation:(BOOL)arg3;
+ (id)mapItemsFromURL:(id)arg1 options:(id*)arg2;
+ (BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (BOOL)_acceptsApplePay;
- (id)_activityURL:(BOOL)arg1;
- (id)_addressFormattedAsAddressDictionary;
- (id)_addressFormattedAsCity;
- (id)_addressFormattedAsMultilineAddress;
- (id)_addressFormattedAsName;
- (id)_addressFormattedAsShortenedAddress;
- (id)_addressFormattedAsSinglelineAddress;
- (id)_addressFormattedAsTitlesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_addressFormattedAsWeatherDisplayName;
- (id)_addressOrNil:(id)arg1;
- (id)_alternativeAppAdamIds;
- (id)_attribution;
- (id)_attributionFor:(id)arg1 sourceStringFormat:(id)arg2 moreSourceStringFormat:(id)arg3 imageTintColor:(id)arg4;
- (id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3 isSnippetLogo:(BOOL)arg4;
- (id)_businessClaim;
- (BOOL)_canGetDirections;
- (struct CLLocationCoordinate2D { double x1; double x2; })_coordinate;
- (unsigned long long)_customIconID;
- (id)_detourInfo;
- (id)_disambiguationName;
- (id)_displayMapRegion;
- (id)_encyclopedicInfo;
- (id)_externalTransitStationCode;
- (id)_firstLocalizedCategoryName;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (id)_formatterForAdamId;
- (id)_fullAddressWithMultiline:(BOOL)arg1;
- (id)_geoAddress;
- (id)_geoFenceMapRegion;
- (id)_geoMapItem;
- (id)_getBusiness;
- (BOOL)_goodForKids;
- (id)_handle;
- (BOOL)_hasAcceptsApplePayAmenity;
- (BOOL)_hasAnyAmenities;
- (BOOL)_hasBusinessClaim;
- (BOOL)_hasCorrectedHomeWorkCoordinate;
- (BOOL)_hasDelivery;
- (BOOL)_hasDeliveryAmenity;
- (BOOL)_hasDisplayableAmenities;
- (BOOL)_hasEncyclopedicInfo;
- (BOOL)_hasFlyover;
- (BOOL)_hasGoodForKidsAmenity;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasLocalizedOperatingHours;
- (BOOL)_hasMUID;
- (BOOL)_hasOperatingHours;
- (BOOL)_hasPriceRange;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasRestaurantExtensionInfo;
- (BOOL)_hasResultProviderID;
- (BOOL)_hasTakesReservationsAmenity;
- (BOOL)_hasTransit;
- (BOOL)_hasTransitDisplayName;
- (BOOL)_hasTransitLabels;
- (BOOL)_hasUserRatingScore;
- (id)_initWithLabelMarker:(id)arg1;
- (BOOL)_isBusinessClosed;
- (BOOL)_isEmptyContactMapItem;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (BOOL)_isTransitItem;
- (id)_localizedBusinessHoursWithCurrentOpeningHoursOptions;
- (id)_localizedBusinessHoursWithOptions:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedOperatingHours;
- (id)_mapsDataString;
- (unsigned long long)_muid;
- (BOOL)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned int)_openingHoursOptions;
- (BOOL)_phoneNumberOptsOutOfAds;
- (id)_photosAttribution;
- (id)_placeCardContact;
- (id)_placeDataAsData;
- (id)_poiPinpointURLString;
- (id)_poiSurveyURLString;
- (id)_postalAddressFromMeCardUsingAddressIdentifier:(id)arg1;
- (id)_preferedAppAdamID;
- (id)_priceRangeString;
- (id)_providerURL;
- (int)_recommendedTransportType;
- (void)_refreshAttribution;
- (unsigned int)_restaurantExtensionModeForFirstProvider;
- (id)_restaurantLink_firstProviderDisplayName;
- (id)_restaurantLink_firstProviderIdentifier;
- (id)_restaurantLink_firstProviderPlaceIdentifier;
- (id)_restaurantLink_firstVendorID;
- (BOOL)_restaurantLink_hasFeatureType:(unsigned int)arg1;
- (id)_restaurantLink_overridenBundleIDsForVendorIDs;
- (int)_resultProviderID;
- (id)_reviewForIdentifier:(id)arg1;
- (id)_reviews;
- (id)_reviewsAttribution;
- (id)_reviewsDisplayName;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)_shortAddress;
- (id)_styleAttributes;
- (BOOL)_takesReservations;
- (id)_tips;
- (id)_transitAttribution;
- (id)_transitDisplayName;
- (id)_transitInfo;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (id)_vendorID;
- (id)_weatherDisplayName;
- (id)_webURL;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedNumberOfReviews;
- (id)formattedNumberOfReviewsIncludingProvider;
- (id)formattedNumberOfReviewsIncludingProvider:(BOOL)arg1 formatter:(id)arg2;
- (unsigned int)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithGeoMapItemAsCurrentLocation:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (BOOL)isCurrentLocation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlaceHolder;
- (id)metadata;
- (id)name;
- (BOOL)openInMapsWithLaunchOptions:(id)arg1;
- (void)openInMapsWithLaunchOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)phoneNumber;
- (id)place;
- (id)placemark;
- (id)reservationInfo;
- (id)reviewsProviderDisplayName;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (void)setIsTransitItem:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setReservationInfo:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sharingURL;
- (id)thumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 annotationView:(id)arg2;
- (id)timeZone;
- (void)updateTransitInfoWithMapItem:(id)arg1;
- (id)url;
- (id)urlRepresentation;
- (id)yelpID;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (id)businessCategories;

@end
