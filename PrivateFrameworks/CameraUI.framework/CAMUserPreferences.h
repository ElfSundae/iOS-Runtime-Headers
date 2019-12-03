/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMUserPreferences : NSObject {
    bool  _QRBannersEnabledInSettings;
    bool  __preferHEVCWhenAvailable;
    double  __resetTimeoutOverride;
    bool  __shouldDisableCameraSwitchingDuringVideoRecording;
    NSUserDefaults * __underlyingUserDefaults;
    bool  _autoAdjustmentsEnabled;
    bool  _autoLowLightVideoEnabled;
    bool  _burstFollowsEncoderSettings;
    CAMCaptureConfiguration * _captureConfiguration;
    CAMConflictingControlConfiguration * _conflictingControlConfiguration;
    bool  _didAcknowledgeCTMDescription;
    bool  _didAcknowledgePortraitModeDescription;
    bool  _didResetTorchMode;
    bool  _forceEnableQRBanners;
    bool  _lockAsShutterEnabled;
    long long  _overriddenBackCaptureInterval;
    long long  _overriddenFrontCaptureInterval;
    long long  _photoModeLastCapturedEffectFilterType;
    bool  _photoOverCaptureEnabled;
    long long  _portraitModeLastCapturedEffectFilterType;
    long long  _preferredMinimumFreeBytes;
    bool  _preserveCaptureMode;
    bool  _preserveEffectFilter;
    bool  _preserveLivePhoto;
    long long  _previewViewAspectMode;
    NSDate * _resetTimeoutDate;
    bool  _shouldCaptureHDREV0;
    bool  _shouldDelayRemotePersistence;
    bool  _shouldForceMonoAudioRecording;
    bool  _shouldShowGridView;
    bool  _shouldUseModernHDRBehavior;
    long long  _slomoConfiguration;
    long long  _squareModeLastCapturedEffectFilterType;
    long long  _videoConfiguration;
    bool  _videoOverCaptureEnabled;
}

@property (nonatomic, readonly) bool QRBannersEnabledInSettings;
@property (nonatomic, readonly) bool _preferHEVCWhenAvailable;
@property (nonatomic, readonly) double _resetTimeoutOverride;
@property (nonatomic, readonly) bool _shouldDisableCameraSwitchingDuringVideoRecording;
@property (getter=_underlyingUserDefaults, setter=_setUnderlyingUserDefaults:, nonatomic, retain) NSUserDefaults *_underlyingUserDefaults;
@property (getter=isAutoAdjustmentsEnabled, nonatomic, readonly) bool autoAdjustmentsEnabled;
@property (getter=isAutoLowLightVideoEnabled, nonatomic, readonly) bool autoLowLightVideoEnabled;
@property (nonatomic, readonly) bool burstFollowsEncoderSettings;
@property (nonatomic, retain) CAMCaptureConfiguration *captureConfiguration;
@property (nonatomic, retain) CAMConflictingControlConfiguration *conflictingControlConfiguration;
@property (nonatomic) bool didAcknowledgeCTMDescription;
@property (nonatomic) bool didAcknowledgePortraitModeDescription;
@property (nonatomic, readonly) bool didConfirmSlomo1080p240MostCompatible;
@property (nonatomic, readonly) bool didConfirmVideo4k60MostCompatible;
@property (setter=_setDidResetTorchMode:, nonatomic) bool didResetTorchMode;
@property (nonatomic) bool forceEnableQRBanners;
@property (getter=isLockAsShutterEnabled, nonatomic, readonly) bool lockAsShutterEnabled;
@property (nonatomic, readonly) long long overriddenBackCaptureInterval;
@property (nonatomic, readonly) long long overriddenFrontCaptureInterval;
@property (nonatomic, readonly) long long photoEncodingBehavior;
@property (nonatomic) long long photoModeLastCapturedEffectFilterType;
@property (getter=isPhotoOverCaptureEnabled, nonatomic, readonly) bool photoOverCaptureEnabled;
@property (nonatomic) long long portraitModeLastCapturedEffectFilterType;
@property (nonatomic, readonly) long long preferredMinimumFreeBytes;
@property (nonatomic, readonly) bool preserveCaptureMode;
@property (nonatomic, readonly) bool preserveEffectFilter;
@property (nonatomic, readonly) bool preserveLivePhoto;
@property (nonatomic) long long previewViewAspectMode;
@property (setter=_setResetTimeoutDate:, nonatomic, retain) NSDate *resetTimeoutDate;
@property (nonatomic, readonly) bool shouldCaptureHDREV0;
@property (nonatomic, readonly) bool shouldDelayRemotePersistence;
@property (nonatomic, readonly) bool shouldForceMonoAudioRecording;
@property (nonatomic, readonly) bool shouldShowGridView;
@property (nonatomic, readonly) bool shouldShowQRBanners;
@property (nonatomic, readonly) bool shouldUseModernHDRBehavior;
@property (nonatomic, readonly) long long slomoConfiguration;
@property (nonatomic) long long squareModeLastCapturedEffectFilterType;
@property (nonatomic, readonly) bool usingMostCompatibleEncoding;
@property (nonatomic, readonly) long long videoConfiguration;
@property (getter=isVideoOverCaptureEnabled, nonatomic, readonly) bool videoOverCaptureEnabled;

