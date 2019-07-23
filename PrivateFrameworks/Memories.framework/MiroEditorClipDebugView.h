/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroEditorClipDebugView : UIView <UICollectionViewDataSource> {
    MiroColorSelectionController * _colorSelectionController;
    UICollectionView * _colorSwatchCollectionView;
    UILabel * _label1;
    UILabel * _label2;
    UILabel * _label3;
}

@property (nonatomic, retain) MiroColorSelectionController *colorSelectionController;
@property (nonatomic) UICollectionView *colorSwatchCollectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UILabel *label1;
@property (nonatomic) UILabel *label2;
@property (nonatomic) UILabel *label3;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 withColor:(id)arg2 overrideBorderColor:(id)arg3 emphasize:(bool)arg4 label:(id)arg5;
- (id)_labelTextIfSafeAccentColor:(id)arg1;
- (id)_labelTextIfSafeDominantColor:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)colorSelectionController;
- (id)colorSwatchCollectionView;
- (id)label1;
- (id)label2;
- (id)label3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setColorSelectionController:(id)arg1;
- (void)setColorSwatchCollectionView:(id)arg1;
- (void)setLabel1:(id)arg1;
- (void)setLabel2:(id)arg1;
- (void)setLabel3:(id)arg1;
- (void)setupWithClip:(id)arg1 andBlueprint:(id)arg2;

@end
