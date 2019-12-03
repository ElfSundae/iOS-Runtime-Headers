/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject {
    AKAppleIDAuthenticationController * _authController;
    <CDPUIDeviceToDeviceEncryptionHelperDelegate> * _delegate;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) AKAppleIDAuthenticationController *authController;
@property (nonatomic) <CDPUIDeviceToDeviceEncryptionHelperDelegate> *delegate;
@property (nonatomic, readonly) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (void)_askPermissionToContinueFlowForEligibleAccountForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_authenticateContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1;
- (id)_cdpStateControllerWithAuthResults:(id)arg1;
- (id)_cdpStateControllerWithContext:(id)arg1;
- (void)_configurePresentingViewControllerForModalPresentation;
- (id)_encryptionErrorFromError:(id)arg1;
- (void)_executeSyncOnMainThreadIfNeeded:(id /* block */)arg1;
- (bool)_hasPasscode;
- (bool)_isHSA2AvailableForAuthenticationContext:(id)arg1;
- (void)_presentCDPUpgradeSpinnerViewControllerForAuthContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_validateCDPStateForAuthResults:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_validatePasscodeWithCompletion:(id /* block */)arg1;
- (id)authController;
- (id)delegate;
- (id)initWithPresentingViewController:(id)arg1;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)presentingViewController;
- (void)setAuthController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
