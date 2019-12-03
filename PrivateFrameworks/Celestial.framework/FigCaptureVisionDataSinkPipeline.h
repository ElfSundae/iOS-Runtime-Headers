/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVisionDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureStream * _captureStream;
    int  _sourceDeviceType;
    NSString * _sourceID;
}

@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) NSString *sourceID;

+ (void)initialize;

- (int)_buildVisionDataSinkPipeline:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 visionCaptureOutput:(id)arg4 clientPID:(id)arg5 delegate:(id)arg6;
- (void)dealloc;
- (id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 name:(id)arg4 visionCaptureOutput:(id)arg5 captureDevice:(id)arg6 clientPID:(id)arg7 delegate:(id)arg8;
- (void)setKeypointDetectionThreshold:(float)arg1;
- (int)sourceDeviceType;
- (id)sourceID;
- (void)triggerVisionDataBurst;

@end
