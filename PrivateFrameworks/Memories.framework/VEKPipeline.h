/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VEKPipeline : NSObject {
    VEKResult * _initialResult;
    id /* block */  _progressBlock;
    NSArray * _stages;
}

@property (nonatomic, retain) VEKResult *initialResult;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (copy) NSArray *stages;

- (void).cxx_destruct;
- (id)initWithStages:(id)arg1;
- (id)initialResult;
- (id /* block */)progressBlock;
- (id)runPipeline;
- (void)runPipelineWithOptions:(long long)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)setInitialResult:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setStages:(id)arg1;
- (id)stages;

@end
