/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessory : NSObject <HFFavoritable, HFHomeContainedObject, HFReorderableHomeKitObject, HFRoomContextProviding, HFStateDumpBuildable, HMAccessorySettingsContainer, HMControllable, HMFLogging, HMFMessageReceiver, HMMutableApplicationData, HMObjectMerge, NSSecureCoding> {
    NSNumber * _accessoryFlags;
    HMMutableArray * _accessoryProfiles;
    unsigned long long  _accessoryReprovisionState;
    NSUUID * _accountIdentifier;
    unsigned long long  _additionalSetupStatus;
    HMApplicationData * _applicationData;
    long long  _associationOptions;
    bool  _blocked;
    bool  _bridgedAccessory;
    NSString * _bundleID;
    HMAccessoryCategory * _category;
    long long  _certificationStatus;
    NSString * _configuredName;
    _HMContext * _context;
    NSArray * _controlTargetUUIDs;
    bool  _controllable;
    bool  _currentAccessory;
    HMMutableArray * _currentServices;
    <HMAccessoryDelegate> * _delegate;
    HMDevice * _device;
    NSString * _deviceIdentifier;
    bool  _firmwareUpdateAvailable;
    NSString * _firmwareVersion;
    HMHome * _home;
    HMFUnfairLock * _lock;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    bool  _needsReprovisioning;
    bool  _paired;
    HMFPairingIdentity * _pairingIdentity;
    bool  _reachable;
    long long  _reachableTransports;
    HMRemoteLoginHandler * _remoteLoginHandler;
    HMRoom * _room;
    NSString * _serialNumber;
    HMAccessorySettings * _settings;
    HMSoftwareUpdateController * _softwareUpdateController;
    HMFSoftwareVersion * _softwareVersion;
    NSString * _storeID;
    bool  _supportsIdentify;
    bool  _supportsMediaAccessControl;
    bool  _supportsTargetControl;
    bool  _supportsTargetController;
    HMSymptomsHandler * _symptomsHandler;
    unsigned long long  _transportTypes;
    NSUUID * _uniqueIdentifier;
    NSArray * _uniqueIdentifiersForBridgedAccessories;
    NSUUID * _uuid;
    HMFWiFiNetworkInfo * _wifiNetworkInfo;
}

