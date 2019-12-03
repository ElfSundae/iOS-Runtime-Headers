/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTStickerPagingController : NSObject <AVTAvatarActionsViewControllerDelegate, AVTAvatarPicker, AVTNotifyingContainerViewDelegate, AVTObjectViewController, AVTStickerSheetControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    bool  _allowsPeel;
    <AVTResourceCache> * _cache;
    UICollectionView * _collectionView;
    AVTAvatarRecordDataSource * _dataSource;
    <AVTStickerPagingControllerDelegate> * _delegate;
    <AVTStickerDisclosureValidationDelegate> * _disclosureValidationDelegate;
    NSObject<OS_dispatch_queue> * _encodingQueue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endDraggingTargetContentOffset;
    AVTUIEnvironment * _environment;
    _AVTAvatarRecordImageProvider * _imageProvider;
    NSArray * _memojiStickerConfigurations;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _pageContentInsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pageContentOffset;
    NSMutableDictionary * _pageForRecords;
    NSIndexPath * _pageIndexBeforeSizeChange;
    NSObject<OS_dispatch_queue> * _renderingQueue;
    AVTUIStickerGeneratorPool * _stickerGeneratorPool;
    <AVTTaskScheduler> * _taskScheduler;
    UIView * _view;
    <AVTAvatarPickerDelegate> * avatarPickerDelegate;
    <AVTPresenterDelegate> * presenterDelegate;
}

@property (nonatomic, readonly) bool allowsPeel;
@property (nonatomic) <AVTAvatarPickerDelegate> *avatarPickerDelegate;
@property (nonatomic, readonly) <AVTResourceCache> *cache;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) AVTAvatarRecordDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTStickerPagingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *encodingQueue;
@property (nonatomic) struct CGPoint { double x1; double x2; } endDraggingTargetContentOffset;
@property (nonatomic, retain) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _AVTAvatarRecordImageProvider *imageProvider;
@property (nonatomic, retain) NSArray *memojiStickerConfigurations;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } pageContentInsets;
@property (nonatomic) struct CGPoint { double x1; double x2; } pageContentOffset;
@property (nonatomic, retain) NSMutableDictionary *pageForRecords;
@property (nonatomic, retain) NSIndexPath *pageIndexBeforeSizeChange;
@property (nonatomic) <AVTPresenterDelegate> *presenterDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic, retain) AVTUIStickerGeneratorPool *stickerGeneratorPool;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <AVTTaskScheduler> *taskScheduler;
@property (nonatomic, retain) UIView *view;

+ (id)stickerCacheWithEnvironment:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsPeel;
- (id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)avatarActionsViewControllerDidFinish:(id)arg1;
- (id)avatarPickerDelegate;
- (id)cache;
- (id)centeredPageWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGPoint { double x1; double x2; })collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionViewForPPT;
- (id)dataSource;
- (id)delegate;
- (void)deletePageForRecord:(id)arg1 atIndex:(long long)arg2;
- (id)disclosureValidationDelegate;
- (id)encodingQueue;
- (struct CGPoint { double x1; double x2; })endDraggingTargetContentOffset;
- (id)environment;
- (id)firstPageItemView;
- (id)imageProvider;
- (id)initWithRecordDataSource:(id)arg1 recordImageProvider:(id)arg2 environment:(id)arg3 allowsPeel:(bool)arg4;
- (void)insertPageForRecord:(id)arg1 atIndex:(long long)arg2;
- (void)loadView;
- (id)memojiStickerConfigurations;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pageContentInsets;
- (struct CGPoint { double x1; double x2; })pageContentOffset;
- (id)pageForRecords;
- (id)pageIndexBeforeSizeChange;
- (long long)pageIndexForAvatarRecordIdentifier:(id)arg1;
- (long long)pageIndexForAvatarRecordIdentifierForPPT:(id)arg1;
- (id)presenterDelegate;
- (void)reloadData;
- (void)reloadPageForRecord:(id)arg1 atIndex:(long long)arg2;
- (id)reloadSheetControllerForRecord:(id)arg1;
- (id)renderingQueue;
- (void)scrollToAvatarWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)scrollToPageAtIndex:(long long)arg1 animated:(bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)setAvatarPickerDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureValidationDelegate:(id)arg1;
- (void)setEncodingQueue:(id)arg1;
- (void)setEndDraggingTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEnvironment:(id)arg1;
- (void)setMemojiStickerConfigurations:(id)arg1;
- (void)setPageContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPageContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPageForRecords:(id)arg1;
- (void)setPageIndexBeforeSizeChange:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setRenderingQueue:(id)arg1;
- (void)setStickerGeneratorPool:(id)arg1;
- (void)setView:(id)arg1;
- (id)sheetControllerAtIndex:(long long)arg1;
- (id)sheetControllerForRecord:(id)arg1;
- (id)stickerGeneratorPool;
- (void)stickerSheetController:(id)arg1 didFinishRenderingStickersForRecord:(id)arg2;
- (void)stickerSheetController:(id)arg1 didInteractWithStickerAtIndex:(long long)arg2 byPeeling:(bool)arg3;
- (void)stickerSheetController:(id)arg1 didScrollToContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)stickerSheetController:(id)arg1 scrollView:(id)arg2 willEndDraggingWithTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)taskScheduler;
- (void)updateForEndingScrollWithTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)view;
- (void)willEndDisplaying;
- (void)willStartDisplaying;
- (void)wrapAndPresentViewController:(id)arg1 animated:(bool)arg2;

@end