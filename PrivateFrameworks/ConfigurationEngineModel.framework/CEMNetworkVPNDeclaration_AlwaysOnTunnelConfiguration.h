/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNDeclaration_AlwaysOnTunnelConfiguration : CEMPayloadBase {
    NSString * _payloadAuthName;
    NSString * _payloadAuthPassword;
    NSString * _payloadAuthenticationMethod;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters * _payloadChildSecurityAssociationParameters;
    NSString * _payloadDeadPeerDetectionRate;
    NSNumber * _payloadDisableMOBIKE;
    NSNumber * _payloadDisableRedirect;
    NSNumber * _payloadEnableCertificateRevocationCheck;
    NSNumber * _payloadEnablePFS;
    NSNumber * _payloadExtendedAuthEnabled;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters * _payloadIKESecurityAssociationParameters;
    NSString * _payloadLocalIdentifier;
    NSNumber * _payloadNATKeepAliveInterval;
    NSNumber * _payloadNATKeepAliveOffloadEnable;
    NSString * _payloadPayloadCertificateUUID;
    NSString * _payloadProtocolType;
    NSString * _payloadRemoteAddress;
    NSString * _payloadRemoteIdentifier;
    NSString * _payloadServerCertificateCommonName;
    NSString * _payloadServerCertificateIssuerCommonName;
    NSString * _payloadSharedSecret;
    NSNumber * _payloadUseConfigurationAttributeInternalIPSubnet;
}

@property (nonatomic, copy) NSString *payloadAuthName;
@property (nonatomic, copy) NSString *payloadAuthPassword;
@property (nonatomic, copy) NSString *payloadAuthenticationMethod;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadChildSecurityAssociationParameters;
@property (nonatomic, copy) NSString *payloadDeadPeerDetectionRate;
@property (nonatomic, copy) NSNumber *payloadDisableMOBIKE;
@property (nonatomic, copy) NSNumber *payloadDisableRedirect;
@property (nonatomic, copy) NSNumber *payloadEnableCertificateRevocationCheck;
@property (nonatomic, copy) NSNumber *payloadEnablePFS;
@property (nonatomic, copy) NSNumber *payloadExtendedAuthEnabled;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadIKESecurityAssociationParameters;
@property (nonatomic, copy) NSString *payloadLocalIdentifier;
@property (nonatomic, copy) NSNumber *payloadNATKeepAliveInterval;
@property (nonatomic, copy) NSNumber *payloadNATKeepAliveOffloadEnable;
@property (nonatomic, copy) NSString *payloadPayloadCertificateUUID;
@property (nonatomic, copy) NSString *payloadProtocolType;
@property (nonatomic, copy) NSString *payloadRemoteAddress;
@property (nonatomic, copy) NSString *payloadRemoteIdentifier;
@property (nonatomic, copy) NSString *payloadServerCertificateCommonName;
@property (nonatomic, copy) NSString *payloadServerCertificateIssuerCommonName;
@property (nonatomic, copy) NSString *payloadSharedSecret;
@property (nonatomic, copy) NSNumber *payloadUseConfigurationAttributeInternalIPSubnet;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4;
+ (id)buildWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4 withPayloadCertificateUUID:(id)arg5 withSharedSecret:(id)arg6 withExtendedAuthEnabled:(id)arg7 withDisableRedirect:(id)arg8 withDisableMOBIKE:(id)arg9 withUseConfigurationAttributeInternalIPSubnet:(id)arg10 withEnablePFS:(id)arg11 withEnableCertificateRevocationCheck:(id)arg12 withNATKeepAliveOffloadEnable:(id)arg13 withNATKeepAliveInterval:(id)arg14 withAuthName:(id)arg15 withAuthPassword:(id)arg16 withDeadPeerDetectionRate:(id)arg17 withProtocolType:(id)arg18 withServerCertificateIssuerCommonName:(id)arg19 withServerCertificateCommonName:(id)arg20 withIKESecurityAssociationParameters:(id)arg21 withChildSecurityAssociationParameters:(id)arg22;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAuthName;
- (id)payloadAuthPassword;
- (id)payloadAuthenticationMethod;
- (id)payloadChildSecurityAssociationParameters;
- (id)payloadDeadPeerDetectionRate;
- (id)payloadDisableMOBIKE;
- (id)payloadDisableRedirect;
- (id)payloadEnableCertificateRevocationCheck;
- (id)payloadEnablePFS;
- (id)payloadExtendedAuthEnabled;
- (id)payloadIKESecurityAssociationParameters;
- (id)payloadLocalIdentifier;
- (id)payloadNATKeepAliveInterval;
- (id)payloadNATKeepAliveOffloadEnable;
- (id)payloadPayloadCertificateUUID;
- (id)payloadProtocolType;
- (id)payloadRemoteAddress;
- (id)payloadRemoteIdentifier;
- (id)payloadServerCertificateCommonName;
- (id)payloadServerCertificateIssuerCommonName;
- (id)payloadSharedSecret;
- (id)payloadUseConfigurationAttributeInternalIPSubnet;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAuthName:(id)arg1;
- (void)setPayloadAuthPassword:(id)arg1;
- (void)setPayloadAuthenticationMethod:(id)arg1;
- (void)setPayloadChildSecurityAssociationParameters:(id)arg1;
- (void)setPayloadDeadPeerDetectionRate:(id)arg1;
- (void)setPayloadDisableMOBIKE:(id)arg1;
- (void)setPayloadDisableRedirect:(id)arg1;
- (void)setPayloadEnableCertificateRevocationCheck:(id)arg1;
- (void)setPayloadEnablePFS:(id)arg1;
- (void)setPayloadExtendedAuthEnabled:(id)arg1;
- (void)setPayloadIKESecurityAssociationParameters:(id)arg1;
- (void)setPayloadLocalIdentifier:(id)arg1;
- (void)setPayloadNATKeepAliveInterval:(id)arg1;
- (void)setPayloadNATKeepAliveOffloadEnable:(id)arg1;
- (void)setPayloadPayloadCertificateUUID:(id)arg1;
- (void)setPayloadProtocolType:(id)arg1;
- (void)setPayloadRemoteAddress:(id)arg1;
- (void)setPayloadRemoteIdentifier:(id)arg1;
- (void)setPayloadServerCertificateCommonName:(id)arg1;
- (void)setPayloadServerCertificateIssuerCommonName:(id)arg1;
- (void)setPayloadSharedSecret:(id)arg1;
- (void)setPayloadUseConfigurationAttributeInternalIPSubnet:(id)arg1;

@end
