/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYService : NSObject <SYSyncEngineResponder> {
    SYSession *_currentSession;
    NSDictionary *_customIDSOptions;
    double _defaultMessageTimeout;
    struct NSDictionary { Class x1; } *_defaultOptions;
    int _defaultPriority;
    <SYServiceDelegate> *_delegate;
    int _engineType;
    int _flagLock;
    struct { 
        unsigned int isMaster : 1; 
        unsigned int hasChanges : 1; 
        unsigned int needsReset : 1; 
        unsigned int hasPairingStore : 1; 
        unsigned int isRunning : 1; 
        unsigned int registeredForPairingNotifications : 1; 
        unsigned int remoteProtocolVersion : 3; 
        unsigned int remoteDeviceIsWatch : 1; 
        unsigned int isObservingRemoteDeviceProperties : 1; 
    } _flags;
    SYPersistentStore *_persistentStore;
    NSObject<OS_dispatch_source> *_processSignalSource;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_rejectingV1SyncSessions;
    NSString *_serviceName;
    _SYMultiSuspendableQueue *_sessionQueue;
    double _sessionStalenessInterval;
    SYSyncEngine *_syncEngine;
    SYVectorClock *_vectorClock;
}

@property (nonatomic, readonly) SYSession *currentSession;
@property (nonatomic, copy) NSDictionary *customIDSOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultMessageTimeout;
@property (readonly, copy) NSString *description;
@property (nonatomic) int engineType;
@property (nonatomic, readonly) BOOL hasPairingStore;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isMasterStore;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, readonly) SYPersistentStore *persistentStore;
@property (nonatomic) int priority;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double sessionStalenessInterval;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SYSyncEngine *syncEngine;

- (void).cxx_destruct;
- (id)_claimOwnershipOfFileAtURL:(id)arg1 error:(id*)arg2;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (void)_devicePaired:(id)arg1;
- (void)_deviceUnpaired:(id)arg1;
- (void)_handleEndSession:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleError:(id)arg1;
- (void)_handleResetRequest:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)_handleResetResponse:(id)arg1 error:(id*)arg2;
- (void)_handleRestartSession:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleStartSession:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleSyncBatch:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2;
- (BOOL)_initializeMessaging:(id*)arg1;
- (BOOL)_initializeServiceDB:(id*)arg1;
- (id)_newMessageHeader;
- (id)_pathForDataStore;
- (void)_postVersionRejectionMessage;
- (void)_processPendingChanges;
- (void)_sendResetRequest;
- (void)_setProtocolVersionForRemoteOSVersion:(id)arg1 remoteIsWatch:(BOOL)arg2;
- (void)_setupPairingNotifications;
- (BOOL)_shouldSessionWithID:(id)arg1 supercedeSessionWithID:(id)arg2 ofAge:(double)arg3;
- (void)_suspend;
- (void)_updateMetaProtocolInfoForDevice:(id)arg1;
- (BOOL)_v1_handleBatchChunkAck:(id)arg1 error:(id*)arg2;
- (BOOL)_v1_handleBatchEndResponse:(id)arg1 error:(id*)arg2;
- (void)_v1_handleBatchSyncChunk:(id)arg1 completion:(id /* block */)arg2;
- (void)_v1_handleBatchSyncEnd:(id)arg1 completion:(id /* block */)arg2;
- (void)_v1_handleBatchSyncStart:(id)arg1 completion:(id /* block */)arg2;
- (void)_v1_handleChangeMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)_v1_handleFullSyncRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_v1_handleSyncAllObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)_vectorClockUpdated;
- (id)currentSession;
- (id)customIDSOptions;
- (id)dataStreamWithMetadata:(id)arg1 options:(struct NSDictionary { Class x1; }*)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (double)defaultMessageTimeout;
- (void)deliveredMessageWithID:(id)arg1 context:(id)arg2;
- (int)engineType;
- (void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)handleOutOfBandData:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSyncError:(id)arg1;
- (void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(id /* block */)arg3;
- (void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(id /* block */)arg3;
- (BOOL)hasPairingStore;
- (id)init;
- (id)initWithService:(id)arg1 priority:(int)arg2 asMasterStore:(BOOL)arg3 options:(struct NSDictionary { Class x1; }*)arg4;
- (BOOL)isMasterStore;
- (id)name;
- (id)options;
- (id)persistentStore;
- (int)priority;
- (id)queue;
- (BOOL)resume:(id*)arg1;
- (BOOL)sendData:(id)arg1 options:(struct NSDictionary { Class x1; }*)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (void)sentMessageWithID:(id)arg1 context:(id)arg2;
- (void)sessionDidEnd:(id)arg1 withError:(id)arg2;
- (double)sessionStalenessInterval;
- (void)setCustomIDSOptions:(id)arg1;
- (void)setDefaultMessageTimeout:(double)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setEngineType:(int)arg1;
- (void)setHasChangesAvailable;
- (void)setNeedsResetSync;
- (void)setOptions:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setSessionStalenessInterval:(double)arg1;
- (void)suspend;
- (id)syncEngine;
- (BOOL)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2;

@end
