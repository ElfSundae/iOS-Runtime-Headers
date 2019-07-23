/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATLegacyDeviceSyncManager : ATDeviceSyncManager <ATEnvironmentMonitorObserver, ATLegacyAssetLinkProgressDelegate, ATSessionObserver> {
    ATLegacyAssetLink *_assetLink;
    BOOL _automaticSync;
    struct CacheDeleteToken { } *_cacheDeleteToken;
    ATClientController *_clientController;
    id /* block */ _clientProgressCallback;
    ATAsset *_currentAsset;
    NSString *_currentDataclass;
    ATLegacyMessageLink *_currentMessageLink;
    double _currentOverallProgress;
    unsigned int _currentStage;
    NSString *_currentStatus;
    NSDictionary *_currentSyncHostInfo;
    double _currentSyncProgress;
    NSMutableDictionary *_dataclassTimers;
    NSMutableArray *_dataclasses;
    ATUserDefaults *_defaults;
    ATDeviceDiskUsageProvider *_diskUsageProvider;
    unsigned long _grappaId;
    BOOL _localSyncRequest;
    BOOL _localSyncRequestCanceled;
    NSMutableArray *_messageLinks;
    NSDate *_startTime;
    ATSession *_syncSession;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, copy) NSDictionary *currentSyncHostInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) ATSession *syncSession;

+ (id)legacyDeviceSyncManager;

- (void).cxx_destruct;
- (void)_cancelExistingSyncSession;
- (id)_currentHostType;
- (BOOL)_currentLinkIsWifiConnection;
- (void)_handleAssetMetricsMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleCapabilitiesMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleFinishedSyncingMetadataMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleHostInfoMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleRequestingSyncMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleSyncFailedMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleSyncStatusMessage:(id)arg1 fromLink:(id)arg2;
- (void)_reconcileSyncWithMessage:(id)arg1;
- (void)_reportLocalProgress;
- (void)_reset;
- (void)_sendDiskUsageForDataClasses:(id)arg1;
- (void)_sendInstalledAssets;
- (void)_sendSyncAllowed;
- (void)assetLink:(id)arg1 didUpdateOverallProgress:(double)arg2;
- (void)cancelSyncOnMessageLink:(id)arg1;
- (id)currentSyncHostInfo;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (id)init;
- (void)initiateSyncForLibrary:(id)arg1 onMessageLink:(id)arg2;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)session:(id)arg1 didBeginSessionTask:(id)arg2;
- (void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
- (void)session:(id)arg1 willBeginSessionTask:(id)arg2;
- (void)sessionDidFinish:(id)arg1;
- (void)sessionWillBegin:(id)arg1;
- (void)setCurrentSyncHostInfo:(id)arg1;
- (void)setSyncSession:(id)arg1;
- (id)syncSession;

@end
