/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKURLParser : NSObject {
    GEOMapURLParser * parser;
}

@property (nonatomic, readonly) NSString *abAddressID;
@property (nonatomic, readonly) NSString *abRecordID;
@property (readonly) NSString *addressString;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } centerCoordinate;
@property (nonatomic, readonly) NSString *cnAddressIdentifier;
@property (nonatomic, readonly) NSString *cnContactIdentifier;
@property (nonatomic, readonly) GEOURLCollectionStorage *collectionStorage;
@property (nonatomic, readonly) NSString *contentProvider;
@property (nonatomic, readonly) NSString *contentProviderID;
@property (readonly) NSString *directionsDestinationAddressString;
@property (readonly) NSString *directionsSourceAddressString;
@property (nonatomic, readonly) bool exactPositionSpecified;
@property (nonatomic, readonly) GEOURLExtraStorage *extraStorage;
@property (nonatomic, readonly) long long favoritesType;
@property (readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long lineMUID;
@property (readonly, copy) NSString *lineName;
@property (nonatomic, readonly) MKMapCamera *mapCamera;
@property (nonatomic, readonly) unsigned long long mapType;
@property (nonatomic, readonly) GEOMuninViewState *muninViewState;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } searchCoordinate;
@property (nonatomic, readonly) int searchProviderID;
@property (readonly) NSString *searchQuery;
@property (nonatomic, readonly) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } searchRegion;
@property (nonatomic, readonly) unsigned long long searchUID;
@property (readonly) bool showCarDestinations;
@property (nonatomic, readonly) struct { double x1; double x2; } span;
@property (nonatomic, readonly) bool tester;
@property (nonatomic, readonly) double tilt;
@property (nonatomic, readonly) long long trackingMode;
@property (nonatomic, readonly) bool trackingModeSpecified;
@property (nonatomic, readonly) unsigned long long transportType;
@property (readonly) GEOUserSessionEntity *userSessionEntity;
@property (nonatomic, readonly) float zoomLevel;

+ (bool)isValidMapURL:(id)arg1;

- (void).cxx_destruct;
- (id)abAddressID;
- (id)abRecordID;
- (id)addressString;
- (double)altitude;
- (struct CLLocationCoordinate2D { double x1; double x2; })centerCoordinate;
- (id)cnAddressIdentifier;
- (id)cnContactIdentifier;
- (id)collectionStorage;
- (id)contentProvider;
- (id)contentProviderID;
- (id)directionsDestinationAddressString;
- (id)directionsSourceAddressString;
- (bool)exactPositionSpecified;
- (id)extraStorage;
- (long long)favoritesType;
- (id)initWithURL:(id)arg1;
- (id)label;
- (unsigned long long)lineMUID;
- (id)lineName;
- (id)mapCamera;
- (unsigned long long)mapType;
- (id)muninViewState;
- (bool)parseIncludingCustomParameters:(bool)arg1;
- (double)roll;
- (double)rotation;
- (struct CLLocationCoordinate2D { double x1; double x2; })searchCoordinate;
- (int)searchProviderID;
- (id)searchQuery;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })searchRegion;
- (unsigned long long)searchUID;
- (bool)showCarDestinations;
- (struct { double x1; double x2; })span;
- (bool)tester;
- (double)tilt;
- (long long)trackingMode;
- (bool)trackingModeSpecified;
- (unsigned long long)transportType;
- (id)userSessionEntity;
- (float)zoomLevel;

@end
