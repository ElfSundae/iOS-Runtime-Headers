/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSendPaymentIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSendPaymentIntentResponse> {
    bool  __encodeLegacyGloryData;
    struct { }  _has;
    _INPBPaymentRecord * _paymentRecord;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPaymentRecord;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBPaymentRecord *paymentRecord;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPaymentRecord;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)paymentRecord;
- (bool)readFrom:(id)arg1;
- (void)setPaymentRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end
