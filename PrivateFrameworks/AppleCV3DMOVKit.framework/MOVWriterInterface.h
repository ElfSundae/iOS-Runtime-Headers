/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

@interface MOVWriterInterface : MOVStreamWriter <MOVStreamWriterDelegate> {
    NSString * _bundleID;
    NSString * _deviceName;
    NSString * _deviceString;
    NSDictionary * _fileSummary;
    NSMutableDictionary * _firstFrameContainer;
    NSString * _firstSteamID;
    NSMutableDictionary * _frameMetadataDictionary;
    <MOVWriterInterfaceDelegate> * _interface_delegate;
    bool  _isReady;
    NSMutableDictionary * _metadataAttachmentArrays;
    bool  _prepared;
    NSString * _productType;
    NSString * _serialNumber;
    NSMutableDictionary * _trackAddedByStream;
    NSString * _version;
}

@property (nonatomic, retain) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *deviceString;
@property (nonatomic, retain) NSMutableDictionary *firstFrameContainer;
@property (readonly) unsigned long long hash;
@property <MOVWriterInterfaceDelegate> *interface_delegate;
@property (readonly) bool isReady;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) NSString *serialNumber;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *version;

+ (struct { long long x1; int x2; unsigned int x3; long long x4; })cmTimeFromTimestamp:(double)arg1;
+ (id)makeDeviceString;

- (void).cxx_destruct;
- (id)addDefaultSummary;
- (void)addFirstBufferForStream:(id)arg1 buffer:(struct __CVBuffer { }*)arg2 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)addFrameMetadata:(id)arg1 value:(id)arg2 streamID:(id)arg3;
- (void)appendAllMetadataWithTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)appendMetadata:(id)arg1 metadataID:(id)arg2;
- (id)arrayFrom3x3Matrix:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1;
- (id)bundleID;
- (void)clearAllMetadataBuffers;
- (void)clearFirstBufferForStream:(id)arg1;
- (id)createFileMetadata;
- (id)deviceName;
- (id)deviceString;
- (void)finishWriting:(id*)arg1;
- (id)firstFrameContainer;
- (struct __CVBuffer { }*)getFirstBufferForStream:(id)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (id)initWithFileURL:(id)arg1 expectedFrameRate:(double)arg2 fileSummary:(id)arg3;
- (void)intelligentlyAppendBuffersForStreams:(id)arg1;
- (id)interface_delegate;
- (bool)isReady;
- (void)processAccelerometerData:(id)arg1 andAdditionalData:(id)arg2;
- (void)processCVAFeatureBuffer:(id)arg1;
- (void)processCVAPRDevice:(id)arg1;
- (void)processCVAUserEvent:(id)arg1;
- (void)processClass:(id)arg1 andAdditionalData:(id)arg2 metadataID:(id)arg3;
- (void)processCoreLocationData:(id)arg1 timestamp:(double)arg2 andAdditionalData:(id)arg3;
- (void)processDeviceMotionData:(id)arg1 andAdditionalData:(id)arg2;
- (void)processGyroscopeData:(id)arg1 andAdditionalData:(id)arg2;
- (void)processNSCoderObject:(id)arg1 metadataID:(id)arg2;
- (bool)processPixelBuffer:(struct __CVBuffer { }*)arg1 withTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 intrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg3 exposureTime:(double)arg4 streamID:(id)arg5;
- (id)productType;
- (bool)receivedAllFramesForStreams:(id)arg1;
- (void)registerAccelerometer;
- (void)registerCVAFeatureBuffer;
- (void)registerCVAPRDevice;
- (void)registerCVAUserEvent;
- (void)registerGyro;
- (void)registerLocation;
- (void)registerMetadataID:(id)arg1;
- (void)registerMotion;
- (void)registerStreamID:(id)arg1 config:(struct { bool x1; float x2; bool x3; }*)arg2;
- (id)serialNumber;
- (void)setBundleID:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceString:(id)arg1;
- (void)setFirstFrameContainer:(id)arg1;
- (void)setInterface_delegate:(id)arg1;
- (void)setMetadataAttachmentTo:(struct __CVBuffer { }*)arg1 streamID:(id)arg2;
- (void)setProductType:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setupMetadata:(id)arg1;
- (void)streamWriterDidFailWithError:(id)arg1;
- (void)streamWriterDidFinishPreparing;
- (void)streamWriterDidFinishRecording;
- (void)streamWriterEncounteredAnError:(id)arg1;
- (id)version;

@end
