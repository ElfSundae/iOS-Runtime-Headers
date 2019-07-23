/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentAuthorizationServiceProtocol <NSObject>

@required

- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(int)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(PKPaymentMerchantSession *)arg1 error:(NSError *)arg2;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(NSArray *)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(int)arg1 shippingMethods:(NSArray *)arg2 paymentSummaryItems:(NSArray *)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(int)arg1 paymentSummaryItems:(NSArray *)arg2;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(BOOL)arg1;

@optional

- (void)handleDismissWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)handleHostApplicationDidCancel;
- (void)prepareWithPaymentRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKPaymentRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
