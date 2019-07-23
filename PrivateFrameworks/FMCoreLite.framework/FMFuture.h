/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMFuture : NSObject <FMPromise> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _completionBlocks;
    NSString * _descriptor;
    BOOL  _finished;
    NSError * _resultError;
    id  _resultValue;
}

@property (getter=isCancelled, readonly) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptor;
@property (getter=isFinished, readonly) BOOL finished;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_chainFuturesWithFutureStack:(id)arg1;
+ (id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3;
+ (id)chainFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3;
+ (id)combineAllFutures:(id)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(id /* block */)arg1;
+ (id)futureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;
+ (id)futureWithCompletionHandlerAdapterBlock:(id /* block */)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(id /* block */)arg1;
+ (id)futureWithNoResult;
+ (id)futureWithResult:(id)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;

- (void).cxx_destruct;
- (void)_flushCompletionBlocks;
- (BOOL)_queue_isCancelled;
- (id)addCompletionBlock:(id /* block */)arg1;
- (id)addFailureBlock:(id /* block */)arg1;
- (id)addSuccessBlock:(id /* block */)arg1;
- (BOOL)cancel;
- (id /* block */)completionHandlerAdapter;
- (id)description;
- (id)descriptor;
- (void)didCancel;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithNoResult;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(id /* block */)arg1;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (id)recover:(id /* block */)arg1;
- (id)recoverIgnoringError;
- (id)reschedule:(id)arg1;
- (void)setDescriptor:(id)arg1;

@end
