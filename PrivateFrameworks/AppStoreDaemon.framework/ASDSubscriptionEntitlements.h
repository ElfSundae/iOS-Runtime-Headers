/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDSubscriptionEntitlements : NSObject {
    ASDServiceBroker * _serviceBroker;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(id /* block */)arg1;
- (void)getSubscriptionEntitlementsIgnoreCaches:(bool)arg1 forActiveAccountWithResultHandler:(id /* block */)arg2;
- (id)init;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;

@end
