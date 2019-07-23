/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTGCDTaskScheduler : NSObject <MTTaskScheduler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_scheduleTask:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)scheduleTask:(id)arg1;
- (void)scheduleTaskGroup:(id)arg1;

@end
