/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

@interface PIOperationSubclass : PIOperation {
    id /* block */  _finishBlock;
}

@property (nonatomic, readonly, copy) id /* block */ finishBlock;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_didFinish;
- (void)cancel;
- (id /* block */)cancellationBlock;
- (void)cleanup;
- (void)execute;
- (id /* block */)executionBlock;
- (id /* block */)finishBlock;

@end
