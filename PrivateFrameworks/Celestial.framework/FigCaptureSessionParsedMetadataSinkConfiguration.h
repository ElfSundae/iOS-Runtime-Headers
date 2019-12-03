/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionParsedMetadataSinkConfiguration : NSObject {
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    NSArray * _movieFileDetectedObjectMetadataConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration * _sceneClassifierConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
}

@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic, readonly) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;

- (void)dealloc;
- (id)initWithMetadataObjectConnectionConfiguration:(id)arg1 sceneClassifierConnectionConfiguration:(id)arg2 videoDataConnectionConfiguration:(id)arg3 videoPreviewSinkConnectionConfiguration:(id)arg4 movieFileDetectedObjectMetadataConnectionConfigurations:(id)arg5;
- (id)metadataObjectConnectionConfiguration;
- (id)movieFileDetectedObjectMetadataConnectionConfigurations;
- (id)sceneClassifierConnectionConfiguration;
- (id)videoDataConnectionConfiguration;
- (id)videoPreviewSinkConnectionConfiguration;

@end
