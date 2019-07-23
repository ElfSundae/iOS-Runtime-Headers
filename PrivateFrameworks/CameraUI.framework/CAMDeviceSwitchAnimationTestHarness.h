/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMDeviceSwitchAnimationTestHarness : CAMModeAndDeviceConfigurationTestHarness {
    int  _desiredDevicePosition;
    CAMViewfinderViewController * _viewfinder;
}

+ (id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(int)arg3;

- (void).cxx_destruct;
- (void)ensureCaptureDevicePosition:(int)arg1 thenPerform:(id /* block */)arg2;
- (id)initWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(int)arg3;
- (void)startTesting;

@end
