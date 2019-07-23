/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigVideoCaptureDevice : BWCaptureDevice <BWZoomCompletionDelegate> {
    float  _ISO;
    NSArray * _activePortTypes;
    int  _aeFrameWaitCount;
    int  _aeRequestCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _aeRequestTime;
    BOOL  _aeStable;
    BOOL  _allowAEStableNotifications;
    BOOL  _allowAWBStableNotifications;
    BOOL  _attachMetadataFlatDictionary;
    NSDictionary * _attributes;
    BOOL  _autoFlashEnabled;
    float  _autoFlashNormalizedSNRThreshold;
    int  _autoImageControlMode;
    BOOL  _autoTorchEnabled;
    BOOL  _autoTorchStatsCheckedForVideoRecording;
    NSMutableDictionary * _autofocusCachedPropertiesDictionary;
    struct OpaqueFigSampleBufferProcessor { } * _autofocusProcessor;
    NSObject<OS_dispatch_queue> * _autofocusProcessorQueue;
    struct OpaqueFigSimpleMutex { } * _autofocusStatusMutex;
    BOOL  _automaticStillImageDegradedSphereModeEnabled;
    BOOL  _awbStable;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cachedExposureRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cachedFocusRect;
    NSMutableDictionary * _cameraInfoByPortType;
    int  _cameraModeForGyroCalibration;
    BWFigVideoCaptureStream * _captureStream;
    int  _clientPID;
    struct OpaqueCMClock { } * _clock;
    int (* _createAutofocusSampleBufferProcessorFunction;
    int  _currentBiasedExposureCompletedID;
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
        unsigned char aeStable; 
        unsigned int lensOcclusionScore; 
        unsigned int lensOcclusionScoreModifiedMovingAverage; 
        int afStatus; 
        int focusingMethod; 
        unsigned int motionDataStatus; 
        float motionDataBiasErrorEstimate; 
        float synchronizedStreamsTelephotoGain; 
        float synchronizedStreamsTelephotoStableGain; 
        double synchronizedStreamsTelephotoIntegrationTime; 
        int synchronizedStreamsTelephotoAFStatus; 
        int synchronizedStreamsTelephotoFocusingMethod; 
        int synchronizedStreamsTelephotoAFStationaryCount; 
        float synchronizedStreamsTelephotoFocusDistance; 
        int synchronizedStreamsTelephotoGravityAdjustedFocusPosition; 
        int synchronizedStreamsTelephotoLuxLevel; 
        int synchronizedStreamsWideFocusPosition; 
        float synchronizedStreamsWideFocusDistance; 
        int synchronizedStreamsWideAFStatus; 
        int synchronizedStreamsWideAFStationaryCount; 
        int synchronizedStreamsWideLuxLevel; 
        int synchronizedStreamsWideGravityAdjustedFocusPosition; 
        long long frameCount; 
    }  _currentFrameStatistics;
    int  _currentImageControlMode;
    int  _currentManualExposureCompletedID;
    int  _currentManualFocusCompletedID;
    int  _currentManualWhiteBalanceCompletedID;
    BWFigVideoCaptureStream * _currentMasterCaptureStream;
    int  _currentMasterCaptureStreamLock;
    struct OpaqueFigCaptureDevice { } * _device;
    BWDeviceMotionActivityDetector * _deviceMotionActivityDetector;
    int  _deviceReleaseBehavior;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    }  _deviceWhiteBalanceGains;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _exposureDuration;
    float  _exposureTargetBias;
    float  _exposureTargetOffset;
    BOOL  _feature1Enabled;
    struct OpaqueFigSampleBufferProcessor { } * _feature1Processor;
    NSObject<OS_dispatch_queue> * _feature1ProcessorQueue;
    BOOL  _flashScene;
    NSObject<OS_dispatch_queue> * _focusAndExposureUpdateQueue;
    BOOL  _forcePostingForSceneDetectionNotifications;
    int  _frameStatisticsLock;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    }  _grayWorldWhiteBalanceGains;
    BOOL  _hasFlash;
    BOOL  _hasNightMode;
    BOOL  _hdrScene;
    BOOL  _hdrSceneDetectionEnabled;
    struct { 
        int width; 
        int height; 
    }  _ispOutputDimensions;
    struct { 
        int width; 
        int height; 
    }  _lastISPCropDimensions;
    float  _lastRequestedZoomFactor;
    float  _lensPosition;
    BOOL  _lowLightBoostActive;
    int  _lowLightBoostLock;
    BOOL  _lowLightBoostSupportedForFormat;
    struct OpaqueFigSimpleMutex { } * _manualPropertyMutex;
    struct { 
        int width; 
        int height; 
    }  _maxISPCropDimensions;
    float  _maxISPZoomFactor;
    int  _maxSkippedFramesForStillImageCaptureRetry;
    float  _maxTorchLevel;
    struct OpaqueFigFlatDictionaryKeySpec { } * _metadataKeySpec;
    NSDictionary * _moduleInfoByPortType;
    float  _motionDataBiasErrorEstimateThresholdAbandon;
    float  _motionDataBiasErrorEstimateThresholdDegraded;
    float  _newISPZoomFactor;
    NSString * _nonLocalizedName;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _numberOfCompletedStillCaptures;
    NSMutableDictionary * _observedProperties;
    struct CGSize { 
        float width; 
        float height; 
    }  _overscanPercentage;
    BWRamp * _parallaxMitigationRamp;
    int  _parallaxMitigationRampDuration;
    int  _parallaxMitigationRampShape;
    float  _parallaxMitigationStrength;
    int  _parallaxMitigationStrengthLock;
    struct __CFString { } * _portType;
    int  _position;
    id /* block */  _prepareToCaptureStillImageNowCompletionHandler;
    BOOL  _quadraHighResStillImageCaptureEnabled;
    float  _quadraLowLightResampledNormalizedSNRThreshold;
    float  _rampDefaultBravoSnapDistanceFraction;
    BOOL  _retryCaptureStillImageNow;
    BOOL  _sdofAEStableAfterStartStreaming;
    BOOL  _sdofAlwaysCaptureSDOFPlusOriginal;
    float  _sdofBackgroundShiftSumFiltered;
    int  _sdofEffectStatus;
    BOOL  _sdofFocusAdjusting;
    BOOL  _sdofFocusLocked;
    BOOL  _sdofFocusStableAfterStartStreaming;
    float  _sdofInvalidShiftRatioFiltered;
    int  _sdofLastFocusingMethod;
    int  _sdofLock;
    int  _sdofNumFramesSinceAEBecameStable;
    int  _sdofNumFramesSinceFocusBecameStable;
    int  _sdofNumFramesSinceFocusLocked;
    BOOL  _sdofOneShotFocusInProgress;
    BOOL  _sdofSceneIsTooDark;
    BOOL  _sdofSceneMonitoringEnabled;
    BOOL  _sdofSceneTooDarkExposureThresholdReached;
    float  _sdofSceneTooDarkGainHysteresisLag;
    float  _sdofSceneTooDarkGainThreshold;
    float  _sdofSceneTooDarkInvalidShiftRatioHysteresisLag;
    float  _sdofSceneTooDarkInvalidShiftRatioThreshold;
    BOOL  _sdofSceneTooDarkMonitoringEnabled;
    BOOL  _sdofSubjectIsTooClose;
    int  _sdofSubjectTooCloseLastWideFocusPosition;
    BOOL  _sdofSubjectTooCloseMonitoringEnabled;
    float  _sdofSubjectTooCloseWideFocusDistanceHysteresisLag;
    float  _sdofSubjectTooCloseWideFocusDistanceThreshold;
    int  _sdofSubjectTooCloseWideFocusPositionHysteresisLag;
    int  _sdofSubjectTooCloseWideFocusPositionThreshold;
    float  _sdofSubjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
    float  _sdofSubjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
    BOOL  _sdofSubjectTooFarBackgroundShiftSumIsTooLow;
    float  _sdofSubjectTooFarBackgroundShiftSumTooLowHysteresisLag;
    float  _sdofSubjectTooFarBackgroundShiftSumTooLowThreshold;
    int  _sdofSubjectTooFarBackgroundShiftTooLowNumFrames;
    BOOL  _sdofSubjectTooFarDistanceThresholdReached;
    float  _sdofSubjectTooFarFocusDistanceHysteresisLag;
    float  _sdofSubjectTooFarFocusDistanceThreshold;
    int  _sdofSubjectTooFarFocusPositionHysteresisLag;
    int  _sdofSubjectTooFarFocusPositionInfinityThreshold;
    int  _sdofSubjectTooFarFocusPositionThreshold;
    int  _sdofSubjectTooFarLastTeleFocusPosition;
    BOOL  _sdofSubjectTooFarMonitoringEnabled;
    BOOL  _sdofSubjectTooFarUseTeleForFocusDistance;
    BOOL  _sdofUseFocusPositionInsteadOfFocusDistance;
    BOOL  _sdofUsingMasterSlaveAF;
    NSDictionary * _sensorIDDictionaryByPortType;
    BOOL  _shallowDepthOfFieldEffectEnabled;
    int  _skippedFramesCountForStillImageCaptureRetry;
    BOOL  _stereoFusionEnabled;
    BOOL  _stillImageCaptureEnabled;
    BOOL  _stillImageCaptureNowAfterAutofocusTimeoutSupported;
    NSDictionary * _stillImageCaptureNowOptions;
    BWStillImageCaptureSettings * _stillImageCaptureSettings;
    int  _stillImageCaptureStateLock;
    FigStateMachine * _stillImageCaptureStateMachine;
    NSDictionary * _stillImageCaptureStreamProperties;
    int  _stillImageContrastBasedAutofocusTimeout;
    NSObject<OS_dispatch_queue> * _stillImageDispatchQueue;
    BOOL  _stillImageISPChromaNoiseReductionEnabled;
    int  _stillImagePhaseDetectionAutofocusTimeout;
    BOOL  _stillImageStabilizationAutomaticallyEnabled;
    double  _stillImageStabilizationIntegrationTimeThreshold;
    BOOL  _stillImageStabilizationScene;
    struct OpaqueFigCaptureStream { } * _stream;
    NSDictionary * _supportedProperties;
    BOOL  _supportsHDR;
    BOOL  _supportsSIS;
    BOOL  _synchronizationSlaveHasBeenStarted;
    BOOL  _synchronizationSourceHasBeenStarted;
    BOOL  _synchronizedStreamsAEStableAfterStartStreaming;
    NSDictionary * _synchronizedStreamsAlignmentInfo;
    int  _synchronizedStreamsCameraSelectionBehavior;
    int  _synchronizedStreamsElevatedMasterToSlaveFrameRateRatio;
    int  _synchronizedStreamsElevatedSlaveFrameRate;
    float  _synchronizedStreamsElevatedSlaveFrameRateLowerBoundZoomFactor;
    float  _synchronizedStreamsElevatedSlaveFrameRateUpperBoundZoomFactor;
    int  _synchronizedStreamsMinimumFocusPositionChangeForAutoSwitchOver;
    float  _synchronizedStreamsMinimumLuxLevelChangeForAutoSwitchOver;
    int  _synchronizedStreamsNominalMasterToSlaveFrameRateRatio;
    int  _synchronizedStreamsNominalSlaveFrameRate;
    float  _synchronizedStreamsOISSISStereoFusionTeleMinGain;
    NSObject<OS_dispatch_semaphore> * _synchronizedStreamsStartStopSemaphore;
    float  _synchronizedStreamsStereoFusionLowerBoundZoomFactor;
    double  _synchronizedStreamsStereoFusionTeleMaxIntegrationTime;
    float  _synchronizedStreamsStereoFusionUpperBoundZoomFactor;
    double  _synchronizedStreamsStillImageStabilizationTeleIntegrationTimeThreshold;
    BOOL  _synchronizedStreamsSwitchOverCameraLocked;
    BOOL  _synchronizedStreamsSwitchOverCameraLockedOnTele;
    BOOL  _synchronizedStreamsSwitchOverIgnoreFocusStatusOnce;
    BOOL  _synchronizedStreamsSwitchOverInProgress;
    int  _synchronizedStreamsSwitchOverLock;
    BOOL  _synchronizedStreamsSwitchOverLockCamera;
    BOOL  _synchronizedStreamsSwitchOverLockCameraWhenFocusScanCompletes;
    BOOL  _synchronizedStreamsSwitchOverMasterFocusChangeThresholdExceeded;
    int  _synchronizedStreamsSwitchOverMasterInitialFocusPosition;
    int  _synchronizedStreamsSwitchOverMasterInitialLuxLevel;
    BOOL  _synchronizedStreamsSwitchOverMasterLuxLevelChangeThresholdExceeded;
    int  _synchronizedStreamsSwitchOverNewCameraSelectionBehavior;
    int  _synchronizedStreamsSwitchOverNumberOfFramesWaitingForSlaveToFocus;
    float  _synchronizedStreamsSwitchOverPreviousZoomFactor;
    BOOL  _synchronizedStreamsSwitchOverResetChangeMonitors;
    float  _synchronizedStreamsSwitchOverTotalGainHysteresisLag;
    BOOL  _synchronizedStreamsSwitchOverUnlockCamera;
    float  _synchronizedStreamsTeleMaxAEGain;
    int  _synchronizedStreamsTeleToWideFocusPosition;
    int  _synchronizedStreamsWideToTeleFocusPosition;
    BWFigVideoCaptureStream * _telephotoCaptureStream;
    NSString * _telephotoNonLocalizedName;
    BOOL  _torchActive;
    float  _torchLevel;
    struct OpaqueFigSimpleMutex { } * _torchLock;
    BOOL  _useAutoImageControlMode;
    BOOL  _usingMultipleStreamOutputs;
    NSMutableDictionary * _whiteBalanceGains;
    NSMutableArray * _whiteBalanceGainsOrderedKeys;
    NSObject<OS_dispatch_queue> * _whiteBalanceGainsQueue;
    int  _whiteBalanceModeForExif;
    BWZoomCommandHandler * _zoomCommandHandler;
    int  _zoomFactorLock;
}

