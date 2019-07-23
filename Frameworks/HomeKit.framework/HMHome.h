/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHome : NSObject <HFCharacteristicValueReader, HFCharacteristicValueWriter, HFReorderableHomeKitObject, HFStateDumpBuildable, HFWallaperHost, HMFMessageReceiver, HMMutableApplicationData, HMObjectMerge, NSSecureCoding, _HMLocationHandlerDelegate> {
    bool  _adminUser;
    HMApplicationData * _applicationData;
    bool  _automaticSoftwareUpdateEnabled;
    _HMContext * _context;
    HMMutableArray * _currentAccessories;
    HMMutableArray * _currentActionSets;
    HMMutableArray * _currentActions;
    HMMutableArray * _currentMediaSystems;
    HMMutableArray * _currentOutgoingInvitations;
    HMMutableArray * _currentResidentDevices;
    HMMutableArray * _currentRooms;
    HMMutableArray * _currentServiceGroups;
    HMMutableArray * _currentTriggerOwnedActionSets;
    HMMutableArray * _currentTriggers;
    HMUser * _currentUser;
    HMMutableArray * _currentUsers;
    HMMutableArray * _currentZones;
    <HMHomeDelegate> * _delegate;
    HMRoom * _homeAsRoom;
    unsigned long long  _homeHubState;
    CLLocation * _homeLocation;
    HMHomeManager * _homeManager;
    int  _locationAuthorization;
    HMFUnfairLock * _lock;
    NSString * _mediaPassword;
    bool  _mediaPeerToPeerEnabled;
    long long  _minimumMediaUserPrivilege;
    NSString * _name;
    bool  _notificationEnableRequested;
    bool  _notificationsEnabled;
    NSDate * _notificationsUpdatedTime;
    bool  _ownerUser;
    bool  _primary;
    <HMSetupRemoteService> * _setupRemoteViewController;
    HMSetupViewController * _setupViewController;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly, copy) NSArray *actionSets;
