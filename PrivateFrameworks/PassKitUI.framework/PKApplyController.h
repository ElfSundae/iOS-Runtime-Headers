/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKApplyController : NSObject <PKPaymentServiceDelegate, PKSetupFlowControllerProtocol> {
    PKAccount * _account;
    long long  _context;
    NSString * _coreIDVNextStepToken;
    NSArray * _encryptionCertificates;
    bool  _endedApplyFlow;
    PKFeatureApplication * _featureApplication;
    unsigned long long  _featureIdentifier;
    DIVerificationSession * _idVerificationSession;
    PKPaymentInstallmentConfiguration * _installmentConfiguration;
    PKAssertion * _notificationSupressionAssertion;
    <PKSetupFlowControllerProtocol> * _parentFlowController;
    PKPaymentService * _paymentService;
    NSString * _previousContextIdentifier;
    NSMutableSet * _processedTermsIdentifiers;
    PKPaymentProvisioningController * _provisioningController;
    unsigned long long  _runningApplicationUpdates;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    NSMutableSet * _shownTermsIdentifiers;
    unsigned long long  _viewControllerIndex;
    NSMutableArray * _viewControllers;
    PKPaymentWebService * _webService;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKFeatureApplication *featureApplication;
@property (nonatomic, readonly) unsigned long long featureIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (nonatomic, retain) <PKSetupFlowControllerProtocol> *parentFlowController;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireAssertion;
- (void)_deviceMetadataFields:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)_displayableErrorForError:(id)arg1 showDetailedErrorFlow:(bool)arg2;
- (id)_fieldsViewControllerForPage:(id)arg1;
- (void)_handleApplyResponse:(id)arg1 originalFeatureApplication:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleCoreIDVPage:(id)arg1 totalPageCount:(long long)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleResponseError:(id)arg1 completion:(id /* block */)arg2;
- (void)_invalidateAssertion;
- (void)_invalidateIDVSession;
- (id)_nextQueuedViewController;
- (void)_performApplyWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_performCoreIDVNextStepWithPage:(id)arg1 completion:(id /* block */)arg2;
- (void)_performCoreIDVShareWithCompletion:(id /* block */)arg1;
- (void)_performCreateWithCompletion:(id /* block */)arg1;
- (void)_performWithdrawWithCompletion:(id /* block */)arg1;
- (void)_queueAcceptedFlowWithPage:(id)arg1;
- (void)_queueActionFlowWithPage:(id)arg1;
- (void)_queueApplicationTermsFlow;
- (void)_queueCannotResumeIDVFlow;
- (void)_queueDeclinedFlowWithPage:(id)arg1;
- (void)_queueEmailRequiredErrorViewController;
- (void)_queueExpiredFlowWithPage:(id)arg1;
- (void)_queueFieldsFlowWithNextStepInfo:(id)arg1;
- (void)_queueGenericErrorViewController;
- (void)_queueGenericErrorViewControllerWithPage:(id)arg1;
- (void)_queueInfoFlowWithNextWithPage:(id)arg1;
- (void)_queueOfferFlowWithPage:(id)arg1;
- (void)_queuePassActiviationFlowWithCompletion:(id /* block */)arg1;
- (void)_queueStateReasonExplanationFlowWithPage:(id)arg1;
- (void)_queueTerminalStateFlowWithPage:(id)arg1;
- (void)_reset;
- (void)_startCoreIDVSessionWithStepInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_startPaymentServiceListener;
- (void)_stopPaymentServiceListener;
- (void)_submitCoreIDVDocumentsPage:(id)arg1 selectedDocument:(id)arg2 frontImageData:(id)arg3 backImageData:(id)arg4 completion:(id /* block */)arg5;
- (void)_submitCoreIDVFieldsPage:(id)arg1 completion:(id /* block */)arg2;
- (id)applicationUpdatedAlertControllerWithHandler:(id /* block */)arg1;
- (void)applyFlowDidAppear;
- (long long)context;
- (void)dealloc;
- (void)endApplyFlow;
- (id)featureApplication;
- (void)featureApplicationChanged:(id)arg1;
- (unsigned long long)featureIdentifier;
- (id)initWithFeature:(unsigned long long)arg1 setupDelegate:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4;
- (id)initWithFeatureApplication:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4;
- (id)installmentConfiguration;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (id)parentFlowController;
- (id)provisioningController;
- (void)setInstallmentConfiguration:(id)arg1;
- (void)setParentFlowController:(id)arg1;
- (void)submitActionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)submitDocumentPage:(id)arg1 selectedDocument:(id)arg2 frontImage:(id)arg3 backImage:(id)arg4 completion:(id /* block */)arg5;
- (void)submitFieldsPage:(id)arg1 completion:(id /* block */)arg2;
- (void)termsAccepted:(bool)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)termsDataForFeatureWithIdentifier:(id)arg1 format:(id)arg2 completion:(id /* block */)arg3;
- (void)termsDataForIdentifier:(id)arg1 format:(id)arg2 completion:(id /* block */)arg3;
- (void)termsShownWithIdentifier:(id)arg1;
- (void)withdrawApplicationWithCompletion:(id /* block */)arg1;

@end
