/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIClientContext * _clientContext;
    UICollectionView * _collectionView;
    <SKUIItemGridDelegate> * _delegate;
    NSMutableIndexSet * _hiddenIconIndexSet;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageBoundingSize;
    SKUIItemCollectionController * _itemCollectionController;
    NSMutableArray * _items;
    NSOperationQueue * _operationQueue;
    UIImage * _placeholderImage;
    float  _rowHeight;
    NSMutableIndexSet * _selectedItemIndexSet;
    SKUIUber * _uber;
}

@property (nonatomic, retain) SKUIItemArtworkContext *artworkContext;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic) struct CGPoint { float x1; float x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIItemGridDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic) struct CGSize { float x1; float x2; } imageBoundingSize;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) float rowHeight;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKUIUber *uber;

- (void).cxx_destruct;
- (id)_collectionView;
- (id)_collectionViewLayout;
- (id)_itemCollectionController;
- (void)_reloadLayout;
- (id)artworkContext;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (void)dealloc;
- (id)delegate;
- (id)iconDataConsumer;
- (struct CGSize { float x1; float x2; })imageBoundingSize;
- (id)initWithRowHeight:(float)arg1;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint { float x1; float x2; })arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didPerformEditActionForCell:(id)arg2;
- (id)items;
- (void)loadNextPageOfArtworkWithReason:(int)arg1;
- (void)loadView;
- (id)operationQueue;
- (id)popIconImageViewForItemAtIndex:(int)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (float)rowHeight;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)setArtworkContext:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconDataConsumer:(id)arg1;
- (void)setImageBoundingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setItemCellClass:(Class)arg1;
- (void)setItems:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setUber:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)uber;
- (void)unhideIcons;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleItemRangeForItemCollectionController:(id)arg1;

@end
