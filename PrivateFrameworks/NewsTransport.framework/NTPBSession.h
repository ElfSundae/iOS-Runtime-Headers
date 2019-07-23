/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSession : PBCodable <NSCopying> {
    long long  _appBuild;
    NSString * _appVersion;
    NSString * _campaignId;
    int  _campaignType;
    NSString * _carrier;
    int  _cellularRadioAccessTechnology;
    NSString * _countryCode;
    NSString * _deviceModel;
    NSString * _devicePlatform;
    struct { 
        unsigned int appBuild : 1; 
        unsigned int lastAppOpenDate : 1; 
        unsigned int userStartDate : 1; 
        unsigned int campaignType : 1; 
        unsigned int cellularRadioAccessTechnology : 1; 
        unsigned int newsWidgetModeGroup : 1; 
        unsigned int osInstallVariant : 1; 
        unsigned int reachabilityStatus : 1; 
        unsigned int textSize : 1; 
        unsigned int utcOffset : 1; 
        unsigned int widgetModeType : 1; 
        unsigned int iosSettingsNotificationsEnabled : 1; 
        unsigned int isNewUser : 1; 
        unsigned int isPaidSubscriber : 1; 
        unsigned int isPaidSubscriberFromAppStore : 1; 
        unsigned int isPaidSubscriberFromNews : 1; 
        unsigned int isPaidSubscriberFromThirdParty : 1; 
        unsigned int locationPermissionGranted : 1; 
        unsigned int notificationsEnabled : 1; 
        unsigned int privateDataSyncOn : 1; 
        unsigned int runningObsolete : 1; 
        unsigned int signedIntoIcloud : 1; 
        unsigned int upgradedFromObsolete : 1; 
    }  _has;
    BOOL  _iosSettingsNotificationsEnabled;
    BOOL  _isNewUser;
    BOOL  _isPaidSubscriber;
    BOOL  _isPaidSubscriberFromAppStore;
    BOOL  _isPaidSubscriberFromNews;
    BOOL  _isPaidSubscriberFromThirdParty;
    NSString * _languageCode;
    long long  _lastAppOpenDate;
    BOOL  _locationPermissionGranted;
    int  _newsWidgetModeGroup;
    BOOL  _notificationsEnabled;
    NSString * _originatingCampaignId;
    NSString * _originatingCampaignType;
    NSString * _originatingCreativeId;
    int  _osInstallVariant;
    NSString * _osVersion;
    NSString * _previousAppVersion;
    NSString * _previousOsVersion;
    BOOL  _privateDataSyncOn;
    int  _reachabilityStatus;
    BOOL  _runningObsolete;
    NSData * _sessionId;
    BOOL  _signedIntoIcloud;
    int  _textSize;
    BOOL  _upgradedFromObsolete;
    NSString * _userId;
    long long  _userStartDate;
    NSString * _userStorefrontId;
    int  _utcOffset;
    int  _widgetModeType;
}

