/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUOperationQueue : NSOperationQueue {
    <MPUOperationQueueDelegate> *_delegate;
}

@property (nonatomic) <MPUOperationQueueDelegate> *delegate;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
