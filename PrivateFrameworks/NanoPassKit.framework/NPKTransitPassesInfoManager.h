/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKTransitPassesInfoManager : NSObject <PKPaymentServiceDelegate> {
    <NPKTransitPassesInfoManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateCallbackQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    PKPaymentService * _paymentService;
    NSMutableDictionary * _transitPassBalanceModelsByPassUniqueID;
}

@property (readonly, copy) NSString *debugDescription;
@property <NPKTransitPassesInfoManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSSet *passes;
@property (nonatomic, readonly) PKPaymentService *paymentService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchMostRecentBalancesForPass:(id)arg1;
- (void)_fetchMostRecentInfoForPass:(id)arg1;
- (void)_fetchMostRecentTransitPropertiesForPass:(id)arg1;
- (void)_loadPassContentIfNeeded:(id)arg1;
- (void)_notifyDelegateOfUpdatedTransitPassInfoForModel:(id)arg1;
- (id)_transitPassBalanceModelWithPass:(id)arg1 currentModel:(id)arg2;
- (void)_updatePassTransitPassesInfoManagerForPassUiniqueID:(id)arg1 updateBlock:(id /* block */)arg2;
- (void)addPass:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithPaymentService:(id)arg1 delegate:(id)arg2;
- (id)passInfoForForPassWithUniqueID:(id)arg1;
- (id)passes;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (id)paymentService;
- (void)refreshAllPasses;
- (void)removePassWithUniqueID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasses:(id)arg1;

@end
