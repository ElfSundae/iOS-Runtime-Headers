/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject {
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
    FigVisionDataCaptureConnectionConfiguration * _visionDataConnectionConfiguration;
}

@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic, readonly) FigVisionDataCaptureConnectionConfiguration *visionDataConnectionConfiguration;

- (void)dealloc;
- (id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2;
- (id)videoDataConnectionConfiguration;
- (id)visionDataConnectionConfiguration;

@end
