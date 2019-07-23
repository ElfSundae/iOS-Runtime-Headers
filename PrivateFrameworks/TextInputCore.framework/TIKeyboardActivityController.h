/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardActivityController : NSObject <TIKeyboardActivityControlling, TIKeyboardAssertionManagerDelegate> {
    unsigned long long  _activityState;
    bool  _hadRecentActivity;
    bool  _hasBackgroundActivity;
    long long  _inactiveMemoryPressureCount;
    NSTimer * _inactivityTimer;
    bool  _isDirty;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) unsigned long long activityState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *inactivityTimer;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

+ (double)defaultKeyboardIdleTimeoutInterval;
+ (double)keyboardIdleTimeoutInterval;
+ (void)setKeyboardIdleTimeoutInterval:(double)arg1;
+ (void)setSharedController:(id)arg1;
+ (id)sharedController;
+ (id)singletonInstance;

- (unsigned long long)activityState;
- (void)addActivityObserver:(id)arg1;
- (void)backgroundActivityAssertionsDidChange;
- (id)createMemoryPressureSource;
- (void)dealloc;
- (unsigned long long)getExcessMemoryInBytes;
- (void)handleMemoryStatusPressure:(unsigned long long)arg1;
- (id)inactivityTimer;
- (void)inactivityTimerFired:(id)arg1;
- (id)init;
- (void)keyboardAssertionsDidChange;
- (void)keyboardAssertionsDidChange:(id)arg1;
- (void)keyboardBackgroundActivityAssertionsDidChange:(id)arg1;
- (void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)notifyTransitionWithContext:(id)arg1;
- (id)observers;
- (void)removeActivityObserver:(id)arg1;
- (void)setInactivityTimer:(id)arg1;
- (void)setKeyboardCleanIfNecessary;
- (void)setKeyboardDirtyIfNecessary;
- (bool)shouldBecomeClean;
- (bool)shouldBecomeDirty;
- (void)touchInactivityTimer;
- (void)updateActivityState;

@end
