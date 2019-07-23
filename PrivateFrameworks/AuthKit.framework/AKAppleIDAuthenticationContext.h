/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, NSSecureCoding> {
    NSString *_DSID;
    struct __CFUserNotification { } *_activeSecondFactoryEntryPrompt;
    NSString *_altDSID;
    unsigned int _capabilityForUIDisplay;
    id _clientInfo;
    AKDevice *_companionDevice;
    AKAnisetteData *_companionDeviceAnisetteData;
    NSString *_defaultButtonString;
    NSString *_deviceClass;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    NSString *_displayString;
    NSString *_displayTitle;
    NSString *_generatedCode;
    NSDictionary *_httpHeadersForRemoteUI;
    NSUUID *_identifier;
    BOOL _isEphemeral;
    BOOL _isPasswordEditable;
    BOOL _isProxyingForApp;
    BOOL _isTriggeredByNotification;
    BOOL _isUsernameEditable;
    NSNumber *_latitude;
    NSNumber *_longitude;
    int _maximumLoginAttempts;
    NSString *_message;
    BOOL _needsCredentialRecovery;
    BOOL _needsNewAppleID;
    BOOL _needsPasswordChange;
    NSString *_password;
    NSString *_passwordPromptTitle;
    NSString *_proxiedAppBundleID;
    NSString *_proxiedAppName;
    AKDevice *_proxiedDevice;
    AKAnisetteData *_proxiedDeviceAnisetteData;
    NSString *_reason;
    NSObject<OS_dispatch_queue> *_secondFactorQueue;
    id /* block */ _secondFactoryEntryCompletion;
    NSArray *_serviceIdentifiers;
    int _serviceType;
    NSString *_shortLivedToken;
    BOOL _shouldAllowAppleIDCreation;
    BOOL _shouldForceInteractiveAuth;
    BOOL _shouldOfferSecurityUpgrade;
    BOOL _shouldPreventInteractiveAuth;
    BOOL _shouldPromptForPasswordOnly;
    BOOL _shouldRequestConfigurationInfo;
    BOOL _shouldRequestShortLivedToken;
    BOOL _shouldUpdatePersistentServiceTokens;
    NSString *_username;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, readonly) unsigned int _capabilityForUIDisplay;
