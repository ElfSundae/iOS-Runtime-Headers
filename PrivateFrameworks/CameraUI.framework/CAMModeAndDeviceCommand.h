/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeAndDeviceCommand : CAMCaptureCommand {
    NSError *__configurationError;
    int __device;
    struct CAMCaptureModeWithOptions { 
        int mode; 
        int videoConfiguration; 
        int previewConfiguration; 
        int audioConfiguration; 
    } __modeWithOptions;
}

@property (setter=_setConfigurationError:, nonatomic, retain) NSError *_configurationError;
@property (nonatomic, readonly) int _device;
@property (nonatomic, readonly) struct CAMCaptureModeWithOptions { int x1; int x2; int x3; int x4; } _modeWithOptions;

- (void).cxx_destruct;
- (id)_configurationError;
- (id)_desiredInputsWithContext:(id)arg1;
- (id)_desiredOutputsWithContext:(id)arg1;
- (int)_device;
- (id)_existingInputsWithContext:(id)arg1 without:(id)arg2;
- (id)_existingOutputsWithContext:(id)arg1 without:(id)arg2;
- (int)_introspectedDeviceFromContext:(id)arg1;
- (struct CAMCaptureModeWithOptions { int x1; int x2; int x3; int x4; })_introspectedModeWithOptionsFromContext:(id)arg1;
- (BOOL)_isStillImageMode:(int)arg1;
- (BOOL)_isVideoMode:(int)arg1;
- (struct CAMCaptureModeWithOptions { int x1; int x2; int x3; int x4; })_modeWithOptions;
- (void)_performPostConfigurationSanityCheckForModeWithOptions:(struct CAMCaptureModeWithOptions { int x1; int x2; int x3; int x4; })arg1 device:(int)arg2 withContext:(id)arg3;
- (void)_performPostConfigurationSetupForModeWithOptions:(struct CAMCaptureModeWithOptions { int x1; int x2; int x3; int x4; })arg1 device:(int)arg2 withContext:(id)arg3;
- (void)_sanitizeDeviceUsingContext:(id)arg1;
- (void)_setConfigurationError:(id)arg1;
- (id)_specificFramerateCommandForMode:(struct CAMCaptureModeWithOptions { int x1; int x2; int x3; int x4; })arg1 withContext:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(int)arg1;
- (id)initWithModeWithOptions:(struct CAMCaptureModeWithOptions { int x1; int x2; int x3; int x4; })arg1;
- (id)initWithModeWithOptions:(struct CAMCaptureModeWithOptions { int x1; int x2; int x3; int x4; })arg1 device:(int)arg2;
- (BOOL)requiresSessionModification;
- (id)userInfo;

@end
