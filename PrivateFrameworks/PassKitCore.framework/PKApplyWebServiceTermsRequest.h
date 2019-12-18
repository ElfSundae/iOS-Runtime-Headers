/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKApplyWebServiceTermsRequest : PKApplyWebServiceRequest <NSSecureCoding> {
    NSString * _applicationIdentifier;
    NSString * _applicationTermsIdentifier;
    NSURL * _baseURL;
    PKPaymentDeviceMetadata * _deviceMetadata;
    NSDecimalNumber * _installmentAmount;
    NSString * _installmentCurrencyCode;
    bool  _isInstallment;
    NSString * _offerTermsIdentifier;
    bool  _termsAccepted;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *applicationTermsIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic, retain) NSDecimalNumber *installmentAmount;
@property (nonatomic, copy) NSString *installmentCurrencyCode;
@property (nonatomic) bool isInstallment;
@property (nonatomic, copy) NSString *offerTermsIdentifier;
@property (nonatomic) bool termsAccepted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)applicationIdentifier;
- (id)applicationTermsIdentifier;
- (id)baseURL;
- (id)deviceMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)installmentAmount;
- (id)installmentCurrencyCode;
- (bool)isInstallment;
- (id)offerTermsIdentifier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationTermsIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setInstallmentAmount:(id)arg1;
- (void)setInstallmentCurrencyCode:(id)arg1;
- (void)setIsInstallment:(bool)arg1;
- (void)setOfferTermsIdentifier:(id)arg1;
- (void)setTermsAccepted:(bool)arg1;
- (bool)termsAccepted;

@end
