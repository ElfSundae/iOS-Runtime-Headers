/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssertionManager : NSObject {
    NSObject<OS_dispatch_queue> * _assertionExpirationQueue;
    NSMutableDictionary * _assertionRecordsByIdentifier;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _observerSetsByAssertionIdentifier;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *assertionExpirationQueue;

- (void).cxx_destruct;
- (void)_lock_enumerateActiveAssertionsWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)_postNotification:(id)arg1 forAssertion:(id)arg2;
- (void)_releaseAssertion:(id)arg1;
- (id)activeAssertionsForIdentifier:(id)arg1;
- (void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2 queue:(id)arg3;
- (id)assertionExpirationQueue;
- (void)dealloc;
- (bool)hasActiveAssertionForIdentifier:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)ownerIdentifiersForAssertionIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2;
- (bool)takeAssertion:(id)arg1;

@end
