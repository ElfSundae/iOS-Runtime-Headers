/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOQuickETATransitDeparturesInfo : NSObject {
    double _departureFrequency;
    NSDate *_departureFrequencyValidUntil;
    NSArray *_departures;
    BOOL _departuresHaveFrequency;
    NSString *_direction;
    NSString *_headsign;
}

@property (nonatomic, readonly) double departureFrequency;
@property (nonatomic, readonly) NSDate *departureFrequencyValidUntil;
@property (nonatomic, readonly) BOOL departuresHaveFrequency;
@property (nonatomic, readonly) NSString *direction;
@property (nonatomic, readonly) NSString *headsign;

- (id)_chooseMostImportantTransitLegInRoute:(id)arg1;
- (void)dealloc;
- (double)departureFrequency;
- (id)departureFrequencyValidUntil;
- (BOOL)departuresHaveFrequency;
- (id)description;
- (id)direction;
- (id)headsign;
- (id)initWithComposedRoute:(id)arg1;

@end