@property (readonly) NSArray *activePortTypes;
@property (readonly) NSDictionary *cameraInfoByPortTypeForSBPs;
@property (readonly) NSDictionary *cameraTuningParametersDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceReleaseBehavior;
@property (readonly) unsigned int hash;
@property (readonly) NSDictionary *moduleInfoByPortType;
@property (readonly) NSDictionary *sensorIDDictionaryByPortType;
@property (readonly) Class superclass;

+ (struct __CFString { }*)_autofocusProcessorImageControlModeFromImageControlMode:(int)arg1;
+ (void)initialize;
+ (void)unregisterCallbacksForClient:(int)arg1;

- (float)ISO;
- (void)_addAutofocusAndDiagnosticMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addCoreMediaMetadataAttachmentsToStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromTimeMachine:(BOOL)arg2;
- (void)_addExifWhiteBalanceMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addFeature1ToMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (long)_attachMetadataFlatDictionaryToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct OpaqueFigSampleBufferProcessor { }*)_autofocusProcessor;
- (int)_bravoCameraForOISOrSISCaptureType:(int)arg1 stereoFusionMode:(int)arg2 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg3 zoomFactor:(float)arg4 stereoFusionLowerBoundZoomFactor:(float)arg5 stereoFusionUpperBoundZoomFactor:(float)arg6;
- (id)_bravoStillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg2 deliverOriginalImage:(BOOL)arg3 includePreBracketedEV0ForProcessing:(BOOL)arg4 clientBracketSettings:(id)arg5 stereoFusionMode:(int)arg6;
- (long)_captureStillImageNowOnStreamWithOptions:(id)arg1 captureStreamProperties:(id)arg2;
- (void)_captureStillImageNowWithSettings:(id)arg1;
- (long)_convertStillImageCaptureSettings:(id)arg1 masterCaptureStreamPortType:(id)arg2 bravoDeviceEnabled:(BOOL)arg3 toStillImageCaptureNowOptions:(id*)arg4 captureStreamPropertyValues:(id*)arg5;
- (long)_copyAutofocusProcessorProperty:(struct __CFString { }*)arg1 propertyValueOut:(void*)arg2;
- (long)_copyAutofocusProcessorPropertyInternal:(struct __CFString { }*)arg1 propertyValueOut:(void*)arg2;
- (int)_currentStillImageSceneTypeForcingFlashSceneDetectionEnabled:(BOOL)arg1 forcingHDRSceneDetectionEnabled:(BOOL)arg2 forcingSISSceneDetectionEnabled:(BOOL)arg3;
- (void)_deviceDidStopStreaming;
- (void)_deviceWillStartStreaming;
- (id)_initWithFigCaptureDeviceRef:(struct OpaqueFigCaptureDevice { }*)arg1 attributes:(id)arg2 synchronizedStreamsAttributes:(id)arg3 forPID:(int)arg4 createAutofocusSampleBufferProcessorFunction:(int (*)arg5;
- (float)_ispAppliedZoomFromSampleBufferMetadataDictionary:(id)arg1;
- (void)_postManualControlRequestCompletedWithName:(id)arg1 requestID:(int)arg2 timeDictionary:(id)arg3 additionalPayloadItems:(id)arg4;
- (void)_postNotificationWithName:(id)arg1 payloadNewPropertyValue:(id)arg2;
- (void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2;
- (void)_resetStillImageCaptureRequestState;
- (id)_sensorIDDictionaryFromCameraTuningParametersForStream:(struct OpaqueFigCaptureStream { }*)arg1;
- (void)_serviceAutoTorchNotification:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1;
- (void)_serviceCompletedRequestNotifications:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_serviceLowLightBoostActiveNotification:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_servicePropertyChangeNotifications:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_serviceRetryStillImageCaptureUsingFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1;
- (void)_serviceSDOFSceneMonitoringWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg2;
- (void)_serviceSynchronizedStreamsWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromCaptureStream:(id)arg2 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg3;
- (void)_serviceZoomForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 updateISPZoom:(BOOL)arg2;
- (long)_setAutofocusProcessorImageControlModeProperty:(int)arg1;
- (long)_setAutofocusProcessorProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (long)_setAutofocusProcessorPropertyInternal:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (long)_setExposureModeAutoWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setISPZoomFactorSynchronously:(float)arg1;
- (void)_setNewISPZoomFactorOnStream;
- (long)_setupAutofocusSampleBufferProcessor;
- (long)_setupFeature1SampleBufferProcessor;
- (void)_setupStillImageCaptureStateMachine;
- (BOOL)_shouldUseSphereForStillImageCaptureTakingIntoAccountExposureDuration:(BOOL)arg1 deviceMotionActivity:(BOOL)arg2;
- (unsigned int)_stillImageCaptureInProgressSubstateForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1 captureType:(int)arg2 masterCaptureStreamPortType:(id)arg3 stereoFusionCapture:(BOOL)arg4;
- (id)_stillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg2 deliverOriginalImage:(BOOL)arg3 deliverSushiRaw:(BOOL)arg4 includePreBracketedEV0ForProcessing:(BOOL)arg5 clientBracketSettings:(id)arg6;
- (void)_stillImageCaptureStateMachineDidTransitionToInProgress;
- (int)_stillImageSceneTypeForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1 flashSceneDetectionEnabled:(BOOL)arg2 hdrSceneDetectionEnabled:(BOOL)arg3 sisSceneDetectionEnabled:(BOOL)arg4;
- (BOOL)_switchToOtherStreamForCurrentMasterStream:(id)arg1 requestedZoomFactor:(float)arg2 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg3 selectionBehavior:(int)arg4;
- (void)_teardownAutoFocusSampleBufferProcessor;
- (void)_teardownFeature1SampleBufferProcessor;
- (void)_terminateCaptureAndEmitStillImageCaptureError:(long)arg1 stillImageCaptureNowOptions:(id)arg2 stillImageCaptureStreamProperties:(id)arg3;
- (long)_updateAutoFocusRectIfNeededForZoomFactor:(float)arg1;
- (void)_updateBravoCameraSelectionBehaviorForMasterStream:(id)arg1;
- (void)_updateBravoSwitchOverStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (long)_updateExposureRectIfNeededForZoomFactor:(float)arg1;
- (void)_updateExposureStateForAutofocusProperty:(struct __CFString { }*)arg1;
- (void)_updateFaceDetectionStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateISPCropForZoomFactor:(float)arg1;
- (void)_updateImageControlModeStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateSDOFEffectStatus:(int)arg1;
- (void)_updateSDOFFocusStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateSwitchOverStateForCurrentMasterStream:(id)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg2;
- (void)_updateWhiteBalanceStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateZoomCapabilitiesForActiveFormatIndex:(int)arg1;
- (void)_validateSphereModeBasedOnMotionDataBiasErrorEstimate:(BOOL*)arg1 useStillDegradedMode:(BOOL*)arg2;
- (id)activePortTypes;
- (int)autoImageControlMode;
- (int)bravoCameraSelectionBehavior;
- (id)cameraAlignmentInfo;
- (id)cameraInfoByPortTypeForSBPs;
- (int)cameraModeForGyroCalibration;
- (id)cameraTuningParametersDictionary;
- (long)captureStillImageNowWithSettings:(id)arg1;
- (id)captureStream;
- (void)captureStream:(id)arg1 willDiscardVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureStream:(id)arg1 willEmitStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromTimeMachine:(BOOL)arg3;
- (void)captureStream:(id)arg1 willEmitVideoPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureStream:(id)arg1 willEmitVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureStreamDidChangeActiveFormatIndex:(id)arg1;
- (void)captureStreamDidCompleteStillImageCapture:(id)arg1;
- (void)captureStreamDidStartStreaming:(id)arg1;
- (void)captureStreamDidStopStreaming:(id)arg1;
- (void)captureStreamWillStartStreaming:(id)arg1;
- (void)captureStreamWillStopStreaming:(id)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (int)deviceReleaseBehavior;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (void)disposeFigCaptureDevice;
- (void)drainNotifications;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (void)getCurrentVideoFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (id)initWithAttributes:(id)arg1 synchronizedStreamsAttributes:(id)arg2 forPID:(int)arg3 clientIDOut:(int*)arg4 deviceAvailabilityChangedHandler:(id /* block */)arg5;
- (BOOL)isFlashScene;
- (BOOL)isHDRScene;
- (BOOL)isPropertyObserved:(id)arg1;
- (BOOL)isStillImageISPChromaNoiseReductionEnabled;
- (BOOL)isStillImageStabilizationScene;
- (float)lensPosition;
- (float)maximumAllowedFrameRate;
- (float)maximumFrameRate;
- (float)minimumAllowedFrameRate;
- (float)minimumFrameRate;
- (id)moduleInfoByPortType;
- (struct OpaqueFigCaptureISPProcessingSession { }*)newISPProcessingSessionWithType:(int)arg1;
- (float)parallaxMitigationStrength;
- (int)position;
- (void)prepareToCaptureStillImageNow:(id /* block */)arg1;
- (BOOL)quadraHighResStillImageCaptureEnabled;
- (void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 commandID:(int)arg5;
- (void)registerForAEMatrixMetadata;
- (int)resolveStillImageCaptureTypeFromStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4 autoShallowDepthOfFieldEffectEnabled:(BOOL)arg5 clientBracketMode:(int)arg6;
- (id)sensorIDDictionaryByPortType;
- (long)setAlternateOutputSizeAndCrop:(id)arg1;
- (BOOL)setAutoFlashEnabled:(BOOL)arg1 error:(id*)arg2;
- (void)setAutoFocusSensorCalibrationData:(id)arg1;
- (long)setAutoImageControlMode:(int)arg1;
- (long)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (long)setAutomaticallyAdjustsTorch:(BOOL)arg1;
- (void)setBravoCameraSelectionBehavior:(int)arg1;
- (void)setCameraModeForGyroCalibration:(int)arg1;
- (void)setDeviceReleaseBehavior:(int)arg1;
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
- (void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1;
- (void)setShallowDepthOfFieldEffectEnabled:(BOOL)arg1;
- (void)setStereoFusionEnabled:(BOOL)arg1;
- (void)setStillImageCaptureEnabled:(BOOL)arg1;
- (void)setStillImageISPChromaNoiseReductionEnabled:(BOOL)arg1;
- (void)setStillImageStabilizationSceneDetectionEnabled:(BOOL)arg1;
- (long)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (long)setTorchLevel:(float)arg1;
- (long)setWhiteBalanceModeAuto;
- (long)setWhiteBalanceModeLockedWithGains:(struct { float x1; float x2; float x3; })arg1 requestID:(int)arg2;
- (void)setZoomFactor:(float)arg1;
- (BOOL)shallowDepthOfFieldEffectEnabled;
- (int)shallowDepthOfFieldEffectStatus;
- (void)startupFaceDetectionIfNeeded;
- (BOOL)stereoFusionEnabled;
- (BOOL)stillImageCaptureEnabled;
- (id)stillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg2 deliverOriginalImage:(BOOL)arg3 deliverSushiRaw:(BOOL)arg4 includePreBracketedEV0ForProcessing:(BOOL)arg5 clientBracketSettings:(id)arg6 stereoFusionMode:(int)arg7;
- (id)supportedFormats;
- (BOOL)supportsProperty:(struct __CFString { }*)arg1;
- (id)telephotoCaptureStream;
- (void)unregisterForAEMatrixMetadata;
- (void)updateSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2;
- (id)zoomCommandHandler;
- (void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(BOOL)arg3 rampCommandID:(int)arg4;
- (float)zoomFactor;

@end
