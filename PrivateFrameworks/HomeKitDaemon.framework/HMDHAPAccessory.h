/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPAccessory : HMDAccessory <HAPRelayAccessoryDelegate, HMDAccessoryIdentify, HMDAccessoryMinimumUserPrivilegeCapable, HMDAccessoryUserManagement, HMDServiceOwner, HMDTimeInformationMonitorDelegate, HMFTimerDelegate> {
    HMFTimer * _accessoryDiscoveryBackoffTimer;
    NSNumber * _accessoryFlags;
    HMFTimer * _accessoryKeyRefreshTimer;
    unsigned long long  _activationAttempts;
    NSNumber * _backedOffStateNumber;
    HMDHAPAccessory * _bridge;
    NSData * _broadcastKey;
    NSDictionary * _cameraClipCloudZoneUUIDByRecordingServiceUUID;
    HMDCameraProfileSettingsManager * _cameraProfileSettingsManager;
    NSSet * _cameraProfiles;
    long long  _certificationStatus;
    HMFConnectivityInfo * _connectivityInfo;
    unsigned long long  _currentRelayAccessoryState;
    HMDCharacteristic * _currentTimeCharacteristic;
    HMDDataStreamController * _dataStreamController;
    HMDCharacteristic * _dayOfTheWeekCharacteristic;
    NSMutableArray * _discoveredServices;
    bool  _hardwareSupport;
    NSSet * _identifiersForBridgedAccessories;
    bool  _keyGenerationInProgress;
    unsigned char  _keyGenerationType;
    NSNumber * _keyUpdatedStateNumber;
    NSDate * _keyUpdatedTime;
    HMDNetworkRouterController * _networkRouterController;
    unsigned long long  _pairingAttempts;
    NSString * _pairingUsername;
    HMDPendingCharacteristic * _pendingPowerOn;
    NSMutableArray * _pendingReads;
    NSMutableArray * _powerOnCompletionRoutines;
    HMDService * _primaryService;
    NSData * _publicKey;
    bool  _relayEnabled;
    NSString * _relayIdentifier;
    NSMapTable * _serverIDToHAPAccessoryTable;
    NSMutableArray * _services;
    NSData * _setupHash;
    bool  _supportsRelay;
    bool  _supportsTargetController;
    HMDAccessorySymptomHandler * _symptomsHandler;
    HMFTimer * _systemTimeInformationTimer;
    bool  _systemTimeNeedsUpdate;
    HMDTargetControllerManager * _targetControllerManager;
    NSArray * _targetUUIDs;
    bool  _timeInformationServiceExists;
    HMFTimer * _timeInformationTimer;
    HMDCharacteristic * _timeUpdateCharacteristic;
    NSMutableArray * _transportInformationInstances;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) HMFTimer *accessoryDiscoveryBackoffTimer;
