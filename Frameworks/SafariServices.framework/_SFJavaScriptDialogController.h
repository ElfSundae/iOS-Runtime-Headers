/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFJavaScriptDialogController : NSObject <_SFJavaScriptDialogViewDelegate> {
    WBSJavaScriptDialogCompletionHandler *_completionHandler;
    <_SFJavaScriptDialogControllerDelegate> *_delegate;
    <_SFJavaScriptDialogPresenting> *_dialogPresenter;
    _SFJavaScriptDialogView *_dialogView;
    int _webProcessIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFJavaScriptDialogControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <_SFJavaScriptDialogPresenting> *dialogPresenter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (BOOL)_isPresentingDialogView;
- (void)_setUpPresentationWithMessage:(id)arg1 completionHandler:(id)arg2;
- (void)_setUpPresentationWithMessage:(id)arg1 defaultText:(id)arg2 completionHandler:(id)arg3;
- (void)_tearDownPresentation;
- (id)delegate;
- (id)dialogPresenter;
- (void)dismissDialogIfNeeded;
- (void)javaScriptDialogView:(id)arg1 didSelectActionAtIndex:(int)arg2 withPromptText:(id)arg3;
- (void)owningWebViewWillBecomeActive;
- (void)setDelegate:(id)arg1;
- (void)setDialogPresenter:(id)arg1;
- (void)showAlertWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showConfirmWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showPromptWithMessage:(id)arg1 defaultText:(id)arg2 completionHandler:(id /* block */)arg3;

@end
