/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface WK_RTCEncodedImage : NSObject {
    NSData * _buffer;
    long long  _captureTimeMs;
    bool  _completeFrame;
    unsigned long long  _contentType;
    long long  _encodeFinishMs;
    long long  _encodeStartMs;
    int  _encodedHeight;
    int  _encodedWidth;
    unsigned char  _flags;
    unsigned long long  _frameType;
    long long  _ntpTimeMs;
    NSNumber * _qp;
    long long  _rotation;
    int  _spatialIndex;
    unsigned int  _timeStamp;
}

@property (nonatomic, retain) NSData *buffer;
@property (nonatomic) long long captureTimeMs;
@property (nonatomic) bool completeFrame;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) long long encodeFinishMs;
@property (nonatomic) long long encodeStartMs;
@property (nonatomic) int encodedHeight;
@property (nonatomic) int encodedWidth;
@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned long long frameType;
@property (nonatomic) long long ntpTimeMs;
@property (nonatomic, retain) NSNumber *qp;
@property (nonatomic) long long rotation;
@property (nonatomic) int spatialIndex;
@property (nonatomic) unsigned int timeStamp;

- (void).cxx_destruct;
- (id)buffer;
- (long long)captureTimeMs;
- (bool)completeFrame;
- (unsigned long long)contentType;
- (long long)encodeFinishMs;
- (long long)encodeStartMs;
- (int)encodedHeight;
- (int)encodedWidth;
- (unsigned char)flags;
- (unsigned long long)frameType;
- (id)initWithNativeEncodedImage:(struct EncodedImage { unsigned int x1; unsigned int x2; long long x3; long long x4; int x5; char *x6; unsigned long long x7; unsigned long long x8; int x9; unsigned char x10; bool x11; int x12; struct PlayoutDelay { int x_13_1_1; int x_13_1_2; } x13; struct Timing { unsigned char x_14_1_1; long long x_14_1_2; long long x_14_1_3; long long x_14_1_4; long long x_14_1_5; long long x_14_1_6; long long x_14_1_7; long long x_14_1_8; long long x_14_1_9; } x14; unsigned int x15; struct optional<int> { bool x_16_1_1; union { struct dummy_type { struct empty_struct { } x_1_3_1[4]; } x_2_2_1; int x_2_2_2; } x_16_1_2; } x16; struct optional<webrtc::ColorSpace> { bool x_17_1_1; union { struct dummy_type { struct empty_struct { } x_1_3_1[60]; } x_2_2_1; struct ColorSpace { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; int x_2_3_4; struct optional<webrtc::HdrMetadata> { bool x_5_4_1; union { struct dummy_type { struct empty_struct { } x_1_6_1[48]; } x_2_5_1; struct HdrMetadata { struct HdrMasteringMetadata { struct Chromaticity { float x_1_8_1; float x_1_8_2; } x_1_7_1; struct Chromaticity { float x_2_8_1; float x_2_8_2; } x_1_7_2; struct Chromaticity { float x_3_8_1; float x_3_8_2; } x_1_7_3; struct Chromaticity { float x_4_8_1; float x_4_8_2; } x_1_7_4; float x_1_7_5; float x_1_7_6; } x_2_6_1; unsigned int x_2_6_2; unsigned int x_2_6_3; } x_2_5_2; } x_5_4_2; } x_2_3_5; } x_2_2_2; } x_17_1_2; } x17; })arg1;
- (struct EncodedImage { unsigned int x1; unsigned int x2; long long x3; long long x4; int x5; char *x6; unsigned long long x7; unsigned long long x8; int x9; unsigned char x10; bool x11; int x12; struct PlayoutDelay { int x_13_1_1; int x_13_1_2; } x13; struct Timing { unsigned char x_14_1_1; long long x_14_1_2; long long x_14_1_3; long long x_14_1_4; long long x_14_1_5; long long x_14_1_6; long long x_14_1_7; long long x_14_1_8; long long x_14_1_9; } x14; unsigned int x15; struct optional<int> { bool x_16_1_1; union { struct dummy_type { struct empty_struct { } x_1_3_1[4]; } x_2_2_1; int x_2_2_2; } x_16_1_2; } x16; struct optional<webrtc::ColorSpace> { bool x_17_1_1; union { struct dummy_type { struct empty_struct { } x_1_3_1[60]; } x_2_2_1; struct ColorSpace { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; int x_2_3_4; struct optional<webrtc::HdrMetadata> { bool x_5_4_1; union { struct dummy_type { struct empty_struct { } x_1_6_1[48]; } x_2_5_1; struct HdrMetadata { struct HdrMasteringMetadata { struct Chromaticity { float x_1_8_1; float x_1_8_2; } x_1_7_1; struct Chromaticity { float x_2_8_1; float x_2_8_2; } x_1_7_2; struct Chromaticity { float x_3_8_1; float x_3_8_2; } x_1_7_3; struct Chromaticity { float x_4_8_1; float x_4_8_2; } x_1_7_4; float x_1_7_5; float x_1_7_6; } x_2_6_1; unsigned int x_2_6_2; unsigned int x_2_6_3; } x_2_5_2; } x_5_4_2; } x_2_3_5; } x_2_2_2; } x_17_1_2; } x17; })nativeEncodedImage;
- (long long)ntpTimeMs;
- (id)qp;
- (long long)rotation;
- (void)setBuffer:(id)arg1;
- (void)setCaptureTimeMs:(long long)arg1;
- (void)setCompleteFrame:(bool)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setEncodeFinishMs:(long long)arg1;
- (void)setEncodeStartMs:(long long)arg1;
- (void)setEncodedHeight:(int)arg1;
- (void)setEncodedWidth:(int)arg1;
- (void)setFlags:(unsigned char)arg1;
- (void)setFrameType:(unsigned long long)arg1;
- (void)setNtpTimeMs:(long long)arg1;
- (void)setQp:(id)arg1;
- (void)setRotation:(long long)arg1;
- (void)setSpatialIndex:(int)arg1;
- (void)setTimeStamp:(unsigned int)arg1;
- (int)spatialIndex;
- (unsigned int)timeStamp;

@end
