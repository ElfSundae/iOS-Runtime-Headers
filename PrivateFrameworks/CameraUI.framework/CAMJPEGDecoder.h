/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMJPEGDecoder : NSObject {
    NSObject<OS_dispatch_queue> *__decodeQueue;
    struct OpaqueFigJPEGDecodeSession { } *__decodeSession;
    NSObject<OS_dispatch_source> *__memoryWarningSource;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_decodeQueue;
@property (nonatomic, readonly) struct OpaqueFigJPEGDecodeSession { }*_decodeSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *_memoryWarningSource;

- (void).cxx_destruct;
- (id)_decodeQueue;
- (struct OpaqueFigJPEGDecodeSession { }*)_decodeSession;
- (id)_memoryWarningSource;
- (void)dealloc;
- (void)decodeJPEGData:(id)arg1 withPixelBufferCompletionHandler:(id /* block */)arg2;
- (id)init;

@end
