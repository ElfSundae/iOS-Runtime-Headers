/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.StubBundleSubscriptionManager : Swift._SwiftObject <FCBundleSubscriptionManagerType> {
    void bundleSubscription;
    void cachedSubscription;
    void entitlementsOverrideProvider;
}

@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription;
@property (nonatomic, readonly) FCBundleSubscription *cachedSubscription;
@property (nonatomic, retain) <FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider;

- (void)addObserver:(id)arg1;
- (id)bundleSubscription;
- (id)bundleSubscriptionLookupEntry;
- (id)cachedSubscription;
- (void)clearBundleSubscription;
- (id)entitlementsOverrideProvider;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)prepareForUseWithCompletion:(id /* block */)arg1;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)renewalNoticeShownWithPurchaseID:(id)arg1;
- (void)setEntitlementsOverrideProvider:(id)arg1;

@end
