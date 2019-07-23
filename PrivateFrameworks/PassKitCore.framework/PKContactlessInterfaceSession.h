/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContactlessInterfaceSession : PKPaymentSession <NFLoyaltyAndPaymentSessionDelegate> {
    NSArray *_activatedHostCards;
    PKPaymentApplication *_activatedPaymentApplication;
    PKPaymentPass *_activatedPaymentPass;
    NSArray *_activatedValueAddedServicePasses;
    unsigned char _cardEmulationMode;
    <PKContactlessInterfaceSessionDelegate> *_delegate;
    int _encryptionScheme;
    BOOL _fieldPresent;
    PKFieldProperties *_fieldProperties;
    BOOL _fieldPropertiesLookupActive;
    BOOL _fieldPropertiesLookupProcessed;
    unsigned int _fieldPropertiesLookupTechnology;
    unsigned int _fieldPropertiesLookupValueAddedServiceMode;
    unsigned int _state;
    unsigned long long _transactionStartTime;
    NSArray *_valueAddedServiceTransactions;
}

@property (nonatomic, readonly) PKPaymentApplication *activatedPaymentApplication;
@property (nonatomic, readonly) PKPaymentPass *activatedPaymentPass;
@property (nonatomic, readonly) NSArray *activatedValueAddedServicePasses;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKContactlessInterfaceSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKFieldProperties *fieldProperties;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;

+ (id)contactlessInterfaceSessionWithInternalSession:(id)arg1;

- (id)_appletForPaymentApplication:(id)arg1;
- (id)_appletWithIdentifier:(id)arg1;
- (void)_beginFieldPropertiesLookupWithFieldTechnology:(unsigned int)arg1 andValueAddedServiceMode:(unsigned int)arg2;
- (void)_endFieldPropertiesLookup;
- (id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2;
- (void)_processFieldPropertiesLookupWithMerchantIdentifiers:(id)arg1;
- (BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(BOOL)arg3;
- (BOOL)activateValueAddedServicePassWhitelist:(id)arg1 greylist:(id)arg2;
- (id)activatedPaymentApplication;
- (id)activatedPaymentPass;
- (id)activatedValueAddedServicePasses;
- (BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)fieldPresent;
- (id)fieldProperties;
- (id)initWithInternalSession:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didDetectField:(BOOL)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didDetectTechnology:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(BOOL)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (BOOL)stopCardEmulation;

@end
