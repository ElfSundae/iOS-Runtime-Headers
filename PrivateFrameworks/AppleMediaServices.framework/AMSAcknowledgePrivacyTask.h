/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAcknowledgePrivacyTask : AMSTask {
    ACAccount * _account;
    NSSet * _privacyIdentifiers;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) NSSet *privacyIdentifiers;

+ (id)_accountStoreForPrivacyIdentifier:(id)arg1;
+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)arg1;
+ (id)_multiplexPrivacyIdentifier:(id)arg1 contentVersion:(unsigned long long)arg2;
+ (id)_storePrivacyIdentifiers;
+ (bool)acknowledgementNeededForPrivacyIdentifier:(id)arg1;
+ (bool)acknowledgementNeededForPrivacyIdentifier:(id)arg1 account:(id)arg2;
+ (bool)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1;
+ (bool)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 account:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (id)acknowledgePrivacy;
- (id)initWithPrivacyIdentifier:(id)arg1;
- (id)initWithPrivacyIdentifier:(id)arg1 account:(id)arg2;
- (id)initWithPrivacyIdentifiers:(id)arg1;
- (id)initWithPrivacyIdentifiers:(id)arg1 account:(id)arg2;
- (id)privacyIdentifiers;
- (void)setAccount:(id)arg1;
- (void)setPrivacyIdentifiers:(id)arg1;

@end