@property (nonatomic) long long appBuild;
@property (nonatomic, retain) NSString *appVersion;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic) int campaignType;
@property (nonatomic, retain) NSString *carrier;
@property (nonatomic) int cellularRadioAccessTechnology;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, retain) NSString *devicePlatform;
@property (nonatomic) BOOL hasAppBuild;
@property (nonatomic, readonly) BOOL hasAppVersion;
@property (nonatomic, readonly) BOOL hasCampaignId;
@property (nonatomic) BOOL hasCampaignType;
@property (nonatomic, readonly) BOOL hasCarrier;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic, readonly) BOOL hasCountryCode;
@property (nonatomic, readonly) BOOL hasDeviceModel;
@property (nonatomic, readonly) BOOL hasDevicePlatform;
@property (nonatomic) BOOL hasIosSettingsNotificationsEnabled;
@property (nonatomic) BOOL hasIsNewUser;
@property (nonatomic) BOOL hasIsPaidSubscriber;
@property (nonatomic) BOOL hasIsPaidSubscriberFromAppStore;
@property (nonatomic) BOOL hasIsPaidSubscriberFromNews;
@property (nonatomic) BOOL hasIsPaidSubscriberFromThirdParty;
@property (nonatomic, readonly) BOOL hasLanguageCode;
@property (nonatomic) BOOL hasLastAppOpenDate;
@property (nonatomic) BOOL hasLocationPermissionGranted;
@property (nonatomic) BOOL hasNewsWidgetModeGroup;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (nonatomic, readonly) BOOL hasOriginatingCampaignId;
@property (nonatomic, readonly) BOOL hasOriginatingCampaignType;
@property (nonatomic, readonly) BOOL hasOriginatingCreativeId;
@property (nonatomic) BOOL hasOsInstallVariant;
@property (nonatomic, readonly) BOOL hasOsVersion;
@property (nonatomic, readonly) BOOL hasPreviousAppVersion;
@property (nonatomic, readonly) BOOL hasPreviousOsVersion;
@property (nonatomic) BOOL hasPrivateDataSyncOn;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (nonatomic) BOOL hasRunningObsolete;
@property (nonatomic, readonly) BOOL hasSessionId;
@property (nonatomic) BOOL hasSignedIntoIcloud;
@property (nonatomic) BOOL hasTextSize;
@property (nonatomic) BOOL hasUpgradedFromObsolete;
@property (nonatomic, readonly) BOOL hasUserId;
@property (nonatomic) BOOL hasUserStartDate;
@property (nonatomic, readonly) BOOL hasUserStorefrontId;
@property (nonatomic) BOOL hasUtcOffset;
@property (nonatomic) BOOL hasWidgetModeType;
@property (nonatomic) BOOL iosSettingsNotificationsEnabled;
@property (nonatomic) BOOL isNewUser;
@property (nonatomic) BOOL isPaidSubscriber;
@property (nonatomic) BOOL isPaidSubscriberFromAppStore;
@property (nonatomic) BOOL isPaidSubscriberFromNews;
@property (nonatomic) BOOL isPaidSubscriberFromThirdParty;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic) long long lastAppOpenDate;
@property (nonatomic) BOOL locationPermissionGranted;
@property (nonatomic) int newsWidgetModeGroup;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic, retain) NSString *originatingCampaignId;
@property (nonatomic, retain) NSString *originatingCampaignType;
@property (nonatomic, retain) NSString *originatingCreativeId;
@property (nonatomic) int osInstallVariant;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic, retain) NSString *previousAppVersion;
@property (nonatomic, retain) NSString *previousOsVersion;
@property (nonatomic) BOOL privateDataSyncOn;
@property (nonatomic) int reachabilityStatus;
@property (nonatomic) BOOL runningObsolete;
@property (nonatomic, retain) NSData *sessionId;
@property (nonatomic) BOOL signedIntoIcloud;
@property (nonatomic) int textSize;
@property (nonatomic) BOOL upgradedFromObsolete;
@property (nonatomic, retain) NSString *userId;
@property (nonatomic) long long userStartDate;
@property (nonatomic, retain) NSString *userStorefrontId;
@property (nonatomic) int utcOffset;
@property (nonatomic) int widgetModeType;