@property (nonatomic, retain) NSNumber *accessoryFlags;
@property (nonatomic, retain) HMMutableArray *accessoryProfiles;
@property (nonatomic) unsigned long long accessoryReprovisionState;
@property (copy) NSUUID *accountIdentifier;
@property (nonatomic) unsigned long long additionalSetupStatus;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (nonatomic) long long associationOptions;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (getter=isBridged, nonatomic, readonly) bool bridged;
@property (nonatomic) bool bridgedAccessory;
@property (copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSArray *cameraProfiles;
@property (nonatomic, retain) HMAccessoryCategory *category;
@property (nonatomic) long long certificationStatus;
@property (nonatomic, copy) NSString *configuredName;
@property (readonly) HMHome *containerHome;
@property (nonatomic, retain) _HMContext *context;
@property (nonatomic, copy) NSArray *controlTargetUUIDs;
@property (getter=isControllable, readonly) bool controllable;
@property (nonatomic, copy) HMMutableArray *currentServices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMAccessoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic) bool firmwareUpdateAvailable;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hf_appPunchOutReason;
@property (nonatomic, readonly, copy) NSSet *hf_componentServices;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly, copy) NSString *hf_defaultName;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly, copy) NSSet *hf_displayNamesForVisibleTiles;
@property (nonatomic, readonly) NSString *hf_editingName;
@property (nonatomic, readonly) NSSet *hf_fakeDebugSymptoms;
@property (nonatomic, readonly) bool hf_fakeGeneralFixSymptom;
@property (nonatomic, readonly) bool hf_fakeHardwareFixSymptom;
@property (nonatomic, readonly) bool hf_fakeHomeKitSymptom;
@property (nonatomic, readonly) bool hf_fakeICloudSymptom;
@property (nonatomic, readonly) bool hf_fakeITunesSymptom;
@property (nonatomic, readonly) bool hf_fakeInternetFixSymptom;
@property (nonatomic, readonly) bool hf_fakeShouldDisplayManualFixOption;
@property (nonatomic, readonly) bool hf_fakeUnreachableError;
@property (nonatomic, readonly) bool hf_fakeVPNProfileExpired;
@property (nonatomic) bool hf_fakeWiFiMismatchSymptom;
@property (nonatomic, readonly) bool hf_fakeWiFiPerformanceSymptom;
@property (nonatomic, readonly) bool hf_fakeWiFiSymptom;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) bool hf_isAirPortExtremeSpeaker;
@property (nonatomic, readonly) bool hf_isAppleTV;
@property (nonatomic, readonly) bool hf_isBridge;
@property (nonatomic, readonly) bool hf_isCamera;
@property (nonatomic, readonly) bool hf_isDumbSpeaker;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_isHomePod;
@property (nonatomic, readonly) bool hf_isMediaAccessory;
@property (nonatomic, readonly) bool hf_isProgrammableSwitch;
@property (nonatomic, readonly) bool hf_isRemoteControl;
@property (nonatomic, readonly) bool hf_isVisibleAsBridge;
@property (nonatomic, readonly) HMResidentDevice *hf_linkedResidentDevice;
@property (nonatomic, readonly) unsigned long long hf_mediaAccessControlCapabilities;
@property (nonatomic, readonly) bool hf_needsReprovisioningCheck;
@property (nonatomic, readonly) bool hf_needsSoftwareUpdateToSupportBeingAddedToMediaSystem;
@property (nonatomic, readonly) unsigned long long hf_numberOfProgrammableSwitches;
@property (nonatomic, readonly) HMAccessory *hf_owningBridgeAccessory;
@property (nonatomic, readonly) HMRoom *hf_parentRoom;
@property (nonatomic, readonly) NSSet *hf_programmableSwitchNamespaceServices;
@property (nonatomic, readonly) bool hf_requiresFirmwareUpdate;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (nonatomic, readonly) NSSet *hf_servicesBehindBridge;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly, copy) NSSet *hf_standardServices;
@property (nonatomic, readonly, copy) NSSet *hf_visibleServices;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSArray *identifiersForBridgedAccessories;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool needsReprovisioning;
@property (nonatomic) bool paired;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;
@property (readonly, copy) NSArray *profiles;
@property (getter=isReachable, nonatomic) bool reachable;
@property (nonatomic) long long reachableTransports;
@property (retain) HMRemoteLoginHandler *remoteLoginHandler;
@property (nonatomic) HMRoom *room;
@property (copy) NSString *serialNumber;
@property (nonatomic, readonly, copy) NSArray *services;
@property (readonly) HMAccessorySettings *settings;
@property (copy) HMFSoftwareVersion *softwareVersion;
@property (copy) NSString *storeID;
@property (readonly) Class superclass;
@property (readonly) bool supportsIdentify;
@property (nonatomic) bool supportsMediaAccessControl;
@property (nonatomic) bool supportsTargetControl;
@property (nonatomic) bool supportsTargetController;
@property (copy) HMSymptomsHandler *symptomsHandler;
@property (nonatomic) unsigned long long transportTypes;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSArray *uniqueIdentifiersForBridgedAccessories;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, retain) HMFWiFiNetworkInfo *wifiNetworkInfo;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)_cameraProfilesForAccessoryProfiles:(id)arg1;
+ (id)_mediaProfilesForAccessoryProfiles:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)__handleConnectivityChanged:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)__updateSymptomsHandler:(id)arg1 operations:(id)arg2;
- (id)_accessoryInformationService;
- (void)_configureProfilesWithContext:(id)arg1;
- (void)_copyFrom:(id)arg1;
- (id)_findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)_findService:(id)arg1;
- (void)_handleAccessoryCategoryChanged:(id)arg1;
- (void)_handleAccessoryControllableChanged:(id)arg1;
- (void)_handleAccessoryFlagsChanged:(id)arg1;
- (void)_handleAccessoryNotificationsUpdated:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_handleCharacteristicValueUpdated:(id)arg1;
- (void)_handleCharacteristicsUpdated:(id)arg1;
- (void)_handleConfiguredNameChanged:(id)arg1;
- (void)_handleConnectivityChanged:(id)arg1;
- (void)_handleControlTargetsUpdatedMessage:(id)arg1;
- (id)_handleMultipleCharacteristicsUpdated:(id)arg1 informDelegate:(bool)arg2;
- (void)_handleRenamed:(id)arg1;
- (void)_handleRootSettingsUpdated:(id)arg1;
- (void)_handleServiceConfigurationState:(id)arg1;
- (void)_handleServiceConfiguredNameUpdate:(id)arg1;
- (void)_handleServiceDefaultNameUpdate:(id)arg1;
- (void)_handleServiceRenamed:(id)arg1;
- (void)_handleServiceSubtype:(id)arg1;
- (void)_handleServiceTypeAssociated:(id)arg1;
- (void)_handleServicesUpdated:(id)arg1;
- (void)_handleSymptomsHandlerUpdatedMessage:(id)arg1;
- (void)_handleTargetControlSupportUpdatedMessage:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
- (void)_identifyWithCompletionHandler:(id /* block */)arg1;
- (void)_listPairingsWithCompletionHandler:(id /* block */)arg1;
- (bool)_mergeControlTargets:(id)arg1 operations:(id)arg2;
- (void)_mergeProfileObjects:(id)arg1 currentOperations:(id)arg2;
- (bool)_mergeServices:(id)arg1 operations:(id)arg2;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_notifyClientsOfSymptomsHandlerAddedOrRemoved:(bool)arg1;
- (void)_notifyClientsOfTargetControlSupportUpdate;
- (void)_notifyDelegateOfAddedControlTarget:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (void)_notifyDelegateOfRemovedControlTarget:(id)arg1;
- (void)_notifyDelegateOfUpdatedSettings:(id)arg1;
- (void)_notifyDelegatesOfAdditionalSetupRequiredChange;
- (void)_notifyDelegatesOfUpdatedControllable;
- (id)_privateDelegate;
- (void)_readValueForCharacteristic:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setNotifyValue:(bool)arg1 forCharacteristic:(id)arg2;
- (void)_unconfigure;
- (void)_updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)_updateFromAccessory:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateName:(id)arg1 forService:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_valueForCharacteristic:(id)arg1 ofService:(id)arg2;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)accessoryFlags;
- (id)accessoryProfiles;
- (unsigned long long)accessoryReprovisionState;
- (id)accountIdentifier;
- (void)addControlTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addControlTargetUUIDs:(id)arg1;
- (unsigned long long)additionalSetupStatus;
- (id)applicationData;
- (long long)associationOptions;
- (bool)bridgedAccessory;
- (id)bundleID;
- (id)cameraProfiles;
- (id)category;
- (long long)certificationStatus;
- (id)configuredName;
- (id)containerHome;
- (id)context;
- (id)controlTargetUUIDs;
- (id)controlTargets;
- (id)currentServices;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)device;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (bool)firmwareUpdateAvailable;
- (id)firmwareVersion;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (id)home;
- (id)identifier;
- (id)identifiersForBridgedAccessories;
- (void)identifyWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAdditionalSetupRequired;
- (bool)isBlocked;
- (bool)isBridged;
- (bool)isControllable;
- (bool)isCurrentAccessory;
- (bool)isFirmwareUpdateAvailable;
- (bool)isReachable;
- (id)logIdentifier;
- (id)manufacturer;
- (id)mediaProfile;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)model;
- (id)name;
- (bool)needsReprovisioning;
- (void)notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (bool)paired;
- (id)pairingIdentity;
- (void)pairingIdentityWithPrivateKey:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)profiles;
- (void)queryAdvertisementInformationWithCompletionHandler:(id /* block */)arg1;
- (long long)reachableTransports;
- (id)remoteLoginHandler;
- (void)removeControlTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeControlTargetUUIDs:(id)arg1;
- (void)resetControlTargetUUIDs;
- (void)resetControlTargetsWithCompletionHandler:(id /* block */)arg1;
- (id)room;
- (id)serialNumber;
- (id)services;
- (void)setAccessoryFlags:(id)arg1;
- (void)setAccessoryProfiles:(id)arg1;
- (void)setAccessoryReprovisionState:(unsigned long long)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAdditionalSetupStatus:(unsigned long long)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setAssociationOptions:(long long)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setBridgedAccessory:(bool)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCertificationStatus:(long long)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setControlTargetUUIDs:(id)arg1;
- (void)setControllable:(bool)arg1;
- (void)setCurrentAccessory:(bool)arg1;
- (void)setCurrentServices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setFirmwareUpdateAvailable:(bool)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsReprovisioning:(bool)arg1;
- (void)setPaired:(bool)arg1;
- (void)setReachable:(bool)arg1;
- (void)setReachableTransports:(long long)arg1;
- (void)setRemoteLoginHandler:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSoftwareUpdateController:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setStoreID:(id)arg1;
- (void)setSupportsIdentify:(bool)arg1;
- (void)setSupportsMediaAccessControl:(bool)arg1;
- (void)setSupportsTargetControl:(bool)arg1;
- (void)setSupportsTargetController:(bool)arg1;
- (void)setSymptomsHandler:(id)arg1;
- (void)setTransportTypes:(unsigned long long)arg1;
- (void)setUniqueIdentifiersForBridgedAccessories:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWifiNetworkInfo:(id)arg1;
- (id)settings;
- (id)softwareUpdateController;
- (id)softwareVersion;
- (id)storeID;
- (bool)supportsIdentify;
- (bool)supportsMediaAccessControl;
- (bool)supportsTargetControl;
- (bool)supportsTargetController;
- (id)symptomsHandler;
- (id)targetControllers;
- (unsigned long long)transportTypes;
- (id)uniqueIdentifier;
- (id)uniqueIdentifiersForBridgedAccessories;
- (void)updateAccessoryInfo:(id)arg1;
- (void)updateAccessoryName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;
- (id)wifiNetworkInfo;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (void)_pushSymptomUpdate;
- (id)accessories;
- (long long)hf_appPunchOutReason;
- (id)hf_componentServices;
- (id)hf_dateAdded;
- (id)hf_defaultName;
- (id)hf_displayName;
- (id)hf_displayNamesForVisibleTiles;
- (id)hf_editingName;
- (id)hf_fakeDebugSymptoms;
- (bool)hf_fakeGeneralFixSymptom;
- (bool)hf_fakeHardwareFixSymptom;
- (bool)hf_fakeHomeKitSymptom;
- (bool)hf_fakeICloudSymptom;
- (bool)hf_fakeITunesSymptom;
- (bool)hf_fakeInternetFixSymptom;
- (bool)hf_fakeShouldDisplayManualFixOption;
- (bool)hf_fakeUnreachableError;
- (bool)hf_fakeVPNProfileExpired;
- (bool)hf_fakeWiFiMismatchSymptom;
- (bool)hf_fakeWiFiPerformanceSymptom;
- (bool)hf_fakeWiFiSymptom;
- (bool)hf_hasSetFavorite;
- (id)hf_identifyHomePod;
- (bool)hf_isAirPortExtremeSpeaker;
- (bool)hf_isAppleTV;
- (bool)hf_isBridge;
- (bool)hf_isCamera;
- (bool)hf_isDumbSpeaker;
- (bool)hf_isFavorite;
- (bool)hf_isHomePod;
- (bool)hf_isMediaAccessory;
- (bool)hf_isProgrammableSwitch;
- (bool)hf_isRemoteControl;
- (bool)hf_isValidObject;
- (bool)hf_isVisibleAsBridge;
- (id)hf_linkedResidentDevice;
- (unsigned long long)hf_mediaAccessControlCapabilities;
- (bool)hf_needsReprovisioningCheck;
- (bool)hf_needsSoftwareUpdateToSupportBeingAddedToMediaSystem;
- (unsigned long long)hf_numberOfProgrammableSwitches;
- (id)hf_owningBridgeAccessory;
- (id)hf_parentRoom;
- (id)hf_programmableSwitchNamespaceServices;
- (bool)hf_requiresFirmwareUpdate;
- (id)hf_serviceNameComponents;
- (id)hf_serviceOfType:(id)arg1;
- (id)hf_servicesBehindBridge;
- (bool)hf_shouldDisplayManualFixOptionForSymptom:(long long)arg1;
- (bool)hf_shouldShowInFavorites;
- (bool)hf_shouldShowSoftwareUpdateInfo;
- (id)hf_standardServices;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;
- (id)hf_visibleServices;
- (void)setHf_fakeWiFiMismatchSymptom:(bool)arg1;

@end
