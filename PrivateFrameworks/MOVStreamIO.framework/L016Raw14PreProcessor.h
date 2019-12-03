/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface L016Raw14PreProcessor : NSObject <MOVStreamPreProcessor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned int)encodedPixelFormatFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; id /* block */ x9; id x10; id x11; id x12; struct __CVPixelBufferPool {} *x13; id x14; id x15; }*)arg1;
- (const struct opaqueCMFormatDescription { }*)formatDescriptionForPixelBuffer:(struct __CVBuffer { }*)arg1 streamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; id /* block */ x9; id x10; id x11; id x12; struct __CVPixelBufferPool {} *x13; id x14; id x15; }*)arg2;
- (unsigned int)inputPixelFormatFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; id /* block */ x9; id x10; id x11; id x12; struct __CVPixelBufferPool {} *x13; id x14; id x15; }*)arg1;
- (struct __CVBuffer { }*)processedPixelBufferCopyOf:(struct __CVBuffer { }*)arg1 streamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; id /* block */ x9; id x10; id x11; id x12; struct __CVPixelBufferPool {} *x13; id x14; id x15; }*)arg2 error:(id*)arg3;
- (const struct opaqueCMFormatDescription { }*)trackFormatDescriptionFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; id /* block */ x9; id x10; id x11; id x12; struct __CVPixelBufferPool {} *x13; id x14; id x15; }*)arg1;

@end
