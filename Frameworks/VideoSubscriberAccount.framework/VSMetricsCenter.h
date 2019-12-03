/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSMetricsCenter : NSObject <MCProfileConnectionObserver, MTBaseEventDataProviderDelegate, VSRemoteNotifierDelegate> {
    AMSBag * _bag;
    VSIdentityProvider * _currentIdentityProvider;
    bool  _currentIdentityProviderIsFullySupported;
    bool  _currentIdentityProviderSupportsSTB;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _fetchedSetTopBoxProfile;
    bool  _hasSetTopBoxProfile;
    MTMetricsKit * _mainMetricsKit;
    bool  _optedIn;
    VSPreferences * _preferences;
    NSOperationQueue * _privateQueue;
    VSRemoteNotifier * _remoteNotifier;
    VSSetTopBoxProfile * _stbProfile;
}

@property (nonatomic, retain) AMSBag *bag;
@property (nonatomic, retain) VSIdentityProvider *currentIdentityProvider;
@property (nonatomic) bool currentIdentityProviderIsFullySupported;
@property (nonatomic) bool currentIdentityProviderSupportsSTB;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic) bool fetchedSetTopBoxProfile;
@property (nonatomic) bool hasSetTopBoxProfile;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTMetricsKit *mainMetricsKit;
@property (nonatomic) bool optedIn;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (nonatomic, retain) VSSetTopBoxProfile *stbProfile;
@property (readonly) Class superclass;

+ (id)sharedMetricsCenter;

- (void).cxx_destruct;
- (void)accountStoreDidChange;
- (id)bag;
- (id)capacityData:(id)arg1;
- (id)capacityDataAvailable:(id)arg1;
- (id)capacityDisk:(id)arg1;
- (id)capacitySystem:(id)arg1;
- (id)capacitySystemAvailable:(id)arg1;
- (id)clientId:(id)arg1;
- (id)connection:(id)arg1;
- (id)currentIdentityProvider;
- (bool)currentIdentityProviderIsFullySupported;
- (bool)currentIdentityProviderSupportsSTB;
- (bool)currentProviderIsSetTopBoxProvider;
- (id)dsId:(id)arg1;
- (id)eventQueue;
- (void)fetchSetTopBoxProfile;
- (bool)fetchedSetTopBoxProfile;
- (id)flexibleBaseFields;
- (id)hardwareModel:(id)arg1;
- (bool)hasSetTopBoxProfile;
- (id)init;
- (id)isSignedIn:(id)arg1;
- (id)mainMetricsKit;
- (id)mutableBaseFieldsWithUserID:(bool)arg1;
- (bool)optedIn;
- (id)pageUrl:(id)arg1;
- (id)pixelRatio:(id)arg1;
- (id)preferences;
- (id)privateQueue;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)recordClickEventWithPage:(id)arg1 pageType:(id)arg2 target:(id)arg3;
- (void)recordEnterEventWithPage:(id)arg1 pageType:(id)arg2;
- (void)recordExitEventWithPage:(id)arg1 pageType:(id)arg2;
- (void)recordInvalidTemplateErrorWithProviderAppAdamID:(id)arg1;
- (void)recordMetadataRequestWithProviderIdentifier:(id)arg1 channelAdamID:(id)arg2 error:(id)arg3;
- (void)recordSTBOptOutEventWithError:(id)arg1;
- (void)recordSignInEventWithProviderIdentifier:(id)arg1 supportedProvider:(bool)arg2 channelAdamID:(id)arg3 error:(id)arg4;
- (void)recordSignOutEventWithProviderIdentifier:(id)arg1;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (id)resourceRevNum:(id)arg1;
- (id)screenHeight:(id)arg1;
- (id)screenWidth:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setCurrentIdentityProvider:(id)arg1;
- (void)setCurrentIdentityProviderIsFullySupported:(bool)arg1;
- (void)setCurrentIdentityProviderSupportsSTB:(bool)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setFetchedSetTopBoxProfile:(bool)arg1;
- (void)setHasSetTopBoxProfile:(bool)arg1;
- (void)setMainMetricsKit:(id)arg1;
- (void)setOptedIn:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setStbProfile:(id)arg1;
- (id)stbProfile;
- (id)userID;
- (id)userType:(id)arg1;
- (id)windowInnerHeight:(id)arg1;
- (id)windowInnerWidth:(id)arg1;
- (id)windowOuterHeight:(id)arg1;
- (id)windowOuterWidth:(id)arg1;
- (id)xpPostFrequency:(id)arg1;
- (id)xpSendMethod:(id)arg1;

@end
