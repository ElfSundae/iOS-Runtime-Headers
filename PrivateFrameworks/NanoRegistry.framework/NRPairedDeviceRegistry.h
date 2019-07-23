/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPairedDeviceRegistry : NSObject <NRFrameworkDeviceDelegate, NRPairedDeviceRegistryXPCFrameworkDelegate, NSXPCConnectionDelegate> {
    NSUUID *_clientUUID;
    int _compatibilityStateNotifyToken;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSMutableArray *_devicesBlocks;
    BOOL _devicesHaveBeenInitialized;
    unsigned long long _devicesUpdateCounter;
    int _devicesUpdateCounterNotifyToken;
    NSMutableArray *_finishedPairingSemaphores;
    NSMutableArray *_grabDaemonStateBlocks;
    BOOL _hasSomeEntitlements;
    unsigned int _lastUnpairReason;
    int _maxPairingCompatibilityVersion;
    int _minPairingCompatibilityVersion;
    NSMutableDictionary *_mutableDeviceDictionary;
    int _nanoregistrydLaunchNotifyToken;
    int _pairedStateNotifyToken;
    BOOL _pairingClient;
    int _pairingCompatibilityVersion;
    NSObject<OS_dispatch_queue> *_pdrQueue;
    NSObject<OS_dispatch_queue> *_reconnectQueue;
    int _statusCodeNotifyToken;
    NSXPCConnection *_xpcConnection;
    BOOL _xpcConnectionInvalidated;
}

