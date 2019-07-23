/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassDescription : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _availableActions;
    NSArray * _backFieldBuckets;
    PKColor * _backgroundColor;
    PKImage * _backgroundImage;
    NSData * _backgroundImageEncoded;
    bool  _cobranded;
    NSData * _completeHash;
    bool  _deletePending;
    NSSet * _devicePaymentApplications;
    PKPaymentApplication * _devicePrimaryContactlessPaymentApplication;
    PKPaymentApplication * _devicePrimaryInAppPaymentApplication;
    PKPaymentApplication * _devicePrimaryPaymentApplication;
    long long  _effectivePaymentApplicationState;
    unsigned long long  _expressPassTypesMask;
    PKColor * _foregroundColor;
    NSArray * _frontFieldBuckets;
    NSNumber * _groupID;
    bool  _hasAssociatedPeerPaymentAccount;
    bool  _hasStoredValue;
    bool  _hasUserSelectableContactlessPaymentApplications;
    NSDate * _ingestionDate;
    NSString * _issuerCountryCode;
    PKColor * _labelColor;
    NSDecimalNumber * _lastAddValueAmount;
    bool  _lazyLoadEncodedImages;
    NSString * _localizedDescription;
    PKImage * _logoImage;
    NSData * _logoImageEncoded;
    NSString * _logoText;
    NSData * _manifestHash;
    PKNFCPayload * _nfcPayload;
    NSString * _organizationName;
    NSString * _passTypeIdentifier;
    NSDate * _pendingAddValueDate;
    PKPaymentApplication * _preferredPaymentApplication;
    bool  _privateLabel;
    NSDate * _relevantDate;
    unsigned long long  _settings;
    long long  _style;
    PKTransitAppletState * _transitAppletState;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSArray *availableActions;
@property (nonatomic, retain) NSArray *backFieldBuckets;
@property (nonatomic, retain) PKColor *backgroundColor;
@property (nonatomic, retain) PKImage *backgroundImage;
@property (nonatomic, retain) NSData *backgroundImageEncoded;
@property (getter=isCobranded, nonatomic) bool cobranded;
@property (nonatomic, retain) NSData *completeHash;
@property (nonatomic) bool deletePending;
@property (nonatomic, retain) NSSet *devicePaymentApplications;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryContactlessPaymentApplication;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryInAppPaymentApplication;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryPaymentApplication;
@property (nonatomic, readonly) long long effectiveContactlessPaymentApplicationState;
@property (nonatomic) long long effectivePaymentApplicationState;
@property (nonatomic) unsigned long long expressPassTypesMask;
@property (nonatomic, retain) PKColor *foregroundColor;
@property (nonatomic, retain) NSArray *frontFieldBuckets;
@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic) bool hasAssociatedPeerPaymentAccount;
@property (nonatomic) bool hasStoredValue;
@property (nonatomic) bool hasUserSelectableContactlessPaymentApplications;
@property (nonatomic, retain) NSDate *ingestionDate;
@property (nonatomic, retain) NSString *issuerCountryCode;
@property (nonatomic, retain) PKColor *labelColor;
@property (nonatomic, retain) NSDecimalNumber *lastAddValueAmount;
@property (nonatomic) bool lazyLoadEncodedImages;
@property (nonatomic, retain) NSString *localizedDescription;
@property (nonatomic, retain) PKImage *logoImage;
@property (nonatomic, retain) NSData *logoImageEncoded;
@property (nonatomic, retain) NSString *logoText;
@property (nonatomic, retain) NSData *manifestHash;
@property (nonatomic, retain) PKNFCPayload *nfcPayload;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NSDate *pendingAddValueDate;
@property (nonatomic, retain) PKPaymentApplication *preferredPaymentApplication;
@property (getter=isPrivateLabel, nonatomic) bool privateLabel;
@property (nonatomic, retain) NSDate *relevantDate;
@property (nonatomic) unsigned long long settings;
@property (nonatomic) long long style;
@property (nonatomic, retain) PKTransitAppletState *transitAppletState;
@property (nonatomic, retain) NSString *uniqueID;

