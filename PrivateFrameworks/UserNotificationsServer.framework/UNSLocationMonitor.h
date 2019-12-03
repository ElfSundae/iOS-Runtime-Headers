/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSLocationMonitor : NSObject <CLLocationManagerDelegate> {
    CLLocationManager * _locationManager;
    UNSKeyedObservable * _observable;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_triggerDidFireForRegion:(id)arg1;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1 locationManager:(id)arg2;
- (id)initWithQueue:(id)arg1 locationManager:(id)arg2 observable:(id)arg3;
- (bool)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)markAsHavingReceivedLocation;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setMonitoredRegions:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
