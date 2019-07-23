/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSInternalBag : NSObject <AMSDeviceOfferBagContract, AMSLookupBagContract, AMSMescalBagContract, AMSMetricsBagContract> {
    AMSBag * _bag;
}

@property (nonatomic, readonly) AMSBagValue *TFOSamplingPercentage;
@property (nonatomic, readonly) AMSBagValue *TFOSamplingSessionDuration;
@property (nonatomic, readonly) AMSBagValue *TLSSamplingPercentage;
@property (nonatomic, readonly) AMSBagValue *TLSSamplingSessionDuration;
@property (nonatomic, readonly) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (nonatomic, readonly) AMSBagValue *apsAllowedProductTypes;
@property (nonatomic, readonly) AMSBagValue *apsEnabledPatterns;
@property (nonatomic, readonly) AMSBagValue *apsSamplingPercent;
@property (nonatomic, retain) AMSBag *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AMSBagValue *guidRegexes;
@property (nonatomic, readonly) AMSBagValue *guidSchemes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (nonatomic, readonly) AMSBagValue *mescalCertificateURL;
@property (nonatomic, readonly) <AMSMescalBagContract> *mescalContract;
@property (nonatomic, readonly) AMSBagValue *mescalPrimingURL;
@property (nonatomic, readonly) AMSBagValue *mescalSetupURL;
@property (nonatomic, readonly) AMSBagValue *mescalSignSapRequests;
@property (nonatomic, readonly) AMSBagValue *mescalSignSapResponses;
@property (nonatomic, readonly) AMSBagValue *mescalSignedActions;
@property (nonatomic, readonly) <AMSMetricsBagContract> *metricsContract;
@property (nonatomic, readonly) AMSBagValue *metricsDictionary;
@property (nonatomic, readonly) AMSBagValue *metricsURL;
@property (nonatomic, readonly) AMSBagValue *metricsUrl;
@property (nonatomic, readonly) AMSBagValue *personalizedLookupURL;
@property (nonatomic, readonly) AMSBagValue *storefrontSuffix;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSBagValue *trustedDomains;
@property (nonatomic, readonly) AMSBagValue *unpersonalizedLookupURL;

+ (id)_keySet;

- (void).cxx_destruct;
- (id)TFOSamplingPercentage;
- (id)TFOSamplingSessionDuration;
- (id)TLSSamplingPercentage;
- (id)TLSSamplingSessionDuration;
- (id)appleMusicDeviceOfferDeepLink;
- (id)apsAllowedProductTypes;
- (id)apsEnabledPatterns;
- (id)apsSamplingPercent;
- (id)bag;
- (id)guidRegexes;
- (id)guidSchemes;
- (id)iCloudDeviceOfferDeepLink;
- (id)init;
- (id)mescalCertificateURL;
- (id)mescalContract;
- (id)mescalSetupURL;
- (id)mescalSignSapRequests;
- (id)mescalSignSapResponses;
- (id)mescalSignedActions;
- (id)metricsContract;
- (id)metricsDictionary;
- (id)metricsURL;
- (void)setBag:(id)arg1;
- (id)storefrontSuffix;
- (id)trustedDomains;
- (id)unpersonalizedLookupURL;

@end
