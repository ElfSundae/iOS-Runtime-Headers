/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUStackView : UIView {
    UIView * __backgroundView;
    NSPointerArray * __imageSizes;
    int  __numberOfViews;
    NSArray * __photoDecorationVariants;
    NSArray * __photoViews;
    UIImageView * _combinedPhotoDecorationImageView;
    BOOL  _combinesPhotoDecorations;
    UIColor * _cornersBackgroundColor;
    BOOL  _empty;
    UIImage * _emptyPlaceholderImage;
    UIColor * _gridBackgroundColor;
    float  _gridItemSpacing;
    float  _gridMargin;
    BOOL  _hasRoundedCorners;
    BOOL  _highlighted;
    BOOL  _imageHidden;
    BOOL  _needsDynamicLayout;
    int  _numberOfVisibleItems;
    PUPhotoDecoration * _photoDecoration;
    float  _posterSquareCornerRadius;
    float  _posterSubitemCornerRadius;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    }  _stackOffset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _stackPerspectiveFactor;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _stackPerspectiveInsets;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    }  _stackPerspectiveOffset;
    struct CGSize { 
        float width; 
        float height; 
    }  _stackSize;
    unsigned int  _style;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _transforms;
}

@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (nonatomic, readonly) NSPointerArray *_imageSizes;
@property (nonatomic, readonly) int _numberOfViews;
@property (setter=_setPhotoDecorationVariants:, nonatomic, copy) NSArray *_photoDecorationVariants;
@property (nonatomic, readonly) NSArray *_photoViews;
@property (nonatomic) BOOL combinesPhotoDecorations;
@property (nonatomic, retain) UIColor *cornersBackgroundColor;
@property (getter=isEmpty, nonatomic) BOOL empty;
@property (nonatomic, retain) UIImage *emptyPlaceholderImage;
@property (nonatomic, retain) UIColor *gridBackgroundColor;
@property (nonatomic) float gridItemSpacing;
@property (nonatomic) float gridMargin;
@property (nonatomic) BOOL hasRoundedCorners;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) int numberOfVisibleItems;
@property (nonatomic, retain) PUPhotoDecoration *photoDecoration;
@property (nonatomic) float posterSquareCornerRadius;
@property (nonatomic) float posterSubitemCornerRadius;
@property (nonatomic, readonly) NSArray *stackItemViews;
@property (nonatomic) struct UIOffset { float x1; float x2; } stackOffset;
@property (nonatomic) struct CGPoint { float x1; float x2; } stackPerspectiveFactor;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } stackPerspectiveInsets;
@property (nonatomic) struct UIOffset { float x1; float x2; } stackPerspectiveOffset;
@property (nonatomic) struct CGSize { float x1; float x2; } stackSize;
@property (nonatomic) unsigned int style;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } topLeftCornerOfFrontStackItem;

+ (int)maximumNumberOfVisibleImagesForStyle:(unsigned int)arg1;
+ (int)maximumNumberOfVisibleItemsForStyle:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_combinedPhotoDecorationsImage;
- (void)_getCenter:(struct CGPoint { float x1; float x2; }*)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPhotoViewAtIndex:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_getStackFrame;
- (id)_imageSizes;
- (int)_numberOfViews;
- (id)_photoDecorationVariants;
- (id)_photoViews;
- (void)_rebuildDecorationVariants;
- (void)_setBackgroundView:(id)arg1;
- (void)_setNeedsDynamicLayout;
- (void)_setPhotoDecorationVariants:(id)arg1;
- (void)_updateBackgroundView;
- (void)_updateDynamicLayout;
- (void)_updateHighlight;
- (void)_updateNumberOfViews;
- (void)_updatePhotoViews;
- (void)_updateSubviewsOrdering;
- (BOOL)combinesPhotoDecorations;
- (id)cornersBackgroundColor;
- (id)emptyPlaceholderImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfFrontStackItemRelativeToView:(id)arg1;
- (id)gridBackgroundColor;
- (float)gridItemSpacing;
- (float)gridMargin;
- (BOOL)hasRoundedCorners;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEmpty;
- (BOOL)isHighlighted;
- (BOOL)isImageHiddenForItemAtIndex:(int)arg1;
- (void)layoutSubviews;
- (id)newLayoutAttributesForItemAtIndex:(int)arg1 relativeToView:(id)arg2;
- (id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg1 maxCount:(int)arg2;
- (int)numberOfVisibleItems;
- (id)photoDecoration;
- (float)posterSquareCornerRadius;
- (float)posterSubitemCornerRadius;
- (void)prepareForReuse;
- (void)setAlpha:(float)arg1 forItemAtIndex:(int)arg2;
- (void)setBadgeTypes:(unsigned int)arg1 forItemAtIndex:(int)arg2;
- (void)setBadgeTypes:(unsigned int)arg1 videoDuration:(double)arg2 forItemAtIndex:(int)arg3;
- (void)setBadgeTypes:(unsigned int)arg1 videoDuration:(double)arg2 style:(int)arg3 forItemAtIndex:(int)arg4;
- (void)setCollectionTileLayoutTemplate:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setCombinesPhotoDecorations:(BOOL)arg1;
- (void)setCornersBackgroundColor:(id)arg1;
- (void)setEmpty:(BOOL)arg1;
- (void)setEmptyPlaceholderImage:(id)arg1;
- (void)setFeatureSpec:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setGridBackgroundColor:(id)arg1;
- (void)setGridItemSpacing:(float)arg1;
- (void)setGridMargin:(float)arg1;
- (void)setHasRoundedCorners:(BOOL)arg1;
- (void)setHasRoundedCorners:(BOOL)arg1 withCornersBackgroundColor:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setImageHidden:(BOOL)arg1 forItemAtIndex:(int)arg2;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1 forItemAtIndex:(int)arg2;
- (void)setNumberOfVisibleItems:(int)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setPosterSquareCornerRadius:(float)arg1;
- (void)setPosterSubitemCornerRadius:(float)arg1;
- (void)setStackOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setStackPerspectiveFactor:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStackPerspectiveInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setStackPerspectiveOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setStackSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setSubtitle:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setTitle:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setTitleFontName:(id)arg1 forItemAtIndex:(int)arg2;
- (id)stackItemViews;
- (struct UIOffset { float x1; float x2; })stackOffset;
- (struct CGPoint { float x1; float x2; })stackPerspectiveFactor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })stackPerspectiveInsets;
- (struct UIOffset { float x1; float x2; })stackPerspectiveOffset;
- (struct CGSize { float x1; float x2; })stackSize;
- (unsigned int)style;
- (struct CGPoint { float x1; float x2; })topLeftCornerOfFrontStackItem;
- (BOOL)wouldCoverAllItemsInStackView:(id)arg1;

@end