+ (id)_defaultCaptureConfiguration;
+ (bool)_fallBackToCameraDefaultsForBundleIdentifier:(id)arg1;
+ (long long)defaultFilterTypeForMode:(long long)arg1;
+ (long long)defaultLightingTypeForMode:(long long)arg1;
+ (id)preferences;

- (void).cxx_destruct;
- (bool)QRBannersEnabledInSettings;
- (bool)_preferHEVCWhenAvailable;
- (double)_resetTimeoutOverride;
- (long long)_sanitizeEffectFilterType:(long long)arg1 forMode:(long long)arg2;
- (long long)_sanitizeLightingType:(long long)arg1 forMode:(long long)arg2;
- (void)_setDidResetTorchMode:(bool)arg1;
- (void)_setResetTimeoutDate:(id)arg1;
- (void)_setUnderlyingUserDefaults:(id)arg1;
- (bool)_shouldDisableCameraSwitchingDuringVideoRecording;
- (id)_underlyingUserDefaults;
- (bool)burstFollowsEncoderSettings;
- (id)captureConfiguration;
- (id)conflictingControlConfiguration;
- (bool)didAcknowledgeCTMDescription;
- (bool)didAcknowledgePortraitModeDescription;
- (bool)didConfirmSlomo1080p240MostCompatible;
- (bool)didConfirmVideo4k60MostCompatible;
- (bool)didResetTorchMode;
- (id)filterTypesForMode:(long long)arg1;
- (bool)forceEnableQRBanners;
- (bool)isAutoAdjustmentsEnabled;
- (bool)isAutoLowLightVideoEnabled;
- (bool)isLockAsShutterEnabled;
- (bool)isOverCaptureEnabledForCTMCaptureType:(long long)arg1;
- (bool)isPhotoOverCaptureEnabled;
- (bool)isVideoOverCaptureEnabled;
- (long long)maxSupportedPhotoQualityPrioritizationForMode:(long long)arg1;
- (long long)overriddenBackCaptureInterval;
- (long long)overriddenFrontCaptureInterval;
- (long long)photoEncodingBehavior;
- (long long)photoModeLastCapturedEffectFilterType;
- (long long)portraitModeLastCapturedEffectFilterType;
- (long long)ppt_readPortraitLightingType;
- (long long)preferredMinimumFreeBytes;
- (bool)preserveCaptureMode;
- (bool)preserveEffectFilter;
- (bool)preserveLivePhoto;
- (long long)previewViewAspectMode;
- (bool)readPreferencesWithOverrides:(id)arg1 emulationMode:(long long)arg2 callActive:(bool)arg3;
- (id)resetTimeoutDate;
- (void)setCaptureConfiguration:(id)arg1;
- (void)setConflictingControlConfiguration:(id)arg1;
- (void)setDidAcknowledgeCTMDescription:(bool)arg1;
- (void)setDidAcknowledgePortraitModeDescription:(bool)arg1;
- (void)setForceEnableQRBanners:(bool)arg1;
- (void)setPhotoModeLastCapturedEffectFilterType:(long long)arg1;
- (void)setPortraitModeLastCapturedEffectFilterType:(long long)arg1;
- (void)setPreviewViewAspectMode:(long long)arg1;
- (void)setSquareModeLastCapturedEffectFilterType:(long long)arg1;
- (bool)shouldCaptureHDREV0;
- (bool)shouldDelayRemotePersistence;
- (bool)shouldDisableCameraSwitchingDuringVideoRecordingForMode:(long long)arg1;
- (bool)shouldForceMonoAudioRecording;
- (bool)shouldResetCaptureConfiguration;
- (bool)shouldShowGridView;
- (bool)shouldShowQRBanners;
- (bool)shouldUseModernHDRBehavior;
- (long long)slomoConfiguration;
- (long long)squareModeLastCapturedEffectFilterType;
- (void)updateResetTimeoutDate;
- (bool)usingMostCompatibleEncoding;
- (long long)videoConfiguration;
- (long long)videoEncodingBehaviorForConfiguration:(long long)arg1;
- (void)writePreferences;

@end
