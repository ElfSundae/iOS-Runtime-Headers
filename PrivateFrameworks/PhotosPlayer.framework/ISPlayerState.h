/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerState : NSObject {
    NSString * _diagnosticLabel;
    float  _photoBlurRadius;
    float  _videoAlpha;
    float  _videoBlurRadius;
}

@property (nonatomic, readonly) NSString *diagnosticLabel;
@property (nonatomic, readonly) float photoBlurRadius;
@property (nonatomic, readonly) float videoAlpha;
@property (nonatomic, readonly) float videoBlurRadius;

+ (id)outputInfoWithPhotoBlurRadius:(float)arg1 videoAlpha:(float)arg2 videoBlurRadius:(float)arg3 label:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)diagnosticLabel;
- (id)initWithPhotoBlurRadius:(float)arg1 videoAlpha:(float)arg2 videoBlurRadius:(float)arg3 label:(id)arg4;
- (float)photoBlurRadius;
- (float)videoAlpha;
- (float)videoBlurRadius;

@end
