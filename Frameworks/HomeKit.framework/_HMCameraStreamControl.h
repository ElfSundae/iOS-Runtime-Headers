/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraStreamControl : _HMCameraControl {
    HMCameraStream * _cameraStream;
    <_HMCameraStreamControlDelegate> * _delegate;
    NSString * _streamSessionID;
    unsigned int  _streamState;
}

@property (nonatomic, readonly) HMCameraStream *cameraStream;
@property (nonatomic) <_HMCameraStreamControlDelegate> *delegate;
@property (nonatomic, retain) NSString *streamSessionID;
@property (nonatomic) unsigned int streamState;

- (void).cxx_destruct;
- (void)_callVideoStartedDelegate;
- (void)_callVideoStoppedDelegate:(id)arg1;
- (void)_handleNegotiateStreamResponse:(id)arg1 error:(id)arg2;
- (void)_handleVideoStreamStartResponse:(id)arg1 error:(id)arg2;
- (void)_handleVideoStreamStopped:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_resetState:(id)arg1;
- (void)_startStream;
- (void)_stopStream;
- (id)cameraStream;
- (void)dealloc;
- (id)delegate;
- (void)homedRestarted;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 msgDispatcher:(id)arg5 home:(id)arg6 profileUniqueIdentifier:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (void)setCameraStream:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStreamSessionID:(id)arg1;
- (void)setStreamState:(unsigned int)arg1;
- (void)startStream;
- (void)stopStream;
- (id)streamSessionID;
- (unsigned int)streamState;

@end
