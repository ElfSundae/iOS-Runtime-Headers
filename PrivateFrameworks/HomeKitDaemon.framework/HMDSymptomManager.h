/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSymptomManager : HMFObject <HMFLogging> {
    <HMDCompanionLinkClient> * _companionLinkClient;
    <HMDSharingDeviceDiscovery> * _deviceDiscovery;
    unsigned long long  _deviceDiscoveryFlags;
    int  _deviceProblemNotificationToken;
    bool  _deviceProblemNotificationTokenValid;
    HMFUnfairLock * _lock;
    NSMapTable * _nearbySFDevices;
    NSMapTable * _networkReachableRPCompanionLinkDevices;
    bool  _supportsRegisteringAccessories;
    NSMapTable * _symptomContainerByRegisteredAccessory;
    HMFWiFiManager * _wifiManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <HMDCompanionLinkClient> *companionLinkClient;
@property (nonatomic, readonly, copy) NSSet *currentDeviceSymptoms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HMDSharingDeviceDiscovery> *deviceDiscovery;
@property (nonatomic) unsigned long long deviceDiscoveryFlags;
@property (nonatomic) int deviceProblemNotificationToken;
@property (getter=isDeviceProblemNotificationTokenValid, nonatomic) bool deviceProblemNotificationTokenValid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (nonatomic, readonly) NSMapTable *nearbySFDevices;
@property (nonatomic, readonly) NSMapTable *networkReachableRPCompanionLinkDevices;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsRegisteringAccessories;
@property (nonatomic, readonly) NSMapTable *symptomContainerByRegisteredAccessory;
@property (nonatomic, readonly) HMFWiFiManager *wifiManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_currentDeviceSymptoms;
- (void)_initiateFixForAccessory:(id)arg1 completion:(id /* block */)arg2;
- (id)_localSymptomsForRegisteredAccessory:(id)arg1;
- (id)_registeredAccessoryWithIDSIdentifier:(id)arg1;
- (void)_rpDeviceChangedHandler:(id)arg1;
- (void)_rpDeviceFoundHandler:(id)arg1;
- (void)_rpDeviceLostHandler:(id)arg1;
- (void)_sfDeviceChangedHandler:(id)arg1;
- (void)_sfDeviceFoundHandler:(id)arg1;
- (void)_sfDeviceLostHandler:(id)arg1;
- (void)_start;
- (void)_startCompanionLinkClient;
- (void)_startDeviceDiscovery;
- (void)_stop;
- (void)_stopCompanionLinkClient;
- (void)_stopDeviceDiscovery;
- (void)_updateSymptomsForAllRegisteredAccessories;
- (void)_updateSymptomsForRegisteredAccessory:(id)arg1;
- (void)_updateSymptomsForRegisteredAccessoryWithIDSIdentifier:(id)arg1;
- (id)companionLinkClient;
- (id)currentDeviceSymptoms;
- (void)dealloc;
- (void)deregisterAccessory:(id)arg1;
- (id)deviceDiscovery;
- (unsigned long long)deviceDiscoveryFlags;
- (int)deviceProblemNotificationToken;
- (void)handleAccessoryRemovedNotification:(id)arg1;
- (void)handleAccessoryWiFiNetworkInfoUpdatedNotification:(id)arg1;
- (void)handleCurrentNetworkDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithDeviceDiscovery:(id)arg1 companionLinkClient:(id)arg2 wifiManager:(id)arg3;
- (void)initiateFixForAccessory:(id)arg1 completion:(id /* block */)arg2;
- (bool)isDeviceProblemNotificationTokenValid;
- (id)lock;
- (id)nearbySFDevices;
- (id)networkReachableRPCompanionLinkDevices;
- (void)registerAccessory:(id)arg1 delegate:(id)arg2;
- (void)setDeviceDiscoveryFlags:(unsigned long long)arg1;
- (void)setDeviceProblemNotificationToken:(int)arg1;
- (void)setDeviceProblemNotificationTokenValid:(bool)arg1;
- (void)setSupportsRegisteringAccessories:(bool)arg1;
- (void)startDiscoveringSymptomsRequiringNearbyInfo;
- (void)stopDiscoveringSymptomsRequiringNearbyInfo;
- (bool)supportsRegisteringAccessories;
- (id)symptomContainerByRegisteredAccessory;
- (id)wifiManager;
- (id)workQueue;

@end
