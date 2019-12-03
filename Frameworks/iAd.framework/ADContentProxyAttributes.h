/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADContentProxyAttributes : NSObject {
    NSString * _configVersion;
    NSURL * _contentProxyURL;
    NSURL * _contentProxyURLConnect;
    long long  _proxyType;
}

@property (nonatomic, copy) NSString *configVersion;
@property (nonatomic, copy) NSURL *contentProxyURL;
@property (nonatomic, copy) NSURL *contentProxyURLConnect;
@property (nonatomic) long long proxyType;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)configVersion;
- (void)configVersionDidChange:(id)arg1;
- (id)contentProxyURL;
- (id)contentProxyURLConnect;
- (void)contentProxyURLConnectDidChange:(id)arg1;
- (void)contentProxyURLDidChange:(id)arg1;
- (long long)proxyType;
- (void)proxyTypeDidChange:(long long)arg1;
- (void)setConfigVersion:(id)arg1;
- (void)setContentProxyURL:(id)arg1;
- (void)setContentProxyURLConnect:(id)arg1;
- (void)setProxyType:(long long)arg1;

@end
