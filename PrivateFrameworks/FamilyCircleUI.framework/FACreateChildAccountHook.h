/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FACreateChildAccountHook : NSObject <AAUIAccountManagerDelegate, AAUIServerHook, FAChildAccountCreationDelegate> {
    FAChildAccountCreationController * _childCreateController;
    id /* block */  _completion;
    <AAUIServerHookDelegate> * _delegate;
    UIViewController * _initialViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callCompletion:(bool)arg1 error:(id)arg2;
- (void)_handleCreateChildAccount:(id /* block */)arg1;
- (id)_presentationContext;
- (void)_tearDownChildAccountCreateController:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (struct NSDictionary { Class x1; }*)accountsForAccountManager:(id)arg1;
- (void)childAccountCreationController:(id)arg1 didCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)childAccountCreationController:(id)arg1 didLoadRemoteUIWithSuccess:(bool)arg2;
- (id)delegate;
- (id)navigationItemToShowInitialLoadingForChildAccountCreationController:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
