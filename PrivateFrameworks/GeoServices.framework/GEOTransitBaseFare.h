/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitBaseFare : PBCodable <NSCopying> {
    BOOL  _cashOnly;
    struct { 
        unsigned int numberOfLegs : 1; 
        unsigned int paymentType : 1; 
        unsigned int cashOnly : 1; 
    }  _has;
    unsigned int  _numberOfLegs;
    int  _paymentType;
    GEOTransitPrice * _price;
    NSMutableArray * _supportedPaymentMethods;
}

@property (nonatomic) BOOL cashOnly;
@property (nonatomic) BOOL hasCashOnly;
@property (nonatomic) BOOL hasNumberOfLegs;
@property (nonatomic) BOOL hasPaymentType;
@property (nonatomic, readonly) BOOL hasPrice;
@property (nonatomic) unsigned int numberOfLegs;
@property (nonatomic) int paymentType;
@property (nonatomic, retain) GEOTransitPrice *price;
@property (nonatomic, retain) NSMutableArray *supportedPaymentMethods;

+ (Class)supportedPaymentMethodType;

- (int)StringAsPaymentType:(id)arg1;
- (void)addSupportedPaymentMethod:(id)arg1;
- (BOOL)cashOnly;
- (void)clearSupportedPaymentMethods;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCashOnly;
- (BOOL)hasNumberOfLegs;
- (BOOL)hasPaymentType;
- (BOOL)hasPrice;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfLegs;
- (int)paymentType;
- (id)paymentTypeAsString:(int)arg1;
- (id)price;
- (BOOL)readFrom:(id)arg1;
- (void)setCashOnly:(BOOL)arg1;
- (void)setHasCashOnly:(BOOL)arg1;
- (void)setHasNumberOfLegs:(BOOL)arg1;
- (void)setHasPaymentType:(BOOL)arg1;
- (void)setNumberOfLegs:(unsigned int)arg1;
- (void)setPaymentType:(int)arg1;
- (void)setPrice:(id)arg1;
- (void)setSupportedPaymentMethods:(id)arg1;
- (id)supportedPaymentMethodAtIndex:(unsigned int)arg1;
- (id)supportedPaymentMethods;
- (unsigned int)supportedPaymentMethodsCount;
- (void)writeTo:(id)arg1;

@end
