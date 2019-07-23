/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {
    NSOperationQueue * _motionEventQueue;
    CMMotionManager * _motionManager;
}

- (void).cxx_destruct;
- (id)currentEvent;
- (void)dealloc;
- (double)fastUpdateIntervalForLogs;
- (id)init;
- (void)setSlowUpdatesEnabled:(BOOL)arg1;
- (BOOL)shouldLogEvents;
- (double)slowUpdateIntervalForLogs;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;

@end
