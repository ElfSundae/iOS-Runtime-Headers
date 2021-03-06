/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingUploader : HMFObject <HMFLogging> {
    unsigned long long  _activeUploadOperationCount;
    NSUUID * _clipModelID;
    <HMDCameraRecordingUploaderDelegate> * _delegate;
    HMCameraClipEncryptionManager * _encryptionManager;
    <HMDCameraRecordingUploaderFactory> * _factory;
    double  _frameTimeOffset;
    HMBLocalZone * _localZone;
    NSMutableArray * _operations;
    double  _targetFragmentDuration;
    double  _totalClipDuration;
    NSData * _videoInitData;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) unsigned long long activeUploadOperationCount;
@property (retain) NSUUID *clipModelID;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraRecordingUploaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) HMCameraClipEncryptionManager *encryptionManager;
@property (readonly) <HMDCameraRecordingUploaderFactory> *factory;
@property double frameTimeOffset;
@property (readonly) unsigned long long hash;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) NSMutableArray *operations;
@property (readonly) Class superclass;
@property double targetFragmentDuration;
@property double totalClipDuration;
@property (copy) NSData *videoInitData;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_addOperation:(id)arg1 finalizeClipOnError:(bool)arg2;
- (void)_cancelOperationsForCurrentClip;
- (void)_createClipModel:(id)arg1;
- (id)_finish;
- (void)_operationCompleted:(id)arg1 finalizeOnError:(bool)arg2 promise:(id)arg3;
- (void)_startNextOperationWithLastOperationWasFinalized:(bool)arg1;
- (unsigned long long)activeUploadOperationCount;
- (id)addNotificationWithReason:(unsigned long long)arg1 confidenceLevel:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 heroFrameData:(id)arg4 offset:(double)arg5 homePresenceByPairingIdentity:(id)arg6;
- (id)addPosterFrameData:(id)arg1 offset:(double)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)addVideoInitData:(id)arg1;
- (id)addVideoSegmentData:(id)arg1 startDate:(id)arg2 duration:(double)arg3;
- (id)clipModelID;
- (id)delegate;
- (id)encryptionManager;
- (id)errorForCancel;
- (bool)errorIsCancelled:(id)arg1;
- (id)factory;
- (id)finish;
- (double)frameTimeOffset;
- (id)initWithLocalZone:(id)arg1 workQueue:(id)arg2 videoInitData:(id)arg3 targetFragmentDuration:(double)arg4;
- (id)initWithLocalZone:(id)arg1 workQueue:(id)arg2 videoInitData:(id)arg3 targetFragmentDuration:(double)arg4 factory:(id)arg5;
- (id)localZone;
- (id)operations;
- (void)setClipModelID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncryptionManager:(id)arg1;
- (void)setFrameTimeOffset:(double)arg1;
- (void)setTargetFragmentDuration:(double)arg1;
- (void)setTotalClipDuration:(double)arg1;
- (void)setVideoInitData:(id)arg1;
- (double)targetFragmentDuration;
- (double)totalClipDuration;
- (id)videoInitData;
- (id)workQueue;

@end
