/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileRequest : NSObject <NSCopying> {
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    int  _mapType;
    unsigned int  _scale;
    struct VKRasterTileKey { 
        unsigned int x; 
        unsigned int y; 
        unsigned int z; 
        unsigned int pointSize; 
    }  _tileKey;
}

@property (nonatomic, readonly) BOOL isInvalid;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic) int mapType;
@property (nonatomic) unsigned int scale;
@property (nonatomic) struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } tileKey;
@property (nonatomic, readonly) const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*tileKeyPtr;
@property (nonatomic, readonly) struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; } tk;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInvalid;
- (void)isReallyInvalid:(id /* block */)arg1;
- (id)locale;
- (id)manifestConfiguration;
- (int)mapType;
- (unsigned int)scale;
- (void)setLocale:(id)arg1;
- (void)setManifestConfiguration:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setScale:(unsigned int)arg1;
- (void)setTileKey:(struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })tileKey;
- (const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)tileKeyPtr;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })tk;

@end
