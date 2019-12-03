/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext : PBCodable <NSCopying> {
    bool  _allowNonSecureHTTP;
    struct { 
        unsigned int allowNonSecureHTTP : 1; 
    }  _has;
    NSString * _termsURL;
}

@property (nonatomic) bool allowNonSecureHTTP;
@property (nonatomic) bool hasAllowNonSecureHTTP;
@property (nonatomic, readonly) bool hasTermsURL;
@property (nonatomic, retain) NSString *termsURL;

- (void).cxx_destruct;
- (bool)allowNonSecureHTTP;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowNonSecureHTTP;
- (bool)hasTermsURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAllowNonSecureHTTP:(bool)arg1;
- (void)setHasAllowNonSecureHTTP:(bool)arg1;
- (void)setTermsURL:(id)arg1;
- (id)termsURL;
- (void)writeTo:(id)arg1;

@end
