/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

@interface WPDObjectDiscoveryManager : WPDManager <CBCentralManagerDelegate, CBPeripheralManagerDelegate, WPDObjectDiscoveryAdvertiser, WPDObjectDiscoveryScanner> {
    NSUUID * _advertClientUUID;
    unsigned long long  _advertHash;
    NSDictionary * _advertOptions;
    WPAdvertisingRequest * _advertRequest;
    bool  _advertising;
    CBCentralManager * _centralManager;
    NSMutableSet * _currentScanners;
    NSArray * _matchActionRules;
    NSArray * _nearbyTokensRequest;
    CBPeripheralManager * _peripheralManager;
    NSDictionary * _scanOptions;
    NSMutableDictionary * _scanRequests;
    bool  _scanning;
    bool  _scanningDisabled;
    NSObject<OS_dispatch_queue> * _serverQueue;
}

@property NSUUID *advertClientUUID;
@property unsigned long long advertHash;
@property (retain) NSDictionary *advertOptions;
@property (retain) WPAdvertisingRequest *advertRequest;
@property bool advertising;
@property (retain) CBCentralManager *centralManager;
@property (retain) NSMutableSet *currentScanners;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *matchActionRules;
@property (retain) NSArray *nearbyTokensRequest;
@property (retain) CBPeripheralManager *peripheralManager;
@property (retain) NSDictionary *scanOptions;
@property (retain) NSMutableDictionary *scanRequests;
@property bool scanning;
@property bool scanningDisabled;
@property (readonly) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (id)addScanRequest:(id)arg1 forClient:(id)arg2;
- (id)advertClientUUID;
- (unsigned long long)advertHash;
- (id)advertOptions;
- (bool)advertOptionsChanged:(id)arg1;
- (id)advertRequest;
- (bool)advertising;
- (id)centralManager;
- (void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (bool)changedScanOptions:(id)arg1 Clients:(id)arg2;
- (void)cleanup;
- (id)currentScanners;
- (id)generateStateDump;
- (id)getScanRequestsForClient:(id)arg1;
- (id)initWithServer:(id)arg1;
- (id)matchActionRules;
- (id)nearbyTokensRequest;
- (id)peripheralManager;
- (void)peripheralManager:(id)arg1 didStopAdvertisingWithError:(id)arg2;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (void)removeAdvertisingRequestsForClient:(id)arg1;
- (void)removeScanRequestsForClient:(id)arg1;
- (void)resetAdvertiser;
- (id)rulesFromTokens:(id)arg1;
- (id)scanOptions;
- (id)scanRequests;
- (bool)scanning;
- (bool)scanningDisabled;
- (id)serverQueue;
- (void)setAdvertClientUUID:(id)arg1;
- (void)setAdvertHash:(unsigned long long)arg1;
- (void)setAdvertOptions:(id)arg1;
- (void)setAdvertRequest:(id)arg1;
- (void)setAdvertising:(bool)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setCurrentScanners:(id)arg1;
- (void)setMatchActionRules:(id)arg1;
- (void)setNearbyTokensRequest:(id)arg1;
- (void)setPeripheralManager:(id)arg1;
- (void)setScanOptions:(id)arg1;
- (void)setScanRequests:(id)arg1;
- (void)setScanning:(bool)arg1;
- (void)setScanningDisabled:(bool)arg1;
- (id)spoofNearOwnerWithPayload:(id)arg1;
- (void)startAdvertiser;
- (void)stopAdvertiser;
- (void)update;
- (id)updateAdvertiser;
- (bool)updateAdvertisingOptionsWithError:(id*)arg1;
- (void)updateClientsWithReports:(id)arg1;
- (void)updateNearbyTokens:(id)arg1;
- (void)updateReports:(id)arg1 Peripheral:(id)arg2 AdvertisementData:(id)arg3 RSSI:(id)arg4;
- (void)updateReports:(id)arg1 fromReport:(id)arg2;
- (bool)updateScanRules;
- (void)updateScanner;

@end