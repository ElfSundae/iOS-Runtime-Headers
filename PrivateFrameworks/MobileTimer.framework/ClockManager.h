/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface ClockManager : NSObject <UNSNotificationSchedulerDelegate> {
    ObjectUpdates * _localNotificationUpdates;
    NSHashTable * _notificationObservers;
    UNSNotificationScheduler * _notificationScheduler;
    BOOL  _performingUpgrade;
    NSMutableArray * _scheduledLocalNotifications;
    BOOL  ignoringNotificationPostRequests;
    BOOL  runningInAssistantPlugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isIgnoringNotificationPostRequests, nonatomic) BOOL ignoringNotificationPostRequests;
@property (nonatomic, retain) NSHashTable *notificationObservers;
@property (nonatomic, retain) UNSNotificationScheduler *notificationScheduler;
@property (getter=isRunningInAssistantPlugin, nonatomic) BOOL runningInAssistantPlugin;
@property (nonatomic, readonly) NSArray *scheduledLocalNotificationsCache;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ObjectUpdates *updatesToLocalNotificationsCache;

+ (void)loadUserPreferences;
+ (void)saveAndNotifyForUserPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2;
+ (int)sectionFromClockAppURL:(id)arg1;
+ (id)sharedManager;
+ (id)urlForClockAppSection:(int)arg1;

- (void).cxx_destruct;
- (void)_refreshScheduledLocalNotificationsCacheWithNotifications:(id)arg1;
- (void)addNotificationObserver:(id)arg1;
- (void)cancelLocalNotification:(id)arg1;
- (void)cancelLocalNotifications:(id)arg1;
- (BOOL)discardOldVersion;
- (id)init;
- (BOOL)isIgnoringNotificationPostRequests;
- (BOOL)isRunningInAssistantPlugin;
- (id)notificationObservers;
- (id)notificationScheduler;
- (void)notificationScheduler:(id)arg1 didChangeScheduledLocalNotifications:(id)arg2;
- (void)postUserPreferencesChangedNotification;
- (void)refreshScheduledLocalNotificationsCache;
- (void)refreshScheduledLocalNotificationsCacheAsynchronouslyWithCompletion:(id /* block */)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (void)resetUpdatesToLocalNotificationsCache;
- (void)scheduleLocalNotification:(id)arg1;
- (void)scheduleLocalNotifications:(id)arg1;
- (id)scheduledLocalNotificationsCache;
- (void)setIgnoringNotificationPostRequests:(BOOL)arg1;
- (void)setNotificationObservers:(id)arg1;
- (void)setNotificationScheduler:(id)arg1;
- (void)setRunningInAssistantPlugin:(BOOL)arg1;
- (id)updatesToLocalNotificationsCache;
- (BOOL)upgrade;
- (BOOL)upgradeIfNeverAttempted;

@end
