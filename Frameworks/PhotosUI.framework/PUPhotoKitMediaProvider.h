/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitMediaProvider : PUMediaProvider

- (void)cancelImageRequest:(int)arg1;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { float x1; float x2; })arg2 contentMode:(int)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { float x1; float x2; })arg2 contentMode:(int)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end
