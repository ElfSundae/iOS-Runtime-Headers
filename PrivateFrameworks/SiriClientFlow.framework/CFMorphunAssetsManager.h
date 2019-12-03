/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFMorphunAssetsManager : NSObject {
    NSObject<OS_dispatch_queue> * queue;
}

+ (id)sharedMorphunAssetsManager;

- (void).cxx_destruct;
- (void)cancelDownload:(id)arg1;
- (void)downloadAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAssets:(id)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadAssetsForAssetType:(id)arg1 forLanguage:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadMorphunAssetsForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (id)downloadedLocalAsset:(id)arg1 forLanguage:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)morphunAssetsPathForLanguage:(id)arg1;
- (id)morphunAssetsVersion:(id)arg1 forLanguage:(id)arg2;
- (void)registerPath:(id)arg1 withLanguage:(id)arg2;
- (id)replaceLanguageCodeFormat:(id)arg1;
- (void)triggerMorphunAssetsManagement;

@end
