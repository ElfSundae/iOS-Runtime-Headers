/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextReceiverDelegate, VCTextSender> {
    int  _clientPid;
    id  _mediaStreamDelegate;
    NSObject<OS_dispatch_queue> * _mediaStreamDelegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    id  _sendDelegate;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)didReceiveText:(struct NSString { Class x1; }*)arg1;
- (id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)mediaStreamDelegate;
- (id)mediaStreamDelegateQueue;
- (void)pause;
- (void)resume;
- (void)sendCharacter:(unsigned short)arg1;
- (id)sendDelegate;
- (void)sendText:(struct NSString { Class x1; }*)arg1;
- (void)setMediaStreamDelegate:(id)arg1;
- (void)setMediaStreamDelegateQueue:(id)arg1;
- (void)setPause:(bool)arg1;
- (bool)setStreamConfig:(id)arg1 withError:(id*)arg2;
- (void)start;
- (void)stop;

@end
