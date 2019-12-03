/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARScreenRecorder : NSObject {
    AVAssetWriter * _assetWriter;
    NSURL * _fileURL;
    double  _firstFrameTime;
    AVAssetWriterInput * _imageInput;
    AVAssetWriterInputPixelBufferAdaptor * _imageInputAdaptor;
    bool  _isRecording;
    double  _previousFrameTime;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _writerQueue;
}

@property (nonatomic, retain) AVAssetWriter *assetWriter;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic) double firstFrameTime;
@property (nonatomic, retain) AVAssetWriterInput *imageInput;
@property (nonatomic, retain) AVAssetWriterInputPixelBufferAdaptor *imageInputAdaptor;
@property (nonatomic) bool isRecording;
@property (nonatomic) double previousFrameTime;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *writerQueue;

+ (id)sharedRecorder;

- (void).cxx_destruct;
- (void)_addImageStreamTrack:(id)arg1;
- (void)_appendFrame:(id)arg1 forTime:(double)arg2;
- (bool)_appendImageData:(id)arg1 forTime:(double)arg2;
- (void)_finishRecordingWithCompletionHandler:(id /* block */)arg1;
- (id)_recordingUrl;
- (void)_setupTracksWithImageHeight:(unsigned long long)arg1 width:(unsigned long long)arg2 time:(double)arg3;
- (void)_submitFrame:(id)arg1 forTime:(double)arg2;
- (void)_timerFired;
- (id)assetWriter;
- (id)fileURL;
- (double)firstFrameTime;
- (id)imageInput;
- (id)imageInputAdaptor;
- (id)init;
- (bool)isRecording;
- (double)previousFrameTime;
- (void)setAssetWriter:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFirstFrameTime:(double)arg1;
- (void)setImageInput:(id)arg1;
- (void)setImageInputAdaptor:(id)arg1;
- (void)setIsRecording:(bool)arg1;
- (void)setPreviousFrameTime:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)setWriterQueue:(id)arg1;
- (void)startRecordingWithHandler:(id /* block */)arg1;
- (void)stopCaptureWithHandler:(id /* block */)arg1;
- (void)stopRecordingAndSaveToCameraRoll:(id /* block */)arg1;
- (id)timer;
- (id)writerQueue;

@end
