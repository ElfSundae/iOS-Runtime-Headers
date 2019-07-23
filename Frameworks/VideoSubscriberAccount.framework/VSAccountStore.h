/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAccountStore : NSObject <MCProfileConnectionObserver, VSRemoteNotifierDelegate> {
    BOOL  _accountModificationAllowed;
    id  _changeObserver;
    VSKeychainEditingContext * _keychainEditingContext;
    MCProfileConnection * _profileConnection;
    VSRemoteNotifier * _remoteNotifier;
}

@property (getter=isAcountModificationAllowed, nonatomic) BOOL accountModificationAllowed;
@property (nonatomic, readonly, copy) NSArray *accounts;
@property (nonatomic) id changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) VSKeychainEditingContext *keychainEditingContext;
@property (nonatomic, retain) MCProfileConnection *profileConnection;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (readonly) Class superclass;

+ (Class)accountClass;

- (void).cxx_destruct;
- (id)_accountForKeychainItem:(id)arg1;
- (id)_keychainItemsWithLimit:(unsigned int)arg1;
- (void)_sendLocalNotification;
- (void)_sendRemoteNotification;
- (void)_updateAccountModificationAllowed;
- (id)accounts;
- (id)changeObserver;
- (void)dealloc;
- (id)firstAccount;
- (id)init;
- (BOOL)isAcountModificationAllowed;
- (id)keychainEditingContext;
- (id)profileConnection;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setAccountModificationAllowed:(BOOL)arg1;
- (void)setChangeObserver:(id)arg1;
- (void)setKeychainEditingContext:(id)arg1;
- (void)setProfileConnection:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;

@end
