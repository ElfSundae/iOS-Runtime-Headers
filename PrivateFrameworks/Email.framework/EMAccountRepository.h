/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMAccountRepository : EMRepository <EFLoggable, EMAccountRepositoryObserver> {
    NSMutableDictionary * _accounts;
    <EFCancelable> * _cancelable;
    EMRemoteConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <EFScheduler> * _observerScheduler;
    <EFScheduler> * _recoveryHandlerScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)_currentAccountsByObjectIDMap;
- (void)_fetchAccountsAndObserveChanges;
- (void)_postAccountChangedNotification;
- (id)accountForAccountIdentifier:(id)arg1;
- (id)accountForIdentifier:(id)arg1;
- (void)accountsAdded:(id)arg1;
- (void)accountsChanged:(id)arg1;
- (void)accountsRemoved:(id)arg1;
- (id)allAccounts;
- (void)dealloc;
- (id)deliveryAccounts;
- (void)didBeginObserving;
- (void)didEndObserving;
- (id)initInternal;
- (id)initWithRemoteConnection:(id)arg1;
- (id)receivingAccounts;

@end