@property (getter=isAdminUser, nonatomic) bool adminUser;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (getter=isAutomaticSoftwareUpdateEnabled, readonly) bool automaticSoftwareUpdateEnabled;
@property (getter=isAutomaticSoftwareUpdateEnabled) bool automaticSoftwareUpdateEnabled;
@property (nonatomic, retain) _HMContext *context;
@property (nonatomic, retain) HMMutableArray *currentAccessories;
@property (nonatomic, retain) HMMutableArray *currentActionSets;
@property (nonatomic, retain) HMMutableArray *currentActions;
@property (nonatomic, retain) HMMutableArray *currentMediaSystems;
@property (nonatomic, retain) HMMutableArray *currentOutgoingInvitations;
@property (nonatomic, retain) HMMutableArray *currentResidentDevices;
@property (nonatomic, retain) HMMutableArray *currentRooms;
@property (nonatomic, retain) HMMutableArray *currentServiceGroups;
@property (nonatomic, retain) HMMutableArray *currentTriggerOwnedActionSets;
@property (nonatomic, retain) HMMutableArray *currentTriggers;
@property (nonatomic, readonly) HMUser *currentUser;
@property (nonatomic, retain) HMUser *currentUser;
@property (nonatomic, retain) HMMutableArray *currentUsers;
@property (nonatomic, retain) HMMutableArray *currentZones;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMHomeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly, copy) NSArray *hf_userNotificationServiceTopics;
@property (nonatomic, readonly) UIImage *hf_wallpaperImage;
@property (nonatomic, retain) HMRoom *homeAsRoom;
@property (nonatomic, readonly) unsigned long long homeHubState;
@property (nonatomic, retain) CLLocation *homeLocation;
@property (nonatomic) HMHomeManager *homeManager;
@property (nonatomic) int locationAuthorization;
@property (readonly, copy) NSString *mediaPassword;
@property (copy) NSString *mediaPassword;
@property (getter=isMediaPeerToPeerEnabled, readonly) bool mediaPeerToPeerEnabled;
@property (getter=isMediaPeerToPeerEnabled) bool mediaPeerToPeerEnabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) long long minimumMediaUserPrivilege;
@property long long minimumMediaUserPrivilege;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool notificationEnableRequested;
@property (getter=areNotificationsEnabled, nonatomic) bool notificationsEnabled;
@property (nonatomic, copy) NSDate *notificationsUpdatedTime;
@property (getter=isOwnerUser, nonatomic) bool ownerUser;
@property (getter=isPrimary, nonatomic) bool primary;
@property (nonatomic, readonly, copy) NSArray *rooms;
@property (nonatomic, readonly, copy) NSArray *serviceGroups;
@property (nonatomic) <HMSetupRemoteService> *setupRemoteViewController;
@property (nonatomic) HMSetupViewController *setupViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *triggerOwnedActionSets;
@property (nonatomic, readonly, copy) NSArray *triggers;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSArray *users;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly, copy) NSArray *zones;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)accessorySupportsMediaAccessControl:(id)arg1;
+ (id)generateMediaPasswordWithError:(id*)arg1;
+ (bool)isValidMediaPassword:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 homeManager:(id)arg2;
- (void)_acceptInvitation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addAccessory:(id)arg1 appID:(id)arg2 password:(id)arg3 setupCodeDeferred:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)_addActionSetWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addAndSetupAccessoriesWithSetupPayload:(id)arg1 browseRequest:(id)arg2 suggestedRoomName:(id)arg3 legacyAPI:(bool)arg4 trustedOrigin:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)_addIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_addRoomWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addServiceGroupWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addTrigger:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addTrigger:(id)arg1 triggerUUID:(id)arg2 message:(id)arg3;
- (void)_addUsersWithCompletionHandler:(id /* block */)arg1;
- (void)_addZoneWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_callProgressHandler:(id /* block */)arg1 updatingAccessoryDescription:(id)arg2 fromMessage:(id)arg3;
- (void)_cancelInvitation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_configureOutgoingInvitiation:(id)arg1;
- (void)_continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_createFailedAccessoriesListFromError:(id)arg1;
- (void)_enableNotification:(bool)arg1 forCharacteristics:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_enableNotifications:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_enableRemoteAccess:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_executeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_getContainerForAppData:(id)arg1;
- (void)_handleAccessoryAddedNotification:(id)arg1;
- (void)_handleAccessoryInfoUpdatedNotification:(id)arg1;
- (void)_handleAccessoryRemovedNotification:(id)arg1;
- (void)_handleAccessoryReprovisionStateUpdate:(id)arg1;
- (void)_handleAccessoryReprovisionedNotification:(id)arg1;
- (void)_handleActionSetAddedNotification:(id)arg1;
- (void)_handleActionSetRemovedNotification:(id)arg1;
- (void)_handleAddAccessoryProgressNotification:(id)arg1;
- (void)_handleAddedResidentDevice:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_handleBlockedStateNotification:(id)arg1;
- (void)_handleEventTriggerAddedNotification:(id)arg1;
- (void)_handleEventTriggerOwnerDeviceNotification:(id)arg1;
- (void)_handleEventTriggerOwnerUserNotification:(id)arg1;
- (void)_handleHomeHubStateUpdatedNotification:(id)arg1;
- (void)_handleHomeLocationUpdateNotificaton:(id)arg1;
- (void)_handleHomeRenamedNotification:(id)arg1;
- (void)_handleMediaSystemAddedNotification:(id)arg1;
- (void)_handleMediaSystemRemovedNotification:(id)arg1;
- (void)_handleMultipleCharacteristicValuesUpdated:(id)arg1;
- (void)_handleNotificationsEnabled:(id)arg1;
- (void)_handlePairedAccessoryErrorNotification:(id)arg1;
- (void)_handleRegisteredProgressNotification:(id)arg1;
- (void)_handleRemovedResidentDevice:(id)arg1;
- (void)_handleRequestAccessorySetupCodeRequestKey:(id)arg1;
- (void)_handleRoomAddedNotification:(id)arg1;
- (void)_handleRoomRemovedNotification:(id)arg1;
- (void)_handleRuntimeStateUpdate:(id)arg1;
- (void)_handleServiceGroupAddedNotification:(id)arg1;
- (void)_handleServiceGroupRemovedNotification:(id)arg1;
- (void)_handleTimerTriggerAddedNotification:(id)arg1;
- (void)_handleTriggerRemovedNotification:(id)arg1;
- (void)_handleUpdatedPresenceAuthNotification:(id)arg1;
- (void)_handleUpdatedPresenceComputeNotification:(id)arg1;
- (void)_handleUpdatedResidentDevice:(id)arg1;
- (void)_handleUpdatedUserAccessNotification:(id)arg1;
- (void)_handleUserAddedNotification:(id)arg1;
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;
- (void)_handleUserRemovedNotification:(id)arg1;
- (void)_handleZoneAddedNotification:(id)arg1;
- (void)_handleZoneRemovedNotification:(id)arg1;
- (void)_invalidate;
- (void)_inviteWithUserInformation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_invokeDelegateForAppData:(id)arg1;
- (void)_launchSetupViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_manageUsersWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)_mergeAccessoriesForMergeCollection:(id)arg1 currentAccessories:(id)arg2;
- (unsigned long long)_mergeCurrentHomeAccessoriesWithNewHomeAccessories:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeMediaSystemsWithNewMediaSystems:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeResidentDevicesWithNewHomeResidentDevices:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeRoomsWithNewHomeRooms:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeServiceGroupsWithNewHomeServiceGroups:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeTriggerOwnedActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeTriggersWithNewHomeTriggers:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeUsersWithNewHomeUsers:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeZonesWithNewHomeZones:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeRoomsForMergeCollection:(id)arg1 currentRooms:(id)arg2;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1;
- (void)_notifyDelegateOfAccessControlUpdateForUser:(id)arg1;
- (void)_notifyDelegateOfAddedMediaSystem:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdate;
- (void)_notifyDelegateOfAppDataUpdateForActionSet:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForRoom:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1;
- (void)_notifyDelegateOfHomeHubStateUpdate;
- (void)_notifyDelegateOfRemovedMediaSystem:(id)arg1;
- (void)_notifyDelegateOfTriggerAdded:(id)arg1;
- (void)_notifyDelegateOfTriggerRemoved:(id)arg1;
- (void)_notifyDelegateOfTriggerUpdated:(id)arg1;
- (void)_performBatchCharacteristicRequest:(id)arg1;
- (id)_privateDelegate;
- (void)_queryRemoteAccessWithCompletionHandler:(id /* block */)arg1;
- (void)_registerNotificationHandlers;
- (void)_removeAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_removeIncompatibleTrigger:(id)arg1;
- (void)_removeMediaSystem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeServiceGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeServices:(id)arg1;
- (void)_removeTrigger:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_reprovisionAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_retrieveLocation;
- (void)_setupBuiltinActionSets:(id)arg1;
- (void)_startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_startSearchForAccessoriesNeedingReprovisioning;
- (void)_unblockAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_unconfigureHome;
- (void)_updateApplicationData:(id)arg1 forAppDataContainerWithUUID:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_updateInvitation:(id)arg1 invitationState:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateLocation:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_userDidConfirmExecution:(bool)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)accessories;
- (id)accessoryWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (id)actionSets;
- (void)addAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addAccessoryWithSetupPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addActionSetWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addAndSetUpNewAccessoriesWithCompletionHandler:(id /* block */)arg1;
- (void)addAndSetupAccessoriesWithCompletionHandler:(id /* block */)arg1;
- (void)addAndSetupAccessoriesWithPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addAndSetupAccessoriesWithSetupPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addRoomWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addServiceGroupWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addTrigger:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addUser:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addUserWithCompletionHandler:(id /* block */)arg1;
- (void)addUserWithoutConfirmation:(id)arg1 privilege:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)addUsersWithCompletionHandler:(id /* block */)arg1;
- (void)addZoneWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)administrator;
- (id)applicationData;
- (bool)areNotificationsEnabled;
- (void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)builtinActionSetOfType:(id)arg1;
- (void)cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)context;
- (void)continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)controlTargets;
- (id)createActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (id)createAndAddActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (id)currentAccessories;
- (id)currentActionSets;
- (id)currentActions;
- (id)currentMediaSystems;
- (id)currentOutgoingInvitations;
- (id)currentResidentDevices;
- (id)currentRooms;
- (id)currentServiceGroups;
- (id)currentTriggerOwnedActionSets;
- (id)currentTriggers;
- (id)currentUser;
- (id)currentUsers;
- (id)currentZones;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didUpdateAuthorization:(int)arg1;
- (void)enableNotification:(bool)arg1 forCharacteristics:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)enableNotifications:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)enableRemoteAccess:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)executeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleDaemonInterruptedNotification:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (void)handleStartWithError:(id)arg1 response:(id)arg2;
- (void)handleUIApplicationWillResignActiveNotification:(id)arg1;
- (id)homeAccessControlForUser:(id)arg1;
- (id)homeAsRoom;
- (unsigned long long)homeHubState;
- (id)homeLocation;
- (id)homeManager;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2 homeAsRoomUUID:(id)arg3 homeAsRoomName:(id)arg4 actionSets:(id)arg5;
- (void)invalidate;
- (void)inviteUsers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)inviteUsersWithInviteInformation:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isAdminUser;
- (bool)isAutomaticSoftwareUpdateEnabled;
- (bool)isMediaPeerToPeerEnabled;
- (bool)isOwnerUser;
- (bool)isPrimary;
- (id)location;
- (int)locationAuthorization;
- (void)manageUsersWithCompletionHandler:(id /* block */)arg1;
- (id)mediaPassword;
- (id)mediaSystems;
- (void)mergeWithNewObjectNoMergeCount:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (long long)minimumMediaUserPrivilege;
- (id)name;
- (bool)notificationEnableRequested;
- (id)notificationsUpdatedTime;
- (void)notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1;
- (void)notifyDelegateOfAccessControlUpdateForUser:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForActionSet:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForRoom:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1;
- (void)notifyDelegatesOfExecution:(id)arg1 actionSet:(id)arg2;
- (id)outgoingInvitations;
- (id)owner;
- (void)performBatchCharacteristicRequest:(id)arg1;
- (void)queryRemoteAccessWithCompletionHandler:(id /* block */)arg1;
- (void)reEnableNotifications;
- (void)registerSetupProgressHandler:(id /* block */)arg1 forAccessory:(id)arg2;
- (void)removeAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeMediaSystem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeServiceGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeServices:(id)arg1;
- (void)removeTrigger:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reprovisionAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)residentDevices;
- (id)roomForEntireHome;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (void)sendConfigureBulletinNotification;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)serviceGroups;
- (id)servicesWithTypes:(id)arg1;
- (void)setAdminUser:(bool)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setAutomaticSoftwareUpdateEnabled:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentAccessories:(id)arg1;
- (void)setCurrentActionSets:(id)arg1;
- (void)setCurrentActions:(id)arg1;
- (void)setCurrentMediaSystems:(id)arg1;
- (void)setCurrentOutgoingInvitations:(id)arg1;
- (void)setCurrentResidentDevices:(id)arg1;
- (void)setCurrentRooms:(id)arg1;
- (void)setCurrentServiceGroups:(id)arg1;
- (void)setCurrentTriggerOwnedActionSets:(id)arg1;
- (void)setCurrentTriggers:(id)arg1;
- (void)setCurrentUser:(id)arg1;
- (void)setCurrentUsers:(id)arg1;
- (void)setCurrentZones:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeAsRoom:(id)arg1;
- (void)setHomeLocation:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLocationAuthorization:(int)arg1;
- (void)setMediaPassword:(id)arg1;
- (void)setMediaPeerToPeerEnabled:(bool)arg1;
- (void)setMinimumMediaUserPrivilege:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setNotificationEnableRequested:(bool)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setNotificationsUpdatedTime:(id)arg1;
- (void)setOwnerUser:(bool)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setSetupRemoteViewController:(id)arg1;
- (void)setSetupViewController:(id)arg1;
- (id)setupRemoteViewController;
- (id)setupViewController;
- (void)startDiscoveringSymptomsForNearbyDevices;
- (void)startPairingWithAccessory:(id)arg1 accessorySetupDescription:(id)arg2 setupRemoteViewController:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)startSearchForAccessoriesNeedingReprovisioning;
- (void)stopDiscoveringSymptomsForNearbyDevices;
- (id)targetControllers;
- (id)triggerOwnedActionSetWithUUID:(id)arg1;
- (id)triggerOwnedActionSets;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)triggers;
- (void)unblockAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unconfigureHome;
- (id)uniqueIdentifier;
- (void)updateAccessForUser:(id)arg1 administrator:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAccessForUser:(id)arg1 remoteAccess:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateApplicationData:(id)arg1 forActionSet:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateApplicationData:(id)arg1 forAppDataContainerWithUUID:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateApplicationData:(id)arg1 forRoom:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateApplicationData:(id)arg1 forServiceGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAutomaticSoftwareUpdateEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateForUser:(id)arg1 presenceAuthorizationStatus:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)updateMediaPassword:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateMediaPeerToPeerEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateMinimumMediaUserPrivilege:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)userDidConfirmExecution:(bool)arg1 ofTrigger:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)userDidConfirmExecution:(bool)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)userDidRespondToConsentRequestForSetupAccessoryDescription:(id)arg1 withResponse:(long long)arg2;
- (id)users;
- (id)uuid;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)zones;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_hf_appDataKeyForColorPaletteOfType:(unsigned long long)arg1;
+ (id)_hf_groupedServiceTypeTopics;
+ (id)_hf_standaloneTopicNameForPrimaryServiceType:(id)arg1;
+ (bool)hf_prefersAutoSynthesizedDescription;

