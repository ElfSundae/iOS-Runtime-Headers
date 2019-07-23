/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLBag : NSObject {
    ISURLBagBackend * _bagBackend;
    NSString * _bagBackendKey;
    SSURLBagContext * _context;
    SSNetworkConstraints * _defaultConstraints;
    NSArray * _guidPatterns;
    NSSet * _guidSchemes;
    NSDictionary * _headerPatterns;
    double  _invalidationTime;
    BOOL  _loadedFromDiskCache;
    NSString * _storeFrontIdentifier;
}

@property (nonatomic, copy) SSURLBagContext *URLBagContext;
@property (nonatomic, readonly) NSDictionary *URLBagDictionary;
@property (readonly) NSSet *availableStorefrontItemKinds;
@property (nonatomic) double invalidationTime;
@property (nonatomic) BOOL loadedFromDiskCache;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (getter=isValid, nonatomic, readonly) BOOL valid;
@property (nonatomic, readonly) long long versionIdentifier;

+ (BOOL)_allowUnsignedBags;
+ (void)_loadItemKindURLBagKeyMap;
+ (id)_sharedBagBackend;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2;
+ (BOOL)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)storeFrontURLBagKeyForItemKind:(id)arg1;
+ (id)urlBagForContext:(id)arg1;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;

- (void).cxx_destruct;
- (id)URLBagContext;
- (id)URLBagDictionary;
- (id)URLForURL:(id)arg1 clientIdentifier:(id)arg2;
- (id)_copyGUIDPatternsFromBagBackend;
- (id)_copyGUIDSchemesFromBagBackend;
- (id)_copyHeaderPatternsFromBagBackend;
- (id)_networkConstraintsCachePath;
- (void)_preprocessURLResolutionCacheDictionary:(id)arg1;
- (void)_setBagBackendWithDictionary:(id)arg1;
- (void)_writeNetworkConstraintsCacheFile;
- (void)_writeURLResolutionCacheFile;
- (id)availableStorefrontItemKinds;
- (id)copyExtraHeadersForURL:(id)arg1;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithRawDictionary:(id)arg1;
- (id)initWithURLBagContext:(id)arg1;
- (double)invalidationTime;
- (BOOL)isValid;
- (BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (BOOL)loadedFromDiskCache;
- (id)networkConstraintsForDownloadKind:(id)arg1;
- (id)sanitizedURLForURL:(id)arg1;
- (id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(int)arg2;
- (void)setInvalidationTime:(double)arg1;
- (void)setInvalidationTimeWithExprationInterval:(double)arg1;
- (void)setLoadedFromDiskCache:(BOOL)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setURLBagContext:(id)arg1;
- (BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg1;
- (BOOL)shouldSendGUIDForURL:(id)arg1;
- (id)storeFrontIdentifier;
- (id)urlForKey:(id)arg1;
- (BOOL)urlIsTrusted:(id)arg1;
- (id)valueForKey:(id)arg1;
- (long long)versionIdentifier;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

@end
