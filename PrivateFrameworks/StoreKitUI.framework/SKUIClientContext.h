/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate> {
    NSString *_additionalPurchaseParameters;
    SKUIApplicationController *_applicationController;
    NSBundle *_bundle;
    SUClientInterface *_clientInterface;
    NSDictionary *_configurationDictionary;
    SKUIStoreDialogController *_dialogController;
    SKUILocalizedStringDictionary *_localizedStrings;
    NSString *_metricsConfigurationIdentifier;
    NSMapTable *_metricsPageContexts;
    NSMutableArray *_navigationHistory;
    NSString *_navigationHistoryPersistenceKey;
    NSString *_purchaseAffiliateIdentifier;
    SKUIURL *_purchaseReferrerURL;
    int _purchaseURLBagType;
    IKAppContext *_scriptAppContext;
    NSString *_storeFrontIdentifier;
    SSUpdatableAssetController *_updatableAssetController;
    SKUIURLBag *_urlBag;
    int _userInterfaceIdiomOverride;
}

@property (nonatomic, readonly) SSURLBag *URLBag;
@property (getter=_applicationController, setter=_setApplicationController:, nonatomic) SKUIApplicationController *_applicationController;
@property (getter=_scriptAppContext, setter=_setScriptAppContext:, nonatomic, retain) IKAppContext *_scriptAppContext;
@property (nonatomic, readonly) SUClientInterface *clientInterface;
@property (nonatomic, readonly, copy) NSDictionary *configurationDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isManagedAppleID, nonatomic, readonly) BOOL managedAppleID;
@property (nonatomic, copy) NSString *metricsConfigurationIdentifier;
@property (nonatomic, readonly) Class moviePlayerViewControllerClass;
@property (getter=isMultiUser, nonatomic, readonly) BOOL multiUser;
@property (nonatomic, readonly) NSArray *navigationHistory;
@property (nonatomic, copy) NSString *navigationHistoryPersistenceKey;
@property (nonatomic, readonly) SSVPlatformContext *platformContext;
@property (nonatomic, copy) SKUIURL *purchaseReferrerURL;
@property (nonatomic, readonly) NSString *storeFrontIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) SSUpdatableAssetController *updatableAssetController;
@property (nonatomic) int userInterfaceIdiomOverride;

+ (id)_cachePathForStoreFrontIdentifier:(id)arg1;
+ (id)_configurationDictionaryWithBagDictionary:(id)arg1;
+ (id)_fallbackConfigurationDictionary;
+ (id)defaultContext;

- (void).cxx_destruct;
- (id)SAPSessionForVersion:(int)arg1;
- (id)URLBag;
- (id)_applicationController;
- (id)_navigationHistory;
- (id)_scriptAppContext;
- (void)_setAdditionalPurchaseParameters:(id)arg1;
- (void)_setApplicationController:(id)arg1;
- (void)_setPurchaseAffiliateIdentifier:(id)arg1;
- (void)_setPurchaseURLBagType:(int)arg1;
- (void)_setScriptAppContext:(id)arg1;
- (void)_setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (id)additionalLeftBarButtonItemForDocumentContainerViewController:(id)arg1;
- (id)additionalRightBarButtonItemForDocumentContainerViewController:(id)arg1;
- (id)clientInterface;
- (void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
- (void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (id)configurationDictionary;
- (void)customizePurchase:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)documentViewControllerForTemplateViewElement:(id)arg1;
- (void)getDefaultMetricsControllerWithCompletionBlock:(id /* block */)arg1;
- (id)initWithConfigurationDictionary:(id)arg1;
- (BOOL)isManagedAppleID;
- (BOOL)isMultiUser;
- (void)loadValueForConfigurationKey:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)localizedAlertWithError:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (id)metricsConfigurationIdentifier;
- (id)metricsPageContextForViewController:(id)arg1;
- (id)modalDocumentViewControllerForDocument:(id)arg1 options:(id)arg2;
- (Class)moviePlayerViewControllerClass;
- (id)navigationHistory;
- (id)navigationHistoryPersistenceKey;
- (id)newLegacyStorePageViewControllerForURLResponse:(id)arg1;
- (id)newLoadStoreURLOperationWithURL:(id)arg1;
- (id)newLoadStoreURLOperationWithURLRequest:(id)arg1;
- (id)platformContext;
- (id)previewViewControllerForViewElement:(id)arg1;
- (id)purchaseReferrerURL;
- (void)pushNavigationHistoryPageIdentifier:(id)arg1;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)sendApplicationDidEnterBackground;
- (void)sendApplicationWillEnterForeground;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (void)sendOnXEventWithDictionary:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setMetricsConfigurationIdentifier:(id)arg1;
- (void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2;
- (void)setNavigationHistoryPersistenceKey:(id)arg1;
- (void)setPurchaseReferrerURL:(id)arg1;
- (void)setUpdatableAssetController:(id)arg1;
- (void)setUserInterfaceIdiomOverride:(int)arg1;
- (id)storeFrontIdentifier;
- (BOOL)supportsRenderingVersion:(unsigned int)arg1;
- (id)tabBarItemsForStyle:(int)arg1;
- (id)updatableAssetController;
- (int)userInterfaceIdiomOverride;
- (id)valueForConfigurationKey:(id)arg1;

@end