- (id)_hf_accessoryTopics;
- (id)accessoriesSupportingSoftwareUpdate;
- (id)availableSoftwareUpdates;
- (id)hf_accessControlDescriptor;
- (id)hf_accessoriesMatchingCategoryType:(id)arg1;
- (id)hf_accessoryForSymptomsHandler:(id)arg1;
- (id)hf_accessoryWithDeviceIdentifier:(id)arg1;
- (id)hf_accessoryWithIdentifier:(id)arg1;
- (id)hf_actionSetWithUUID:(id)arg1;
- (id)hf_activeRooms;
- (id)hf_allBridgeAccessories;
- (id)hf_allCameraProfiles;
- (id)hf_allMediaProfiles;
- (id)hf_allNonEmptyActionSets;
- (id)hf_allObjectsAffectedByServiceTopic:(id)arg1;
- (id)hf_allProgrammableSwitchAccessories;
- (id)hf_allRooms;
- (id)hf_allServices;
- (id)hf_allTargetControlAccessories;
- (id)hf_allUsersIncludingCurrentUser;
- (id)hf_allVisibleServices;
- (id)hf_cameraProfileWithIdentifier:(id)arg1;
- (id)hf_cameraProfilesAffectedByServiceTopic:(id)arg1;
- (id)hf_characteristicValueManager;
- (id)hf_colorPalette;
- (id)hf_colorPaletteOfType:(unsigned long long)arg1;
- (bool)hf_currentUserIsAdministrator;
- (bool)hf_currentUserIsOwner;
- (id)hf_dateAdded;
- (id)hf_displayName;
- (id)hf_handleForUser:(id)arg1;
- (bool)hf_hasAcceptedTermsAndConditionsForHomePodVersion:(id)arg1;
- (bool)hf_hasMediaAccessories;
- (id)hf_home;
- (bool)hf_homeHasOnboarded;
- (bool)hf_isCurrentLocationHome;
- (bool)hf_isMediaAccessoryProfileValid:(id)arg1;
- (bool)hf_isPresenceAuthorizedForUser:(id)arg1;
- (bool)hf_isUserAtHome;
- (id)hf_markTermsAndConditionsAsAcceptedForHomePodWithLicenseAgreementVersion:(id)arg1;
- (id)hf_mediaAccessories;
- (id)hf_mediaProfileContainerForSymptomsHandler:(id)arg1;
- (id)hf_mediaSystemForAccessory:(id)arg1;
- (id)hf_mediaSystemForSymptomsHandler:(id)arg1;
- (id)hf_notesApplicationData;
- (id)hf_personalRequestAccessories;
- (id)hf_primaryResidentDevice;
- (unsigned long long)hf_remoteAccessState;
- (id)hf_reorderableActionSetsList;
- (id)hf_reorderableCamerasList;
- (id)hf_reorderableRoomsList;
- (id)hf_reorderableServicesList;
- (id)hf_roomWithIdentifier:(id)arg1;
- (id)hf_selectedRoom;
- (id)hf_serviceGroupsForService:(id)arg1;
- (id)hf_serviceWithIdentifier:(id)arg1;
- (id)hf_servicesAffectedByServiceTopic:(id)arg1;
- (id)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:(bool)arg1;
- (id)hf_setNotesApplicationData:(id)arg1;
- (void)hf_setSelectedRoom:(id)arg1;
- (bool)hf_shouldFavoriteHomeKitObjectByDefault:(id)arg1;
- (void)hf_startReprovisioningAccessory:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (bool)hf_supportsPerUserRemoteAccess;
- (bool)hf_supportsRemoteAccessRestrictions;
- (bool)hf_supportsSharedEventAutomation;
- (id)hf_updateAccessControlDescriptor:(id)arg1;
- (id)hf_updateAutomaticSoftwareUpdateEnabled:(bool)arg1;
- (id)hf_updateColorPalette:(id)arg1;
- (id)hf_updateColorPalette:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateWallpaperImage:(id)arg1;
- (id)hf_userForHandle:(id)arg1;
- (id)hf_userNotificationServiceTopics;
- (id)hf_userNotificationTopicForCameraProfile:(id)arg1;
- (id)hf_userNotificationTopicForObject:(id)arg1;
- (id)hf_userNotificationTopicForService:(id)arg1;
- (id)hf_wallpaperImage;
- (id)hf_zoneWithIdentifier:(id)arg1;

@end
