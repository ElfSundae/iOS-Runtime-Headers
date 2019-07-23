/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDDeviceRegistrationServiceCoordinator : NSObject <PDScheduledActivityClient> {
    PDPaymentWebServiceCoordinator * _paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator * _peerPaymentWebServiceCoordinator;
    NSMutableArray * _registrationTasks;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property (nonatomic, readonly) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)arg1;
- (void)_handlePaymentWebServiceContextChanged:(id)arg1;
- (void)_peerPaymentRegisterWithURL:(id)arg1 paymentWebService:(id)arg2 completion:(id /* block */)arg3;
- (void)_performDeviceRegistrationWithReason:(id)arg1;
- (bool)_shouldAttemptBackgroundPeerPaymentRegistration;
- (void)dealloc;
- (id)init;
- (id)initWithPaymentWebServiceCoordinator:(id)arg1 peerPaymentWebServiceCoordinator:(id)arg2;
- (void)notePasscodeChanged;
- (id)paymentWebServiceCoordinator;
- (id)peerPaymentWebServiceCoordinator;
- (void)performDeviceRegistrationForReason:(id)arg1 action:(long long)arg2 completion:(id /* block */)arg3;

@end
