/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUNamedWallpaperCollectionViewController : UICollectionViewController {
    int  _collectionType;
    <HUNamedWallpaperCollectionViewControllerDelegate> * _delegate;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    NSMutableDictionary * _wallpaperImageCache;
    NSArray * _wallpapers;
}

@property (nonatomic, readonly) int collectionType;
@property (nonatomic, readonly) <HUNamedWallpaperCollectionViewControllerDelegate> *delegate;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, retain) NSMutableDictionary *wallpaperImageCache;
@property (nonatomic, retain) NSArray *wallpapers;

- (void).cxx_destruct;
- (int)collectionType;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)delegate;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)initWithCollectionType:(int)arg1 horizontalInset:(float)arg2 delegate:(id)arg3;
- (void)setWallpaperImageCache:(id)arg1;
- (void)setWallpapers:(id)arg1;
- (void)viewDidLoad;
- (id)wallpaperImageCache;
- (id)wallpapers;

@end
