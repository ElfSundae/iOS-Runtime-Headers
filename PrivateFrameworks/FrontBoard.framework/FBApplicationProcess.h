/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProcess : FBProcess <BKSProcessDelegate> {
    NSMutableSet * _allowedLockedFilePaths;
    FBApplicationInfo * _applicationInfo;
    BOOL  _beingDebugged;
    BKSProcess * _bksProcess;
    BOOL  _bootstrapFailed;
    BOOL  _bootstrapped;
    BOOL  _connectedToExternalAccessory;
    BKSProcessAssertion * _continuousProcessAssertion;
    FBProcessCPUStatistics * _cpuStatistics;
    int  _defaultSceneSuspendType;
    double  _execTime;
    FBProcessExecutionContext * _executionContext;
    FBApplicationProcessExitContext * _exitContext;
    BOOL  _finishedLaunching;
    BSMachPortSendRight * _gsEventPort;
    BKSProcessAssertion * _launchProcessAssertion;
    BOOL  _nowPlayingWithAudio;
    BOOL  _pendingExit;
    BOOL  _performedLaunch;
    NSMutableArray * _queue_terminateRequestCompletionBlocks;
    NSMutableArray * _queuedSceneBlocksToExecuteAfterLaunch;
    BOOL  _recordingAudio;
    FBSProcessWatchdogPolicy * _sceneCreateWatchdogPolicy;
    BOOL  _supportsBackgroundTaskAssertions;
    BOOL  _supportsSuspendOnLock;
    int  _terminationReason;
    FBProcessWatchdog * _watchdog;
}

@property (nonatomic, readonly, retain) FBApplicationInfo *applicationInfo;
@property (getter=isBeingDebugged, nonatomic) BOOL beingDebugged;
@property (getter=isConnectedToExternalAccessory, nonatomic) BOOL connectedToExternalAccessory;
@property (getter=_queue_cpuStatistics, nonatomic, readonly, retain) FBProcessCPUStatistics *cpuStatistics;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_queue_defaultSuspendType, nonatomic, readonly) int defaultSuspendType;
@property (nonatomic) <FBApplicationProcessDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double elapsedCPUTime;
@property (getter=_queue_execTime, nonatomic, readonly) double execTime;
@property (nonatomic, readonly, copy) FBProcessExecutionContext *executionContext;
@property (nonatomic, readonly, retain) FBApplicationProcessExitContext *exitContext;
@property (nonatomic, readonly) BOOL finishedLaunching;
@property (readonly) unsigned int hash;
@property (getter=isNowPlayingWithAudio, nonatomic) BOOL nowPlayingWithAudio;
@property (getter=isPendingExit, nonatomic, readonly) BOOL pendingExit;
@property (getter=isRecordingAudio, nonatomic) BOOL recordingAudio;
@property (readonly) Class superclass;
@property (getter=_queue_supportsBackgroundTaskAssertions, nonatomic, readonly) BOOL supportsBackgroundTaskAssertions;
@property (getter=_queue_supportsSuspendOnLock, nonatomic, readonly) BOOL supportsSuspendOnLock;
@property (getter=_queue_terminationReason, nonatomic, readonly) int terminationReason;

+ (void)deleteAllJobs;

