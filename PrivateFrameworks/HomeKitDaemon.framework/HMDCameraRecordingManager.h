/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingManager : HMFObject <HMDCameraClipManagerDelegate, HMDCameraRecordingSessionDelegate, HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {
    HMDHAPAccessory * _accessory;
    NSMutableSet * _activeRecordingSessions;
    HMDCameraRecordingBulkSendSessionInitiator * _bulkSendSessionInitiator;
    HMDCameraProfile * _camera;
    <HMDDataStreamBulkSendSession> * _currentBulkSendSession;
    HMDCameraRecordingSession * _currentRecordingSession;
    HMDStreamDataChunkAssembler * _dataChunkAssembler;
    HMDCameraRecordingManagerDependencyFactory * _dependencyFactory;
    bool  _didShutDown;
    NSUUID * _messageTargetUUID;
    bool  _motionActive;
    HMFMessageDispatcher * _msgDispatcher;
    HMDCameraRecordingSessionNotificationTrigger * _notificationTrigger;
    HMFTimer * _readCallbackTimer;
    HMDCameraRecordingBulkSendDataReadEvent * _readEvent;
    HMDCameraRecordingResidentElector * _recordingResidentElector;
    HMDCameraRecordingSettingsControl * _recordingSettingsControl;
    HMDCameraRecordingSessionRetryContext * _sessionRetryContext;
    HMFTimer * _sessionRetryTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (readonly) NSMutableSet *activeRecordingSessions;
@property (readonly) HMDCameraRecordingBulkSendSessionInitiator *bulkSendSessionInitiator;
@property (readonly) HMDCameraProfile *camera;
@property (retain) <HMDDataStreamBulkSendSession> *currentBulkSendSession;
@property (retain) HMDCameraRecordingSession *currentRecordingSession;
@property (retain) HMDStreamDataChunkAssembler *dataChunkAssembler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMDCameraRecordingManagerDependencyFactory *dependencyFactory;
@property (readonly, copy) NSString *description;
@property bool didShutDown;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *homePresenceByPairingIdentity;
@property (readonly) NSString *logIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isMotionActive) bool motionActive;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (readonly) HMDCameraRecordingSessionNotificationTrigger *notificationTrigger;
@property (retain) HMFTimer *readCallbackTimer;
@property (retain) HMDCameraRecordingBulkSendDataReadEvent *readEvent;
@property (readonly) HMDCameraRecordingResidentElector *recordingResidentElector;
@property (readonly) HMDCameraRecordingSettingsControl *recordingSettingsControl;
@property (retain) HMDCameraRecordingSessionRetryContext *sessionRetryContext;
@property (retain) HMFTimer *sessionRetryTimer;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_bulkSendReadDidReceiveStreamDataChunk:(id)arg1;
- (bool)_canAnyDeviceStartRecordingSession;
- (void)_clipManagerDidBecomeAvailable;
- (void)_closeCurrentSessionsWithReason:(unsigned short)arg1;
- (unsigned short)_closeEventReasonForRecordingSessionError:(id)arg1;
- (void)_coordinateRecordingSessionForAccessory:(unsigned long long)arg1;
- (void)_createRecordingSessionForTrigger:(unsigned long long)arg1 presenceByPairingIdentity:(id)arg2;
- (void)_forwardRecordingSession:(unsigned long long)arg1 withSortedDevices:(id)arg2 withRetries:(long long)arg3;
- (void)_handleBulkSendSessionCreated:(id)arg1;
- (void)_handleDataReceived:(id)arg1;
- (void)_readDataForCurrentSession;
- (void)_resetCurrentRecordingSession:(id)arg1;
- (void)_resetRetryContextWithReason:(id)arg1;
- (void)_shutDown;
- (void)_start;
- (void)_startBulkSendDataReadEvent;
- (void)_startCameraRecordingSessionForTrigger:(unsigned long long)arg1 reason:(id)arg2;
- (void)_startRecordingSessionForTrigger:(unsigned long long)arg1 presenceByPairingIdentity:(id)arg2 reason:(id)arg3 completionCallback:(id /* block */)arg4;
- (void)_startSessionRetryTimer;
- (void)_submitReadEventWithStatus:(unsigned short)arg1;
- (id)accessory;
- (id)activeRecordingSessions;
- (id)bulkSendSessionInitiator;
- (id)camera;
- (void)clipManagerDidBecomeAvailable:(id)arg1;
- (void)clipManagerDidBecomeUnavailable:(id)arg1;
- (void)closeSession:(id)arg1 withError:(id)arg2;
- (id)currentBulkSendSession;
- (id)currentRecordingSession;
- (id)dataChunkAssembler;
- (void)dealloc;
- (id)dependencyFactory;
- (bool)didShutDown;
- (void)handleCameraSettingsDidChangeNotification:(id)arg1;
- (void)handleStartRecordingSessionRequest:(id)arg1;
- (id)homePresenceByPairingIdentity;
- (id)initWithCamera:(id)arg1 recordingManagementService:(id)arg2 dependencyFactory:(id)arg3;
- (bool)isMotionActive;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)notificationTrigger;
- (void)notificationTrigger:(id)arg1 didObserveTriggerType:(unsigned long long)arg2 changeToActive:(bool)arg3;
- (id)readCallbackTimer;
- (id)readEvent;
- (id)recordingResidentElector;
- (id)recordingSettingsControl;
- (void)recordingSettingsControlDidConfigure:(id)arg1;
- (id)sessionRetryContext;
- (id)sessionRetryTimer;
- (void)setCurrentBulkSendSession:(id)arg1;
- (void)setCurrentRecordingSession:(id)arg1;
- (void)setDataChunkAssembler:(id)arg1;
- (void)setDidShutDown:(bool)arg1;
- (void)setMotionActive:(bool)arg1;
- (void)setReadCallbackTimer:(id)arg1;
- (void)setReadEvent:(id)arg1;
- (void)setSessionRetryContext:(id)arg1;
- (void)setSessionRetryTimer:(id)arg1;
- (void)shutDown;
- (void)start;
- (bool)supportsDeviceWithCapabilities:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
