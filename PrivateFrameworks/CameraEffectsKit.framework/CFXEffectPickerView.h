/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface CFXEffectPickerView : UIView <JTEffectPreviewManagerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    bool  _continuousPreviewEnabled;
    <CFXEffectPickerViewDataSource> * _dataSource;
    <CFXEffectPickerViewDelegate> * _delegate;
    UIImage * _previewBackgroundImage;
    JTEffectPreviewManager * _previewManager;
    bool  _previewingIsWaitingForConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    bool  _useCameraForContinuousPreview;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (getter=isContinuousPreviewEnabled, nonatomic) bool continuousPreviewEnabled;
@property (nonatomic) <CFXEffectPickerViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXEffectPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *previewBackgroundImage;
@property (nonatomic, retain) JTEffectPreviewManager *previewManager;
@property (nonatomic) bool previewingIsWaitingForConfiguration;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;
@property (getter=isUsingCameraForContinuousPreview, nonatomic) bool useCameraForContinuousPreview;

- (void).cxx_destruct;
- (void)applyEffectAtCellIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })cellSize;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didResize:(struct CGSize { double x1; double x2; })arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewLayout;
- (void)configureCell:(id)arg1;
- (id)contentView;
- (id)dataSource;
- (id)delegate;
- (void)didResizeCollectionViewToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didScrollCollectionView;
- (void)didSelectItemAtCellIndex:(unsigned long long)arg1;
- (void)effectDidLoadForCell:(id)arg1 effect:(id)arg2;
- (unsigned long long)effectIndexForCellIndex:(unsigned long long)arg1;
- (id)effectPickerCellNibName;
- (id)effectPickerCellReuseIdentifier;
- (id)effectPickerNibName;
- (void)effectPreviewManager:(id)arg1 didUpdatePreviewsFor:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContinuousPreviewEnabled;
- (bool)isUsingCameraForContinuousPreview;
- (unsigned long long)numberOfCollectionViewItems;
- (id)previewBackgroundImage;
- (id)previewManager;
- (bool)previewingIsWaitingForConfiguration;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContinuousPreviewEnabled:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviewBackgroundImage:(id)arg1;
- (void)setPreviewManager:(id)arg1;
- (void)setPreviewingIsWaitingForConfiguration:(bool)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseCameraForContinuousPreview:(bool)arg1;
- (void)sharedInit;
- (void)startPreviewing;
- (void)stopPreviewing;
- (void)subviewsDidLoad;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (void)updatePreviewEffects;
- (void)updatePreviewEffectsWhenReloadComplete;

@end
