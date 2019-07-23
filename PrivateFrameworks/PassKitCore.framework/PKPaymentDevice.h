/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    PKPaymentDeviceConfigurationData * _configurationData;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_source> * _locationFixTimeout;
    CLLocationManager * _locationManager;
    NSMutableArray * _metdataFetchTasks;
    PKSecureElement * _secureElement;
    bool  _skipLocationCheck;
    NSTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool skipLocationCheck;
@property (readonly) Class superclass;

+ (id)clientHardwarePlatformInfoHTTPHeader;
+ (id)clientInfoHTTPHeader;

- (void).cxx_destruct;
- (void)SEPParingInformationWithCompletion:(id /* block */)arg1;
- (void)_executeDeviceMetadataFetchTasksCompletionHandlers;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (void)_populateDeviceMetdata:(id)arg1 withFields:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)configurationData;
- (void)configurationDataWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteApplicationWithAID:(id)arg1;
- (bool)hasRegistrationRegionMap;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)paymentDeviceMetadataFields:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)primarySecureElementIdentifier;
- (void)provisioningDataWithCompletionHandler:(id /* block */)arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(id /* block */)arg1;
- (void)registrationDataWithAuthToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)rewrapDataWithDeviceIdentifier:(id)arg1 certificates:(id)arg2 kextBlacklistVersion:(id)arg3;
- (void)setRegistrationRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)setSkipLocationCheck:(bool)arg1;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)signatureForAuthToken:(id)arg1 completion:(id /* block */)arg2;
- (bool)skipLocationCheck;
- (id)trustedDeviceEnrollmentInfo;

@end
