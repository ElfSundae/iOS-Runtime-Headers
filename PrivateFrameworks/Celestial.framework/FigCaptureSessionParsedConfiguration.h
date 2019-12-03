/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionParsedConfiguration : NSObject {
    NSArray * _audioDataSinkConnectionConfigurations;
    NSArray * _audioFileSinkConnectionConfigurations;
    bool  _empty;
    bool  _isMultiCamSession;
    NSArray * _metadataSourceConfigurations;
    NSArray * _parsedCameraSourceConfigurations;
    NSArray * _parsedDepthDataSinkConfigurations;
    NSArray * _parsedMetadataSinkConfigurations;
    FigCaptureSessionParsedMicSourceConfiguration * _parsedMicSourceConfiguration;
    NSArray * _parsedMovieFileSinkConfigurations;
    NSArray * _parsedPreviewSinkConfigurations;
    NSArray * _parsedStillImageSinkConfigurations;
    NSArray * _parsedVideoDataSinkConfigurations;
    NSArray * _parsedVisionDataSinkConfigurations;
    NSArray * _videoThumbnailSinkConfigurations;
}

@property (nonatomic, readonly) NSArray *audioDataSinkConnectionConfigurations;
@property (nonatomic, readonly) NSArray *audioFileSinkConnectionConfigurations;
@property (nonatomic, readonly) bool empty;
@property (nonatomic, readonly) NSArray *metadataSourceConfigurations;
@property (getter=isMultiCamSession, nonatomic, readonly) bool multiCamSession;
@property (nonatomic, readonly) NSArray *parsedCameraSourceConfigurations;
@property (nonatomic, readonly) NSArray *parsedDepthDataSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedMetadataSinkConfigurations;
@property (nonatomic, readonly) FigCaptureSessionParsedMicSourceConfiguration *parsedMicSourceConfiguration;
@property (nonatomic, readonly) NSArray *parsedMovieFileSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedPreviewSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedStillImageSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedVideoDataSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedVisionDataSinkConfigurations;
@property (nonatomic, readonly) NSArray *videoThumbnailSinkConfigurations;

+ (void)initialize;

- (int)_parseMultiCamConfiguration:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(bool)arg2;
- (id)audioDataSinkConnectionConfigurations;
- (id)audioFileSinkConnectionConfigurations;
- (void)dealloc;
- (bool)empty;
- (id)initWithSessionConfiguration:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(bool)arg2;
- (bool)isMultiCamSession;
- (id)metadataSourceConfigurations;
- (id)parsedCameraSourceConfigurations;
- (id)parsedDepthDataSinkConfigurations;
- (id)parsedMetadataSinkConfigurations;
- (id)parsedMicSourceConfiguration;
- (id)parsedMovieFileSinkConfigurations;
- (id)parsedPreviewSinkConfigurations;
- (id)parsedStillImageSinkConfigurations;
- (id)parsedVideoDataSinkConfigurations;
- (id)parsedVisionDataSinkConfigurations;
- (id)videoThumbnailSinkConfigurations;

@end