- (void).cxx_destruct;
- (int)StringAsCampaignType:(id)arg1;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (int)StringAsNewsWidgetModeGroup:(id)arg1;
- (int)StringAsOsInstallVariant:(id)arg1;
- (int)StringAsReachabilityStatus:(id)arg1;
- (int)StringAsWidgetModeType:(id)arg1;
- (long long)appBuild;
- (id)appVersion;
- (id)campaignId;
- (int)campaignType;
- (id)campaignTypeAsString:(int)arg1;
- (id)carrier;
- (int)cellularRadioAccessTechnology;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)deviceModel;
- (id)devicePlatform;
- (id)dictionaryRepresentation;
- (BOOL)hasAppBuild;
- (BOOL)hasAppVersion;
- (BOOL)hasCampaignId;
- (BOOL)hasCampaignType;
- (BOOL)hasCarrier;
- (BOOL)hasCellularRadioAccessTechnology;
- (BOOL)hasCountryCode;
- (BOOL)hasDeviceModel;
- (BOOL)hasDevicePlatform;
- (BOOL)hasIosSettingsNotificationsEnabled;
- (BOOL)hasIsNewUser;
- (BOOL)hasIsPaidSubscriber;
- (BOOL)hasIsPaidSubscriberFromAppStore;
- (BOOL)hasIsPaidSubscriberFromNews;
- (BOOL)hasIsPaidSubscriberFromThirdParty;
- (BOOL)hasLanguageCode;
- (BOOL)hasLastAppOpenDate;
- (BOOL)hasLocationPermissionGranted;
- (BOOL)hasNewsWidgetModeGroup;
- (BOOL)hasNotificationsEnabled;
- (BOOL)hasOriginatingCampaignId;
- (BOOL)hasOriginatingCampaignType;
- (BOOL)hasOriginatingCreativeId;
- (BOOL)hasOsInstallVariant;
- (BOOL)hasOsVersion;
- (BOOL)hasPreviousAppVersion;
- (BOOL)hasPreviousOsVersion;
- (BOOL)hasPrivateDataSyncOn;
- (BOOL)hasReachabilityStatus;
- (BOOL)hasRunningObsolete;
- (BOOL)hasSessionId;
- (BOOL)hasSignedIntoIcloud;
- (BOOL)hasTextSize;
- (BOOL)hasUpgradedFromObsolete;
- (BOOL)hasUserId;
- (BOOL)hasUserStartDate;
- (BOOL)hasUserStorefrontId;
- (BOOL)hasUtcOffset;
- (BOOL)hasWidgetModeType;
- (unsigned int)hash;
- (BOOL)iosSettingsNotificationsEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNewUser;
- (BOOL)isPaidSubscriber;
- (BOOL)isPaidSubscriberFromAppStore;
- (BOOL)isPaidSubscriberFromNews;
- (BOOL)isPaidSubscriberFromThirdParty;
- (id)languageCode;
- (long long)lastAppOpenDate;
- (BOOL)locationPermissionGranted;
- (void)mergeFrom:(id)arg1;
- (int)newsWidgetModeGroup;
- (id)newsWidgetModeGroupAsString:(int)arg1;
- (BOOL)notificationsEnabled;
- (id)originatingCampaignId;
- (id)originatingCampaignType;
- (id)originatingCreativeId;
- (int)osInstallVariant;
- (id)osInstallVariantAsString:(int)arg1;
- (id)osVersion;
- (id)previousAppVersion;
- (id)previousOsVersion;
- (BOOL)privateDataSyncOn;
- (int)reachabilityStatus;
- (id)reachabilityStatusAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)runningObsolete;
- (id)sessionId;
- (void)setAppBuild:(long long)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(int)arg1;
- (void)setCarrier:(id)arg1;
- (void)setCellularRadioAccessTechnology:(int)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDevicePlatform:(id)arg1;
- (void)setHasAppBuild:(BOOL)arg1;
- (void)setHasCampaignType:(BOOL)arg1;
- (void)setHasCellularRadioAccessTechnology:(BOOL)arg1;
- (void)setHasIosSettingsNotificationsEnabled:(BOOL)arg1;
- (void)setHasIsNewUser:(BOOL)arg1;
- (void)setHasIsPaidSubscriber:(BOOL)arg1;
- (void)setHasIsPaidSubscriberFromAppStore:(BOOL)arg1;
- (void)setHasIsPaidSubscriberFromNews:(BOOL)arg1;
- (void)setHasIsPaidSubscriberFromThirdParty:(BOOL)arg1;
- (void)setHasLastAppOpenDate:(BOOL)arg1;
- (void)setHasLocationPermissionGranted:(BOOL)arg1;
- (void)setHasNewsWidgetModeGroup:(BOOL)arg1;
- (void)setHasNotificationsEnabled:(BOOL)arg1;
- (void)setHasOsInstallVariant:(BOOL)arg1;
- (void)setHasPrivateDataSyncOn:(BOOL)arg1;
- (void)setHasReachabilityStatus:(BOOL)arg1;
- (void)setHasRunningObsolete:(BOOL)arg1;
- (void)setHasSignedIntoIcloud:(BOOL)arg1;
- (void)setHasTextSize:(BOOL)arg1;
- (void)setHasUpgradedFromObsolete:(BOOL)arg1;
- (void)setHasUserStartDate:(BOOL)arg1;
- (void)setHasUtcOffset:(BOOL)arg1;
- (void)setHasWidgetModeType:(BOOL)arg1;
- (void)setIosSettingsNotificationsEnabled:(BOOL)arg1;
- (void)setIsNewUser:(BOOL)arg1;
- (void)setIsPaidSubscriber:(BOOL)arg1;
- (void)setIsPaidSubscriberFromAppStore:(BOOL)arg1;
- (void)setIsPaidSubscriberFromNews:(BOOL)arg1;
- (void)setIsPaidSubscriberFromThirdParty:(BOOL)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLastAppOpenDate:(long long)arg1;
- (void)setLocationPermissionGranted:(BOOL)arg1;
- (void)setNewsWidgetModeGroup:(int)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (void)setOriginatingCampaignId:(id)arg1;
- (void)setOriginatingCampaignType:(id)arg1;
- (void)setOriginatingCreativeId:(id)arg1;
- (void)setOsInstallVariant:(int)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setPreviousAppVersion:(id)arg1;
- (void)setPreviousOsVersion:(id)arg1;
- (void)setPrivateDataSyncOn:(BOOL)arg1;
- (void)setReachabilityStatus:(int)arg1;
- (void)setRunningObsolete:(BOOL)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSignedIntoIcloud:(BOOL)arg1;
- (void)setTextSize:(int)arg1;
- (void)setUpgradedFromObsolete:(BOOL)arg1;
- (void)setUserId:(id)arg1;
- (void)setUserStartDate:(long long)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (void)setUtcOffset:(int)arg1;
- (void)setWidgetModeType:(int)arg1;
- (BOOL)signedIntoIcloud;
- (int)textSize;
- (BOOL)upgradedFromObsolete;
- (id)userId;
- (long long)userStartDate;
- (id)userStorefrontId;
- (int)utcOffset;
- (int)widgetModeType;
- (id)widgetModeTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
