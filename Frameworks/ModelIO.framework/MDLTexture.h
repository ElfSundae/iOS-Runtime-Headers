/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTexture : NSObject <MDLNamed> {
    BOOL  _alphaValuesSet;
    NSData * _bottomLeftOriginData;
    int  _channelEncoding;
    BOOL  _hasAlphaValues;
    NSString * _name;
    BOOL  _selfCreating;
    struct MDLTextureData { 
        char *topLeftBytesForMip[16]; 
        char *bottomLeftBytesForMip[16]; 
        int channelCount; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*dimensions; 
    }  _textureData;
    NSData * _topLeftOriginData;
}

@property (nonatomic, readonly) unsigned int channelCount;
@property (nonatomic, readonly) int channelEncoding;
@property (nonatomic, readonly) void dimensions;
@property (nonatomic) BOOL hasAlphaValues;
@property (nonatomic) BOOL isCube;
@property (nonatomic, readonly) unsigned int mipLevelCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) int rowStride;

+ (id)_textureCubeWithSingleImageNamed:(id)arg1 bundle:(id)arg2;
+ (id)irradianceTextureCubeWithTexture:(void *)arg1 name:(void *)arg2 dimensions:(void *)arg3; // needs 3 arg types, found 2: id, id
+ (id)irradianceTextureCubeWithTexture:(void *)arg1 name:(void *)arg2 dimensions:(void *)arg3 roughness:(void *)arg4; // needs 4 arg types, found 3: id, id, float
+ (id)textureCubeWithImagesNamed:(id)arg1;
+ (id)textureCubeWithImagesNamed:(id)arg1 bundle:(id)arg2;
+ (id)textureNamed:(id)arg1;
+ (id)textureNamed:(id)arg1 bundle:(id)arg2;

- (void).cxx_destruct;
- (id)allocateDataAtLevel:(int)arg1;
- (unsigned int)channelCount;
- (int)channelEncoding;
- (void)clearTexelData;
- (void)dimensions;
- (id)generateDataAtLevel:(int)arg1;
- (BOOL)hasAlphaValues;
- (struct CGImage { }*)imageFromTexture;
- (id)init;
- (id)initWithData:(void *)arg1 topLeftOrigin:(void *)arg2 name:(void *)arg3 dimensions:(void *)arg4 rowStride:(void *)arg5 channelCount:(void *)arg6 channelEncoding:(void *)arg7 isCube:(void *)arg8; // needs 8 arg types, found 7: id, BOOL, id, int, unsigned int, int, BOOL
- (BOOL)isCube;
- (void)loadDataWithBottomLeftOriginAtMipLevel:(int)arg1 create:(BOOL)arg2;
- (void)loadDataWithTopLeftOriginAtMipLevel:(int)arg1 create:(BOOL)arg2;
- (unsigned int)mipLevelCount;
- (id)name;
- (int)rowStride;
- (void)setHasAlphaValues:(BOOL)arg1;
- (void)setIsCube:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setTexelDataWithBottomLeftOrigin:(id)arg1 atMipLevel:(int)arg2;
- (void)setTexelDataWithTopLeftOrigin:(id)arg1 atMipLevel:(int)arg2;
- (id)texelDataWithBottomLeftOrigin;
- (id)texelDataWithBottomLeftOriginAtMipLevel:(int)arg1 create:(BOOL)arg2;
- (id)texelDataWithTopLeftOrigin;
- (id)texelDataWithTopLeftOriginAtMipLevel:(int)arg1 create:(BOOL)arg2;
- (struct MDLTextureData { char *x1[16]; char *x2[16]; int x3; unsigned int x4; bool x5; }*)textureData;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1;
- (BOOL)writeToURL:(id)arg1 type:(struct __CFString { }*)arg2;

@end
