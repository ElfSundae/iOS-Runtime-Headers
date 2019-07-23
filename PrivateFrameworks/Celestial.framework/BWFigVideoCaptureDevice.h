/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigVideoCaptureDevice : BWCaptureDevice <BWZoomCompletionDelegate> {
    float _ISO;
    int _activeFormatIndex;
    int _aeFrameWaitCount;
    int _aeRequestCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _aeRequestTime;
    BOOL _aeStable;
    BOOL _allowAEStableNotifications;
    BOOL _allowAWBStableNotifications;
    BOOL _attachMetadataFlatDictionary;
    NSDictionary *_attributes;
    NSData *_auditTokenData;
    BOOL _autoFlashEnabled;
    float _autoFlashNormalizedSNRThreshold;
    int _autoImageControlMode;
    BOOL _autoTorchEnabled;
    BOOL _autoTorchStatsCheckedForVideoRecording;
    NSMutableDictionary *_autofocusCachedPropertiesDictionary;
    struct OpaqueFigSampleBufferProcessor { } *_autofocusProcessor;
    NSObject<OS_dispatch_queue> *_autofocusProcessorQueue;
    struct OpaqueFigSimpleMutex { } *_autofocusStatusMutex;
    BOOL _awbStable;
    NSObject<OS_dispatch_queue> *_bufferServicingQueue;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cachedExposureRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cachedFocusRect;
    int _cameraAccessLock;
    int _clientPID;
    BOOL _clientProcessHasAccessToCamera;
    int _clientRetainedBufferCountHint;
    struct OpaqueCMClock { } *_clock;
    int (*_createAutofocusSampleBufferProcessorFunction;
    int _currentBiasedExposureCompletedID;
    struct { 
        double integrationTime; 
        float normalizedSNR; 
        float baseISO; 
        double exposureBias; 
        float gain; 
        unsigned int conversionGain; 
        unsigned int readNoise_1x; 
        unsigned int readNoise_8x; 
        unsigned int aeAvg; 
        unsigned char aeLimitsReached; 
        unsigned int motionDataStatus; 
        long long frameCount; 
    } _currentFrameStatistics;
    int _currentImageControlMode;
    int _currentManualExposureCompletedID;
    int _currentManualFocusCompletedID;
    int _currentManualWhiteBalanceCompletedID;
    BOOL _deferMetadataDictionaryCreation;
    struct OpaqueFigCaptureDevice { } *_device;
    BWDeviceMotionActivityDetector *_deviceMotionActivityDetector;
    int _deviceReleaseBehavior;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    } _deviceWhiteBalanceGains;
    NSMutableDictionary *_dutyCycleMetadataCache;
    BOOL _enableSphereWhenAvailable;
    int _expectedImagesOrErrorsForCaptureStillImageNow;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _exposureDuration;
    float _exposureTargetBias;
    float _exposureTargetOffset;
    NSDictionary *_faceDetectionConfiguration;
    BOOL _faceDetectionEnabled;
    BOOL _faceDetectionMetadataRequested;
    BOOL _feature1Enabled;
    struct OpaqueFigSampleBufferProcessor { } *_feature1Processor;
    NSObject<OS_dispatch_queue> *_feature1ProcessorQueue;
    BOOL _flashActive;
    NSObject<OS_dispatch_queue> *_focusAndExposureUpdateQueue;
    int _frameStatisticsLock;
    BOOL _fullRangeVideo;
    BOOL _grabNextFrame;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    } _grayWorldWhiteBalanceGains;
    BOOL _hasFlash;
    BOOL _hasNightMode;
    BOOL _hasSphere;
    BOOL _hdrScene;
    BOOL _hdrSceneDetectionEnabled;
    struct { 
        int width; 
        int height; 
    } _ispOutputDimensions;
    struct { 
        int width; 
        int height; 
    } _lastISPCropDimensions;
    float _lensPosition;
    BOOL _lowLightBoostActive;
    int _lowLightBoostLock;
    BOOL _lowLightBoostSupportedForFormat;
    struct OpaqueFigSimpleMutex { } *_manualPropertyMutex;
    struct { 
        int width; 
        int height; 
    } _maxISPCropDimensions;
    float _maxISPZoomFactor;
    float _maxTorchLevel;
    float _maximumFrameRate;
    struct OpaqueFigFlatDictionaryKeySpec { } *_metadataKeySpec;
    float _minimumFrameRate;
    BOOL _motionDataInvalid;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_observedProperties;
    struct CGSize { 
        float width; 
        float height; 
    } _overscanPercentage;
    struct __CFString { } *_portType;
    int _position;
    BOOL _providesPreBracketedEV0;
    BOOL _quadraHighResStillImageCaptureEnabled;
    float _quadraLowLightResampledNormalizedSNRThreshold;
    int _receivedImagesOrErrorsForCaptureStillImageNow;
    BOOL _retryCaptureStillImageNow;
    BOOL _retryCaptureUsesFlash;
    NSMutableDictionary *_retryStillImageCaptureOptions;
    int _skippedFramesCountForAF;
    BOOL _sphereEnabled;
    int _sphereLock;
    BOOL _sphereVideoEnabled;
    BOOL _sphereVideoSupported;
    id /* block */ _stillImageBufferTimeMachineHandler;
    <BWFigVideoDeviceStillImageCaptureDelegate> *_stillImageCaptureDelegate;
    NSObject<OS_dispatch_group> *_stillImageCaptureDelegateDispatchGroup;
    BOOL _stillImageCaptureEnabled;
    int _stillImageCaptureLock;
    NSMutableArray *_stillImageClientCallbacks;
    NSObject<OS_dispatch_queue> *_stillImageDispatchQueue;
    BOOL _stillImageISPChromaNoiseReductionEnabled;
    struct opaqueCMBufferQueue { } *_stillImageQueue;
    struct opaqueCMBufferQueueTriggerToken { } *_stillImageQueueTriggerToken;
    NSObject<OS_dispatch_queue> *_stillImageServicingQueue;
    BOOL _stillImageStabilizationAutomaticallyEnabled;
    double _stillImageStabilizationIntegrationTimeThreshold;
    int _stillImageStabilizationOverride;
    struct OpaqueFigCaptureStream { } *_stream;
    struct opaqueCMBufferQueue { } *_streamQueue;
    struct opaqueCMBufferQueueTriggerToken { } *_streamQueueTriggerToken;
    BOOL _streaming;
    NSMutableArray *_streamingClientCallbacks;
    NSArray *_supportedFormats;
    NSDictionary *_supportedProperties;
    BWStillImageTimeMachine *_timeMachine;
    int _timeMachineCapacity;
    BOOL _timeMachineEnabledForMultistream;
    BOOL _torchActive;
    float _torchLevel;
    struct OpaqueFigSimpleMutex { } *_torchLock;
    BOOL _useAutoImageControlMode;
    BOOL _usingMultipleStreamOutputs;
    NSMutableDictionary *_whiteBalanceGains;
    NSMutableArray *_whiteBalanceGainsOrderedKeys;
    NSObject<OS_dispatch_queue> *_whiteBalanceGainsQueue;
    int _whiteBalanceModeForExif;
    BWZoomCommandHandler *_zoomCommandHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceReleaseBehavior;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (struct __CFString { }*)_autofocusProcessorImageControlModeFromImageControlMode:(int)arg1;
