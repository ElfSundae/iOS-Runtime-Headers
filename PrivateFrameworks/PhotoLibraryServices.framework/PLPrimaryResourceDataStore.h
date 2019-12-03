/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deferredFinalizerLock;
    PLDeferredPhotoFinalizer * _deferredPhotoFinalizer;
    PAImageConversionServiceClient * _imageConversionServiceClient;
    NSMutableDictionary * _inflightCPLDownloadTaskIdentifiersByRequestID;
    NSDictionary * _keyHelperByBundleScope;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PLPrimaryResourceDataStoreKeyHelper * _mainScopeKeyHelper;
    unsigned int  _masterThumbRecipeID;
    NSMutableDictionary * _pendingCPLDownloadShouldRunByRequestID;
    NSMutableDictionary * _pendingDeferredPhotoFinalizationShouldRunByRequestID;
    PAVideoConversionServiceClient * _videoConversionServiceClient;
}

@property (getter=_cplManager, readonly) PLCloudPhotoLibraryManager *cplManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *keyHelperByBundleScope;
@property (nonatomic, retain) PLPrimaryResourceDataStoreKeyHelper *mainScopeKeyHelper;
@property (nonatomic) unsigned int masterThumbRecipeID;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;

+ (unsigned int)currentDeviceMasterThumbRecipeID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)storeClassID;
+ (id)supportedRecipes;

- (void).cxx_destruct;
- (id)_cplManager;
- (id)_deferredPhotoFinalizer;
- (void)_downloadCPLResource:(id)arg1 forAsset:(id)arg2 options:(id)arg3 taskDidBeginHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)_expectedFilePathForMasterThumbnailForAsset:(id)arg1;
- (void)_finalizeDeferredAsset:(id)arg1 forWide:(bool)arg2 options:(id)arg3 taskDidBeginHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)_imageConversionServiceClient;
- (bool)_isSystemLibraryStore;
- (unsigned long long)_makeResourceLocallyAvailable:(id)arg1 asset:(id)arg2 inContext:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (id)_masterThumbnailVirtualResourceForAsset:(id)arg1;
- (unsigned long long)_pruneResource:(id)arg1 asset:(id)arg2 inContext:(id)arg3 completion:(id /* block */)arg4;
- (id)_videoConversionServiceClient;
- (bool)canStoreExternalResource:(id)arg1;
- (bool)canStreamResource:(id)arg1;
- (void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1;
- (void)dealloc;
- (id)descriptionForSubtype:(long long)arg1;
- (id)initWithPathManager:(id)arg1;
- (id)keyFromKeyStruct:(const void*)arg1;
- (id)keyHelperByBundleScope;
- (id)keyHelperForBundleScope:(unsigned char)arg1;
- (id)mainScopeKeyHelper;
- (unsigned int)masterThumbRecipeID;
- (id)name;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(id /* block */)arg5;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (void)setKeyHelperByBundleScope:(id)arg1;
- (void)setMainScopeKeyHelper:(id)arg1;
- (void)setMasterThumbRecipeID:(unsigned int)arg1;
- (bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg1 givenFilePath:(id)arg2;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end
