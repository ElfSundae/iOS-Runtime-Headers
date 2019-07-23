/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying> {
    BOOL  __assetHasAdjustments;
    unsigned short  __assetVisibility;
    unsigned short  __editingVisibility;
    <PUEditableAsset> * _asset;
    BOOL  _ignoresUpdates;
    PLPhotoEditModel * _photoEditModel;
    BOOL  _videoEnabled;
}

@property (nonatomic, readonly) BOOL _assetHasAdjustments;
@property (nonatomic, readonly) unsigned short _assetVisibility;
@property (setter=_setEditingVisibility:, nonatomic) unsigned short _editingVisibility;
@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (nonatomic, readonly) PUPhotoEditIrisModelChange *currentChange;
@property (nonatomic, readonly) BOOL hasUnsavedChanges;
@property (nonatomic) BOOL ignoresUpdates;
@property (setter=_setPhotoEditModel:, nonatomic, retain) PLPhotoEditModel *photoEditModel;
@property (getter=isVideoEnabled, nonatomic) BOOL videoEnabled;

+ (void)updateChangeRequestForRevert:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_assetHasAdjustments;
- (unsigned short)_assetVisibility;
- (unsigned short)_editingVisibility;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_setEditingVisibility:(unsigned short)arg1;
- (void)_setHidden:(BOOL)arg1 explicit:(BOOL)arg2 supportable:(BOOL)arg3;
- (void)_setPhotoEditModel:(id)arg1;
- (void)_updateAutoDisableStateIfNeeded;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentChange;
- (void)dealloc;
- (BOOL)hasUnsavedChanges;
- (BOOL)ignoresUpdates;
- (id)init;
- (id)initWithAsset:(id)arg1 editModel:(id)arg2;
- (id)initWithIrisVisibilityState:(unsigned short)arg1 hasAdjustments:(BOOL)arg2 editModel:(id)arg3;
- (BOOL)isVideoEnabled;
- (id)newViewModelChange;
- (void)notifyCannotSupportVideoEdits;
- (id)photoEditModel;
- (BOOL)reenablingLivePhotoShouldRemoveEdits;
- (void)setIgnoresUpdates:(BOOL)arg1;
- (void)setVideoEnabled:(BOOL)arg1;
- (void)updateChangeRequestForSave:(id)arg1;

@end
