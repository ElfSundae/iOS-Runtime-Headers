/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigExternalVideoCaptureDevice : BWFigVideoCaptureDevice <FigCaptureExternalEAControlPipeDelegate> {
    int  _activeFormatIndex;
    NSObject<OS_dispatch_queue> * _bufferServicingQueue;
    NSNumber * _cameraID;
    unsigned int  _connectionID;
    FigCaptureExternalEAControlPipe * _controlPipe;
    unsigned char  _controlPipeMode;
    NSMutableDictionary * _currentExposureModes;
    NSMutableDictionary * _currentFocusModes;
    EAAccessory * _eaAccessory;
    id  _eaSession;
    struct _IAPCameraCapabilities { unsigned char x1[4]; unsigned char x2[3]; } * _iapOverEACapabilities;
    struct _IAPCameraProperties { unsigned short x1; unsigned short x2; unsigned char x3; struct _IAPCameraAreaOfInterest { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; } x4; unsigned char x5; struct _IAPCameraAreaOfInterest { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; } x6; unsigned int x7; unsigned int x8; } * _iapOverEAProperties;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _observedProperties;
    NSObject<OS_dispatch_queue> * _propQueue;
    struct _IAPCameraProperties { unsigned short x1; unsigned short x2; unsigned char x3; struct _IAPCameraAreaOfInterest { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; } x4; unsigned char x5; struct _IAPCameraAreaOfInterest { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; } x6; unsigned int x7; unsigned int x8; } * _properties;
    BOOL  _stillImageCaptureEnabled;
    id /* block */  _stillImageClientCallback;
    NSArray * _stillImageFormats;
    NSObject<OS_dispatch_queue> * _stillImageServicingQueue;
    BOOL  _streaming;
    id /* block */  _streamingClientCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)unregisterCallbacksForClient:(int)arg1;

- (float)ISO;
- (long)_attachMetadataFlatDictionaryToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_cameraInfoUpdated:(id)arg1;
- (void)_constructJPEGAndSendToHandler:(id)arg1;
- (void)_constructJPEGForStillImageAndSendToHandler:(id)arg1;
- (void)_parseCameraInformation:(struct _IAPPacket { unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; void *x5; }*)arg1;
- (void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2;
- (void)_sendCameraProperties:(id)arg1;
- (void)_sendCameraProperty:(id)arg1 _value:(id)arg2;
- (void)_sendCaptureStillImage;
- (void)_sendIAPOverEAWithMessage:(unsigned short)arg1;
- (void)_sendStartCameraInfo;
- (void)_sendStartLivePreview;
- (void)_sendStopCameraInfo;
- (void)_sendStopLivePreview;
- (void)_updateCameraCapabililtiesAndNotify:(id)arg1;
- (void)_updateCameraPropertiesAndNotify:(id)arg1;
- (long)_updateExposureRectIfNeededForZoomFactor:(float)arg1;
- (int)activeFormatIndex;
- (id)activePortTypes;
- (int)autoImageControlMode;
- (id)bufferServicingQueue;
- (id)cameraAlignmentInfo;
- (id)cameraInfoByPortTypeForSBPs;
- (id)cameraTuningParametersDictionary;
- (long)captureStillImageNowWithSettings:(id)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (void)disposeFigCaptureDevice;
- (void)drainNotifications;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (void)handleIncomingIAPOverEAPacket:(struct _IAPPacket { unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; void *x5; }*)arg1;
- (void)handleIncomingVideoBufferPacket:(id)arg1 msgID:(unsigned short)arg2;
- (id)initWithAttributes:(id)arg1 synchronizedStreamsAttributes:(id)arg2 forPID:(int)arg3 clientIDOut:(int*)arg4 deviceAvailabilityChangedHandler:(id /* block */)arg5;
- (BOOL)isPropertyObserved:(id)arg1;
- (float)lensPosition;
- (float)maximumFrameRate;
- (float)minimumFrameRate;
- (id)moduleInfoByPortType;
- (BOOL)providesPreBracketedEV0;
- (void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 commandID:(int)arg5;
- (void)registerForAEMatrixMetadata;
- (BOOL)registerStillImageBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (int)resolveStillImageCaptureTypeFromStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; float x23; int x24; int x25; float x26; int x27; int x28; int x29; long long x30; }*)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4 clientBracketMode:(int)arg5;
- (id)sensorIDDictionaryByPortType;
- (void)setActiveFormatIndex:(int)arg1;
- (BOOL)setAutoFlashEnabled:(BOOL)arg1 error:(id*)arg2;
- (long)setAutoImageControlMode:(int)arg1;
- (long)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (long)setAutomaticallyAdjustsTorch:(BOOL)arg1;
- (long)setExposureModeAutoWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (long)setExposureModeCustomWithExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5;
- (long)setExposureModeLocked;
- (long)setExposureTargetBias:(float)arg1 requestID:(int)arg2;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (long)setFaceDetectionDrivenImageProcessingMode:(int)arg1;
- (long)setFocusModeAutoWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 continuous:(BOOL)arg2 smooth:(BOOL)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5;
- (long)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2;
- (BOOL)setHDRSceneDetectionEnabled:(BOOL)arg1 error:(id*)arg2;
- (void)setISPZoomFactor:(float)arg1;
- (long)setImageControlMode:(int)arg1;
- (long)setLowLightBoostAutomaticallyEnabled:(BOOL)arg1 supportedForFormat:(BOOL)arg2;
- (void)setMaxTorchLevel:(float)arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setMinimumFrameRate:(float)arg1;
- (void)setOverscanPercentage:(struct CGSize { float x1; float x2; })arg1;
- (void)setProperty:(id)arg1 isObserved:(BOOL)arg2;
- (long)setProvidesStortorgetMetadata:(BOOL)arg1;
- (void)setStillImageCaptureEnabled:(BOOL)arg1;
- (void)setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1;
- (long)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (long)setTorchLevel:(float)arg1;
- (long)setWhiteBalanceModeAuto;
- (long)setWhiteBalanceModeLockedWithGains:(struct { float x1; float x2; float x3; })arg1 requestID:(int)arg2;
- (void)setZoomFactor:(float)arg1;
- (void)startCameraInfo;
- (BOOL)startStreamingToSampleBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (void)startupFaceDetectionIfNeeded;
- (BOOL)stillImageCaptureEnabled;
- (id)stillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; float x23; int x24; int x25; float x26; int x27; int x28; int x29; long long x30; }*)arg2 deliverOriginalImage:(BOOL)arg3 deliverSushiRaw:(BOOL)arg4 includePreBracketedEV0ForProcessing:(BOOL)arg5 clientBracketSettings:(id)arg6 stereoFusionMode:(int)arg7;
- (void)stopCameraInfo;
- (BOOL)stopStreamingToSampleBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (void)streamsReady;
- (id)supportedFormats;
- (void)unregisterForAEMatrixMetadata;
- (BOOL)unregisterStillImageBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (id)zoomCommandHandler;
- (void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(BOOL)arg3 rampCommandID:(int)arg4;
- (float)zoomFactor;

@end
