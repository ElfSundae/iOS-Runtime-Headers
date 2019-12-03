/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACAccessoryClient : HMFObject <HMFLogging> {
    HAPWACAccessoryBrowser * _brower;
    NSMutableSet * _compatible2Pt4Networks;
    id /* block */  _completionHandler;
    double  _configurationLatency;
    NSDictionary * _currentNetworkInfo;
    EasyConfigDevice * _ezConfigDevice;
    HAPWACAccessory * _hapWACAccessory;
    double  _joinLatency;
    HMFUnfairLock * _lock;
    double  _postConfigDiscoveryTime;
    double  _preConfigDiscoveryTime;
    double  _restoreLatency;
    unsigned long long  _retryCount;
    HAPAccessoryServer * _server;
    double  _setupCodeDelay;
    NSDate * _setupCodeRequestTime;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HAPWACAccessoryBrowser *brower;
@property (nonatomic, readonly) NSMutableSet *compatible2Pt4Networks;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) double configurationLatency;
@property (nonatomic, retain) NSDictionary *currentNetworkInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EasyConfigDevice *ezConfigDevice;
@property (nonatomic, readonly) HAPWACAccessory *hapWACAccessory;
@property (readonly) unsigned long long hash;
@property (nonatomic) double joinLatency;
@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (nonatomic) double postConfigDiscoveryTime;
@property (nonatomic) double preConfigDiscoveryTime;
@property (nonatomic) double restoreLatency;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, readonly) HAPAccessoryServer *server;
@property (nonatomic) double setupCodeDelay;
@property (nonatomic, retain) NSDate *setupCodeRequestTime;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callJoinCompletion:(id /* block */)arg1 withError:(id)arg2;
- (void)_callRestoreCompletion:(id /* block */)arg1 withError:(id)arg2;
- (void)_continuePairingWithSetupCode:(id)arg1;
- (void)_joinAccessory:(id)arg1 completion:(id /* block */)arg2;
- (void)_joinAccessoryNetworkWithCompletion:(id /* block */)arg1;
- (void)_joinCompleteWithStatus:(int)arg1;
- (void)_performEasyConfigWithParingPrompt:(int (*)arg1 performPairSetup:(bool)arg2 isSplit:(bool)arg3 wacWiFiConfig:(id)arg4 completion:(id /* block */)arg5;
- (void)_performPostConfig;
- (void)_restoreNetworkWithCompletion:(id /* block */)arg1;
- (void)_retoreNetworkAndReportErrorWithCompletion:(id /* block */)arg1;
- (id)brower;
- (id)compatible2Pt4Networks;
- (id /* block */)completionHandler;
- (double)configurationLatency;
- (id)continuePairingWithSetupCode:(id)arg1;
- (id)currentNetworkInfo;
- (void)dumpStatsWithError:(id)arg1;
- (id)ezConfigDevice;
- (id)hapWACAccessory;
- (id)init;
- (id)initWithWACAccessory:(id)arg1 server:(id)arg2 browser:(id)arg3 compatible2Pt4Networks:(id)arg4;
- (id)joinAccessoryNetworkWithCompletion:(id /* block */)arg1;
- (double)joinLatency;
- (id)lock;
- (id)performEasyConfigWithParingPrompt:(int (*)arg1 performPairSetup:(bool)arg2 isSplit:(bool)arg3 wacWiFiConfig:(id)arg4 completion:(id /* block */)arg5;
- (double)postConfigDiscoveryTime;
- (double)preConfigDiscoveryTime;
- (double)restoreLatency;
- (id)restoreNetworkWithCompletion:(id /* block */)arg1;
- (unsigned long long)retryCount;
- (id)server;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConfigurationLatency:(double)arg1;
- (void)setCurrentNetworkInfo:(id)arg1;
- (void)setEzConfigDevice:(id)arg1;
- (void)setJoinLatency:(double)arg1;
- (void)setPostConfigDiscoveryTime:(double)arg1;
- (void)setPreConfigDiscoveryTime:(double)arg1;
- (void)setRestoreLatency:(double)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setSetupCodeDelay:(double)arg1;
- (void)setSetupCodeRequestTime:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (double)setupCodeDelay;
- (id)setupCodeRequestTime;
- (unsigned long long)state;
- (void)stopEasyConfig;
- (id)workQueue;

@end
