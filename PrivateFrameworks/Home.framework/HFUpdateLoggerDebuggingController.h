/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUpdateLoggerDebuggingController : NSObject {
    NSMutableDictionary * __queue_historyStringsKeyedByLogger;
    int  __queue_iteration;
    NSHashTable * __queue_runningLoggers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *_queue_historyStringsKeyedByLogger;
@property (nonatomic) int _queue_iteration;
@property (nonatomic, retain) NSHashTable *_queue_runningLoggers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_sharedInstance;

- (void).cxx_destruct;
- (void)_addRunningLogger:(id)arg1;
- (id)_historyStrings;
- (id)_queue_historyStringsKeyedByLogger;
- (int)_queue_iteration;
- (id)_queue_runningLoggers;
- (void)_removeRunningLogger:(id)arg1;
- (id)_runningLoggerStrings;
- (id)_runningLoggers;
- (id)init;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)set_queue_historyStringsKeyedByLogger:(id)arg1;
- (void)set_queue_iteration:(int)arg1;
- (void)set_queue_runningLoggers:(id)arg1;

@end
