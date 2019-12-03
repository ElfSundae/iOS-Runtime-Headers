/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPAppAudioCaptureManager : NSObject {
    id /* block */  _appAudioOutputHandler;
    id /* block */  _appTapDidStartHandler;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _audioBasicDescription;
    NSObject<OS_dispatch_queue> * _audioDispatchQueue;
    struct { struct OpaqueAudioQueue {} *x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; struct AudioQueueBuffer {} *x3[100]; struct OpaqueAudioFileID {} *x4; unsigned int x5; long long x6; int x7; } * _audioRecorderQueue;
    NSDate * _lastAudioDate;
    bool  _resumed;
}

@property (nonatomic, copy) id /* block */ appAudioOutputHandler;
@property (nonatomic, copy) id /* block */ appTapDidStartHandler;
@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } audioBasicDescription;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *audioDispatchQueue;
@property (nonatomic) struct { struct OpaqueAudioQueue {} *x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; struct AudioQueueBuffer {} *x3[100]; struct OpaqueAudioFileID {} *x4; unsigned int x5; long long x6; int x7; }*audioRecorderQueue;
@property (nonatomic, retain) NSDate *lastAudioDate;
@property (nonatomic) bool resumed;

- (void).cxx_destruct;
- (id /* block */)appAudioOutputHandler;
- (id /* block */)appTapDidStartHandler;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioBasicDescription;
- (id)audioDispatchQueue;
- (struct { struct OpaqueAudioQueue {} *x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; struct AudioQueueBuffer {} *x3[100]; struct OpaqueAudioFileID {} *x4; unsigned int x5; long long x6; int x7; }*)audioRecorderQueue;
- (bool)handleStartAudioQueueFailed:(int)arg1 didFailHandler:(id /* block */)arg2;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (id)lastAudioDate;
- (void)resumeWithProcessID:(int)arg1;
- (bool)resumed;
- (void)setAppAudioOutputHandler:(id /* block */)arg1;
- (void)setAppTapDidStartHandler:(id /* block */)arg1;
- (void)setAudioBasicDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setAudioDispatchQueue:(id)arg1;
- (void)setAudioRecorderQueue:(struct { struct OpaqueAudioQueue {} *x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; struct AudioQueueBuffer {} *x3[100]; struct OpaqueAudioFileID {} *x4; unsigned int x5; long long x6; int x7; }*)arg1;
- (void)setLastAudioDate:(id)arg1;
- (void)setResumed:(bool)arg1;
- (void)startWithProcessID:(int)arg1 outputHandler:(id /* block */)arg2 didStartHandler:(id /* block */)arg3;
- (void)stop;

@end
