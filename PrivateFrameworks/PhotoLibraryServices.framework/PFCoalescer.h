/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFCoalescer : NSObject {
    id /* block */ _action;
    id _buffer;
    PFCoalescerContext *_context;
    long long _fireSequenceNumber;
    double _initialDelay;
    BOOL _initialDelayTimerIsArmed;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    int _mode;
    int _queueType;
    long long _sequenceNumber;
    id /* block */ _snapshotAndDrainHandler;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_sourceQueue;
    id _target;
    id _targetQueue;
    BOOL _usesTarget;
}

@property (copy) id /* block */ action;
@property (retain) id buffer;
@property (retain) PFCoalescerContext *context;
@property double initialDelay;
@property BOOL initialDelayTimerIsArmed;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property int mode;
@property int queueType;
@property (copy) id /* block */ snapshotAndDrainHandler;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (retain) NSObject<OS_dispatch_queue> *sourceQueue;
@property id target;
@property (retain) id targetQueue;
@property BOOL usesTarget;

+ (id)arrayCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(id /* block */)arg3;
+ (id)arrayCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;
+ (id)coalescerWithLabel:(id)arg1 queue:(id)arg2 action:(id /* block */)arg3;
+ (id)coalescerWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(id /* block */)arg5 action:(id /* block */)arg6;
+ (id)coalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;
+ (id)dictionaryCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(id /* block */)arg3;
+ (id)dictionaryCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;
+ (id /* block */)mutableCollectionBufferDrainer;
+ (id)mutableContainerCoalescerWithLabel:(id)arg1 container:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;
+ (id)mutableContainerCoalescerWithLabel:(id)arg1 target:(id)arg2 container:(id)arg3 queue:(id)arg4 action:(id /* block */)arg5;
+ (id)setCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(id /* block */)arg3;
+ (id)setCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)buffer;
- (id)context;
- (void)dispatch_after:(unsigned long long)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)init;
- (id)initWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(id /* block */)arg5 action:(id /* block */)arg6;
- (double)initialDelay;
- (BOOL)initialDelayTimerIsArmed;
- (id)isolationQueue;
- (int)mode;
- (int)queueType;
- (void)setAction:(id /* block */)arg1;
- (void)setBuffer:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setInitialDelay:(double)arg1;
- (void)setInitialDelayTimerIsArmed:(BOOL)arg1;
- (void)setIsolationQueue:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setQueueType:(int)arg1;
- (void)setSnapshotAndDrainHandler:(id /* block */)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceQueue:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setUsesTarget:(BOOL)arg1;
- (id /* block */)snapshotAndDrainHandler;
- (id)source;
- (id)sourceQueue;
- (id)target;
- (id)targetQueue;
- (void)update;
- (void)update:(id /* block */)arg1;
- (BOOL)usesTarget;

@end
