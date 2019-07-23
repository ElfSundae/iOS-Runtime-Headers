/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDispatchQueue : NSObject {
    BOOL  _cancelled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _dispatchQueueBlocks;
    unsigned int  _fifo;
    struct __CFBinaryHeap { } * _heap;
    NSObject<OS_dispatch_queue> * _lockQueue;
    BOOL  _suspended;
}

@property (getter=isCancelled, nonatomic) BOOL cancelled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSMutableDictionary *dispatchQueueBlocks;
@property (nonatomic, retain) struct __CFBinaryHeap { }*heap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lockQueue;
@property (getter=isSuspended, nonatomic) BOOL suspended;

+ (id)concurrentQueueWithDispatchPriority:(long)arg1;
+ (id)serialQueueWithDispatchPriority:(long)arg1;

- (void).cxx_destruct;
- (id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long)arg2;
- (void)addBlock:(id /* block */)arg1;
- (void)addBlock:(id /* block */)arg1 withQueuePriority:(int)arg2;
- (void)addBlock:(id /* block */)arg1 withQueuePriority:(int)arg2 forKey:(id)arg3;
- (id)allKeysOfOutstandingBlocks;
- (BOOL)containsOutstandingBlockForKey:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)dispatchQueueBlocks;
- (struct __CFBinaryHeap { }*)heap;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isSuspended;
- (id)lockQueue;
- (int)queuePriorityOfOutstandingBlockForKey:(id)arg1;
- (void)removeAllOutstandingBlocks;
- (void)removeOutstandingBlockForKey:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDispatchQueueBlocks:(id)arg1;
- (void)setHeap:(struct __CFBinaryHeap { }*)arg1;
- (void)setLockQueue:(id)arg1;
- (void)setQueuePriority:(int)arg1 ofOutstandingBlockForKey:(id)arg2;
- (void)setSuspended:(BOOL)arg1;

@end
