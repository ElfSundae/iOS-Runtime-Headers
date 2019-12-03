/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilyEligibilityRequester : NSObject {
    AIDAAccountManager * _accountManager;
    AAGrandSlamSigner * _grandSlamSigner;
    NSOperationQueue * _networkActivityQueue;
}

- (void).cxx_destruct;
- (id)_accountStore;
- (id)_appleAccount;
- (id)_grandSlamSigner;
- (id)init;
- (id)initWithAccountManager:(id)arg1;
- (void)requestFamilyEligibilityWithCompletion:(id /* block */)arg1;

@end