- (id)GSEventPort;
- (id)_applicationWorkspace;
- (id)_createWorkspace;
- (long long)_exceptionCodeForKillReason:(int)arg1;
- (void)_queue_addAllowedLockedFilePath:(id)arg1;
- (int)_queue_bksVisibilityForVisibility:(int)arg1;
- (BOOL)_queue_bootstrapAndExecWithContext:(id)arg1;
- (int)_queue_calculateDefaultSceneSuspendType;
- (void)_queue_callExitObservers;
- (void)_queue_cancelWatchdogTimer;
- (BOOL)_queue_consideredUnderLock;
- (id)_queue_cpuStatistics;
- (id)_queue_crashReportThermalsInfo;
- (int)_queue_defaultSuspendType;
- (void)_queue_doGracefulKillWithDeliveryConfirmation:(id /* block */)arg1;
- (void)_queue_dropContinuousProcessAssertion;
- (void)_queue_dropLaunchProcessAssertion;
- (int)_queue_effectiveVisibilityForSceneSettings:(id)arg1;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1 underLock:(BOOL)arg2;
- (void)_queue_enumerateApplicationObserversWithBlock:(id /* block */)arg1;
- (double)_queue_execTime;
- (void)_queue_executeBlockAfterLaunchCompletes:(id /* block */)arg1;
- (void)_queue_executeKillForRequest:(id)arg1;
- (void)_queue_executeLaunchCompletionBlocks;
- (void)_queue_executeTerminateRequestCompletionBlocksIfNecessaryForSucccess:(BOOL)arg1;
- (void)_queue_finishLaunch;
- (id)_queue_internalDebugEnvironmentVariables;
- (void)_queue_invalidateBKSProcess;
- (BOOL)_queue_isAllowedLockedFilePath:(id)arg1 standardizedPath:(out id*)arg2;
- (BOOL)_queue_isSystemApplication;
- (void)_queue_killForReason:(int)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_killWithSignal:(int)arg1;
- (void)_queue_launchIfNecessary;
- (id)_queue_lockedFilePathsIgnoringAllowed;
- (id)_queue_name;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)_queue_noteExitedForForceQuit:(BOOL)arg1;
- (int)_queue_ourTaskStateForBKSTaskState:(int)arg1;
- (void)_queue_processDidExit;
- (void)_queue_processReallyDidExit;
- (void)_queue_sceneLifecycleStateChanged:(id)arg1;
- (void)_queue_sceneNeedsGracefulExit:(id)arg1 withDeliveryConfirmation:(id /* block */)arg2;
- (void)_queue_setSupportsBackgroundTaskAssertions:(BOOL)arg1;
- (void)_queue_setSupportsSuspendOnLock:(BOOL)arg1;
- (void)_queue_setTaskState:(int)arg1;
- (void)_queue_setVisibility:(int)arg1;
- (void)_queue_setupBKSProcess;
- (BOOL)_queue_shouldWatchdogWithDeclineReason:(id*)arg1;
- (void)_queue_startWatchdogTimerForContext:(id)arg1;
- (BOOL)_queue_supportsBackgroundTaskAssertions;
- (BOOL)_queue_supportsContinuousBackgroundMode;
- (BOOL)_queue_supportsSuspendOnLock;
- (void)_queue_takeLaunchProcessAssertion;
- (void)_queue_terminateWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (int)_queue_terminationReason;
- (void)_queue_waitToExecOrExit;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (id)_watchdogProvider;
- (int)_watchdogReportType;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (id)_workspace;
- (id)_workspaceServer;
- (id)applicationInfo;
- (BOOL)bootstrapWithContext:(id)arg1;
- (void)dealloc;
- (double)elapsedCPUTime;
- (void)executeBlockAfterLaunchCompletes:(id /* block */)arg1;
- (id)executionContext;
- (id)exitContext;
- (BOOL)finishedLaunching;
- (id)initWithApplicationInfo:(id)arg1 callOutQueue:(id)arg2;
- (id)initWithApplicationInfo:(id)arg1 handle:(id)arg2 callOutQueue:(id)arg3;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (BOOL)isApplicationProcess;
- (BOOL)isBeingDebugged;
- (BOOL)isConnectedToExternalAccessory;
- (BOOL)isNowPlayingWithAudio;
- (BOOL)isPendingExit;
- (BOOL)isRecordingAudio;
- (BOOL)isSystemApplicationProcess;
- (void)killForReason:(int)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3;
- (void)killForReason:(int)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id /* block */)arg4;
- (void)launchIfNecessary;
- (void)noteWorkspaceLocked:(BOOL)arg1;
- (void)process:(id)arg1 isBeingDebugged:(BOOL)arg2;
- (void)process:(id)arg1 taskStateDidChange:(int)arg2;
- (void)processWillExpire:(id)arg1;
- (void)setBeingDebugged:(BOOL)arg1;
- (void)setConnectedToExternalAccessory:(BOOL)arg1;
- (void)setFinishedLaunching:(BOOL)arg1;
- (void)setNowPlayingWithAudio:(BOOL)arg1;
- (void)setPendingExit:(BOOL)arg1;
- (void)setRecordingAudio:(BOOL)arg1;
- (void)stop;

@end
