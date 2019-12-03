/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUploadRequestManagerInternals : NSObject <CKAssetRepairSchedulerDelegate, CKSyncEngineDataSource> {
    <NSObject> * _accountChangeObserver;
    id /* block */  _assetRequestCallback;
    NSString * _assignedMachServiceName;
    NSString * _cachesDirectory;
    NSMutableDictionary * _callbackForOverridePoint;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CKContainer * _container;
    CKUploadRequestPersistentStore * _database;
    NSString * _deviceID;
    int  _fetchAllToken;
    bool  _hasRegisteredActivity;
    bool  _ignoringSystemConditions;
    NSString * _machServiceName;
    CKSchedulerActivity * _observedRepairActivity;
    id /* block */  _packageRequestCallback;
    struct __SCNetworkReachability { } * _reachability;
    id /* block */  _repairActivityHandler;
    CKContainer * _repairContainer;
    CKUploadRequestConfiguration * _repairContainerOverrides;
    CKAssetRepairScheduler * _repairProcessor;
    CKSyncEngine * _repairZoneSyncEngine;
    CKUploadRequestManagerResponseActionThrottler * _responseActionThrottler;
    id /* block */  _scheduledAccountStatusCheck;
    CKUploadRequestManagerStateMachine * _stateMachine;
    NSObject<OS_dispatch_queue> * _stateMachineQueue;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, retain) <NSObject> *accountChangeObserver;
@property (nonatomic, readonly) NSString *activityIdentifierForSchedulingRepairs;
@property (copy) id /* block */ assetRequestCallback;
@property (nonatomic, retain) NSString *assignedMachServiceName;
@property (nonatomic, retain) NSString *cachesDirectory;
@property (nonatomic, retain) NSMutableDictionary *callbackForOverridePoint;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) CKUploadRequestPersistentStore *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic) int fetchAllToken;
@property (nonatomic) bool hasRegisteredActivity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ignoringSystemConditions;
@property (copy) NSString *machServiceName;
@property (nonatomic, retain) CKSchedulerActivity *observedRepairActivity;
@property (copy) id /* block */ packageRequestCallback;
@property (nonatomic) struct __SCNetworkReachability { }*reachability;
@property (nonatomic, copy) id /* block */ repairActivityHandler;
@property (nonatomic, retain) CKContainer *repairContainer;
@property (nonatomic, retain) CKUploadRequestConfiguration *repairContainerOverrides;
@property (nonatomic, retain) CKAssetRepairScheduler *repairProcessor;
@property (nonatomic, retain) CKSyncEngine *repairZoneSyncEngine;
@property (nonatomic, retain) CKUploadRequestManagerResponseActionThrottler *responseActionThrottler;
@property (nonatomic, copy) id /* block */ scheduledAccountStatusCheck;
@property (nonatomic, retain) CKUploadRequestManagerStateMachine *stateMachine;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateMachineQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountChangeObserver;
- (id)activityIdentifierForSchedulingRepairs;
- (void)assetRepairScheduler:(id)arg1 completedRepairWithMetadata:(id)arg2 error:(id)arg3;
- (void)assetRepairScheduler:(id)arg1 completedRequestWithMetadata:(id)arg2 result:(long long)arg3;
- (void)assetRepairScheduler:(id)arg1 preparingRepairWithOperation:(id)arg2;
- (void)assetRepairSchedulerAllRequestsComplete:(id)arg1;
- (id /* block */)assetRequestCallback;
- (id)assignedMachServiceName;
- (id)cachesDirectory;
- (id)callbackForOverridePoint;
- (id)callbackQueue;
- (bool)canPerformFunction:(long long)arg1;
- (void)cancelScheduledEvent;
- (void)checkAccountID;
- (void)checkAccountStatus;
- (void)checkNetworkReachability;
- (void)closeSyncEngine;
- (void)commonInitWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (id)container;
- (id)createDatabase;
- (id)createStateMachine;
- (id)database;
- (id)deviceID;
- (void)dispatchEvent:(long long)arg1;
- (void)dispatchEvent:(long long)arg1 synchronously:(bool)arg2;
- (int)fetchAllToken;
- (void)fetchRepairContainerMetadata;
- (void)fetchServerChanges:(id /* block */)arg1;
- (void)finishSchedulerCallbackWithDeferral:(bool)arg1;
- (bool)hasRegisteredActivity;
- (bool)ignoringSystemConditions;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(bool)arg3;
- (void)invokeCallbackForOverridePoint:(long long)arg1 withError:(id)arg2 onCallbackQueue:(bool)arg3;
- (bool)isRepairRecordActionable:(id)arg1;
- (id)machServiceName;
- (void)manuallyTriggerUploadRequests;
- (id)nextRepairDateForDate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedRepairActivity;
- (void)openSyncEngine;
- (id /* block */)packageRequestCallback;
- (void)performRepairs;
- (struct __SCNetworkReachability { }*)reachability;
- (void)registerForAccountNotifications;
- (void)registerForFetchAllNotifications;
- (void)registerForNetworkReachability;
- (void)registerForRepairScheduler;
- (id /* block */)repairActivityHandler;
- (id)repairContainer;
- (id)repairContainerOverrides;
- (id)repairProcessor;
- (id)repairZoneID;
- (id)repairZoneSyncEngine;
- (id)repairableAssetsForDate:(id)arg1;
- (void)respondToStateMachineAction:(long long)arg1 isRetry:(bool)arg2;
- (void)respondToStateMachineChangeState:(long long)arg1 enter:(bool)arg2;
- (id)responseActionThrottler;
- (void)scheduleNextSync;
- (void)scheduleOrInvokeRepairsNow;
- (void)scheduleRecordRepair:(id)arg1 withDelay:(double)arg2 increasingCount:(bool)arg3;
- (void)scheduleRecurringFetch;
- (void)scheduleRepairsWithDelay:(double)arg1;
- (id /* block */)scheduledAccountStatusCheck;
- (void)setAccountChangeObserver:(id)arg1;
- (void)setAssetRequestCallback:(id /* block */)arg1;
- (void)setAssignedMachServiceName:(id)arg1;
- (void)setCachesDirectory:(id)arg1;
- (void)setCallback:(id /* block */)arg1 forOverridePoint:(long long)arg2;
- (void)setCallbackForOverridePoint:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setFetchAllToken:(int)arg1;
- (void)setHasRegisteredActivity:(bool)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setObservedRepairActivity:(id)arg1;
- (void)setPackageRequestCallback:(id /* block */)arg1;
- (void)setReachability:(struct __SCNetworkReachability { }*)arg1;
- (void)setRepairActivityHandler:(id /* block */)arg1;
- (void)setRepairContainer:(id)arg1;
- (void)setRepairContainerOverrides:(id)arg1;
- (void)setRepairProcessor:(id)arg1;
- (void)setRepairZoneSyncEngine:(id)arg1;
- (void)setResponseActionThrottler:(id)arg1;
- (void)setScheduledAccountStatusCheck:(id /* block */)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setStateMachineQueue:(id)arg1;
- (void)setStateQueue:(id)arg1;
- (id)stateMachine;
- (id)stateMachineQueue;
- (id)stateQueue;
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;
- (void)unregisterFromAccountNotifications;
- (void)unregisterFromFetchAllNotifications;
- (void)unregisterFromNetworkReachability;

@end
