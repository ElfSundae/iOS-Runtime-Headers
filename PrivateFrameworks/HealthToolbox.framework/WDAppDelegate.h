/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDAppDelegate : UIResponder <HKProfileIconObserver, UIApplicationDelegate, WDFavoriteDisplayTypesControllerObserver> {
    WDHealthDataViewController * _healthDataViewController;
    HKNavigationController * _medicalIDNavigationController;
    WDProfile * _profile;
    HKNavigationController * _profileNavigationController;
    HKNavigationController * _sourcesNavigationController;
    WDTabBarController * _tabBarController;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

+ (id)currentDelegate;

- (void).cxx_destruct;
- (void)_buildUIWithProfile:(id)arg1;
- (void)_configureNotificationPolicies;
- (void)_configureUserActivityPolicies;
- (bool)_openURL:(id)arg1 options:(id)arg2;
- (void)_postAWDMetricForFinishedAddingAccount;
- (void)_postAWDMetricForUsingDeepLink;
- (void)_postAWDOnboardingMetricForType:(int)arg1;
- (bool)_restoreApplicationStateWithOnboardingUserActivity:(id)arg1;
- (void)_restoreApplicationStateWithUserActivity:(id)arg1;
- (void)_restoreToBaseStateAndSelectTabAtIndex:(long long)arg1;
- (id)_storeDemoModeFavoriteDisplayTypes;
- (bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id /* block */)arg3;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)didTapProfileIcon;
- (void)favoriteDisplayTypesControllerReady:(id)arg1;
- (void)openHealthAppURL:(id)arg1;
- (void)presentProfileViewController;
- (id)profile;
- (void)resetStoreDemoModeFavorites;
- (void)restoreStoreDemoModeFavoritesIfNeeded;
- (void)setWindow:(id)arg1;
- (id)tabBarController;
- (id)window;

@end
