/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteStreamSession : HMDCameraStreamSession <HMFLogging> {
    <HMDCameraRemoteStreamReceiverProtocol> * _streamReceiver;
    <HMDCameraRemoteStreamSenderProtocol> * _streamSender;
    unsigned int  _streamState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <HMDCameraRemoteStreamReceiverProtocol> *streamReceiver;
@property (nonatomic, readonly) <HMDCameraRemoteStreamSenderProtocol> *streamSender;
@property (nonatomic) unsigned int streamState;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)containsState:(int)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned int)arg2 streamSender:(id)arg3 streamReceiver:(id)arg4 remoteCapabilities:(id)arg5;
- (id)logIdentifier;
- (void)setStreamState:(unsigned int)arg1;
- (id)stateAsString;
- (id)streamReceiver;
- (id)streamSender;
- (unsigned int)streamState;
- (void)updateState:(int)arg1;

@end
