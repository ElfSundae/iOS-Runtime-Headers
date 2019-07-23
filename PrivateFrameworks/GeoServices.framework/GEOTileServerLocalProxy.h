/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOResourceManifestTileGroupObserver> {
    NSString * _cacheLocation;
    GEODBReader * _dbReader;
    GEODBWriter * _dbWriter;
    NSMutableArray * _inProgress;
    NSLock * _inProgressLock;
    NSMapTable * _providers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_registerBuiltInProviders;
- (void)_updateExpiringTilesets;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2;
- (void)calculateFreeableSize;
- (void)cancel:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)close;
- (void)dealloc;
- (void)endPreloadSession;
- (void)flushPendingWrites;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;
- (void)loadTiles:(id)arg1 priorities:(unsigned int*)arg2 options:(unsigned int)arg3 client:(id)arg4;
- (void)open;
- (void)registerProvider:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 newPriority:(unsigned int)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg6 userInfo:(id)arg7;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequesterFinished:(id)arg1;
- (id)userInfoForRequesterUserInfo:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unsigned int)arg3 eTag:(id)arg4;

@end
