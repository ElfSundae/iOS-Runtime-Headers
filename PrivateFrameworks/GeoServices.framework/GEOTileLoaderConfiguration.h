/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoaderConfiguration : NSObject <NSCopying> {
    NSString * _diskCacheLocation;
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    unsigned long long  _memoryCacheCostLimit;
    unsigned long long  _memoryCacheCountLimit;
    Class  _serverProxyClass;
}

@property (nonatomic, copy) NSString *diskCacheLocation;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic) unsigned long long memoryCacheCostLimit;
@property (nonatomic) unsigned long long memoryCacheCountLimit;
@property (nonatomic) Class serverProxyClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)diskCacheLocation;
- (id)init;
- (id)locale;
- (id)manifestConfiguration;
- (unsigned long long)memoryCacheCostLimit;
- (unsigned long long)memoryCacheCountLimit;
- (Class)serverProxyClass;
- (void)setDiskCacheLocation:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setManifestConfiguration:(id)arg1;
- (void)setMemoryCacheCostLimit:(unsigned long long)arg1;
- (void)setMemoryCacheCountLimit:(unsigned long long)arg1;
- (void)setServerProxyClass:(Class)arg1;

@end
