/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLRequestProperties : NSObject <NSCopying, NSMutableCopying> {
    ACAccount * _account;
    NSDictionary * _additionalMetrics;
    long long  _anisetteType;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    long long  _dialogOptions;
    bool  _disableLoadURLMetrics;
    bool  _disableResponseDecoding;
    AMSKeychainOptions * _keychainOptions;
    bool  _knownToBeTrusted;
    NSString * _logUUID;
    long long  _maxRetryCount;
    long long  _mescalType;
    AMSPurchaseContext * _purchaseContext;
    <AMSResponseDecoding> * _responseDecoder;
    long long  _reversePushType;
    bool  _shouldSetCookiesFromResponse;
    bool  _shouldSetStorefrontFromResponse;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic) long long dialogOptions;
@property (nonatomic) bool disableLoadURLMetrics;
@property (nonatomic) bool disableResponseDecoding;
@property (nonatomic, retain) AMSKeychainOptions *keychainOptions;
@property (nonatomic) bool knownToBeTrusted;
@property (nonatomic, retain) NSString *logUUID;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) long long mescalType;
@property (nonatomic, retain) AMSPurchaseContext *purchaseContext;
@property (nonatomic, retain) <AMSResponseDecoding> *responseDecoder;
@property (nonatomic) long long reversePushType;
@property (nonatomic) bool shouldSetCookiesFromResponse;
@property (nonatomic) bool shouldSetStorefrontFromResponse;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)account;
- (id)additionalMetrics;
- (long long)anisetteType;
- (id)bag;
- (id)clientInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dialogOptions;
- (bool)disableLoadURLMetrics;
- (bool)disableResponseDecoding;
- (id)init;
- (id)keychainOptions;
- (bool)knownToBeTrusted;
- (id)logUUID;
- (long long)maxRetryCount;
- (long long)mescalType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)purchaseContext;
- (id)responseDecoder;
- (long long)reversePushType;
- (void)setAccount:(id)arg1;
- (void)setAdditionalMetrics:(id)arg1;
- (void)setAnisetteType:(long long)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDialogOptions:(long long)arg1;
- (void)setDisableLoadURLMetrics:(bool)arg1;
- (void)setDisableResponseDecoding:(bool)arg1;
- (void)setKeychainOptions:(id)arg1;
- (void)setKnownToBeTrusted:(bool)arg1;
- (void)setLogUUID:(id)arg1;
- (void)setMaxRetryCount:(long long)arg1;
- (void)setMescalType:(long long)arg1;
- (void)setPurchaseContext:(id)arg1;
- (void)setResponseDecoder:(id)arg1;
- (void)setReversePushType:(long long)arg1;
- (void)setShouldSetCookiesFromResponse:(bool)arg1;
- (void)setShouldSetStorefrontFromResponse:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldSetCookiesFromResponse;
- (bool)shouldSetStorefrontFromResponse;
- (id)userInfo;

@end
