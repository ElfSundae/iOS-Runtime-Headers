/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *appIdentifyingInfo;
@property (nonatomic) bool shouldSearchLocallyOnly;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)getAppInfo;
+ (id)getAppInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)appIdentifyingInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAppIdentifyingInfo:(id)arg1;
- (void)setShouldSearchLocallyOnly:(bool)arg1;
- (bool)shouldSearchLocallyOnly;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (id)_createOrderedAppInfoListFromDictionary:(id)arg1;
- (void)_searchAppStoreWithAppIdentifyingInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)_searchLocallyWithAppIdentifyingInfo:(id)arg1 forSiriLanguageCode:(id)arg2;
- (long long)ins_analyticsBeginEventType;
- (long long)ins_analyticsEndEventType;
- (void)ins_getAppInfoForSiriLanguage:(id)arg1 withCompletion:(id /* block */)arg2;

@end
