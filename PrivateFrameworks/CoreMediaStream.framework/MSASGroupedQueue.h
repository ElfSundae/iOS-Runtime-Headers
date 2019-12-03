/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASGroupedQueue : NSObject {
    MSTimerGate * _idleTimerGate;
    bool  _isAssertingBusyAssertion;
    bool  _isShuttingDown;
    int  _maxGroupedCallbackEventBatchCount;
    double  _maxGroupedCallbackEventIdleInterval;
    double  _maxGroupedCallbackEventStaleness;
    NSObject<OS_dispatch_queue> * _memberQueue;
    MSASServerSideModel * _model;
    MSTimerGate * _stalenessTimerGate;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) MSTimerGate *idleTimerGate;
@property (nonatomic, readonly) bool isAssertingBusyAssertion;
@property (nonatomic) bool isShuttingDown;
@property (nonatomic) int maxGroupedCallbackEventBatchCount;
@property (nonatomic) double maxGroupedCallbackEventIdleInterval;
@property (nonatomic) double maxGroupedCallbackEventStaleness;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) MSASServerSideModel *model;
@property (nonatomic, retain) MSTimerGate *stalenessTimerGate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)assertBusyAssertion;
- (void)deassertBusyAssertion;
- (void)flushQueueCompletionBlock:(id /* block */)arg1;
- (bool)hasEnqueuedItems;
- (id)idleTimerGate;
- (id)init;
- (bool)isAssertingBusyAssertion;
- (bool)isShuttingDown;
- (int)maxGroupedCallbackEventBatchCount;
- (double)maxGroupedCallbackEventIdleInterval;
- (double)maxGroupedCallbackEventStaleness;
- (id)memberQueue;
- (bool)memberQueueIsAssertingBusyAssertion;
- (void)memberQueueSetIsAssertingBusyAssertion:(bool)arg1;
- (id)model;
- (void)setIdleTimerGate:(id)arg1;
- (void)setIsShuttingDown:(bool)arg1;
- (void)setMaxGroupedCallbackEventBatchCount:(int)arg1;
- (void)setMaxGroupedCallbackEventIdleInterval:(double)arg1;
- (void)setMaxGroupedCallbackEventStaleness:(double)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setStalenessTimerGate:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)shutDownFlush:(bool)arg1 completionBlock:(id /* block */)arg2;
- (id)stalenessTimerGate;
- (id)workQueue;
- (void)workQueueAssertBusyAssertion;
- (void)workQueueClearIdleTimer;
- (void)workQueueClearStalenessTimer;
- (void)workQueueDeassertBusyAssertion;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueDidEnqueueSubsequentItem;
- (void)workQueueFlushQueue;
- (void)workQueueRestartIdleTimer;
- (void)workQueueRestartStalenessTimer;

@end
