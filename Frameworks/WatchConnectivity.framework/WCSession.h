/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCSession : NSObject <WCXPCManagerDelegate> {
    int _activationState;
    NSDictionary *_applicationContext;
    NSOperationQueue *_backgroundWorkOperationQueue;
    BOOL _complicationEnabled;
    WCSessionUserInfoTransfer *_currentComplicationUserInfoTransfer;
    NSMutableSet *_currentMessageIdentifiersAwaitingReply;
    NSMutableDictionary *_currentMessages;
    <WCSessionDelegate> *_delegate;
    NSOperationQueue *_delegateOperationQueue;
    BOOL _delegateSupportsActiveDeviceSwitch;
    BOOL _delegateSupportsAsyncActivate;
    BOOL _hasCompletedInitialActivation;
    BOOL _iOSDeviceNeedsUnlockAfterRebootForReachability;
    NSMutableDictionary *_internalOutstandingFileTransfers;
    NSMutableDictionary *_internalOutstandingUserInfoTransfers;
    BOOL _paired;
    NSString *_pairingID;
    WCQueueManager *_queueManager;
    BOOL _reachable;
    NSDictionary *_receivedApplicationContext;
    NSMutableArray *_switchTasksQueue;
    BOOL _watchAppInstalled;
    NSURL *_watchDirectoryURL;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic) int activationState;
@property (nonatomic, copy) NSDictionary *applicationContext;
@property (readonly) NSOperationQueue *backgroundWorkOperationQueue;
@property (getter=isComplicationEnabled, nonatomic) BOOL complicationEnabled;
@property (retain) WCSessionUserInfoTransfer *currentComplicationUserInfoTransfer;
@property (retain) NSMutableSet *currentMessageIdentifiersAwaitingReply;
@property (readonly) NSMutableDictionary *currentMessages;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WCSessionDelegate> *delegate;
@property (readonly) NSOperationQueue *delegateOperationQueue;
@property (nonatomic) BOOL delegateSupportsActiveDeviceSwitch;
@property (nonatomic) BOOL delegateSupportsAsyncActivate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCompletedInitialActivation;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL iOSDeviceNeedsUnlockAfterRebootForReachability;
@property (nonatomic, retain) NSMutableDictionary *internalOutstandingFileTransfers;
@property (nonatomic, retain) NSMutableDictionary *internalOutstandingUserInfoTransfers;
@property (nonatomic, readonly, copy) NSArray *outstandingFileTransfers;
@property (nonatomic, readonly, copy) NSArray *outstandingUserInfoTransfers;
@property (getter=isPaired, nonatomic) BOOL paired;
@property (nonatomic, copy) NSString *pairingID;
@property (retain) WCQueueManager *queueManager;
@property (getter=isReachable, nonatomic) BOOL reachable;
@property (nonatomic, copy) NSDictionary *receivedApplicationContext;
@property (readonly) Class superclass;
@property (retain) NSMutableArray *switchTasksQueue;
@property (getter=isWatchAppInstalled, nonatomic) BOOL watchAppInstalled;
@property (nonatomic, retain) NSURL *watchDirectoryURL;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultSession;
+ (BOOL)isSupported;

