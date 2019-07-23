/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUILocationServicesListController : PSListController <FMFSessionDelegate> {
    ACAccountStore *_accountStore;
    NSMutableDictionary *_coalesceAppKeys;
    NSMutableArray *_coalescedSystemServices;
    BOOL _deferredRefreshDueToConfirm;
    NSArray *_ignoredLocationEntities;
    NSDictionary *_locationEntitiesDetails;
    BOOL _locationNotificationsEnabled;
    FMFDevice *_locationSharingDevice;
    NSNumber *_locationSharingEnabled;
    NSOperationQueue *_locationSharingOperationQueue;
    FMFSession *_locationSharingSession;
    ACAccount *_primaryAccount;
    NSDate *_twentyFourHoursAgo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)isCoreRoutineAuthorized;
+ (BOOL)isLocationRestricted;
+ (void)setCoreRoutineAuthorized:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_cancelConfirmDisableForSpecifier:(id)arg1;
- (BOOL)_isBundleBlacklisted:(id)arg1;
- (BOOL)_isFindMyDeviceSpecifier:(id)arg1;
- (void)_locationSharingSpecifierWasTapped:(id)arg1;
- (void)_setEntityAuthorized:(BOOL)arg1 specifier:(id)arg2;
- (void)_setLocationServicesEnabled:(BOOL)arg1;
- (BOOL)_shouldEnableLocationSharingSpecifier;
- (id)accountStore;
- (void)connectionError:(id)arg1;
- (void)dealloc;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didUpdateHidingStatus:(BOOL)arg1;
- (void)disableAfterLoginConfirmation:(id)arg1;
- (id)hiddenBundleIdentifiers;
- (id)init;
- (id)isEntityAuthorized:(id)arg1;
- (id)isLocationServicesEnabled:(id)arg1;
- (BOOL)isLocationSharingEnabled;
- (BOOL)isLocationSharingModificationAllowed;
- (id)localizedDisplayNameForBundleID:(id)arg1;
- (id)locationDetailSpecifiers;
- (id)locationSharingDevice;
- (id)locationSharingOperationQueue;
- (id)locationSharingSession;
- (id)locationSharingSpecifiers;
- (unsigned long long)locationSharingTimeout;
- (int)locationUsageBasedOnDetails:(id)arg1;
- (int)locationUsageForEntity:(id)arg1;
- (void)mainThreadConnectionError:(id)arg1;
- (void)mainThreadDidChangeActiveLocationSharingDevice:(id)arg1;
- (void)mainThreadDidUpdateHidingStatus:(BOOL)arg1;
- (id)primaryAccount;
- (void)profileNotification:(id)arg1;
- (void)refreshLinkStatusInParent;
- (void)setAuthLevel:(unsigned int)arg1 forCell:(id)arg2;
- (void)setEntityAuthorized:(id)arg1 specifier:(id)arg2;
- (void)setLocationServicesEnabled:(id)arg1 specifier:(id)arg2;
- (void)setUsage:(int)arg1 forCell:(id)arg2;
- (void)showLocationPrivacyPage;
- (id)specifiers;
- (void)startLocationStatusUpdates;
- (void)stopLocationStatusUpdates;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateFindMyFriendsStateBasedOnRestriction;
- (void)updateForApplicationDidBecomeActive:(id)arg1;
- (void)updateLocationSharingSpecifiersWithReload:(BOOL)arg1;
- (void)updateLocationUsage;
- (void)updateMutableStateBasedOnRestriction;
- (void)updateMutableStateForLocationSharing;
- (void)updateRecentlyUsedDate;
- (void)updateSpecifiersForImposedSettings;
- (void)updateSpecifiersForImposedSettingsWithReload:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willBecomeActive;

@end
