/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate> {
    NSString * _currentTestName;
    NSDictionary * _currentTestOptions;
    BLActivityAlert * _iPhotoMigrationActivityAlert;
    BOOL  _isOnWifi;
    BOOL  _isReachable;
    int  _observeForRechabilityChanges;
    int  _photoStreamActivityToken;
    BOOL  _photoStreamIsBusy;
    BOOL  _receivingRemoteControlEvents;
    int  _sharedPhotoStreamActivityToken;
    int  _sharedPhotoStreamInvitationFailureToken;
    BOOL  _sharedPhotoStreamIsBusy;
    BOOL  _urlNeedsHandling;
    UIWindow * _window;
}

@property (nonatomic, retain) NSString *currentTestName;
@property (nonatomic, retain) NSDictionary *currentTestOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) BLActivityAlert *iPhotoMigrationActivityAlert;
@property (nonatomic, readonly) BOOL isOnWifi;
@property (nonatomic, readonly) BOOL isReachable;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

+ (void)initialize;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_cleanUpOutboundSharingAssets;
- (void)_finishExtendedTest;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_registerForPhotoStreamActivityNotifications;
- (void)_setImageOptions;
- (void)_startObservingReachabilityChanges;
- (void)_stopObservingReachabilityChanges;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_updateNetworkActivityIndicatorAsync;
- (void)_updatePhotoStreamProgressDisplay;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (void)_updateSuspensionSettings;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)currentTestName;
- (id)currentTestOptions;
- (void)dealloc;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void*)getSharedAddressBook;
- (id)getSharedContactStore;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification { }*)arg1 flags:(unsigned long)arg2;
- (id)iPhotoMigrationActivityAlert;
- (BOOL)isOnWifi;
- (BOOL)isReachable;
- (id)mainWindow;
- (void)photosPreferencesChanged;
- (id)rootViewController;
- (void)setCurrentTestName:(id)arg1;
- (void)setCurrentTestOptions:(id)arg1;
- (void)setIPhotoMigrationActivityAlert:(id)arg1;
- (void)setReceivingRemoteControlEvents:(BOOL)arg1;
- (void)sharedFinishedLaunching:(BOOL)arg1;
- (BOOL)shouldAllowSBAlertSupression;
- (BOOL)useCompatibleSuspensionAnimation;
- (BOOL)visitViewControllersWithBlock:(id /* block */)arg1;

@end
