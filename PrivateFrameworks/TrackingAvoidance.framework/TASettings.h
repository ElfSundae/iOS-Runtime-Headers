/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TASettings : NSObject {
    TAFilterGeneralSettings * _filterGeneralSettings;
    TAFilterSingleVisitSettings * _filterSingleVisitSettings;
    TAFilterVisitsSettings * _filterVisitsSettings;
    bool  _peopleDensityEnabled;
    TAScanRequestSettings * _scanRequestSettings;
    TAStoreSettings * _storeSettings;
    bool  _trackingAvoidanceEnabled;
}

@property (nonatomic, retain) TAFilterGeneralSettings *filterGeneralSettings;
@property (nonatomic, retain) TAFilterSingleVisitSettings *filterSingleVisitSettings;
@property (nonatomic, retain) TAFilterVisitsSettings *filterVisitsSettings;
@property (nonatomic) bool peopleDensityEnabled;
@property (nonatomic, retain) TAScanRequestSettings *scanRequestSettings;
@property (nonatomic, retain) TAStoreSettings *storeSettings;
@property (nonatomic) bool trackingAvoidanceEnabled;

+ (id)convertEnabledLoiTypesValueContentToNSNumberType:(id)arg1;
+ (id)getArraySettingsKeys;
+ (id)getBooleanSettingsKeys;
+ (id)getDoubleSettingsKeys;
+ (id)getIntegerSettingsKeys;
+ (id)getStringSettingsKeys;
+ (id)getUnsignedIntegerSettingsKeys;

- (void).cxx_destruct;
- (id)description;
- (id)filterGeneralSettings;
- (id)filterSingleVisitSettings;
- (id)filterVisitsSettings;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (bool)peopleDensityEnabled;
- (id)scanRequestSettings;
- (void)setFilterGeneralSettings:(id)arg1;
- (void)setFilterSingleVisitSettings:(id)arg1;
- (void)setFilterVisitsSettings:(id)arg1;
- (void)setPeopleDensityEnabled:(bool)arg1;
- (void)setScanRequestSettings:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setStoreSettings:(id)arg1;
- (void)setTrackingAvoidanceEnabled:(bool)arg1;
- (id)storeSettings;
- (bool)trackingAvoidanceEnabled;

@end