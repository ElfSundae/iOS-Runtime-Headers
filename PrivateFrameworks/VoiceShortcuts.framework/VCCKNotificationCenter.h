/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCKNotificationCenter : NSObject <APSConnectionDelegate> {
    APSConnection * _connection;
    NSHashTable * _observerTable;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _topic;
}

@property (nonatomic, readonly) APSConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observerTable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *topic;

+ (void)notificationCenterForContainer:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)connection;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)initWithEnvironment:(id)arg1;
- (bool)isEnabled;
- (id)observerTable;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (id)topic;

@end
