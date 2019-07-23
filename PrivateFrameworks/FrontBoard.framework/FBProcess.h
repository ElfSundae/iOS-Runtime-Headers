/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcess : NSObject <BSDescriptionProviding, FBSProcessIdentity, FBSProcessInternal, FBUIProcess> {
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    <FBProcessDelegate> * _delegate;
    NSNumber * _executablePartitionNumber;
    FBSProcessHandle * _handle;
    NSString * _jobLabel;
    NSString * _name;
    NSHashTable * _observers;
    int  _pid;
    BSProcessDeathWatcher * _processDeathObserver;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _running;
    FBProcessState * _state;
    BOOL  _updatingState;
    FBWorkspace * _workspace;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBProcessDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL executableLivesOnSystemPartition;
@property (getter=isForeground, nonatomic, readonly) BOOL foreground;
@property (nonatomic, readonly, retain) FBSProcessHandle *handle;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *jobLabel;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (getter=_queue_jobLabel, setter=_queue_setJobLabel:, nonatomic, copy) NSString *queue_jobLabel;
@property (getter=_queue_name, setter=_queue_setName:, nonatomic, copy) NSString *queue_name;
@property (getter=_queue_pid, setter=_queue_setPid:, nonatomic) int queue_pid;
@property (getter=_queue_isRunning, setter=_queue_setRunning:, nonatomic) BOOL queue_running;
@property (getter=_queue_taskState, setter=_queue_setTaskState:, nonatomic) int queue_taskState;
@property (getter=_queue_visibility, setter=_queue_setVisibility:, nonatomic) int queue_visibility;
@property (getter=isRunning, nonatomic, readonly) BOOL running;
@property (nonatomic, readonly, copy) FBProcessState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) BSMachPortTaskNameRight *taskNameRight;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly, retain) FBWorkspace *workspace;

- (id)_createWorkspace;
- (id)_queue;
- (void)_queue_callExitObservers;
- (void)_queue_configureWithHandle:(id)arg1;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1;
- (void)_queue_enumerateObserversWithBlock:(id /* block */)arg1;
- (BOOL)_queue_isForeground;
- (BOOL)_queue_isRunning;
- (id)_queue_jobLabel;
- (id)_queue_name;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(id /* block */)arg2;
- (int)_queue_pid;
- (void)_queue_processDidExit;
- (void)_queue_setJobLabel:(id)arg1;
- (void)_queue_setName:(id)arg1;
- (void)_queue_setPid:(int)arg1;
- (void)_queue_setRunning:(BOOL)arg1;
- (void)_queue_setTaskState:(int)arg1;
- (void)_queue_setVisibility:(int)arg1;
- (int)_queue_taskState;
- (void)_queue_toggleProcessDeathObserver:(BOOL)arg1;
- (void)_queue_updateStateWithBlock:(id /* block */)arg1;
- (int)_queue_visibility;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (id)_workspace;
- (void)addObserver:(id)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)executableLivesOnSystemPartition;
- (id)handle;
- (BOOL)hasEntitlement:(id)arg1;
- (id)init;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (id)initWithProcessHandle:(id)arg1 callOutQueue:(id)arg2;
- (BOOL)isApplicationProcess;
- (BOOL)isExtensionProcess;
- (BOOL)isForeground;
- (BOOL)isRunning;
- (BOOL)isSystemApplicationProcess;
- (id)jobLabel;
- (id)name;
- (int)pid;
- (void)removeObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)state;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)taskNameRight;
- (int)type;
- (id)valueForEntitlement:(id)arg1;
- (id)workspace;

@end