@property (nonatomic, retain) NSUUID *clientUUID;
@property (nonatomic) int compatibilityStateNotifyToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *deviceQueue;
@property (nonatomic, retain) NSMutableArray *devicesBlocks;
@property (nonatomic) BOOL devicesHaveBeenInitialized;
@property (nonatomic) unsigned long long devicesUpdateCounter;
@property (nonatomic) int devicesUpdateCounterNotifyToken;
@property (nonatomic, retain) NSMutableArray *finishedPairingSemaphores;
@property (nonatomic, retain) NSMutableArray *grabDaemonStateBlocks;
@property (nonatomic) BOOL hasSomeEntitlements;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int lastUnpairReason;
@property (nonatomic) int maxPairingCompatibilityVersion;
@property (nonatomic) int minPairingCompatibilityVersion;
@property (nonatomic, retain) NSMutableDictionary *mutableDeviceDictionary;
@property (nonatomic) int nanoregistrydLaunchNotifyToken;
@property (nonatomic) int pairedStateNotifyToken;
@property (nonatomic) BOOL pairingClient;
@property (nonatomic) int pairingCompatibilityVersion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pdrQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reconnectQueue;
@property (nonatomic, readonly) unsigned int status;
@property (nonatomic) int statusCodeNotifyToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL xpcConnectionInvalidated;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addRemoveRecoveryStepBackup:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDeleteAccounts:(BOOL)arg1;
- (void)_addRemoveRecoveryStepDeletePairingStore:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDisableDaemons:(BOOL)arg1;
- (void)_addRemoveRecoveryStepICloudDeletePaymentCards:(BOOL)arg1;
- (void)_addRemoveRecoveryStepIDSFinalize:(BOOL)arg1;
- (void)_addRemoveRecoveryStepIDSUnpair:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepIDSUnpairStart:(BOOL)arg1;
- (void)_addRemoveRecoveryStepObliterate:(BOOL)arg1 withStatePath:(id)arg2;
- (void)_addRemoveRecoveryStepRemoteUnpair:(BOOL)arg1 withAdvertisedName:(id)arg2 andPairedDeviceID:(id)arg3;
- (void)_addRemoveRecoveryStepResetNVRAM:(BOOL)arg1;
- (void)_addRemoveRecoveryStepStockholmReset:(BOOL)arg1;
- (void)_addRemoveRecoveryStepUnpairBluetooth:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_destroyAllData;
- (id)_findActiveDevice;
- (id)_findActivePairedDevice;
- (id)_findPairingDevice;
- (void)_pairingStorePathPairingID:(id /* block */)arg1;
- (id)_recoveryDescription;
- (void)_reinitializeFrameworkWithBlock:(id /* block */)arg1;
- (void)_setObliterationEnabled:(BOOL)arg1;
- (unsigned int)_status;
- (void)_submitAlbertPairingReport;
- (BOOL)_supportsWatch;
- (void)_triggerRecovery;
- (void)_updateDevice:(id)arg1 updatedDevice:(id)arg2;
- (void)_xpcFrameworkInitializationSuccessWithStatus:(unsigned int)arg1 andDevices:(id)arg2 hasEntitlements:(BOOL)arg3 andCompatibilityState:(unsigned short)arg4 andPairingCompatibilityVersion:(int)arg5 andMaxCompatibilityVersion:(int)arg6 andMinCompatibilityVersion:(int)arg7 andLastUnpairReason:(unsigned int)arg8 andDevicesUpdateCounter:(unsigned long long)arg9;
- (void)_xpcInitializeConnection;
- (void)_xpcInvalidationHandler;
- (void)abortPairing;
- (void)abortPairingWithReason:(id)arg1;
- (id)clientUUID;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (void)companionPasscodePairWithDevice:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (unsigned short)compatibilityState;
- (int)compatibilityStateNotifyToken;
- (void)dealloc;
- (id)deviceQueue;
- (id)devicesBlocks;
- (BOOL)devicesHaveBeenInitialized;
- (unsigned long long)devicesUpdateCounter;
- (int)devicesUpdateCounterNotifyToken;
- (void)ensureDaemonHasStartedOnce;
- (void)ensureDevicesHaveBeenInitializedOnce;
- (void)ensureDevicesUpToDate;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (id)finishedPairingSemaphores;
- (id)getActivePairedDevice;
- (id)getAllDevices;
- (id)getDevices;
- (void)getDevicesWithBlock:(id /* block */)arg1;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (id)grabDaemonStateBlocks;
- (BOOL)hasSomeEntitlements;
- (id)init;
- (void)initNotifyTokens;
- (BOOL)isPaired;
- (unsigned int)lastUnpairReason;
- (unsigned int)majorVersion;
- (int)maxPairingCompatibilityVersion;
- (int)minPairingCompatibilityVersion;
- (unsigned int)minorVersion;
- (id)mutableDeviceDictionary;
- (int)nanoregistrydLaunchNotifyToken;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)notifyStatus;
- (int)pairedStateNotifyToken;
- (BOOL)pairingClient;
- (void)pairingClientDidEnterPhase:(id)arg1;
- (int)pairingCompatibilityVersion;
- (id)pairingID;
- (id)pairingStorePath;
- (void)pairingStorePathPairingID:(id /* block */)arg1;
- (id)pdrQueue;
- (unsigned long long)readNotifyToken:(int)arg1;
- (id)reconnectQueue;
- (int)registerNotifyTokenWithName:(id)arg1 withBlock:(id /* block */)arg2;
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(id /* block */)arg3;
- (void)resumePairingClientCrashMonitoring;
- (void)retriggerUnpairInfoDialog;
- (void)sendDevicesUpdatedNotification;
- (void)setActivePairedDevice:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (void)setClientUUID:(id)arg1;
- (void)setCompatibilityStateNotifyToken:(int)arg1;
- (void)setDeviceQueue:(id)arg1;
- (void)setDevicesBlocks:(id)arg1;
- (void)setDevicesHaveBeenInitialized:(BOOL)arg1;
- (void)setDevicesUpdateCounter:(unsigned long long)arg1;
- (void)setDevicesUpdateCounterNotifyToken:(int)arg1;
- (void)setFinishedPairingSemaphores:(id)arg1;
- (void)setGrabDaemonStateBlocks:(id)arg1;
- (void)setHasSomeEntitlements:(BOOL)arg1;
- (void)setLastUnpairReason:(unsigned int)arg1;
- (void)setMaxPairingCompatibilityVersion:(int)arg1;
- (void)setMinPairingCompatibilityVersion:(int)arg1;
- (void)setMutableDeviceDictionary:(id)arg1;
- (void)setNanoregistrydLaunchNotifyToken:(int)arg1;
- (void)setPairedStateNotifyToken:(int)arg1;
- (void)setPairingClient:(BOOL)arg1;
- (void)setPairingCompatibilityVersion:(int)arg1;
- (void)setPdrQueue:(id)arg1;
- (void)setReconnectQueue:(id)arg1;
- (void)setStatusCodeNotifyToken:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionInvalidated:(BOOL)arg1;
- (unsigned int)status;
- (void)statusCodeChanged:(int)arg1;
- (int)statusCodeNotifyToken;
- (BOOL)supportsPairedDevice;
- (void)suspendPairingClientCrashMonitoring;
- (void)syncDevicesWithDevice:(id)arg1;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(id /* block */)arg3;
- (void)userIsCheckingForUpdate;
- (void)waitForPairingStorePathPairingID:(id /* block */)arg1;
- (void)xpcAssertInClient:(id)arg1;
- (void)xpcCompatibilityStateDidChange:(unsigned short)arg1 withDevice:(id)arg2 andDeviceID:(id)arg3;
- (id)xpcConnection;
- (BOOL)xpcConnectionInvalidated;
- (void)xpcCreateDevice:(id)arg1 deviceID:(id)arg2;
- (void)xpcDevice:(id)arg1 deviceID:(id)arg2 needsPasscode:(id)arg3;
- (void)xpcDeviceDidPair:(id)arg1 deviceID:(id)arg2;
- (void)xpcDeviceDidUnpair:(id)arg1 deviceID:(id)arg2;
- (void)xpcDeviceIDDidFailToPair:(id)arg1 error:(id)arg2;
- (void)xpcDeviceNeedsActivation:(id)arg1 deviceID:(id)arg2;
- (void)xpcDidBeginPairing:(id)arg1 deviceID:(id)arg2;
- (void)xpcDidReceiveBTPairingRequest:(id)arg1 deviceID:(id)arg2;
- (void)xpcHasNewOOBKey:(id)arg1;
- (void)xpcLastUnpairReasonDidChange:(unsigned int)arg1;
- (void)xpcRemoteUnpairingDidBegin;
- (void)xpcSetValue:(id)arg1 forProperty:(id)arg2 deviceID:(id)arg3 withSequenceNumber:(unsigned long long)arg4;

@end
