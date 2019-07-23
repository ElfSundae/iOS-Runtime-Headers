/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioController : NSObject {
    NSObject<OS_dispatch_semaphore> * _modifyingStateLock;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *modifyingStateLock;

- (void).cxx_destruct;
- (void)_acquireLock;
- (void)_releaseLock;
- (void)_requestUpdatedValueWithBlock:(id /* block */)arg1 object:(id*)arg2 isRequestingPointer:(bool*)arg3 forceNewRequest:(bool)arg4 scheduleTimePointer:(unsigned long long*)arg5 notificationString:(id)arg6 queue:(id)arg7;
- (id)init;
- (id)modifyingStateLock;
- (void)setModifyingStateLock:(id)arg1;

@end
