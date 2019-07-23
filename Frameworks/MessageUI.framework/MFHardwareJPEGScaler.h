/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFHardwareJPEGScaler : NSObject {
    BOOL  _canHardwareScaleImage;
    NSData * _imageData;
    struct __CFDictionary { } * _imageProperties;
    struct __IOSurface { } * _ioSurfaceRef;
}

- (BOOL)_decodeImageToIOSurface;
- (BOOL)_isJPEGImage:(struct CGImageSource { }*)arg1;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource { }*)arg2;
- (BOOL)scaleImageToFitLargestDimension:(id)arg1 dataConsumer:(id)arg2;

@end
