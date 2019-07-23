/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate> {
    GEOActiveTileGroup *_activeTileGroup;
    NSLock *_activeTileGroupLock;
    NSSet *_allRegionalResourceNames;
    NSSet *_allResourceNames;
    int _closedCount;
    NSLock *_closedCountLock;
    GEOResourceManifestConfiguration *_configuration;
    BOOL _isLoadingResources;
    BOOL _isUpdatingManifest;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    BOOL _needsToLoadTileGroupFromDisk;
    NSMutableArray *_networkActivityHandlers;
    NSDictionary *_resourceNamesToPaths;
    NSLock *_resourceNamesToPathsLock;
    <GEOResourceManifestServerProxy> *_serverProxy;
    NSHashTable *_serverProxyObservers;
    NSMutableArray *_tileGroupObservers;
    NSLock *_tileGroupObserversLock;
}

@property (nonatomic, readonly) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasActiveTileGroup;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <GEOResourceManifestServerProxy> *serverProxy;
@property (readonly) Class superclass;

+ (void)disableServerConnection;
+ (id)modernManager;
+ (id)modernManagerForConfiguration:(id)arg1;
+ (id)modernManagerForTileGroupIdentifier:(unsigned int)arg1;
+ (void)setHiDPI:(BOOL)arg1;
+ (void)setServerProxyClass:(Class)arg1;
+ (id)sharedManager;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;

- (id)_activeTileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_buildResourceNamesToPaths;
- (id)_loadActiveTileGroupIfNecessary:(BOOL)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_notifyObserversOfResourcesChange;
- (id)activeTileGroup;
- (unsigned int)activeTileGroupIdentifier;
- (void)addNetworkActivityHandler:(id /* block */)arg1;
- (void)addServerProxyObserver:(id)arg1;
- (void)addTileGroupObserver:(id)arg1 queue:(id)arg2;
- (id)allRegionalResourceNames;
- (id)allResourceNames;
- (id)allResourcePaths;
- (id)authToken;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)closeServerConnection;
- (void)dealloc;
- (id)detailedDescription;
- (void)devResourcesFolderDidChange;
- (void)forceUpdate;
- (void)getResourceManifestWithHandler:(id /* block */)arg1;
- (BOOL)hasActiveTileGroup;
- (BOOL)hasResourceManifest;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 overrideLocale:(id)arg2;
- (id)localizationURLStringIfNecessaryForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 overrideLocale:(id)arg2;
- (int)mapMatchingTileSetStyle;
- (unsigned int)mapMatchingZoomLevel;
- (void)openServerConnection;
- (id)pathForResourceWithName:(id)arg1;
- (void)removeServerProxyObserver:(id)arg1;
- (void)removeTileGroupObserver:(id)arg1;
- (void)resetActiveTileGroup;
- (id)serverProxy;
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(id /* block */)arg3;
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startObservingDevResources;
- (void)stopObservingDevResources;
- (BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)updateManifest:(id /* block */)arg1;
- (void)updateManifestIfNecessary:(id /* block */)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end
