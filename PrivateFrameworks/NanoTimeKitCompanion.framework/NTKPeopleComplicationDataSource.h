/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPeopleComplicationDataSource : NTKComplicationDataSource {
    NSString * _contactID;
    bool  _isPaused;
    bool  _needsInvalidation;
    NSObject<OS_dispatch_queue> * _queue;
    NTKPeopleComplicationEntry * _switcherEntry;
    NTKPeopleComplicationEntry * _timelineEntry;
}

+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_didReceiveContactsCachceChangedNotification;
- (void)_invalidateIfNeeded;
- (id)_loadTimelineEntry;
- (void)_queue_reloadTimelineEntry;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)lockedTemplate;
- (void)pause;
- (void)resume;
- (bool)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;

@end
