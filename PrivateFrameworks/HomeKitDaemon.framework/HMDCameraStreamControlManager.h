/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamControlManager : NSObject <HMFLogging> {
    HMDAccessory * _accessory;
    <HMDCameraStreamControlManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDCameraSessionID * _sessionID;
    NSNumber * _slotIdentifier;
    HMDService * _streamManagementService;
    HMDCameraStreamMetrics * _streamMetrics;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraStreamControlManagerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic, retain) NSNumber *slotIdentifier;
@property (nonatomic, readonly) HMDService *streamManagementService;
@property (nonatomic, readonly) HMDCameraStreamMetrics *streamMetrics;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callStreamFirstFrameReceived:(unsigned int)arg1;
- (void)_callStreamNegotiated:(id)arg1;
- (void)_callStreamReconfigured;
- (void)_callStreamRemoteConnectionSetup;
- (void)_callStreamStarted;
- (void)_callStreamStopped;
- (void)_cleanUpStreamSession;
- (void)_reportError:(id)arg1;
- (void)_reportErrorCode:(int)arg1;
- (id)accessory;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 isLocal:(BOOL)arg8;
- (id)logIdentifier;
- (id)managerProtocol;
- (id)sessionID;
- (void)setSlotIdentifier:(id)arg1;
- (id)slotIdentifier;
- (id)streamManagementService;
- (id)streamMetrics;
- (id)streamSnapshotHandler;
- (id)workQueue;

@end
