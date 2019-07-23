/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController {
    BOOL  _suppressPrimarySetupFields;
}

@property (nonatomic) BOOL suppressPrimarySetupFields;

- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithProvisioningController:(id)arg1 context:(int)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (id)newPaymentEligibilityRequest;
- (void)performNextActionForProvisioningState:(int)arg1 withCompletion:(id /* block */)arg2;
- (id)readonlyFieldIdentifiers;
- (void)setSuppressPrimarySetupFields:(BOOL)arg1;
- (BOOL)suppressPrimarySetupFields;
- (void)viewDidLoad;
- (id)visibleFieldIdentifiers;

@end
