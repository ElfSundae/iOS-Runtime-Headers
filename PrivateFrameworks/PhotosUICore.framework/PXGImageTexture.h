/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGImageTexture : PXGBaseTexture {
    struct CGImage { } * _sourceCGImage;
    struct __CVBuffer { } * _sourceCVPixelBuffer;
}

@property (nonatomic, readonly) void orientationTransform;
@property (nonatomic) struct CGImage { }*sourceCGImage;
@property (nonatomic) struct __CVBuffer { }*sourceCVPixelBuffer;

+ (id)_sharedCIContext;

- (void)dealloc;
- (void)getTextureInfos:(struct { }*)arg1 forSpriteIndexes:(unsigned int*)arg2 geometries:(const struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; }*)arg3 spriteStyles:(const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; unsigned short x4; unsigned short x5; unsigned char x6; }*)arg4 spriteInfos:(const struct { int x1; int x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (struct CGImage { }*)imageRepresentation;
- (id)init;
- (void)orientationTransform;
- (void)setSourceCGImage:(struct CGImage { }*)arg1;
- (void)setSourceCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct CGImage { }*)sourceCGImage;
- (struct __CVBuffer { }*)sourceCVPixelBuffer;

@end
