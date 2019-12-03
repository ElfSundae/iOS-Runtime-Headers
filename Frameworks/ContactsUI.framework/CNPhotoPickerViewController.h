/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPhotoPickerViewController : UIViewController <AVTAvatarEditorViewControllerDelegate, CNAvatarEditingManagerDelegate, CNContactPhotoViewDelegate, CNPhotoPickerActionsViewControllerDelegate, CNPhotoPickerHeaderViewDelegate, CNPhotoPickerProviderGroupDelegate, CNPhotoPickerVariantListControllerDelegate, UIAdaptivePresentationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    CNPhotoPickerActionsViewController * _actionsViewController;
    bool  _allowRotation;
    NSString * _assignActionTitleOverride;
    UICollectionView * _collectionView;
    CNContactStyle * _contactStyle;
    CNPhotoPickerDataSource * _dataSource;
    <CNPhotoPickerViewControllerDelegate> * _delegate;
    CNPhotoPickerProviderItem * _duplicatingProviderItem;
    CNPhotoPickerProviderItem * _editingProviderItem;
    CNPhotoPickerHeaderView * _headerView;
    CNMutableContact * _pendingEditContact;
    CNAvatarEditingManager * _posePickerController;
}

@property (nonatomic, retain) CNPhotoPickerActionsViewController *actionsViewController;
@property (nonatomic) bool allowRotation;
@property (nonatomic, retain) NSString *assignActionTitleOverride;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (nonatomic, readonly) CNPhotoPickerDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPhotoPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNPhotoPickerProviderItem *duplicatingProviderItem;
@property (nonatomic, retain) CNPhotoPickerProviderItem *editingProviderItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNPhotoPickerHeaderView *headerView;
@property (readonly) bool isPresentingModalViewController;
@property (nonatomic, retain) CNMutableContact *pendingEditContact;
@property (nonatomic, retain) CNAvatarEditingManager *posePickerController;
@property (readonly) Class superclass;

+ (bool)canShowAvatarEditor;
+ (bool)canShowPhotoPickerForView:(id)arg1 withTraitCollection:(id)arg2;
+ (struct CGSize { double x1; double x2; })defaultContentSize;
+ (id)descriptorForRequiredKeys;
+ (double)itemsPerRowForWidth:(double)arg1;
+ (id)log;
+ (id)navigationControllerForPicker:(id)arg1;
+ (id)photoPickerForGameCenterWithContact:(id)arg1;

- (void).cxx_destruct;
- (id)actionsViewController;
- (bool)allowRotation;
- (id)assignActionTitleOverride;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (void)avatarPosePickerManager:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)buildCollectionView;
- (void)buildHeaderView;
- (void)cancel:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)confirmCancelAction;
- (id)contact;
- (id)contactImageForCurrentActiveItem;
- (id)contactStyle;
- (id)contactViewCache;
- (id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)currentImageDataAndCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (id)dataSource;
- (long long)defaultModalPresentationStyle;
- (id)delegate;
- (void)deleteExistingItem:(id)arg1;
- (void)deleteItemFromRecentsImageStore:(id)arg1;
- (void)done:(id)arg1;
- (id)duplicatingProviderItem;
- (id)editingProviderItem;
- (void)headerActionPressedAtIndexPath:(id)arg1;
- (id)headerView;
- (void)headerViewPhotoViewTapped;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithContact:(id)arg1 style:(id)arg2 configuration:(id)arg3;
- (id)initWithPhotosDataSource:(id)arg1 style:(id)arg2 allowRotation:(bool)arg3;
- (void)insertNewItem:(id)arg1 toGroupType:(long long)arg2 updateActive:(bool)arg3;
- (bool)isEditingOrDuplicatingItem;
- (bool)isModalInPresentation;
- (bool)isPresentingModalViewController;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)pendingEditContact;
- (bool)photoHasChanged;
- (void)photoPickerActionsViewController:(id)arg1 didPerformAction:(long long)arg2 withProviderItem:(id)arg3 atIndexPath:(id)arg4;
- (void)photoPickerActionsViewControllerDidFinish:(id)arg1;
- (id)photoPickerNavigationControllerForRootController:(id)arg1;
- (void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2;
- (void)photoPickerProviderGroupDidUpdate:(id)arg1;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (void)photoView:(id)arg1 didSaveImageDropToContact:(id)arg2;
- (void)photoViewDidUpdate:(id)arg1;
- (id)posePickerController;
- (void)presentActionsViewControllerForProviderItem:(id)arg1 atIndexPath:(id)arg2;
- (void)presentCameraImagePicker;
- (void)presentDismissConfirmation;
- (void)presentEditImagePickerForImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromViewController:(id)arg3;
- (void)presentImagePicker:(id)arg1 withStyle:(long long)arg2 fromViewController:(id)arg3;
- (void)presentLibraryImagePicker;
- (void)presentPhotoPickerVariantListFor:(id)arg1 FromViewController:(id)arg2;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (id)providerItemFromPhotoPickerInfo:(id)arg1;
- (void)saveItemToRecentsImageStore:(id)arg1;
- (void)selectItem:(id)arg1 presentFromViewControllerIfNeeded:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)setActionsViewController:(id)arg1;
- (void)setAllowRotation:(bool)arg1;
- (void)setAssignActionTitleOverride:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuplicatingProviderItem:(id)arg1;
- (void)setEditingProviderItem:(id)arg1;
- (void)setPendingEditContact:(id)arg1;
- (void)setPosePickerController:(id)arg1;
- (void)showAvatarCropAndScaleForItem:(id)arg1 fromViewController:(id)arg2;
- (void)showAvatarEditorForCreation;
- (void)showAvatarPosePickerFromItem:(id)arg1;
- (void)updateActiveIndexPath:(id)arg1;
- (void)updateActiveIndexPath:(id)arg1 reload:(bool)arg2;
- (void)updateContactWithProviderItem:(id)arg1;
- (id)viewControllerForPhotoView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
