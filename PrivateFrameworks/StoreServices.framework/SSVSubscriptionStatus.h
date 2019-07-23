/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionStatus : NSObject <NSCopying, SSXPCCoding> {
    unsigned long long _acceptedStoreTermsVersion;
    NSNumber *_accountIdentifier;
    NSArray *_accountPermissions;
    int _accountStatus;
    int _carrierBundlingStatus;
    NSString *_cellularOperatorName;
    BOOL _discoveryModeEligible;
    BOOL _familyOrganizer;
    BOOL _familySubscription;
    BOOL _hasFamily;
    BOOL _hasFamilyMembers;
    BOOL _hasOfflineSlot;
    BOOL _hasOfflineSlots;
    unsigned long long _latestStoreTermsVersion;
    NSString *_phoneNumber;
    NSDictionary *_rawResponseData;
    NSString *_sessionIdentifier;
    double _subscriptionExpirationTime;
    BOOL _subscriptionPurchaser;
}

@property (nonatomic, readonly) unsigned long long MP_capabilities;
@property (nonatomic) unsigned long long acceptedStoreTermsVersion;
@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSArray *accountPermissions;
@property (nonatomic) int accountStatus;
@property (nonatomic) int carrierBundlingStatus;
@property (nonatomic, copy) NSString *cellularOperatorName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDiscoveryModeEligible, nonatomic) BOOL discoveryModeEligible;
@property (getter=isFamilyOrganizer, nonatomic) BOOL familyOrganizer;
@property (getter=isFamilySubscription, nonatomic) BOOL familySubscription;
@property (nonatomic) BOOL hasFamily;
@property (nonatomic) BOOL hasFamilyMembers;
@property (nonatomic, readonly) BOOL hasOfflineSlot;
@property (nonatomic) BOOL hasOfflineSlots;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned long long latestStoreTermsVersion;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSDictionary *rawResponseData;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (getter=isSubscribed, nonatomic) BOOL subscribed;
@property (nonatomic, copy) NSDate *subscriptionExpirationDate;
@property (getter=isSubscriptionPurchaser, nonatomic) BOOL subscriptionPurchaser;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (void).cxx_destruct;
- (void)_setSubscribed:(BOOL)arg1;
- (unsigned long long)acceptedStoreTermsVersion;
- (id)accountIdentifier;
- (id)accountPermissions;
- (int)accountStatus;
- (int)carrierBundlingStatus;
- (id)cellularOperatorName;
- (id)copyUserDefaultsRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (BOOL)hasFamily;
- (BOOL)hasFamilyMembers;
- (BOOL)hasOfflineSlot;
- (BOOL)hasOfflineSlots;
- (id)initWithUserDefaultsRepresentation:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isDiscoveryModeEligible;
- (BOOL)isFamilyOrganizer;
- (BOOL)isFamilySubscription;
- (BOOL)isSubscribed;
- (BOOL)isSubscriptionPurchaser;
- (unsigned long long)latestStoreTermsVersion;
- (id)phoneNumber;
- (id)rawResponseData;
- (void)resetAccountBasedProperties;
- (void)resetCarrierBundlingProperties;
- (id)sessionIdentifier;
- (void)setAcceptedStoreTermsVersion:(unsigned long long)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountPermissions:(id)arg1;
- (void)setAccountStatus:(int)arg1;
- (void)setCarrierBundlingStatus:(int)arg1;
- (void)setCellularOperatorName:(id)arg1;
- (void)setDiscoveryModeEligible:(BOOL)arg1;
- (void)setFamilyOrganizer:(BOOL)arg1;
- (void)setFamilySubscription:(BOOL)arg1;
- (void)setHasFamily:(BOOL)arg1;
- (void)setHasFamilyMembers:(BOOL)arg1;
- (void)setHasOfflineSlots:(BOOL)arg1;
- (void)setLatestStoreTermsVersion:(unsigned long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRawResponseData:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setSubscriptionExpirationDate:(id)arg1;
- (void)setSubscriptionPurchaser:(BOOL)arg1;
- (void)setValuesUsingStatusDictionary:(id)arg1;
- (id)subscriptionExpirationDate;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (unsigned long long)MP_capabilities;

@end
