/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsLeechingLocationUpdater : NSObject <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CLInUseAssertion * _inUseAssertion;
    CLLocation * _lastBestLocation;
    CLLocationManager * _locationManagerForLeeching;
    NSHashTable * _locationObservers;
    bool  _running;
    NSHashTable * _visitObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocation *lastBestLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)_deinitLocationManager;
- (void)_initLocationManager;
- (void)_start;
- (void)_stop;
- (void)dealloc;
- (id)init;
- (id)lastBestLocation;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (void)setLastBestLocation:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (struct NSString { Class x1; }*)uniqueName;

@end
