/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomeKitDispatcher : NSObject <HFLocationSensingCoordinatorDelegate, HMAccessoryDelegatePrivate, HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegatePrivate, HMResidentDeviceDelegate> {
    NSHashTable * _accessoryObservers;
    NSMutableArray * _allHomesPromises;
    NSHashTable * _cameraObservers;
    BOOL  _hasLoadedHomes;
    HMHome * _home;
    int  _homeKitPreferencesChangedNotifyToken;
    HMHomeManager * _homeManager;
    NSHashTable * _homeManagerObservers;
    NSHashTable * _homeObservers;
    NSMutableArray * _homePromises;
    NSTimer * _homeSensingIdleTimer;
    HFLocationSensingCoordinator * _locationCoordinator;
    HMHome * _overrideHome;
    NSMutableDictionary * _remoteAccessStateByHomeID;
    NSHashTable * _residentDeviceObservers;
    HMHome * _selectedHome;
}

@property (nonatomic, retain) NSHashTable *accessoryObservers;
@property (nonatomic, readonly) NAFuture *allHomesFuture;
@property (nonatomic, retain) NSMutableArray *allHomesPromises;
@property (nonatomic, retain) NSHashTable *cameraObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasLoadedHomes;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, readonly) NAFuture *homeFuture;
@property (nonatomic) int homeKitPreferencesChangedNotifyToken;
@property (nonatomic, retain) HMHomeManager *homeManager;
@property (nonatomic, retain) NSHashTable *homeManagerObservers;
@property (nonatomic, retain) NSHashTable *homeObservers;
@property (nonatomic, retain) NSMutableArray *homePromises;
@property (nonatomic, retain) NSTimer *homeSensingIdleTimer;
@property (nonatomic, retain) HFLocationSensingCoordinator *locationCoordinator;
@property (nonatomic, readonly) NAFuture *locationSensingAvailableFuture;
@property (nonatomic, retain) HMHome *overrideHome;
@property (nonatomic, retain) NSMutableDictionary *remoteAccessStateByHomeID;
@property (nonatomic, retain) NSHashTable *residentDeviceObservers;
@property (nonatomic, retain) HMHome *selectedHome;
@property (nonatomic) BOOL selectedHomeFollowsLocation;
@property (readonly) Class superclass;

+ (unsigned int)_homeManagerCreationPolicy;
+ (id)sharedDispatcher;

- (void).cxx_destruct;
- (void)_createHomeManagerIfNecessary;
- (void)_finishAllHomesPromises:(id)arg1;
- (void)_finishHomePromises:(id)arg1;
- (id)_primaryHome;
- (void)_setDelegate:(id)arg1 forAccessoryHierarchy:(id)arg2;
- (void)_setDelegate:(id)arg1 forObjectsInHome:(id)arg2;
- (void)_setSelectedHome:(id)arg1 notifyAndSaveIfNecessary:(BOOL)arg2;
- (void)_updateRemoteAccessStateForHome:(id)arg1 notifyingObservers:(BOOL)arg2;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateBundleID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(BOOL)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateStoreID:(id)arg2;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (id)accessoryObservers;
- (void)addAccessoryObserver:(id)arg1;
- (void)addCameraObserver:(id)arg1;
- (void)addHomeManagerObserver:(id)arg1;
- (void)addHomeObserver:(id)arg1;
- (void)addResidentDeviceObserver:(id)arg1;
- (id)allHomesFuture;
- (id)allHomesPromises;
- (id)cameraObservers;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)coordinator:(id)arg1 homeSensingStatusDidChange:(BOOL)arg2;
- (void)coordinator:(id)arg1 locationSensingAvailabilityDidChange:(BOOL)arg2;
- (void)dealloc;
- (void)dispatchAccessoryObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchCameraObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchHomeManagerObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchHomeObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (BOOL)hasLoadedHomes;
- (id)home;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateLocation:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)homeDidUpdateName:(id)arg1;
- (id)homeFuture;
- (int)homeKitPreferencesChangedNotifyToken;
- (id)homeManager;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2;
- (void)homeManager:(id)arg1 didUpdateResidentEnabledForThisDevice:(BOOL)arg2;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned int)arg2;
- (void)homeManagerDidEndBatchNotifications:(id)arg1;
- (void)homeManagerDidUpdateApplicationData:(id)arg1;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (id)homeManagerObservers;
- (void)homeManagerWillStartBatchNotifications:(id)arg1;
- (id)homeObservers;
- (id)homePromises;
- (id)homeSensingActiveFuture;
- (id)homeSensingIdleTimer;
- (id)init;
- (id)locationCoordinator;
- (id)locationSensingAvailableFuture;
- (id)overrideHome;
- (id)remoteAccessStateByHomeID;
- (void)removeAccessoryObserver:(id)arg1;
- (void)removeCameraObserver:(id)arg1;
- (void)removeHomeManagerObserver:(id)arg1;
- (void)removeHomeObserver:(id)arg1;
- (void)removeResidentDeviceObserver:(id)arg1;
- (void)residentDevice:(id)arg1 didUpdateEnabled:(BOOL)arg2;
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned int)arg2;
- (id)residentDeviceObservers;
- (id)selectedHome;
- (BOOL)selectedHomeFollowsLocation;
- (void)setAccessoryObservers:(id)arg1;
- (void)setAllHomesPromises:(id)arg1;
- (void)setCameraObservers:(id)arg1;
- (void)setHasLoadedHomes:(BOOL)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeKitPreferencesChangedNotifyToken:(int)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setHomeManagerObservers:(id)arg1;
- (void)setHomeObservers:(id)arg1;
- (void)setHomePromises:(id)arg1;
- (void)setHomeSensingIdleTimer:(id)arg1;
- (void)setLocationCoordinator:(id)arg1;
- (void)setOverrideHome:(id)arg1;
- (void)setRemoteAccessStateByHomeID:(id)arg1;
- (void)setResidentDeviceObservers:(id)arg1;
- (void)setSelectedHome:(id)arg1;
- (void)setSelectedHomeFollowsLocation:(BOOL)arg1;
- (void)startHomeSensingIdleTimer;
- (void)updateHome;
- (void)updateSelectedHome;
- (void)updateStopHomeSensingIdleTimerState;
- (void)warmup;

@end
