/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActiveWorkoutServer : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, _HKActiveWorkoutServer, _HKWorkoutSessionDelegate> {
    <NSXPCProxyCreating> *_clientServer;
    _HKActiveWorkoutServerConfiguration *_configuration;
    NSMutableDictionary *_currentAnchors;
    <HDHealthDaemon> *_daemon;
    <HDActiveWorkoutServerDelegate> *_delegate;
    HKQuantityType *_distanceType;
    HKSource *_localDeviceSource;
    NSSet *_observedTypes;
    NSObject<OS_dispatch_queue> *_observerQueue;
    BOOL _observingChanges;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableDictionary *_resumeDataByType;
    HDServer *_server;
    int _serverState;
    int _state;
    NSMutableArray *_workoutEvents;
    NSUUID *_workoutSessionUUID;
}

@property (readonly) int activeWorkoutState;
@property (nonatomic, readonly) <NSXPCProxyCreating> *clientServer;
@property (nonatomic, retain) NSMutableDictionary *currentAnchors;
@property (readonly) NSArray *currentWorkoutEvents;
@property (nonatomic, readonly) <HDHealthDaemon> *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDActiveWorkoutServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKQuantityType *distanceType;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isActivated;
@property (readonly) HKSource *localDeviceSource;
@property (nonatomic, retain) NSSet *observedTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic) BOOL observingChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSMutableDictionary *resumeDataByType;
@property (nonatomic, readonly) HDServer *server;
@property (nonatomic) int serverState;
@property (readonly) NSDate *startDate;
@property int state;
@property (readonly) Class superclass;
@property (readonly) unsigned int workoutActivityType;
@property (nonatomic, retain) NSMutableArray *workoutEvents;
@property (nonatomic, readonly) NSUUID *workoutUUID;

- (void).cxx_destruct;
- (void)_addEventType:(int)arg1 forDate:(id)arg2;
- (void)_broadcastActivityTypeWithWorkoutState:(int)arg1 serverState:(int)arg2;
- (void)_observerQueue_deactivate;
- (id)_observerQueue_gapsNeedingUpdate;
- (BOOL)_observerQueue_gapsResolved;
- (void)_observerQueue_generateGapForType:(id)arg1 resumeData:(id)arg2;
- (void)_observerQueue_initObservedTypes;
- (void)_observerQueue_reactivateWorkoutWithData:(id)arg1 startDate:(id)arg2;
- (void)_observerQueue_registerObservers;
- (BOOL)_observerQueue_resolveGap:(id)arg1 quantityType:(id)arg2;
- (void)_observerQueue_resolveGaps;
- (void)_observerQueue_samplesAdded:(id)arg1 lastUUID:(id)arg2 journaled:(BOOL)arg3 anchor:(id)arg4;
- (BOOL)_observerQueue_shouldAddSample:(id)arg1 journaled:(BOOL)arg2 anchor:(id)arg3;
- (int)_observerQueue_stateForDate:(id)arg1;
- (id)_observerQueue_sumQuantityForType:(id)arg1 startUUID:(id)arg2 endUUID:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 database:(id)arg6 localDeviceEntity:(id)arg7 newUUIDs:(id)arg8 lastUUID:(id*)arg9 newAnchor:(id*)arg10;
- (BOOL)_observerQueue_updateTotalsWithDataGap:(id)arg1 quantityType:(id)arg2 database:(id)arg3 localDeviceEntity:(id)arg4;
- (BOOL)_observerQueue_updateTotalsWithResumeData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 database:(id)arg4 localDeviceEntity:(id)arg5 error:(id*)arg6;
- (void)_observerQueue_updateTotalsWithValues:(id)arg1 UUIDs:(id)arg2 inJournal:(BOOL)arg3;
- (id)_reactivatePredicateForType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startRowId:(id)arg4 endRowId:(id)arg5 localDeviceEntity:(id)arg6;
- (id)_rowIdInDatabase:(id)arg1 forUUID:(id)arg2;
- (void)_setResumeDataForType:(id)arg1 lastUUID:(id)arg2 inJournal:(BOOL)arg3;
- (void)_setupObservedTypes;
- (BOOL)_shouldUseDeviceData;
- (void)_startWorkoutSessionWithCompletion:(id /* block */)arg1;
- (void)_stopWorkoutSessionWithCompletion:(id /* block */)arg1;
- (id)_transactionIdentifier;
- (void)_updateClientTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (unsigned int)_workoutActivityType;
- (void)activateWorkoutWithCompletion:(id /* block */)arg1;
- (int)activeWorkoutState;
- (id)clientServer;
- (id)clientWithErrorHandler:(id /* block */)arg1;
- (id)currentAnchors;
- (id)currentWorkoutEvents;
- (id)daemon;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)deactivate;
- (void)deactivateServer;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (id)distanceType;
- (void)endWorkoutWithEndDate:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithClient:(id)arg1 workoutConfiguration:(id)arg2 daemon:(id)arg3 server:(id)arg4 delegate:(id)arg5;
- (BOOL)isActivated;
- (id)localDeviceSource;
- (id)observedTypes;
- (id)observerQueue;
- (BOOL)observingChanges;
- (void)pauseClientWithCompletion:(id /* block */)arg1;
- (void)pauseWorkoutWithDate:(id)arg1 completion:(id /* block */)arg2;
- (id)propertyQueue;
- (id)resumeDataByType;
- (void)resumeWorkoutWithDate:(id)arg1 completion:(id /* block */)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (id)server;
- (int)serverState;
- (void)setCurrentAnchors:(id)arg1;
- (void)setObservedTypes:(id)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setObservingChanges:(BOOL)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setResumeDataByType:(id)arg1;
- (void)setServerState:(int)arg1;
- (void)setState:(int)arg1;
- (void)setWorkoutEvents:(id)arg1;
- (id)startDate;
- (int)state;
- (unsigned int)workoutActivityType;
- (id)workoutEvents;
- (void)workoutSession:(id)arg1 didChangeToState:(int)arg2 fromState:(int)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (id)workoutUUID;

@end
