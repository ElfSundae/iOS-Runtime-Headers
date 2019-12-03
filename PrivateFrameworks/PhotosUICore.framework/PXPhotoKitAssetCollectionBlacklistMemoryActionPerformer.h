/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetCollectionBlacklistMemoryActionPerformer : PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer

+ (bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)createAlertActionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;
+ (id)systemImageNameForAssetCollection:(id)arg1 person:(id)arg2;

- (bool)_didUserConfirmDeleteOfMemory;
- (void)confirmDeleteMemoryUserAction:(id)arg1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
