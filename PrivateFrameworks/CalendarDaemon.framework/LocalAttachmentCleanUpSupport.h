/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface LocalAttachmentCleanUpSupport : NSObject {
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (void)_dispatchCleanupAfterDelay:(long long)arg1;
- (void)_setTimerOnSource:(long long)arg1;
- (void)cleanUpOrphanedFiles;
- (void)dealloc;
- (id)init;
- (void)interruptNextScheduledCleanup;
- (void)scheduleNextCleanup;

@end
