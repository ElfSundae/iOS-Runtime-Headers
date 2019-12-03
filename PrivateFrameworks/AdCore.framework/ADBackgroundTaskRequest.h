/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADBackgroundTaskRequest : NSObject {
    NSObject<OS_xpc_object> * _activity;
    NSObject<OS_xpc_object> * _criteria;
    bool  _performDeferralCheck;
    NSString * _requestIdentifier;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic) bool allowBattery;
@property (nonatomic) long long backgroundTaskRetryCount;
@property (nonatomic, retain) NSObject<OS_xpc_object> *criteria;
@property (nonatomic) long long delay;
@property (nonatomic) long long gracePeriod;
@property (nonatomic) bool isCPUIntensive;
@property (nonatomic) bool isRepeating;
@property (nonatomic) bool performDeferralCheck;
@property (nonatomic, retain) NSString *priority;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic) bool requireBuddyComplete;
@property (nonatomic) bool requireClassCData;
@property (nonatomic) bool requireSleep;
@property (nonatomic) bool requiresNetworkConnectivity;
@property (nonatomic, readonly) bool shouldDefer;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (void)_backgroundDeferralCheck:(id)arg1 completion:(id /* block */)arg2;
- (id)activity;
- (bool)allowBattery;
- (long long)backgroundTaskRetryCount;
- (bool)continueTask;
- (id)copyBackgroundTaskAgentCriteria;
- (id)criteria;
- (bool)deferTask;
- (long long)delay;
- (id)description;
- (id)dictionaryRepresentation;
- (void)endBackgroundDeferralCheck;
- (bool)finishTask;
- (id)getPropertyAsDate:(id)arg1;
- (double)getPropertyAsDouble:(id)arg1;
- (long long)getPropertyAsInteger:(id)arg1;
- (id)getPropertyAsString:(id)arg1;
- (long long)gracePeriod;
- (id)initWithCriteria:(id)arg1 ID:(id)arg2 activity:(id)arg3;
- (id)initWithID:(id)arg1;
- (bool)isCPUIntensive;
- (bool)isRepeating;
- (bool)performDeferralCheck;
- (id)priority;
- (id)requestIdentifier;
- (bool)requireBuddyComplete;
- (bool)requireClassCData;
- (bool)requireSleep;
- (bool)requiresNetworkConnectivity;
- (void)setActivity:(id)arg1;
- (void)setAllowBattery:(bool)arg1;
- (void)setBackgroundTaskRetryCount:(long long)arg1;
- (void)setCriteria:(id)arg1;
- (void)setDelay:(long long)arg1;
- (void)setGracePeriod:(long long)arg1;
- (void)setIsCPUIntensive:(bool)arg1;
- (void)setIsRepeating:(bool)arg1;
- (void)setPerformDeferralCheck:(bool)arg1;
- (void)setPriority:(id)arg1;
- (void)setPropertyAsDate:(id)arg1 value:(id)arg2;
- (void)setPropertyAsDouble:(id)arg1 value:(double)arg2;
- (void)setPropertyAsInteger:(id)arg1 value:(long long)arg2;
- (void)setPropertyAsString:(id)arg1 value:(id)arg2;
- (void)setRequireBuddyComplete:(bool)arg1;
- (void)setRequireClassCData:(bool)arg1;
- (void)setRequireSleep:(bool)arg1;
- (void)setRequiresNetworkConnectivity:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (bool)shouldDefer;
- (void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)startDate;
- (bool)taskCanContinueForTime:(id)arg1;
- (bool)taskIsContinuing;
- (bool)taskIsDeferred;

@end