@property (nonatomic, copy) NSNumber *accessoryFlags;
@property (nonatomic, retain) HMFTimer *accessoryKeyRefreshTimer;
@property (nonatomic) unsigned long long activationAttempts;
@property (nonatomic, copy) NSNumber *backedOffStateNumber;
@property (nonatomic) HMDHAPAccessory *bridge;
@property (nonatomic, copy) NSData *broadcastKey;
@property (nonatomic, retain) NSDictionary *cameraClipCloudZoneUUIDByRecordingServiceUUID;
@property (nonatomic, readonly) HMDCameraProfileSettingsManager *cameraProfileSettingsManager;
@property (nonatomic, retain) NSSet *cameraProfiles;
@property (nonatomic) long long certificationStatus;
@property (getter=isClientRegisteredForNotifications, readonly) bool clientRegisteredForNotifications;
@property (nonatomic, retain) HMFConnectivityInfo *connectivityInfo;
@property (nonatomic, readonly) unsigned long long currentRelayAccessoryState;
@property (nonatomic, readonly) HMDCharacteristic *currentTimeCharacteristic;
@property (nonatomic, retain) HMDDataStreamController *dataStreamController;
@property (nonatomic, readonly) HMDCharacteristic *dayOfTheWeekCharacteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *discoveredServices;
@property (nonatomic, readonly, copy) NSNumber *hapInstanceId;
@property (nonatomic) bool hardwareSupport;
@property (readonly) bool hasTelevisionService;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *identifiersForBridgedAccessories;
@property bool keyGenerationInProgress;
@property unsigned char keyGenerationType;
@property (nonatomic, copy) NSNumber *keyUpdatedStateNumber;
@property (nonatomic, copy) NSDate *keyUpdatedTime;
@property (nonatomic, readonly) HMDNetworkRouterController *networkRouterController;
@property (nonatomic, retain) HMDNetworkRouterController *networkRouterController;
@property (nonatomic, readonly) HMDNetworkRouterProfile *networkRouterProfile;
@property (nonatomic, readonly) HMDNetworkRouterSatelliteProfile *networkRouterSatelliteProfile;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic) unsigned long long pairingAttempts;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;
@property (nonatomic, retain) NSString *pairingUsername;
@property (nonatomic, retain) HMDPendingCharacteristic *pendingPowerOn;
@property (retain) NSMutableArray *pendingReads;
@property (nonatomic, retain) NSMutableArray *powerOnCompletionRoutines;
@property (nonatomic, readonly) HMDService *primaryService;
@property (nonatomic, retain) NSData *publicKey;
@property (getter=isRelayEnabled, nonatomic) bool relayEnabled;
@property (nonatomic, retain) NSString *relayIdentifier;
@property (nonatomic, readonly) NSString *serializedIdentifier;
@property (nonatomic, retain) NSMapTable *serverIDToHAPAccessoryTable;
@property (readonly, copy) NSArray *services;
@property (nonatomic, copy) NSData *setupHash;
@property (readonly) Class superclass;
@property (getter=isCameraRecordingFeatureSupported, readonly) bool supportsCameraRecordingFeature;
@property (readonly) bool supportsIdentify;
@property (nonatomic) bool supportsRelay;
@property (nonatomic, readonly) bool supportsSiri;
@property (readonly) bool supportsUserManagement;
@property (nonatomic, retain) HMDAccessorySymptomHandler *symptomsHandler;
@property (nonatomic, retain) HMFTimer *systemTimeInformationTimer;
@property (nonatomic) bool systemTimeNeedsUpdate;
@property (nonatomic, retain) HMDTargetControllerManager *targetControllerManager;
@property (nonatomic, retain) NSArray *targetUUIDs;
@property (nonatomic, readonly) bool timeInformationServiceExists;
@property (nonatomic, retain) HMFTimer *timeInformationTimer;
@property (nonatomic, readonly) HMDCharacteristic *timeUpdateCharacteristic;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (unsigned long long)getAWDTransportTypeWithLinkType:(long long)arg1;
+ (bool)hasMessageReceiverChildren;
+ (bool)supportsSecureCoding;
+ (Class)transactionClass;

