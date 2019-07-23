/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActiveWorkoutServer : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDLocationEventDelegate, HDWorkoutEventObserver, _HKActiveWorkoutServer, _HKWorkoutSessionDelegate> {
    HDClient * _client;
    <NSXPCProxyCreating> * _clientServer;
    NSMutableDictionary * _currentAnchors;
    <HDActiveWorkoutServerDelegate> * _delegate;
    id /* block */  _endWorkoutCompletion;
    HKSource * _localDeviceSource;
    HDLocationDataCollector * _locationDataCollector;
    NSSet * _observedTypes;
    BOOL  _observingChanges;
    HDPrimaryProfile * _primaryProfile;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _resumeDataByType;
    HDServer * _server;
    _HKActiveWorkoutServerConfiguration * _serverConfiguration;
    int  _serverState;
    int  _state;
    NSMutableArray * _workoutEvents;
    NSUUID * _workoutSessionUUID;
}

@property (nonatomic, readonly) HDClient *client;
@property (nonatomic, readonly) <NSXPCProxyCreating> *clientServer;
@property (nonatomic, retain) NSMutableDictionary *currentAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDActiveWorkoutServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isActivated;
@property (nonatomic, retain) NSSet *observedTypes;
@property (nonatomic) BOOL observingChanges;
@property (nonatomic, readonly) HDPrimaryProfile *primaryProfile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *resumeDataByType;
@property (nonatomic, readonly) HDServer *server;
@property (nonatomic) int serverState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *workoutEvents;
@property (nonatomic, readonly) NSUUID *workoutUUID;

- (void).cxx_destruct;
- (id)_clientWithErrorHandler:(id /* block */)arg1;
- (void)_deactivateWithCompletion:(id /* block */)arg1;
- (void)_generateGapForType:(id)arg1 resumeData:(id)arg2;
- (void)_queue_activateWorkoutWithCompletion:(id /* block */)arg1;
- (void)_queue_addEventType:(int)arg1 forDate:(id)arg2;
- (void)_queue_endWorkoutWithCompletion:(id /* block */)arg1;
- (id)_queue_gapsNeedingUpdate;
- (BOOL)_queue_gapsResolved;
- (void)_queue_initObservedTypes;
- (id)_queue_localDeviceSource;
- (void)_queue_reactivateWorkoutWithData:(id)arg1 startDate:(id)arg2;
- (void)_queue_registerObservers;
- (BOOL)_queue_resolveGap:(id)arg1 quantityType:(id)arg2;
- (void)_queue_resolveGaps;
- (BOOL)_queue_resolveGapsWithEndDate:(id)arg1 error:(id*)arg2;
- (void)_queue_samplesAdded:(id)arg1 lastUUID:(id)arg2 journaled:(BOOL)arg3 anchor:(id)arg4;
- (void)_queue_setAsCompleteAndStopObserving;
- (void)_queue_setResumeDataForType:(id)arg1 lastUUID:(id)arg2 inJournal:(BOOL)arg3;
- (void)_queue_setState:(int)arg1;
- (BOOL)_queue_shouldAddSample:(id)arg1 journaled:(BOOL)arg2 anchor:(id)arg3;
- (void)_queue_startWorkoutSessionIfNeededWithCompletion:(id /* block */)arg1;
- (int)_queue_stateForDate:(id)arg1;
- (void)_queue_stopWorkoutSessionIfNeededWithCompletion:(id /* block */)arg1;
- (id)_queue_sumQuantityForType:(id)arg1 startUUID:(id)arg2 endUUID:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 database:(id)arg6 localDeviceEntity:(id)arg7 newUUIDs:(id)arg8 lastUUID:(id*)arg9 newAnchor:(id*)arg10 error:(id*)arg11;
- (BOOL)_queue_updateTotalsForReactivationWithResumeData:(id)arg1 startDate:(id)arg2 error:(id*)arg3;
- (void)_queue_updateTotalsSinceResumeDate:(id)arg1;
- (BOOL)_queue_updateTotalsWithDataGap:(id)arg1 quantityType:(id)arg2 database:(id)arg3 localDeviceEntity:(id)arg4 error:(id*)arg5;
- (BOOL)_queue_updateTotalsWithResumeData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 database:(id)arg4 localDeviceEntity:(id)arg5 error:(id*)arg6;
- (void)_queue_updateTotalsWithValues:(id)arg1 UUIDs:(id)arg2 inJournal:(BOOL)arg3;
- (id)_reactivatePredicateForType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startRowId:(id)arg4 endRowId:(id)arg5 localDeviceEntity:(id)arg6;
- (id)_rowIdInDatabase:(id)arg1 forUUID:(id)arg2 error:(id*)arg3;
- (void)_setupObservedTypes;
- (BOOL)_shouldUseDeviceData;
- (id)_transactionIdentifier;
- (void)_updateClientTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (void)_updateTotalsSinceResumeDate:(id)arg1;
- (id)client;
- (id)clientServer;
- (id)currentAnchors;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (void)elevationUpdated:(unsigned int)arg1;
- (id)firstPartyWorkoutSnapshot;
- (id)initWithClientServer:(id)arg1 serverConfiguration:(id)arg2 primaryProfile:(id)arg3 server:(id)arg4 client:(id)arg5 delegate:(id)arg6;
- (BOOL)isActivated;
- (void)locationSeriesSampleUpdated:(id)arg1;
- (id)observedTypes;
- (BOOL)observingChanges;
- (void)pauseClientWithCompletion:(id /* block */)arg1;
- (id)primaryProfile;
- (id)queue;
- (void)remote_activateWorkoutWithCompletion:(id /* block */)arg1;
- (void)remote_endWorkoutWithEndDate:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_nukeWorkoutWithCompletion:(id /* block */)arg1;
- (void)remote_pauseWorkoutWithDate:(id)arg1 userInitiated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)remote_resumeWorkoutWithDate:(id)arg1 userInitiated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)resumeDataByType;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (id)server;
- (int)serverState;
- (void)setCurrentAnchors:(id)arg1;
- (void)setObservedTypes:(id)arg1;
- (void)setObservingChanges:(BOOL)arg1;
- (void)setResumeDataByType:(id)arg1;
- (void)setServerState:(int)arg1;
- (void)setWorkoutEvents:(id)arg1;
- (id)startDate;
- (unsigned int)workoutActivityType;
- (id)workoutEvents;
- (void)workoutManager:(id)arg1 didReceiveEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didChangeToState:(int)arg2 fromState:(int)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (id)workoutUUID;

@end
