/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupProvisioningFieldsViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentVerificationControllerDelegate, RemoteUIControllerDelegate, UITextFieldDelegate> {
    CLInUseAssertion * _CLInUse;
    NSString * _activatingPaymentPassUniqueID;
    UINotificationFeedbackGenerator * _cardAddedFeedbackGenerator;
    PKPaymentSetupFooterView * _cardDetailsFooterView;
    id /* block */  _continueActionHandler;
    bool  _hideSetupLaterButton;
    PKPaymentProvisioningController * _paymentProvisioningController;
    bool  _termsPresented;
    RemoteUIController * _termsUIController;
    PKPaymentVerificationController * _verificationController;
    bool  _waitForActivation;
    id /* block */  _waitForActivationCompletionHandler;
    NSTimer * _waitForActivationTimer;
}

@property (nonatomic, copy) id /* block */ continueActionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSetupLaterButton;
@property (nonatomic, retain) PKPaymentProvisioningController *paymentProvisioningController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cardDetailsFooterView;
- (void)_cleanupWaitForActivation;
- (void)_didActivatePaymentPass:(id)arg1;
- (void)_handleNextCredentialWithPresentationDelay:(long long)arg1 completion:(id /* block */)arg2;
- (void)_handlePassSuccessfullyAdded:(id)arg1;
- (void)_logNormalizedLevenshteinDistanceFromString:(id)arg1 toField:(id)arg2 forKey:(id)arg3 onQueue:(id)arg4;
- (void)_passLibraryDidChange:(id)arg1;
- (void)_performEligibilityWithCompletion:(id /* block */)arg1;
- (void)_performFinishWithCompletion:(id /* block */)arg1;
- (void)_performProvisionWithCompletion:(id /* block */)arg1;
- (void)_performTermsWithCompletion:(id /* block */)arg1;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1;
- (void)_provisioningStateDidChange:(id)arg1;
- (void)_requestWaitForActivation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_shouldShowAutomaticSelectionForPass:(id)arg1;
- (bool)_shouldShowVerificationMethodsForPass:(id)arg1;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_showAutomaticSelectionForPass:(id)arg1;
- (void)_showVerificationMethodsForPass:(id)arg1;
- (void)_showVerifiedUI;
- (void)_waitForActivation:(id)arg1;
- (void)_waitForActivationDidTimeout:(id)arg1;
- (void)acceptTerms;
- (void)addDifferentCard:(id)arg1;
- (id /* block */)continueActionHandler;
- (void)dealloc;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)displayTermsForEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)displayTermsForTermsURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)footerView;
- (void)handleNextActionError:(id)arg1 shouldContinue:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)handleNextActionWithCompletion:(id /* block */)arg1;
- (void)handleNextButtonTapped:(id)arg1;
- (void)handlePassSuccessfullyAdded:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hideSetupLaterButton;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentProvisioningRequest;
- (id)newPaymentRequirementsRequest;
- (id)paymentProvisioningController;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(bool)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)requestEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestRequirements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resetAllFieldsAndProvisioningState;
- (void)resetProvisioningState;
- (void)setContinueActionHandler:(id /* block */)arg1;
- (void)setHideSetupLaterButton:(bool)arg1;
- (void)setNotificationTextInFooterView:(id)arg1;
- (void)setPaymentProvisioningController:(id)arg1;
- (void)setupLater:(id)arg1;
- (void)showEligibilityIssueWithReason:(long long)arg1 learnMoreURL:(id)arg2 completion:(id /* block */)arg3;
- (void)showPrivacy:(id)arg1;
- (void)showProvisioningError:(id)arg1 completion:(id /* block */)arg2;
- (void)suppressFooterViewManualEntryButton;
- (void)suppressFooterViewSetupLaterButton;
- (void)suppressFooterViewSkipCardButton;
- (void)updateFieldsModelWithPaymentCredential:(id)arg1;
- (void)updateFieldsModelWithRequirementsResponse:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