+ (void)initialize;
+ (void)unregisterCallbacksForClient:(int)arg1;

- (float)ISO;
- (void)_addAutofocusAndDiagnosticMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addCaptureStreamAttachments:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addExifWhiteBalanceMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addFeature1ToMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (long)_attachMetadataFlatDictionaryToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_captureStillImageBracketNow:(int)arg1 bracketSettings:(id)arg2;
- (long)_captureStillImageNowOnStreamWithOptions:(id)arg1 flashMode:(BOOL)arg2;
- (void)_captureStillImageNowWithTimeMachineType:(int)arg1;
- (void)_captureStillImageWithFlashNow;
- (long)_copyAutofocusProcessorProperty:(struct __CFString { }*)arg1 propertyValueOut:(void*)arg2;
- (long)_copyAutofocusProcessorPropertyInternal:(struct __CFString { }*)arg1 propertyValueOut:(void*)arg2;
- (void)_didStartStreaming;
- (void)_didStopStreaming;
- (void)_emitStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromTimeMachine:(BOOL)arg2;
- (void)_emitVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_handleStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(long)arg2;
- (void)_handleVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_initWithFigCaptureDeviceRef:(struct OpaqueFigCaptureDevice { }*)arg1 figCaptureStreamRef:(struct OpaqueFigCaptureStream { }*)arg2 attributes:(id)arg3 clientAuditTokenData:(id)arg4 createAutofocusSampleBufferProcessorFunction:(int (*)arg5;
- (float)_ispAppliedZoomFromSampleBufferMetadataDictionary:(id)arg1;
- (void)_postManualControlRequestCompletedWithName:(id)arg1 requestID:(int)arg2 timeDictionary:(id)arg3 additionalPayloadItems:(id)arg4;
- (void)_postNotificationWithName:(id)arg1 payloadNewPropertyValue:(id)arg2;
- (void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2;
- (BOOL)_prepareStillImageQueue;
- (BOOL)_prepareStreamQueue;
- (void)_resetStillImageCaptureRequestState;
- (void)_serviceAutoTorchNotification;
- (void)_serviceCompletedRequestNotifications:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_serviceLowLightBoostActiveNotification:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_servicePropertyChangeNotifications:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_serviceZoomForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 updateISPZoom:(BOOL)arg2;
- (long)_setAutofocusProcessorImageControlModeProperty:(int)arg1;
- (long)_setAutofocusProcessorProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (long)_setAutofocusProcessorPropertyInternal:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (long)_setExposureModeAutoWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setFaceDetectionEnabled:(BOOL)arg1;
- (long)_setupAutofocusSampleBufferProcessor;
- (long)_setupFeature1SampleBufferProcessor;
- (BOOL)_shouldUseSphereForStillImageCaptureTakingIntoAccountExposureDuration:(BOOL)arg1 deviceMotionActivity:(BOOL)arg2;
- (void)_teardownAutoFocusSampleBufferProcessor;
- (void)_teardownFeature1SampleBufferProcessor;
- (BOOL)_unprepareStillImageQueue;
- (BOOL)_unprepareStreamQueue;
- (long)_updateAutoFocusRectIfNeededForZoomFactor:(float)arg1;
- (void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(int)arg1;
- (long)_updateExposureRectIfNeededForZoomFactor:(float)arg1;
- (void)_updateExposureStateForAutofocusProperty:(struct __CFString { }*)arg1;
- (long)_updateFaceDetectionConfigurationOnStream:(id)arg1;
- (void)_updateFaceDetectionStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateISPCropForZoomFactor:(float)arg1;
- (void)_updateImageControlModeStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateMotionDataStatus:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_updateSphereMode;
- (void)_updateWhiteBalanceStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateZoomCapabilitiesForActiveFormatIndex:(int)arg1;
- (void)_willStartStreaming;
- (int)activeFormatIndex;
- (int)autoImageControlMode;
- (id)bufferServicingQueue;
- (id)cameraTuningParametersDictionary;
- (void)captureQuadraResampledStillImageNow;
- (void)captureStillImageBracketNow:(int)arg1 bracketSettings:(id)arg2;
- (void)captureStillImageNow;
- (void)captureStillImageWithFlashNow;
- (int)clientRetainedBufferCountHint;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (int)deviceReleaseBehavior;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (void)disposeFigCaptureDevice;
- (void)drainNotifications;
- (BOOL)enableSphereWhenAvailable;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (void)getCurrentVideoFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned int x11; long long x12; }*)arg1;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (id)initWithPosition:(int)arg1 attributes:(id)arg2 forClientWithAuditTokenData:(id)arg3 clientIDOut:(int*)arg4 deviceAvailabilityChangedHandler:(id /* block */)arg5;
- (BOOL)isPropertyObserved:(id)arg1;
- (BOOL)isSphereEnabled;
- (BOOL)isStillImageISPChromaNoiseReductionEnabled;
- (BOOL)isStreaming;
- (float)lensPosition;
- (int)lowLightCompensationModeForStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned int x11; long long x12; }*)arg1 flashMode:(int)arg2 sisMode:(int)arg3;
- (float)maximumFrameRate;
- (float)minimumFrameRate;
- (id)moduleInfo;
- (struct OpaqueFigCaptureISPProcessingSession { }*)newISPProcessingSessionWithType:(int)arg1;
- (int)position;
- (BOOL)providesPreBracketedEV0;
- (BOOL)quadraHighResStillImageCaptureEnabled;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 commandID:(int)arg3;
- (void)registerForAEMatrixMetadata;
- (void)registerForFaceDetectionMetadata;
- (BOOL)registerStillImageBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (id)sensorIDDictionary;
- (void)setActiveFormatIndex:(int)arg1;
- (long)setAlternateOutputSizeAndCrop:(id)arg1;
- (BOOL)setAutoFlashEnabled:(BOOL)arg1 error:(id*)arg2;
- (long)setAutoImageControlMode:(int)arg1;
- (long)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (long)setAutomaticallyAdjustsTorch:(BOOL)arg1;
- (void)setClientRetainedBufferCountHint:(int)arg1;
- (void)setDeviceReleaseBehavior:(int)arg1;
- (void)setEnableSphereWhenAvailable:(BOOL)arg1;
- (long)setExposureModeAutoWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (long)setExposureModeCustomWithExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5;
- (long)setExposureModeLocked;
- (long)setExposureTargetBias:(float)arg1 requestID:(int)arg2;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (long)setFaceDetectionDrivenImageProcessingMode:(int)arg1;
- (long)setFocusModeAutoWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 continuous:(BOOL)arg2 smooth:(BOOL)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5;
- (long)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2;
- (BOOL)setHDRSceneDetectionEnabled:(BOOL)arg1 error:(id*)arg2;
- (long)setImageControlMode:(int)arg1;
- (long)setLowLightBoostAutomaticallyEnabled:(BOOL)arg1 supportedForFormat:(BOOL)arg2;
- (void)setMaxTorchLevel:(float)arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setMinimumFrameRate:(float)arg1;
- (void)setOverscanPercentage:(struct CGSize { float x1; float x2; })arg1;
- (void)setProperty:(id)arg1 isObserved:(BOOL)arg2;
- (long)setProvidesStortorgetMetadata:(BOOL)arg1;
- (void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1;
- (void)setSphereVideoEnabled:(BOOL)arg1;
- (void)setStillImageBufferTimeMachineHandler:(id /* block */)arg1;
- (void)setStillImageCaptureDelegate:(id)arg1;
- (void)setStillImageCaptureEnabled:(BOOL)arg1;
- (void)setStillImageISPChromaNoiseReductionEnabled:(BOOL)arg1;
- (void)setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1;
- (void)setStillImageStabilizationIntegrationTimeThreshold:(double)arg1;
- (long)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)setTimeMachineEnabledForMultistream:(BOOL)arg1;
- (long)setTorchLevel:(float)arg1;
- (void)setUsesFullRangeVideo:(BOOL)arg1;
- (long)setWhiteBalanceModeAuto;
- (long)setWhiteBalanceModeLockedWithGains:(struct { float x1; float x2; float x3; })arg1 requestID:(int)arg2;
- (void)setZoomFactor:(float)arg1;
- (void)sourceNodeDidStartStreaming;
- (void)sourceNodeDidStopStreaming;
- (void)sourceNodeWillDiscardVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitStillImageQuadraBufferProcessingError:(long)arg1;
- (void)sourceNodeWillEmitStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitVideoPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillStartStreaming;
- (BOOL)sphereVideoEnabled;
- (BOOL)startStreamingToSampleBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (id /* block */)stillImageBufferTimeMachineHandler;
- (id)stillImageCaptureDelegate;
- (BOOL)stillImageCaptureEnabled;
- (double)stillImageStabilizationIntegrationTimeThreshold;
- (BOOL)stopStreamingToSampleBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (struct OpaqueFigCaptureStream { }*)stream;
- (id)streamSupportedProperties;
- (id)supportedFormats;
- (int)timeMachineCapacity;
- (BOOL)timeMachineEnabledForMultistream;
- (void)unregisterForAEMatrixMetadata;
- (void)unregisterForFaceDetectionMetadata;
- (BOOL)unregisterStillImageBufferHandler:(id /* block */)arg1 error:(id*)arg2;
- (BOOL)usesFullRangeVideo;
- (id)zoomCommandHandler;
- (void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(BOOL)arg3 rampCommandID:(int)arg4;
- (float)zoomFactor;

@end
