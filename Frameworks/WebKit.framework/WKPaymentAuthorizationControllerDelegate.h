/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPaymentAuthorizationControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_getPaymentServicesMerchantURL:(id /* block */)arg1;
- (id)initWithRequest:(id)arg1 presenter:(struct PaymentAuthorizationPresenter { int (**x1)(); struct WeakPtrFactory<WebKit::PaymentAuthorizationPresenter> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_2_1_1; } x2; struct Client {} *x3; }*)arg2;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationController:(id)arg1 didRequestMerchantSession:(id /* block */)arg2;
- (void)paymentAuthorizationController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;

@end
