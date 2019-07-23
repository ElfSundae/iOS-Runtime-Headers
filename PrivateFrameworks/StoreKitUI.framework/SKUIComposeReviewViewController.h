/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIComposeReviewViewController : SUNavigationController <SKUIComposeReviewFormDelegate, UIAlertViewDelegate> {
    SKUIComposeReviewFormViewController * _formViewController;
    SUPlaceholderViewController * _placeholderViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIComposeReviewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (void)_finishLoadWithOutput:(id)arg1 error:(id)arg2;
- (void)_loadReviewWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_sendDidCancel;
- (void)_sendDidSubmit;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)composeReviewFormDidCancel:(id)arg1;
- (void)composeReviewFormDidSubmit:(id)arg1;
- (void)dealloc;
- (id)editedReviewMetadata;
- (id)init;
- (void)loadReviewWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setRating:(float)arg1;
- (void)submitReview;

@end
