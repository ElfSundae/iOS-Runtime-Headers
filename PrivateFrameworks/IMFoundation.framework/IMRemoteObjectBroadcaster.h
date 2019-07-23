/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRemoteObjectBroadcaster : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)defaultBroadcaster;

- (id)_queue;
- (void)blockUntilSendQueueIsEmpty;
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4;
- (id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;
- (void)dealloc;
- (void)flushProxy:(id)arg1;
- (id)init;

@end