+ (bool)isCachingEnabled;
+ (void)setCachingEnabled:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableActions;
- (id)backFieldBuckets;
- (id)backgroundColor;
- (id)backgroundImage;
- (id)backgroundImageEncoded;
- (id)completeHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deletePending;
- (id)description;
- (id)devicePaymentApplications;
- (id)devicePrimaryContactlessPaymentApplication;
- (id)devicePrimaryInAppPaymentApplication;
- (id)devicePrimaryPaymentApplication;
- (long long)effectiveContactlessPaymentApplicationState;
- (long long)effectivePaymentApplicationState;
- (id)encodeAsData:(id)arg1;
- (void)encodeObject:(id)arg1 asDataInCoder:(id)arg2 withKey:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expressPassTypesMask;
- (id)fieldForKey:(id)arg1;
- (id)foregroundColor;
- (id)frontFieldBuckets;
- (id)groupID;
- (bool)hasAssociatedPeerPaymentAccount;
- (bool)hasStoredValue;
- (bool)hasUserSelectableContactlessPaymentApplications;
- (bool)hasValidNFCPayload;
- (unsigned long long)hash;
- (id)ingestionDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 lazyLoadEncodedImages:(bool)arg2;
- (bool)isAddValuePending;
- (bool)isCobranded;
- (bool)isEnroute;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateLabel;
- (id)issuerCountryCode;
- (id)labelColor;
- (id)lastAddValueAmount;
- (bool)lazyLoadEncodedImages;
- (id)localizedDescription;
- (id)logoImage;
- (id)logoImageEncoded;
- (id)logoText;
- (id)manifestHash;
- (id)nfcPayload;
- (id)organizationName;
- (id)passTypeIdentifier;
- (id)pendingAddValueDate;
- (id)preferredPaymentApplication;
- (id)relevantDate;
- (void)setAvailableActions:(id)arg1;
- (void)setBackFieldBuckets:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageEncoded:(id)arg1;
- (void)setCobranded:(bool)arg1;
- (void)setCompleteHash:(id)arg1;
- (void)setDeletePending:(bool)arg1;
- (void)setDevicePaymentApplications:(id)arg1;
- (void)setDevicePrimaryContactlessPaymentApplication:(id)arg1;
- (void)setDevicePrimaryInAppPaymentApplication:(id)arg1;
- (void)setDevicePrimaryPaymentApplication:(id)arg1;
- (void)setEffectivePaymentApplicationState:(long long)arg1;
- (void)setExpressPassTypesMask:(unsigned long long)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setFrontFieldBuckets:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHasAssociatedPeerPaymentAccount:(bool)arg1;
- (void)setHasStoredValue:(bool)arg1;
- (void)setHasUserSelectableContactlessPaymentApplications:(bool)arg1;
- (void)setIngestionDate:(id)arg1;
- (void)setIssuerCountryCode:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLastAddValueAmount:(id)arg1;
- (void)setLazyLoadEncodedImages:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLogoImage:(id)arg1;
- (void)setLogoImageEncoded:(id)arg1;
- (void)setLogoText:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setNfcPayload:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPendingAddValueDate:(id)arg1;
- (void)setPreferredPaymentApplication:(id)arg1;
- (void)setPrivateLabel:(bool)arg1;
- (void)setRelevantDate:(id)arg1;
- (void)setSettings:(unsigned long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTransitAppletState:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (unsigned long long)settings;
- (long long)style;
- (bool)supportsExpressPassType:(long long)arg1;
- (bool)supportsInAppPaymentOnNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 paymentApplicationStates:(id)arg4;
- (bool)supportsInAppPaymentOnNetworks:(id)arg1 issuerCountryCodes:(id)arg2;
- (id)transitAppletState;
- (id)transitProperties;
- (id)uniqueID;

@end
