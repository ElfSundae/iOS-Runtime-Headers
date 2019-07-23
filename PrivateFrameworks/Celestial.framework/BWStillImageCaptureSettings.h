/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCaptureSettings : NSObject {
    NSArray * _captureStreamSettings;
    int  _captureType;
    BOOL  _deliverOriginalImage;
    BOOL  _deliverProcessedImage;
    BOOL  _deliverSushiRaw;
}

@property (nonatomic, readonly) NSArray *captureStreamSettings;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) BOOL deliverOriginalImage;
@property (nonatomic, readonly) BOOL deliverProcessedImage;
@property (nonatomic, readonly) BOOL deliverSushiRaw;
@property (nonatomic, readonly) int expectedClientImageCount;
@property (getter=isMultiCameraCaptureAndFusion, nonatomic, readonly) BOOL multiCameraCaptureAndFusion;

- (id)captureStreamSettings;
- (id)captureStreamSettingsForPortType:(id)arg1;
- (int)captureType;
- (void)dealloc;
- (BOOL)deliverOriginalImage;
- (BOOL)deliverProcessedImage;
- (BOOL)deliverSushiRaw;
- (id)description;
- (int)expectedClientImageCount;
- (id)initWithCaptureType:(int)arg1 deliverProcessedImage:(BOOL)arg2 deliverOriginalImage:(BOOL)arg3 deliverSushiRaw:(BOOL)arg4 captureStreamSettings:(id)arg5;
- (BOOL)isMultiCameraCaptureAndFusion;

@end
