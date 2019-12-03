/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDBadgeUtilities : NSObject {
    bool  _addedObserverForUnexpectedlyLoggedOut;
    bool  _isUnexpectedlyLogOut;
    long long  _lastFailedMessageDate;
    UNUserNotificationCenter * _notificationCenter;
    IMDefaults * _sharedDefaultsInstance;
    bool  _showingFailure;
    unsigned long long  _unreadCount;
}

@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (nonatomic, retain) IMDefaults *sharedDefaultsInstance;

+ (id)_accountsArrayForServiceIMessage;
+ (bool)_iMessageEnabled;
+ (bool)_iMessageFailedAccountIsIrreparable;
+ (bool)_isTryingToLogin;
+ (bool)_isUsableSendingForAccount:(id)arg1;
+ (bool)_isUserIntentNotLoggedOut;
+ (id)sharedInstance;

- (void)_cacheFailureDate:(long long)arg1;
- (void)_checkIfUnexpectedlyLoggedOut;
- (void)_clearFailureBadge;
- (void)_compareLastFailureDateAndUpdateBadge:(long long)arg1;
- (void)_handleUnexpectedLogout;
- (bool)_isUnexpectedlyLogOutValue;
- (bool)_isUnexpectedlyLoggedOut;
- (void)_postBadgeNumber:(id)arg1;
- (void)_postBadgeString:(id)arg1;
- (void)_saveFailureDate:(long long)arg1;
- (long long)_savedFailureDate;
- (bool)_shouldShowFailureString;
- (void)_stopSuppressingSound;
- (void)_updateBadge;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (void)dealloc;
- (id)init;
- (id)initWithMessageStore:(id)arg1;
- (id)initWithMessageStore:(id)arg1 defaultsStore:(id)arg2;
- (bool)isInAppleStoreDemoMode;
- (id)notificationCenter;
- (void)setNotificationCenter:(id)arg1;
- (void)setSharedDefaultsInstance:(id)arg1;
- (id)sharedDefaultsInstance;
- (void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)arg1;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)arg1;

@end