- (void).cxx_destruct;
- (id)_init;
- (void)_onqueue_notifyOfMessageError:(id)arg1 withErrorHandler:(id /* block */)arg2;
- (void)_onqueue_sendResponseError:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3;
- (void)activateSession;
- (int)activationState;
- (id)applicationContext;
- (id)backgroundWorkOperationQueue;
- (void)cancelFileTransfer:(id)arg1;
- (void)cancelUserInfo:(id)arg1;
- (id)createAndStartTimerOnWorkQueueWithHandler:(id /* block */)arg1;
- (id)currentComplicationUserInfoTransfer;
- (id)currentMessageIdentifiersAwaitingReply;
- (id)currentMessages;
- (id)currentPairingID;
- (void)dealloc;
- (id)delegate;
- (id)delegateOperationQueue;
- (BOOL)delegateSupportsActiveDeviceSwitch;
- (BOOL)delegateSupportsAsyncActivate;
- (id)description;
- (BOOL)didPairingIDChange:(id)arg1;
- (void)didSessionStateChange:(id)arg1 withChangeHandler:(id /* block */)arg2;
- (BOOL)didWatchURLChange:(id)arg1;
- (id)errorIfNotReachable;
- (id)errorIfPreconditionsNotSatisfied;
- (id)fileSizeFromURL:(id)arg1;
- (void)handleActiveDeviceSwitchStarted;
- (void)handleApplicationContextWithPairingID:(id)arg1;
- (void)handleFileResultWithPairingID:(id)arg1;
- (void)handleIncomingFileWithPairingID:(id)arg1;
- (void)handleIncomingUserInfoWithPairingID:(id)arg1;
- (void)handleMessageSendingAllowed;
- (void)handleRequest:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (void)handleSessionStateChanged:(id)arg1;
- (void)handleUserInfoResultWithPairingID:(id)arg1;
- (BOOL)hasCompletedInitialActivation;
- (unsigned int)hash;
- (BOOL)iOSDeviceNeedsUnlockAfterRebootForReachability;
- (id)init;
- (id)internalOutstandingFileTransfers;
- (id)internalOutstandingUserInfoTransfers;
- (BOOL)isComplicationEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPaired;
- (BOOL)isReachable;
- (BOOL)isWatchAppInstalled;
- (BOOL)logAndTestIfUnactivatedOrMissingDelegate;
- (void)notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)onDelegateQueueIfTriggeringKVO_updateSessionState:(id)arg1 triggerKVO:(BOOL)arg2;
- (void)onqueue_addOutstandingFileTransfer:(id)arg1;
- (id)onqueue_addOutstandingUserInfoTransfer:(id)arg1;
- (void)onqueue_cancelFileTransfer:(id)arg1;
- (void)onqueue_cancelMessagesIfAppropriate;
- (void)onqueue_cancelTransfersIfAppropriate;
- (void)onqueue_cancelUserInfo:(id)arg1;
- (void)onqueue_completeSwitchTask:(id)arg1 withSessionState:(id)arg2;
- (void)onqueue_dequeueContent;
- (void)onqueue_handleDataMessageRequest:(id)arg1 withPairingID:(id)arg2;
- (void)onqueue_handleDictionaryMessageRequest:(id)arg1 withPairingID:(id)arg2;
- (void)onqueue_handleMessageCompletionWithError:(id)arg1 withMessageID:(id)arg2;
- (void)onqueue_handleResponseData:(id)arg1 record:(id)arg2 withPairingID:(id)arg3;
- (void)onqueue_handleResponseDictionary:(id)arg1 record:(id)arg2 withPairingID:(id)arg3;
- (void)onqueue_handleUpdateSessionState:(id)arg1;
- (void)onqueue_loadAppContexts;
- (void)onqueue_loadOutstandingFileTransfers;
- (void)onqueue_loadOutstandingUserInfoTransfers;
- (void)onqueue_loadPersistedContent;
- (void)onqueue_notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)onqueue_notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)onqueue_removeOutstandingFileTransfer:(id)arg1;
- (void)onqueue_removeOutstandingUserInfoTransfer:(id)arg1;
- (void)onqueue_sendMessageData:(id)arg1 replyHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3 dictionaryMessage:(BOOL)arg4;
- (void)onqueue_sendResponseData:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3;
- (void)onqueue_sendResponseDictionary:(id)arg1 identifier:(id)arg2;
- (void)onqueue_setCurrentComplicationUserInfoTransfer:(id)arg1;
- (void)onqueue_startNextDeviceSwitch;
- (void)onqueue_transferUserInfo:(id)arg1 withUserInfo:(id)arg2;
- (id)outstandingFileTransfers;
- (id)outstandingUserInfoTransfers;
- (id)pairingID;
- (id)queueManager;
- (id)receivedApplicationContext;
- (void)sendMessage:(id)arg1 replyHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)sendMessageData:(id)arg1 replyHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)setActivationState:(int)arg1;
- (void)setApplicationContext:(id)arg1;
- (void)setComplicationEnabled:(BOOL)arg1;
- (void)setCurrentComplicationUserInfoTransfer:(id)arg1;
- (void)setCurrentMessageIdentifiersAwaitingReply:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateSupportsActiveDeviceSwitch:(BOOL)arg1;
- (void)setDelegateSupportsAsyncActivate:(BOOL)arg1;
- (void)setHasCompletedInitialActivation:(BOOL)arg1;
- (void)setIOSDeviceNeedsUnlockAfterRebootForReachability:(BOOL)arg1;
- (void)setInternalOutstandingFileTransfers:(id)arg1;
- (void)setInternalOutstandingUserInfoTransfers:(id)arg1;
- (void)setPaired:(BOOL)arg1;
- (void)setPairingID:(id)arg1;
- (void)setQueueManager:(id)arg1;
- (void)setReachable:(BOOL)arg1;
- (void)setReceivedApplicationContext:(id)arg1;
- (void)setSwitchTasksQueue:(id)arg1;
- (void)setWatchAppInstalled:(BOOL)arg1;
- (void)setWatchDirectoryURL:(id)arg1;
- (void)storeAppContext:(id)arg1 withAppContextData:(id)arg2;
- (void)storeReceivedAppContext:(id)arg1 withAppContextData:(id)arg2;
- (BOOL)supportsActiveDeviceSwitch;
- (id)switchTasksQueue;
- (id)transferCurrentComplicationUserInfo:(id)arg1;
- (id)transferFile:(id)arg1 metadata:(id)arg2;
- (id)transferUserInfo:(id)arg1;
- (BOOL)updateApplicationContext:(id)arg1 error:(id*)arg2;
- (void)updatePairingID:(id)arg1;
- (BOOL)verifySessionFile:(id)arg1;
- (id)watchDirectoryURL;
- (id)workQueue;
- (void)xpcConnectionInterrupted;

@end
