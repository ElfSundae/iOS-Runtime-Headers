/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSampleBufferSinkNode : BWSinkNode {
    bool  _aggdClientAppIsCameraOrMessages;
    bool  _aggdIsPhotoFormat;
    id /* block */  _sampleBufferAvailableHandler;
}

@property (nonatomic, copy) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (void)_reportAggdDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(struct opaqueCMSampleBuffer { }*)arg3;
- (bool)aggdClientAppIsCameraOrMessages;
- (bool)aggdIsPhotoFormat;
- (void)dealloc;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithInputMediaType:(unsigned int)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id /* block */)sampleBufferAvailableHandler;
- (void)setAggdClientAppIsCameraOrMessages:(bool)arg1;
- (void)setAggdIsPhotoFormat:(bool)arg1;
- (void)setSampleBufferAvailableHandler:(id /* block */)arg1;

@end
