/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMyriadMonitor : NSObject <AFNotifyObserverDelegate> {
    AFNotifyObserver * _beganObserver;
    struct __CFNotificationCenter { } * _center;
    NSMutableArray * _completions;
    AFNotifyObserver * _lostObserver;
    NSObject<OS_dispatch_queue> * _myriadMonitorQueue;
    long long  _state;
    NSObject<OS_dispatch_source> * _timer;
    AFNotifyObserver * _wonObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)clear;
+ (id)sharedMonitor;
+ (void)waitForMyriadDecisionWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_flushCompletions:(bool)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (void)clear;
- (void)dealloc;
- (id)init;
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;
- (void)resultSeenWithValue:(bool)arg1;
- (void)setDecisionIsPending;

@end
