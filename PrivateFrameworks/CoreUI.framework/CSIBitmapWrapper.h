/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSIBitmapWrapper : NSObject {
    BOOL  _allowsMultiPassEncoding;
    BOOL  _allowsOptimalPacking;
    struct CGContext { } * _bitmapContext;
    unsigned int  _colorSpaceID;
    float  _compressionQuality;
    int  _compressionType;
    int  _exifOrientation;
    BOOL  _flipped;
    unsigned int  _height;
    unsigned int  _imageAlpha;
    NSData * _pixelData;
    unsigned int  _pixelFormat;
    unsigned long  _rowbytes;
    struct CGImage { } * _sourceImage;
    int  _textureInterpretation;
    int  _texturePixelFormat;
    unsigned int  _width;
}

@property BOOL allowsMultiPassEncoding;
@property BOOL allowsOptimalPacking;
@property (nonatomic) unsigned int colorSpaceID;
@property (nonatomic) float compressionQuality;
@property int compressionType;
@property (nonatomic) int exifOrientation;
@property (nonatomic) BOOL flipped;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) int textureInterpretation;

- (BOOL)allowsMultiPassEncoding;
- (BOOL)allowsOptimalPacking;
- (struct CGContext { }*)bitmapContext;
- (unsigned int)colorSpaceID;
- (id)compressedData:(BOOL)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned int*)arg3;
- (float)compressionQuality;
- (int)compressionType;
- (void)dealloc;
- (int)exifOrientation;
- (BOOL)flipped;
- (unsigned int)height;
- (id)initWithCGImage:(struct CGImage { }*)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 texturePixelFormat:(int)arg4;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;
- (id)pixelData;
- (unsigned int)pixelFormat;
- (unsigned long)rowbytes;
- (void)setAllowsMultiPassEncoding:(BOOL)arg1;
- (void)setAllowsOptimalPacking:(BOOL)arg1;
- (void)setColorSpaceID:(unsigned int)arg1;
- (void)setCompressionQuality:(float)arg1;
- (void)setCompressionType:(int)arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setFlipped:(BOOL)arg1;
- (void)setPixelData:(id)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setSourceAlphaInfo:(unsigned int)arg1;
- (void)setTextureInterpretation:(int)arg1;
- (unsigned int)sourceAlphaInfo;
- (int)textureInterpretation;
- (unsigned int)width;

@end
