/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMXPCNotificationsUtil : NSObject {
    NSMutableDictionary *_darwinNotificationHandlers;
    NSMutableDictionary *_distributedNotificationHandlers;
    NSObject<OS_dispatch_queue> *_modificationQueue;
}

@property (nonatomic, retain) NSMutableDictionary *darwinNotificationHandlers;
@property (nonatomic, retain) NSMutableDictionary *distributedNotificationHandlers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *modificationQueue;

+ (void)handleDarwinNotificationsWithHandlers:(id)arg1;
+ (void)handleDistributedNotificationsWithHandlers:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didReceiveDarwinNotification:(id)arg1;
- (void)_didReceiveDistributedNotification:(id)arg1 withContext:(id)arg2;
- (id)darwinNotificationHandlers;
- (void)deregisterHandlerForDarwinNotification:(id)arg1;
- (void)deregisterHandlerForDistributedNotification:(id)arg1;
- (id)distributedNotificationHandlers;
- (id)init;
- (BOOL)isHandlerRegisteredForDarwinNotification:(id)arg1;
- (BOOL)isHandlerRegisteredForDistributedNotification:(id)arg1;
- (id)modificationQueue;
- (void)registerHandler:(id /* block */)arg1 forDarwinNotification:(id)arg2;
- (void)registerHandler:(id /* block */)arg1 forDistributedNotification:(id)arg2;
- (void)setDarwinNotificationHandlers:(id)arg1;
- (void)setDistributedNotificationHandlers:(id)arg1;
- (void)setModificationQueue:(id)arg1;

@end
