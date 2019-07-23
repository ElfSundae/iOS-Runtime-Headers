/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoaderConfiguration : NSObject <NSCopying> {
    NSString *_diskCacheLocation;
    NSLocale *_locale;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    unsigned int _memoryCacheCostLimit;
    unsigned int _memoryCacheCountLimit;
    Class _serverProxyClass;
    BOOL _trackUsage;
}

@property (nonatomic, copy) NSString *diskCacheLocation;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic) unsigned int memoryCacheCostLimit;
@property (nonatomic) unsigned int memoryCacheCountLimit;
@property (nonatomic) Class serverProxyClass;
@property (nonatomic) BOOL trackUsage;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)diskCacheLocation;
- (id)init;
- (id)locale;
- (id)manifestConfiguration;
- (unsigned int)memoryCacheCostLimit;
- (unsigned int)memoryCacheCountLimit;
- (Class)serverProxyClass;
- (void)setDiskCacheLocation:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setManifestConfiguration:(id)arg1;
- (void)setMemoryCacheCostLimit:(unsigned int)arg1;
- (void)setMemoryCacheCountLimit:(unsigned int)arg1;
- (void)setServerProxyClass:(Class)arg1;
- (void)setTrackUsage:(BOOL)arg1;
- (BOOL)trackUsage;

@end
