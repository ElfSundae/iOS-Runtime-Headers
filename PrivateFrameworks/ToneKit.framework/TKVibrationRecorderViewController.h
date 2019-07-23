/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderViewController : UINavigationController <PSStateRestoration> {
    TKVibrationRecorderContentViewController * _vibrationRecorderContentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <TKVibrationRecorderViewControllerDelegate> *vibrationRecorderViewControllerDelegate;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)initWithVibratorController:(id)arg1;
- (void)setVibrationRecorderViewControllerDelegate:(id)arg1;
- (id)vibrationRecorderViewControllerDelegate;

@end