@property (nonatomic, readonly) NSString *_detailedDescription;
@property (nonatomic, readonly) NSUUID *_identifier;
@property (nonatomic) BOOL _isPasswordEditable;
@property (setter=_setProxyingForApp:, nonatomic) BOOL _isProxyingForApp;
@property (setter=_setMessage:, nonatomic, copy) NSString *_message;
@property (setter=_setPassword:, nonatomic, copy) NSString *_password;
@property (nonatomic, copy) NSString *_passwordPromptTitle;
@property (setter=_setProxiedAppBundleID:, nonatomic, copy) NSString *_proxiedAppBundleID;
@property (setter=_setProxiedAppName:, nonatomic, copy) NSString *_proxiedAppName;
@property (setter=_setShortLivedToken:, nonatomic, copy) NSString *_shortLivedToken;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, retain) id clientInfo;
@property (nonatomic, copy) AKDevice *companionDevice;
@property (nonatomic, copy) AKAnisetteData *companionDeviceAnisetteData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultButtonString;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) NSString *deviceColor;
@property (nonatomic, copy) NSString *deviceEnclosureColor;
@property (nonatomic, copy) NSString *displayString;
@property (nonatomic, copy) NSString *displayTitle;
@property (nonatomic, copy) NSString *generatedCode;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSDictionary *httpHeadersForRemoteUI;
@property (nonatomic) BOOL isEphemeral;
@property (setter=setTriggeredByNotification:, nonatomic) BOOL isTriggeredByNotification;
@property (nonatomic) BOOL isUsernameEditable;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic, copy) NSNumber *longitude;
@property (nonatomic) int maximumLoginAttempts;
@property (nonatomic) BOOL needsCredentialRecovery;
@property (nonatomic) BOOL needsNewAppleID;
@property (nonatomic) BOOL needsPasswordChange;
@property (nonatomic, copy) AKDevice *proxiedDevice;
@property (nonatomic, retain) AKAnisetteData *proxiedDeviceAnisetteData;
@property (nonatomic, copy) NSString *proxiedDeviceClientInfo;
@property (nonatomic, copy) NSString *proxiedDeviceUDID;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) NSArray *serviceIdentifiers;
@property (nonatomic) int serviceType;
@property (nonatomic) BOOL shouldAllowAppleIDCreation;
@property (nonatomic) BOOL shouldForceInteractiveAuth;
@property (nonatomic) BOOL shouldOfferSecurityUpgrade;
@property (nonatomic) BOOL shouldPreventInteractiveAuth;
@property (nonatomic) BOOL shouldPromptForPasswordOnly;
@property (nonatomic) BOOL shouldRequestConfigurationInfo;
@property (nonatomic) BOOL shouldRequestShortLivedToken;
@property (nonatomic) BOOL shouldUpdatePersistentServiceTokens;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSID;
- (unsigned int)_capabilityForUIDisplay;
- (id)_detailedDescription;
- (void)_handleSecondFactorCodeEntry;
- (id)_identifier;
- (id)_initWithIdentifier:(id)arg1;
- (BOOL)_isPasswordEditable;
- (BOOL)_isProxyingForApp;
- (id)_message;
- (id)_password;
- (id)_passwordPromptTitle;
- (id)_proxiedAppBundleID;
- (id)_proxiedAppName;
- (id)_sanitizedCopy;
- (id)_secondFactorQueue;
- (void)_setMessage:(id)arg1;
- (void)_setPassword:(id)arg1;
- (void)_setProxiedAppBundleID:(id)arg1;
- (void)_setProxiedAppName:(id)arg1;
- (void)_setProxyingForApp:(BOOL)arg1;
- (void)_setShortLivedToken:(id)arg1;
- (id)_shortLivedToken;
- (void)_startListeningForSecondFactorCodeEntryNotification;
- (void)_stopListeningForSecondFactorCodeEntryNotification;
- (void)_updateWithValuesFromContext:(id)arg1;
- (id)altDSID;
- (id)clientInfo;
- (id)companionDevice;
- (id)companionDeviceAnisetteData;
- (id)defaultButtonString;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)arg1;
- (id)displayString;
- (id)displayTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)generatedCode;
- (id)httpHeadersForRemoteUI;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEphemeral;
- (BOOL)isTriggeredByNotification;
- (BOOL)isUsernameEditable;
- (id)latitude;
- (id)longitude;
- (int)maximumLoginAttempts;
- (BOOL)needsCredentialRecovery;
- (BOOL)needsNewAppleID;
- (BOOL)needsPasswordChange;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)arg1;
- (id)proxiedDevice;
- (id)proxiedDeviceAnisetteData;
- (id)proxiedDeviceClientInfo;
- (id)proxiedDeviceUDID;
- (id)reason;
- (id)serviceIdentifier;
- (id)serviceIdentifiers;
- (int)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setCompanionDeviceAnisetteData:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setDefaultButtonString:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setDeviceEnclosureColor:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayTitle:(id)arg1;
- (void)setGeneratedCode:(id)arg1;
- (void)setHttpHeadersForRemoteUI:(id)arg1;
- (void)setIsEphemeral:(BOOL)arg1;
- (void)setIsUsernameEditable:(BOOL)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMaximumLoginAttempts:(int)arg1;
- (void)setNeedsCredentialRecovery:(BOOL)arg1;
- (void)setNeedsNewAppleID:(BOOL)arg1;
- (void)setNeedsPasswordChange:(BOOL)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setProxiedDeviceAnisetteData:(id)arg1;
- (void)setProxiedDeviceClientInfo:(id)arg1;
- (void)setProxiedDeviceUDID:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setServiceIdentifiers:(id)arg1;
- (void)setServiceType:(int)arg1;
- (void)setShouldAllowAppleIDCreation:(BOOL)arg1;
- (void)setShouldForceInteractiveAuth:(BOOL)arg1;
- (void)setShouldOfferSecurityUpgrade:(BOOL)arg1;
- (void)setShouldPreventInteractiveAuth:(BOOL)arg1;
- (void)setShouldPromptForPasswordOnly:(BOOL)arg1;
- (void)setShouldRequestConfigurationInfo:(BOOL)arg1;
- (void)setShouldRequestShortLivedToken:(BOOL)arg1;
- (void)setShouldUpdatePersistentServiceTokens:(BOOL)arg1;
- (void)setTriggeredByNotification:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (void)set_isPasswordEditable:(BOOL)arg1;
- (void)set_passwordPromptTitle:(id)arg1;
- (BOOL)shouldAllowAppleIDCreation;
- (BOOL)shouldForceInteractiveAuth;
- (BOOL)shouldOfferSecurityUpgrade;
- (BOOL)shouldPreventInteractiveAuth;
- (BOOL)shouldPromptForPasswordOnly;
- (BOOL)shouldRequestConfigurationInfo;
- (BOOL)shouldRequestShortLivedToken;
- (BOOL)shouldUpdatePersistentServiceTokens;
- (id)username;

@end
