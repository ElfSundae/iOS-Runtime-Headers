/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraLocalStreamControlManager : HMDCameraStreamControlManager <HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraStreamControlManagerProtocol, HMDStreamingManagerDelegate> {
    HMDCameraMediaConfigGenerator * _configGenerator;
    HMDLocalStreamSession * _streamSession;
    HMDCameraSupportedConfigurationCache * _supportedConfigCache;
}

@property (nonatomic, retain) HMDCameraMediaConfigGenerator *configGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HMDLocalStreamSession *streamSession;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDCameraSupportedConfigurationCache *supportedConfigCache;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_calculateMTU;
- (void)_cleanUpStreamSession;
- (void)_getSupportedConfigurations;
- (void)_handleSetupEndPointRead:(id)arg1;
- (void)_handleSupportedParameters:(id)arg1;
- (void)_negotiateStream;
- (void)_reconfigureStream:(id)arg1;
- (void)_reconfigureStreams;
- (void)_sendSetupEndPointRead;
- (void)_sendUpdatedConfiguration;
- (void)_startStream:(id)arg1;
- (void)_startStreamingManager;
- (void)_stopCurrentStreamSession;
- (void)_streamStarted;
- (BOOL)_validateSetupEndPointReadWithWrite;
- (void)_writeReselectConfig;
- (void)_writeSelectConfig:(id)arg1 reconfigure:(BOOL)arg2;
- (void)_writeSetupEndPoint;
- (void)_writeStartConfig;
- (void)_writeStopConfig;
- (id)configGenerator;
- (void)dealloc;
- (void)deviceConnectionSender:(id)arg1 didEndSession:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didSetup:(id)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned int)arg4 destinationID:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 supportedConfigCache:(id)arg11;
- (void)negotiateStream;
- (void)reconfigureStream:(id)arg1;
- (void)remoteSetup:(id)arg1;
- (void)sessionInitiator:(id)arg1 didEndSession:(id)arg2;
- (void)sessionInitiator:(id)arg1 didSetup:(id)arg2;
- (void)setConfigGenerator:(id)arg1;
- (void)setStreamSession:(id)arg1;
- (void)setSupportedConfigCache:(id)arg1;
- (void)startStream:(id)arg1;
- (void)stopStream;
- (id)streamSession;
- (void)streamingManager:(id)arg1 didStartRelay:(id)arg2;
- (void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3;
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;
- (void)streamingManagerDidNetworkImprove:(id)arg1;
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned int)arg2 aspectRatio:(id)arg3;
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;
- (id)supportedConfigCache;
- (void)updateAudioSetting:(unsigned int)arg1;

@end
