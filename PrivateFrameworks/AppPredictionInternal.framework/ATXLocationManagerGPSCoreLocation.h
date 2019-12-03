/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXLocationManagerGPSCoreLocation : NSObject <ATXLocationManagerGPS, CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> * _clQueue;
    bool  _locationEnabled;
    CLLocationManager * _locationManager;
    NSCondition * _updateCondition;
    bool  _updatePending;
    <ATXLocationManagerGPSDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXLocationManagerGPSDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) bool locationEnabled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)location;
- (bool)locationEnabled;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)updateLocationWithTimeout:(double)arg1;

@end