- (void).cxx_destruct;
- (void)__createNetworkRouterController:(id)arg1;
- (bool)__createNetworkRouterProfileAndController:(id)arg1;
- (bool)__createSatelliteNetworkRouterProfile:(id)arg1;
- (bool)__removeNetworkRouterController;
- (void)__updateNotifyingCharacteristicStateNumber:(id)arg1;
- (void)_addHAPAccessory:(id)arg1;
- (void)_addService:(id)arg1;
- (void)_autoConfigureTargetController;
- (void)_cancelPowerOn;
- (void)_configureTargetControllerWithCompletion:(id /* block */)arg1;
- (bool)_containsSecureCharacteristic;
- (unsigned long long)_currentRelayAccessoryState;
- (id)_currentTimeCharacteristic;
- (id)_dayOfTheWeekCharacteristic;
- (void)_deRegisterForTimeMonitor;
- (void)_disableNotificationsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_enableBroadcastNotifications:(bool)arg1 hapAccessory:(id)arg2 forCharacteristics:(id)arg3;
- (void)_enableNotification:(bool)arg1 forCharacteristics:(id)arg2 hapAccessory:(id)arg3 completion:(id /* block */)arg4;
- (void)_enableNotification:(bool)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)_enableNotification:(bool)arg1 matchingHAPAccessory:(id)arg2 ignoreDeviceUnlockRequirement:(bool)arg3 clientIdentifier:(id)arg4 forCharacteristics:(id)arg5;
- (bool)_enableNotificationOnResident:(bool)arg1 characteristic:(id)arg2 clientIdentifier:(id)arg3 ignoreDeviceUnlockRequirement:(bool)arg4;
- (void)_evaluateLocalOperation:(long long)arg1 state:(id)arg2 completion:(id /* block */)arg3;
- (id)_getResponseTuple:(id)arg1 error:(id)arg2 source:(unsigned long long)arg3 suspended:(bool)arg4;
- (id)_getSymptomHandler;
- (void)_handleAddServiceTransaction:(id)arg1 message:(id)arg2;
- (bool)_handleCharacteristicError:(id)arg1 read:(bool)arg2 characteristic:(id)arg3 didRelayMessage:(id)arg4;
- (void)_handleCharacteristicRead:(id)arg1;
- (void)_handleCharacteristicWrite:(id)arg1;
- (void)_handleCharacteristicsChangedNotification:(id)arg1;
- (void)_handleConfigureTargets:(id)arg1;
- (void)_handleDiscoveryBackoffTimerFired;
- (void)_handleKeyRefreshTimerFired;
- (void)_handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleRenameService:(id)arg1;
- (void)_handleRoomChangedFromOldRoomName:(id)arg1;
- (void)_handleServiceRemovedTransaction:(id)arg1 message:(id)arg2;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateAuthorizationData:(id)arg1;
- (void)_handleUpdateMediaSourceDisplayOrder:(id)arg1;
- (void)_handleUpdatedName:(id)arg1;
- (bool)_handleUpdatedServicesForCameraProfiles:(id)arg1;
- (void)_handleUpdatedServicesForDataStreamController:(id)arg1;
- (bool)_handleUpdatedServicesForNetworkRouterProfileAndController:(id)arg1;
- (void)_handleUpdatedServicesForProfilesAndControllers:(id)arg1;
- (void)_handleWiFiReconfiguration:(id)arg1;
- (void)_logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (id)_messagesForUpdatedRoom:(id)arg1;
- (void)_notifyCharacteristicNotificationChangedForCharacteristic:(id)arg1 enableNotification:(bool)arg2 message:(id)arg3;
- (void)_notifyCharacteristicNotificationChanges:(id)arg1 enableNotification:(bool)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)_notifyClientsOfTargetControlSupportUpdate;
- (void)_notifyNotificationChangesForCharacteristics:(id)arg1 errors:(id)arg2 enableNotification:(bool)arg3 message:(id)arg4;
- (void)_parseResponseFromRemotePeer:(id)arg1 message:(id)arg2 forCharacteristic:(id)arg3;
- (void)_performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(id /* block */)arg3 errorBlock:(id /* block */)arg4;
- (id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)arg1;
- (void)_readAndWriteTimeInformationCharacteristic:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_readCharacteristicValues:(id)arg1 localOperationRequired:(bool)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5 errorBlock:(id /* block */)arg6;
- (void)_readValueForCharacteristic:(id)arg1 hapAccessory:(id)arg2 requestMessage:(id)arg3;
- (void)_readandWriteToCurrentTime:(id)arg1 errorBlock:(id /* block */)arg2;
- (void)_reconcileAccessControlSetting;
- (void)_reenableNotificationsOnWatch;
- (void)_registerForMessages;
- (void)_registerForTimeMonitor;
- (void)_relayReadFromCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_relayWriteToCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_removeBackedoffAccessoryForStateNumber:(id)arg1;
- (void)_removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)_removeService:(id)arg1;
- (bool)_resolveAudioAbility:(id)arg1;
- (bool)_resolveSupportedSiriInputType:(id)arg1;
- (void)_retrieveStateForTrackedAccessory:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_saveHardwareSupport:(bool)arg1;
- (void)_saveTargetUUIDs:(id)arg1;
- (void)_setCurrentRelayAccessoryState:(unsigned long long)arg1;
- (void)_setCurrentTimeCharacteristic:(id)arg1;
- (void)_setDayOfTheWeekCharacteristic:(id)arg1;
- (void)_setRelayEnabled:(bool)arg1;
- (void)_setRelayIdentifier:(id)arg1;
- (void)_setSupportsRelay:(bool)arg1;
- (void)_setSystemTimeNeedsUpdate:(bool)arg1;
- (void)_setTimeInformationServiceExists:(bool)arg1;
- (void)_setTimeUpdateCharacteristic:(id)arg1;
- (void)_setWakeType;
- (bool)_shouldFilterAccessoryProfile:(id)arg1;
- (bool)_shouldTrackAccessoryWithPriority:(bool*)arg1;
- (void)_startSystemTimeWriteTimeInformationTimer;
- (void)_startWriteTimeInformationTimer;
- (void)_stopScan;
- (void)_stopSystemTimeWriteTimeInformationTimer;
- (void)_stopWriteTimeInformationTimer;
- (bool)_supportsMediaAccessControl;
- (bool)_timeInformationServiceExists;
- (id)_timeUpdateCharacteristic;
- (void)_updateAccessoryTracking;
- (void)_updateBridge:(id)arg1;
- (void)_updateBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(double)arg3;
- (void)_updatePrimaryServiceIfNeededWithService:(id)arg1;
- (void)_updateReachability;
- (void)_updateRelayEnabled:(bool)arg1 notifyRelayManager:(bool)arg2;
- (void)_updateSiriAudioFormat:(id)arg1;
- (void)_updateStateForTrackedAccessory:(id)arg1 stateNumber:(id)arg2;
- (void)_wirelessPowerOn:(id /* block */)arg1;
- (void)_writeCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_writeCharacteristicValues:(id)arg1 localOperationRequired:(bool)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5 errorBlock:(id /* block */)arg6;
- (void)_writeTimeInformationCharacteristicsForAccessory;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 message:(id)arg5;
- (void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didPairRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2;
- (void)accessory:(id)arg1 didUpdateRelayEnabled:(bool)arg2;
- (void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2;
- (void)accessoryDidBecomeReachable:(id)arg1;
- (void)accessoryDidBecomeUnreachable:(id)arg1;
- (id)accessoryDiscoveryBackoffTimer;
- (id)accessoryFlags;
- (id)accessoryKeyRefreshTimer;
- (void)acknowledgeTargetControlService:(id)arg1 active:(bool)arg2;
- (unsigned long long)activationAttempts;
- (void)addBridgedAccessory:(id)arg1;
- (void)addDataStreamBulkSendListener:(id)arg1 fileType:(id)arg2;
- (void)addRelayUser:(id)arg1 accessToken:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)addTarget:(id)arg1 buttonConfiguration:(id)arg2;
- (void)addTransportInformationInstance:(id)arg1;
- (void)addTransportInformationInstances:(id)arg1;
- (void)addUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)anyIPServer;
- (id)assistantObject;
- (void)autoConfigureTargetController;
- (void)autoUpdateCachedCountDownCharacteristics:(id)arg1;
- (void)backOffAccessoryForStateNumber:(id)arg1;
- (id)backedOffStateNumber;
- (id)backingStoreObjects:(long long)arg1;
- (id)backingStoreTransactionWithName:(id)arg1;
- (id)bridge;
- (id)broadcastKey;
- (id)cameraClipCloudZoneUUIDByRecordingServiceUUID;
- (id)cameraClipCloudZoneUUIDForRecordingService:(id)arg1;
- (id)cameraProfileSettingsManager;
- (id)cameraProfiles;
- (bool)canAcceptBulkSendListeners;
- (bool)canWakeBasedOnCharacteristic:(id)arg1;
- (void)cancelPowerOn;
- (long long)certificationStatus;
- (id)characteristicsPassingTest:(id /* block */)arg1;
- (void)configureBulletinNotification;
- (id)configureService:(id)arg1;
- (void)configureWithAccessory:(id)arg1 homeNotificationsEnabled:(bool)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3;
- (id)connectivityInfo;
- (bool)containsCameraService;
- (id)createUpdateServiceTransationWithServiceUUID:(id)arg1;
- (unsigned long long)currentRelayAccessoryState;
- (id)currentTimeCharacteristic;
- (id)dataStreamController;
- (id)dayOfTheWeekCharacteristic;
- (void)deRegisterForTimeMonitor;
- (void)dealloc;
- (id)description;
- (void)didUpdateCurrentNetworkProtection;
- (void)disableNotificationsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)discoveredServices;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)enableNotification:(bool)arg1 forCharacteristicIDs:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)enableNotification:(bool)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)enableNotification:(bool)arg1 ignoreDeviceUnlockRequirement:(bool)arg2 clientIdentifier:(id)arg3 forCharacteristics:(id)arg4;
- (void)enableNotificationsWithHAPAccessory:(id)arg1 homeNotificationsEnabled:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateSymptomHandler;
- (id)findCharacteristic:(id)arg1;
- (id)findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)findCharacteristicType:(id)arg1 forServiceType:(id)arg2;
- (id)findService:(id)arg1;
- (id)findServiceWithServiceType:(id)arg1;
- (id)getBluetoothAddress;
- (id)getFullError:(id)arg1 source:(unsigned long long)arg2 suspended:(bool)arg3;
- (id)getOrCreateServiceUpdateTransactionForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)getPrimaryHAPAccessories;
- (void)getSupportedSiriAudioConfiguration:(id /* block */)arg1;
- (id)getTransportInformationArray;
- (void)handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handlePairedStateChange:(bool)arg1;
- (void)handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(bool)arg2 enableTime:(id)arg3;
- (void)handleRoomChanged:(id)arg1;
- (void)handleRoomNameChanged:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (void)handleUpdatedPassword:(id)arg1;
- (id)hapCharacteristicWriteRequests:(id)arg1 hapAccessory:(id)arg2 hmdResponses:(id*)arg3 mapping:(id*)arg4;
- (id)hapInstanceId;
- (bool)hardwareSupport;
- (bool)hasBLELinkConnected;
- (bool)hasBTLELink;
- (bool)hasIPLink;
- (bool)hasTelevisionService;
- (unsigned long long)hash;
- (id)hmdCharacteristicForInstanceId:(id)arg1;
- (id)hmdCharacteristicFromHapCharacteristic:(id)arg1;
- (id)identifiersForBridgedAccessories;
- (void)identifyAccessory:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (void)initializeBTLEScan;
- (bool)initiateScan:(id /* block */)arg1;
- (bool)isCameraRecordingFeatureSupported;
- (bool)isClientRegisteredForNotifications;
- (bool)isEqual:(id)arg1;
- (bool)isNonClientNotificationEnabled;
- (bool)isNotificationEnabled;
- (bool)isNotificationEnabledForClientIdentifier:(id)arg1;
- (bool)isPaired;
- (bool)isPoweringOn;
- (bool)isPrimary;
- (bool)isReadingRequiredForBTLEAccessoryCharacteristic:(id)arg1 forceReadFWVersion:(bool)arg2;
- (bool)isRelayEnabled;
- (bool)isSecuritySessionOpen;
- (bool)keyGenerationInProgress;
- (unsigned char)keyGenerationType;
- (id)keyUpdatedStateNumber;
- (id)keyUpdatedTime;
- (long long)linkSpeed;
- (void)logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (void)makeServiceNameConsistent:(id)arg1 withName:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)matchesHAPAccessory:(id)arg1;
- (bool)matchesHAPAccessoryWithServerIdentifier:(id)arg1 instanceID:(id)arg2;
- (bool)matchesHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long*)arg2;
- (id)matchingHAPAccessoryServerIdentifierWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)matchingTransportInformation:(id)arg1;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)messageReceiverChildren;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)namesOfServicesShowingTilesInHomeApp;
- (id)networkRouterController;
- (id)networkRouterProfile;
- (id)networkRouterSatelliteProfile;
- (void)notifyClientsOfTargetControlSupportUpdate;
- (void)notifyValue:(id)arg1 previousValue:(id)arg2 error:(id)arg3 forCharacteristic:(id)arg4 requestMessage:(id)arg5;
- (void)notifyingCharacteristicStateNumberUpdated:(id)arg1;
- (unsigned long long)pairingAttempts;
- (id)pairingIdentity;
- (id)pairingUsername;
- (void)pairingsWithCompletionHandler:(id /* block */)arg1;
- (id)pendingPowerOn;
- (id)pendingReads;
- (void)performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(id /* block */)arg3 errorBlock:(id /* block */)arg4;
- (void)populateHMDCharacteristicResponses:(id)arg1 hapResponses:(id)arg2 mapping:(id)arg3 overallError:(id)arg4 requests:(id)arg5;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (void)postNetworkRouterProfileNotification:(id)arg1 object:(id)arg2;
- (void)powerOnComplete:(id)arg1;
- (id)powerOnCompletionRoutines;
- (id)preferredHAPAccessoryForOperation:(long long)arg1 linkType:(long long*)arg2;
- (id)primaryIPServer;
- (id)primaryService;
- (bool)providesHashRouteID;
- (id)publicKey;
- (void)reachabilityDidChange:(id)arg1;
- (long long)reachableTransports;
- (void)readCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)readInitialRequiredCharacteristicsForBTLEAccessory:(id /* block */)arg1;
- (void)registerForActiveIdentifierNotifications;
- (void)registerForTimeMonitor;
- (id)relayAccessory;
- (id)relayIdentifier;
- (void)removeBridgedAccessory:(id)arg1;
- (void)removeDataStreamBulkSendListener:(id)arg1;
- (void)removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)removeRelayUser:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeTarget:(id)arg1;
- (void)removeTransportInformationInstance:(id)arg1;
- (void)removeUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetNotificationEnabledTime;
- (id)retrieveUpdatedTransportInfoArray:(id)arg1;
- (id)runtimeState;
- (void)saveBluetoothAddress:(id)arg1;
- (void)saveHardwareSupport:(bool)arg1;
- (void)savePublicKeyToKeychain;
- (void)saveTargetUUIDs:(id)arg1;
- (void)scanningCompleteWithAccessoryFound:(bool)arg1 suspended:(bool)arg2;
- (void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)arg1;
- (id)serializedIdentifier;
- (id)serverIDToHAPAccessoryTable;
- (id)serviceWithUUID:(id)arg1;
- (id)services;
- (void)setAccessoryDiscoveryBackoffTimer:(id)arg1;
- (void)setAccessoryFlags:(id)arg1;
- (void)setAccessoryKeyRefreshTimer:(id)arg1;
- (void)setActivationAttempts:(unsigned long long)arg1;
- (void)setBackedOffStateNumber:(id)arg1;
- (void)setBridge:(id)arg1;
- (void)setBroadcastKey:(id)arg1;
- (void)setBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(id)arg3;
- (void)setCameraClipCloudZoneUUIDByRecordingServiceUUID:(id)arg1;
- (void)setCameraProfiles:(id)arg1;
- (void)setCertificationStatus:(long long)arg1;
- (void)setConnectivityInfo:(id)arg1;
- (void)setCurrentTimeCharacteristic:(id)arg1;
- (void)setDataStreamController:(id)arg1;
- (void)setDayOfTheWeekCharacteristic:(id)arg1;
- (void)setDiscoveredServices:(id)arg1;
- (void)setHardwareSupport:(bool)arg1;
- (void)setIdentifiersForBridgedAccessories:(id)arg1;
- (void)setKeyGenerationInProgress:(bool)arg1;
- (void)setKeyGenerationType:(unsigned char)arg1;
- (void)setKeyUpdatedStateNumber:(id)arg1;
- (void)setKeyUpdatedTime:(id)arg1;
- (void)setNetworkRouterController:(id)arg1;
- (void)setPairingAttempts:(unsigned long long)arg1;
- (void)setPairingUsername:(id)arg1;
- (void)setPairingUsername:(id)arg1 publicKey:(id)arg2;
- (void)setPendingPowerOn:(id)arg1;
- (void)setPendingReads:(id)arg1;
- (void)setPowerOnCompletionRoutines:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setReachability:(bool)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3;
- (void)setRelayEnabled:(bool)arg1;
- (void)setRelayIdentifier:(id)arg1;
- (void)setSelectedSiriAudioConfiguration:(id)arg1;
- (void)setServerIDToHAPAccessoryTable:(id)arg1;
- (void)setSetupHash:(id)arg1;
- (void)setSupportsRelay:(bool)arg1;
- (void)setSymptomsHandler:(id)arg1;
- (void)setSystemTimeInformationTimer:(id)arg1;
- (void)setSystemTimeNeedsUpdate:(bool)arg1;
- (void)setTargetControllerManager:(id)arg1;
- (void)setTargetUUIDs:(id)arg1;
- (void)setTimeInformationServiceExists:(bool)arg1;
- (void)setTimeInformationTimer:(id)arg1;
- (void)setTimeUpdateCharacteristic:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)setupHash;
- (bool)shouldConfigureTargetController;
- (bool)shouldEnableDaemonRelaunch;
- (void)startBulkSendSessionForFileType:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (void)startRelayActivationWithActivationClient:(id)arg1;
- (void)startRelayPairingWithPairingClient:(id)arg1;
- (void)stopScan;
- (void)submitCharacteristicReadErrorLogEvent:(id)arg1 message:(id)arg2 error:(id)arg3;
- (void)submitCharacteristicWriteErrorLogEvent:(id)arg1 message:(id)arg2 error:(id)arg3;
- (bool)supportsIdentify;
- (bool)supportsMinimumUserPrivilege;
- (bool)supportsNetworkProtection;
- (bool)supportsRelay;
- (bool)supportsSiri;
- (bool)supportsTargetController;
- (bool)supportsUserManagement;
- (id)symptomsHandler;
- (id)systemTimeInformationTimer;
- (bool)systemTimeNeedsUpdate;
- (void)takeOwnershipOfAppData:(id)arg1;
- (id)targetControllerButtonConfiguration;
- (id)targetControllerManager;
- (unsigned long long)targetControllerTicksPerSecond;
- (id)targetUUIDs;
- (void)timeInformationMonitorDidChangeTime;
- (bool)timeInformationServiceExists;
- (id)timeInformationTimer;
- (id)timeUpdateCharacteristic;
- (void)timerDidFire:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)transportInformationInstances;
- (id)tunneledHAPAccessories;
- (void)unconfigure;
- (void)unconfigureAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 updateReachability:(bool)arg3;
- (id)uniqueIdentifier;
- (void)updateAccessoryFlags:(id)arg1;
- (id)updateAccessoryFlagsAndNotifyClients:(id)arg1;
- (bool)updateAccessoryInformationWithCharacteristicType:(id)arg1 value:(id)arg2 accessoryTransaction:(id)arg3;
- (void)updateButtonConfigurationForTarget:(id)arg1;
- (void)updateNotificationEnabled:(bool)arg1 forCharacteristics:(id)arg2 onBehalfOf:(id)arg3;
- (void)updatePrimaryServiceIfNeeded;
- (void)updateTarget:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3;
- (void)updateTargetUUIDs:(id)arg1;
- (bool)updateTimeInformationCharacteristicsForAccessory:(id)arg1;
- (void)updateTrackedAccessoryStateNumber:(id)arg1;
- (bool)updateTransportInformation:(id)arg1;
- (id)url;
- (void)verifyPairingWithCompletionHandler:(id /* block */)arg1;
- (void)wirelessPowerOn:(id /* block */)arg1;
- (void)wirelessResumeInit;
- (void)writeCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)writeTimeInformationCharacteristicsForAccessory:(id)arg1;
- (void)writeValue:(id)arg1 toCharacteristic:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

@end
