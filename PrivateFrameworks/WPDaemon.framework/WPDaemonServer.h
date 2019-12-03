/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

@interface WPDaemonServer : NSObject <NSXPCListenerDelegate> {
    WPDAdvertisingManager * _advertisingManager;
    long long  _cbState;
    NSMutableDictionary * _clients;
    NSMapTable * _clientsWithMach;
    unsigned char  _coreBluetoothState;
    int  _firstUnlockStatusChangedToken;
    bool  _isHomePod;
    bool  _isTesting;
    NSXPCListener * _listener;
    int  _lockStatusChangedToken;
    NSArray * _managers;
    WPDObjectDiscoveryManager * _objectDiscoveryManager;
    WPDPersistence * _persistence;
    WPDPipeManager * _pipeManager;
    NSMutableSet * _privilegedClients;
    NSObject<OS_dispatch_queue> * _queue;
    WPDScanManager * _scanManager;
    bool  _screenOff;
    int  _screenStateToken;
    NSObject<OS_dispatch_queue> * _serverQueue;
    WPDClient * _spObjectDiscoveryClient;
    unsigned long long  _stateCaptureHandle;
    WPDStatsManager * _statsManager;
    bool  _systemLocked;
    NSMutableSet * _testClients;
    WPDState * _wpdState;
    WPDZoneManager * _zoneManager;
}

@property (retain) WPDAdvertisingManager *advertisingManager;
@property (nonatomic) long long cbState;
@property (retain) NSMutableDictionary *clients;
@property (retain) NSMapTable *clientsWithMach;
@property unsigned char coreBluetoothState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int firstUnlockStatusChangedToken;
@property (readonly) unsigned long long hash;
@property bool isHomePod;
@property bool isTesting;
@property (retain) NSXPCListener *listener;
@property (nonatomic) int lockStatusChangedToken;
@property (nonatomic, retain) NSArray *managers;
@property (retain) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (retain) WPDPersistence *persistence;
@property (retain) WPDPipeManager *pipeManager;
@property (retain) NSMutableSet *privilegedClients;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) WPDScanManager *scanManager;
@property bool screenOff;
@property (nonatomic) int screenStateToken;
@property (retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) WPDClient *spObjectDiscoveryClient;
@property (readonly) unsigned long long stateCaptureHandle;
@property (nonatomic, retain) WPDStatsManager *statsManager;
@property (readonly) Class superclass;
@property bool systemLocked;
@property (retain) NSMutableSet *testClients;
@property (nonatomic, retain) WPDState *wpdState;
@property (retain) WPDZoneManager *zoneManager;

+ (void)initialize;
+ (bool)isHomePod;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (id)advertisingManager;
- (void)cbManagerDidUpdateState:(id)arg1;
- (long long)cbState;
- (id)clientForMachName:(id)arg1;
- (id)clients;
- (id)clientsWithMach;
- (unsigned char)coreBluetoothState;
- (void)dealloc;
- (void)disableScanningForClient:(id)arg1;
- (void)dumpDaemonState;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)dumpToLog:(bool)arg1 State:(bool)arg2;
- (void)enableRanging:(bool)arg1;
- (void)enableTestMode;
- (void)enableTestMode:(bool)arg1;
- (int)firstUnlockStatusChangedToken;
- (id)generateStateDump;
- (id)getAllClients;
- (id)getClientForUUID:(id)arg1;
- (id)init;
- (void)initClients;
- (void)initManagers;
- (bool)isClientTestMode:(id)arg1;
- (bool)isHomePod;
- (bool)isRangingEnabled;
- (bool)isTesting;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)lockStateUpdate;
- (int)lockStatusChangedToken;
- (id)managers;
- (void)notifyClientsOfStateChange;
- (void)notifyManagersOfStateChange;
- (id)objectDiscoveryManager;
- (id)persistence;
- (id)pipeManager;
- (id)privilegedClients;
- (id)queue;
- (void)registerClient:(id)arg1 withMachName:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)registerForSpringboardNotifications;
- (void)removeClient:(id)arg1;
- (id)scanManager;
- (bool)screenOff;
- (int)screenStateToken;
- (void)screenStateUpdate;
- (id)serverQueue;
- (void)setAdvertisingManager:(id)arg1;
- (void)setCbState:(long long)arg1;
- (void)setClients:(id)arg1;
- (void)setClientsWithMach:(id)arg1;
- (void)setCoreBluetoothState:(unsigned char)arg1;
- (void)setFirstUnlockStatusChangedToken:(int)arg1;
- (void)setIsHomePod:(bool)arg1;
- (void)setIsTesting:(bool)arg1;
- (void)setListener:(id)arg1;
- (void)setLockStatusChangedToken:(int)arg1;
- (void)setManagers:(id)arg1;
- (void)setObjectDiscoveryManager:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setPipeManager:(id)arg1;
- (void)setPrivilegedClients:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setScanManager:(id)arg1;
- (void)setScreenOff:(bool)arg1;
- (void)setScreenStateToken:(int)arg1;
- (void)setServerQueue:(id)arg1;
- (void)setStatsManager:(id)arg1;
- (void)setSystemLocked:(bool)arg1;
- (void)setTestClients:(id)arg1;
- (void)setWpdState:(id)arg1;
- (void)setZoneManager:(id)arg1;
- (id)spObjectDiscoveryClient;
- (void)startListening;
- (unsigned long long)stateCaptureHandle;
- (id)statsManager;
- (bool)systemLocked;
- (id)testClients;
- (void)updateState;
- (id)wpdState;
- (id)zoneManager;

@end
