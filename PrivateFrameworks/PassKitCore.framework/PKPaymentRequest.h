/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequest : NSObject <NSSecureCoding> {
    NSString * _CTDataConnectionServiceType;
    NSData * _applicationData;
    const void * _billingAddress;
    PKContact * _billingContact;
    NSString * _countryCode;
    NSString * _currencyCode;
    BOOL  _expectsMerchantSession;
    unsigned int  _merchantCapabilities;
    NSString * _merchantIdentifier;
    PKPaymentMerchantSession * _merchantSession;
    NSURL * _originatingURL;
    NSArray * _paymentSummaryItems;
    unsigned int  _requiredBillingAddressFields;
    unsigned int  _requiredShippingAddressFields;
    BOOL  _requiresAddressPrecision;
    const void * _shippingAddress;
    PKContact * _shippingContact;
    BOOL  _shippingEditable;
    NSString * _shippingEditableMessage;
    NSArray * _shippingMethods;
    unsigned int  _shippingType;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    NSArray * _supportedNetworks;
    NSArray * _thumbnailURLs;
}

@property (nonatomic, retain) NSString *CTDataConnectionServiceType;
@property (nonatomic, copy) NSData *applicationData;
@property (nonatomic) const void*billingAddress;
@property (nonatomic, retain) PKContact *billingContact;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) BOOL expectsMerchantSession;
@property (nonatomic) unsigned int merchantCapabilities;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, retain) PKPaymentMerchantSession *merchantSession;
@property (nonatomic, retain) NSURL *originatingURL;
@property (nonatomic, copy) NSArray *paymentSummaryItems;
@property (nonatomic) unsigned int requiredBillingAddressFields;
@property (nonatomic) unsigned int requiredShippingAddressFields;
@property (nonatomic) BOOL requiresAddressPrecision;
@property (nonatomic) const void*shippingAddress;
@property (nonatomic, retain) PKContact *shippingContact;
@property (getter=isShippingEditable, nonatomic) BOOL shippingEditable;
@property (nonatomic, copy) NSString *shippingEditableMessage;
@property (nonatomic, copy) NSArray *shippingMethods;
@property (nonatomic) unsigned int shippingType;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, copy) NSArray *supportedNetworks;
@property (nonatomic, retain) NSArray *thumbnailURLs;

+ (id)availableNetworks;
+ (id)requestWithProtobuf:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (int)version;

- (void).cxx_destruct;
- (id)CTDataConnectionServiceType;
- (id)_shippingTypeToString;
- (id)_transactionAmount;
- (id)applicationData;
- (const void*)billingAddress;
- (id)billingContact;
- (id)countryCode;
- (id)currencyCode;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)expectsMerchantSession;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPaymentRequest:(id)arg1;
- (BOOL)isServiceProviderPaymentRequest;
- (BOOL)isShippingEditable;
- (unsigned int)merchantCapabilities;
- (id)merchantIdentifier;
- (id)merchantSession;
- (id)originatingURL;
- (id)paymentSummaryItems;
- (id)protobuf;
- (unsigned int)requiredBillingAddressFields;
- (unsigned int)requiredShippingAddressFields;
- (BOOL)requiresAddressPrecision;
- (id)serviceProviderPaymentRequest;
- (void)setApplicationData:(id)arg1;
- (void)setBillingAddress:(void*)arg1;
- (void)setBillingContact:(id)arg1;
- (void)setCTDataConnectionServiceType:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setExpectsMerchantSession:(BOOL)arg1;
- (void)setMerchantCapabilities:(unsigned int)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantSession:(id)arg1;
- (void)setOriginatingURL:(id)arg1;
- (void)setPaymentSummaryItems:(id)arg1;
- (void)setRequiredBillingAddressFields:(unsigned int)arg1;
- (void)setRequiredShippingAddressFields:(unsigned int)arg1;
- (void)setRequiresAddressPrecision:(BOOL)arg1;
- (void)setShippingAddress:(void*)arg1;
- (void)setShippingContact:(id)arg1;
- (void)setShippingEditable:(BOOL)arg1;
- (void)setShippingEditableMessage:(id)arg1;
- (void)setShippingMethods:(id)arg1;
- (void)setShippingType:(unsigned int)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setSupportedNetworks:(id)arg1;
- (void)setThumbnailURLs:(id)arg1;
- (const void*)shippingAddress;
- (id)shippingContact;
- (id)shippingEditableMessage;
- (id)shippingMethods;
- (unsigned int)shippingType;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (id)supportedNetworks;
- (id)thumbnailURLs;

@end
