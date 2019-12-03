/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioRelayIOControllerSettings : NSObject {
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
    }  _audioFormat;
    struct _VCRemoteCodecInfo { 
        unsigned int codecType; 
        double sampleRate; 
    }  _remoteCodecInfo;
}

@property (nonatomic, readonly) const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*audioFormat;
@property (nonatomic, readonly) const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*remoteCodecInfo;
@property (nonatomic, readonly) unsigned int samplesPerFrame;

- (const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)audioFormat;
- (id)initWithAudioFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 remoteCodecInfo:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg2;
- (const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)remoteCodecInfo;
- (unsigned int)samplesPerFrame;

@end
