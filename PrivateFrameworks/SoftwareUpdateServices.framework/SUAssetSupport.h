/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAssetSupport : NSObject

+ (void)_cleanupAllAssetsOfType:(id)arg1;
+ (id)_gestaltValueForKey:(struct __CFString { }*)arg1;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(bool)arg4;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (id)copyInstalledAssets;
+ (id)copySUAssetForAssetID:(id)arg1;
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)arg1;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(bool)arg2 error:(id*)arg3;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(bool)arg2 releaseDate:(id*)arg3 error:(id*)arg4;
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExistsWithReleaseDate:(id*)arg1;
+ (void)purgeMSUUpdate:(id /* block */)arg1;
+ (id)queryMetaDataOfType:(id)arg1 WithFilter:(id)arg2 installedOnly:(bool)arg3 error:(id*)arg4;
+ (long long)requestCatalogDownload:(id)arg1;
+ (void)setAssetQueryFilters:(id)arg1;
+ (void)setSUFilters:(id)arg1;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1 withReleaseDate:(id)arg2;
+ (id)tryCreateDocumentationFromDocumentationAsset:(id)arg1;

@end
