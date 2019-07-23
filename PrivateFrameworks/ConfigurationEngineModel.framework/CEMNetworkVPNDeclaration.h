/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    CEMNetworkVPNDeclaration_AlwaysOn * _payloadAlwaysOn;
    CEMNetworkVPNDeclaration_DNS * _payloadDNS;
    NSNumber * _payloadDisconnectOnIdle;
    NSNumber * _payloadDisconnectOnIdleTimer;
    CEMNetworkVPNDeclaration_IKEv2 * _payloadIKEv2;
    CEMNetworkVPNDeclaration_IPSec * _payloadIPSec;
    CEMNetworkVPNDeclaration_IPv4 * _payloadIPv4;
    CEMNetworkVPNDeclaration_PPP * _payloadPPP;
    CEMNetworkVPNDeclaration_Proxies * _payloadProxies;
    NSString * _payloadUserDefinedName;
    CEMNetworkVPNDeclaration_VPN * _payloadVPN;
    NSString * _payloadVPNSubType;
    NSString * _payloadVPNType;
    CEMNetworkVPNDeclaration_VendorConfig * _payloadVendorConfig;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_AlwaysOn *payloadAlwaysOn;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_DNS *payloadDNS;
@property (nonatomic, copy) NSNumber *payloadDisconnectOnIdle;
@property (nonatomic, copy) NSNumber *payloadDisconnectOnIdleTimer;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_IKEv2 *payloadIKEv2;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_IPSec *payloadIPSec;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_IPv4 *payloadIPv4;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_PPP *payloadPPP;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_Proxies *payloadProxies;
@property (nonatomic, copy) NSString *payloadUserDefinedName;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_VPN *payloadVPN;
@property (nonatomic, copy) NSString *payloadVPNSubType;
@property (nonatomic, copy) NSString *payloadVPNType;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_VendorConfig *payloadVendorConfig;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNType:(id)arg2 withUserDefinedName:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withVPNType:(id)arg2 withVPNSubType:(id)arg3 withUserDefinedName:(id)arg4 withVendorConfig:(id)arg5 withVPN:(id)arg6 withIPv4:(id)arg7 withPPP:(id)arg8 withIPSec:(id)arg9 withIKEv2:(id)arg10 withProxies:(id)arg11 withAlwaysOn:(id)arg12 withDisconnectOnIdle:(id)arg13 withDisconnectOnIdleTimer:(id)arg14 withDNS:(id)arg15;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAlwaysOn;
- (id)payloadDNS;
- (id)payloadDisconnectOnIdle;
- (id)payloadDisconnectOnIdleTimer;
- (id)payloadIKEv2;
- (id)payloadIPSec;
- (id)payloadIPv4;
- (id)payloadPPP;
- (id)payloadProxies;
- (id)payloadUserDefinedName;
- (id)payloadVPN;
- (id)payloadVPNSubType;
- (id)payloadVPNType;
- (id)payloadVendorConfig;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAlwaysOn:(id)arg1;
- (void)setPayloadDNS:(id)arg1;
- (void)setPayloadDisconnectOnIdle:(id)arg1;
- (void)setPayloadDisconnectOnIdleTimer:(id)arg1;
- (void)setPayloadIKEv2:(id)arg1;
- (void)setPayloadIPSec:(id)arg1;
- (void)setPayloadIPv4:(id)arg1;
- (void)setPayloadPPP:(id)arg1;
- (void)setPayloadProxies:(id)arg1;
- (void)setPayloadUserDefinedName:(id)arg1;
- (void)setPayloadVPN:(id)arg1;
- (void)setPayloadVPNSubType:(id)arg1;
- (void)setPayloadVPNType:(id)arg1;
- (void)setPayloadVendorConfig:(id)arg1;

@end
