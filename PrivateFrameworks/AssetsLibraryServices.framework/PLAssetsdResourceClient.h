/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLAssetsdResourceClient : PLAssetsdBaseClient

- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addGroupWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)adjustmentDataForAsset:(id)arg1 withDataBlob:(bool)arg2 networkAccessAllowed:(bool)arg3 trackCPLDownload:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)consolidateAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)downloadCloudSharedAsset:(id)arg1 withCloudPlaceholderKind:(unsigned long long)arg2 shouldPrioritize:(bool)arg3 shouldExtendTimer:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 outFileLength:(long long*)arg5 error:(id*)arg6;
- (bool)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(bool)arg2 fileExtension:(id*)arg3 fileDescriptor:(int*)arg4 error:(id*)arg5;
- (bool)fileURLForAssetURL:(id)arg1 withAdjustments:(bool)arg2 fileURL:(id*)arg3 error:(id*)arg4;
- (void)generateOnDemandResourcesForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 completionHandler:(id /* block */)arg7;
- (bool)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 outImageData:(id*)arg7 outImageDataInfo:(id*)arg8 outCPLDownloadContext:(id*)arg9 error:(id*)arg10;
- (bool)sandboxExtensionForAssetResourcePath:(id)arg1 sandboxExtensionToken:(id*)arg2 error:(id*)arg3;
- (bool)sandboxExtensionForFileSystemBookmark:(id)arg1 bookmarkURL:(id*)arg2 sandboxExtensionToken:(id*)arg3 error:(id*)arg4;
- (void)saveAssetWithJobDictionary:(id)arg1 imageSurface:(struct __IOSurface { }*)arg2 previewImageSurface:(struct __IOSurface { }*)arg3 completionHandler:(id /* block */)arg4;
- (bool)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 error:(id*)arg3;
- (void)videoURLForAsset:(id)arg1 format:(int)arg2 intent:(unsigned long long)arg3 networkAccessAllowed:(bool)arg4 streamingAllowed:(bool)arg5 restrictToPlayable:(bool)arg6 trackCPLDownload:(bool)arg7 completionHandler:(id /* block */)arg8;
- (void)videoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(bool)arg3 streamingAllowed:(bool)arg4 restrictToPlayable:(bool)arg5 trackCPLDownload:(bool)arg6 completionHandler:(id /* block */)arg7;

@end
