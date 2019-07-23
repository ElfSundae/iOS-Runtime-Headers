/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSystemMonitor : NSObject <CPLEngineComponent, CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate> {
    bool  _allowBackgroundOperationsBoost;
    bool  _allowOperationsBoost;
    bool  _closed;
    CPLEngineLibrary * _engineLibrary;
    bool  _modifyingBudgetOverride;
    unsigned long long  _newBudgetsToOverride;
    unsigned long long  _newBudgetsToStopOverriding;
    bool  _overrideDataSystemBudgetPermanently;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _reasonsToOverrideSystemBudget;
    NSMutableDictionary * _scheduledOverrides;
    NSURL * _volumeURL;
    CPLNetworkWatcher * _watcher;
}

@property (readonly) bool canBoostBackgroundOperations;
@property (readonly) bool canBoostOperations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long diskPressureState;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long freeDiskSpaceSize;
@property (readonly) unsigned long long hash;
@property (readonly) bool isDataBudgetOverriden;
@property (readonly) bool isNetworkConnected;
@property (readonly) bool isOnCellularOrUnknown;
@property (readonly) Class superclass;

+ (id)descriptionForBudget:(unsigned long long)arg1;
+ (id)descriptionForBudgets:(unsigned long long)arg1;
+ (void)enumerateSystemBudgets:(unsigned long long)arg1 withBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_hasPermanentDataOverride;
- (void)_permanentDataOverrideHasChanged;
- (void)_startOverridingBudget:(unsigned long long)arg1 reason:(id)arg2;
- (void)_startWatchingPermanentDataOverride;
- (void)_stopOverridingBudget:(unsigned long long)arg1 reason:(id)arg2;
- (void)_stopWatchingPermanentDataOverride;
- (void)_withSystemBudgetOverride:(id /* block */)arg1;
- (bool)canBoostBackgroundOperations;
- (bool)canBoostOperations;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (unsigned long long)diskPressureState;
- (id)engineLibrary;
- (unsigned long long)freeDiskSpaceSize;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isDataBudgetOverriden;
- (bool)isNetworkConnected;
- (bool)isOnCellularOrUnknown;
- (void)networkStateDidChangeForNetworkWatcher:(id)arg1;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)scheduledOverrideDidEnd:(id)arg1;
- (void)startOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2;
- (void)startOverridingSystemBudgetsForClient:(unsigned long long)arg1;
- (void)stopOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2;
- (void)stopOverridingSystemBudgetsForClient:(unsigned long long)arg1;

@end
