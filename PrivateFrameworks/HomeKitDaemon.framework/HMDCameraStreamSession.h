/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamSession : NSObject <HMFLogging> {
    HMDCameraProtocolParameters * _protocolParameters;
    HMDCameraSessionID * _sessionID;
    HMDStreamingCapabilities * _streamingCapabilities;
    HMDStreamingManager * _streamingManager;
    HMDCameraVideoTierParameters * _videoTierParameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HMDCameraProtocolParameters *protocolParameters;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic, readonly) HMDStreamingCapabilities *streamingCapabilities;
@property (nonatomic, retain) HMDStreamingManager *streamingManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDCameraVideoTierParameters *videoTierParameters;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)arg1 streamingTierType:(unsigned int)arg2 remoteCapabilities:(id)arg3 streamPreference:(id)arg4;
- (id)logIdentifier;
- (id)negotiatedParameters;
- (id)protocolParameters;
- (id)sessionID;
- (void)setProtocolParameters:(id)arg1;
- (void)setStreamingManager:(id)arg1;
- (void)setVideoTierParameters:(id)arg1;
- (id)streamingCapabilities;
- (id)streamingManager;
- (id)videoTierParameters;

@end
