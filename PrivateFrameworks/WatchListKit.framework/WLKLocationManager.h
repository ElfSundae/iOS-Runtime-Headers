/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKLocationManager : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSXPCConnection * _connection;
    int  _didChangeNotificationToken;
    NSDictionary * _lastKnownLocation;
    CLLocationManager * _locationManager;
    id /* block */  _locationUpdateBlock;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int didChangeNotificationToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *lastKnownLocation;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, copy) id /* block */ locationUpdateBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *readWriteQueue;
@property (readonly) Class superclass;

+ (id)_dictionaryForLocation:(id)arg1;
+ (id)defaultLocationManager;

- (void).cxx_destruct;
- (id)_connection;
- (id)_dictionaryOnDisk;
- (void)_dictionaryOnDisk:(id /* block */)arg1;
- (id)_dictionaryRepresentation;
- (bool)_locationNeedsUpdate:(id)arg1;
- (void)_readFromDisk;
- (void)_refresh;
- (void)_requestLastLocation:(id /* block */)arg1;
- (void)_requestLocation:(id /* block */)arg1;
- (long long)_statusForCLAuthorizationStatus:(int)arg1;
- (id)_supportPath;
- (void)_writeToDisk;
- (void)_writeToDisk:(id)arg1 completion:(id /* block */)arg2;
- (id)accessQueue;
- (long long)authorizationStatus;
- (id)connection;
- (void)dealloc;
- (int)didChangeNotificationToken;
- (id)init;
- (id)lastKnownLocation;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id /* block */)locationUpdateBlock;
- (id)readWriteQueue;
- (void)requestAuthorization;
- (void)setAccessQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDidChangeNotificationToken:(int)arg1;
- (void)setLastKnownLocation:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationUpdateBlock:(id /* block */)arg1;
- (void)setReadWriteQueue:(id)arg1;
- (void)updateLocationIfNeeded;

@end
