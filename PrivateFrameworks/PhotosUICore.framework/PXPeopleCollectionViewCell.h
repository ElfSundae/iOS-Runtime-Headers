/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleCollectionViewCell : UICollectionViewCell <PXUIAssetBadgeViewDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _avatarSize;
    UIImageView * _avatarView;
    bool  _blurApplied;
    UIVisualEffectView * _blurView;
    UIView * _checkmarkView;
    <PXPeopleCollectionViewCellDelegate> * _delegate;
    bool  _favorite;
    UIButton * _favoriteBadge;
    UIView * _gradientView;
    UIView * _highlightOverlayView;
    bool  _isReordering;
    UIImageView * _mirrorView;
    NSString * _name;
    UILabel * _nameLabel;
    bool  _ppt_fullImageLoaded;
    PXRoundedCornerOverlayView * _roundCornerOverlay;
    unsigned long long  _selectionStyle;
    UIView * _selectionView;
    double  _textAlpha;
    bool  _titleUsesAllCaps;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unitRect;
}

@property (nonatomic) struct CGSize { double x1; double x2; } avatarSize;
@property (nonatomic, readonly) UIImageView *avatarView;
@property (nonatomic) bool blurApplied;
@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (nonatomic, retain) UIView *checkmarkView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPeopleCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (nonatomic, retain) UIButton *favoriteBadge;
@property (nonatomic, retain) UIView *gradientView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightOverlayView;
@property (nonatomic, retain) UIImage *image;
@property (setter=setReordering:, nonatomic) bool isReordering;
@property (nonatomic, retain) UIImageView *mirrorView;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic) bool ppt_fullImageLoaded;
@property (nonatomic, retain) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (nonatomic) unsigned long long selectionStyle;
@property (nonatomic, retain) UIView *selectionView;
@property (readonly) Class superclass;
@property (nonatomic) double textAlpha;
@property (nonatomic) bool titleUsesAllCaps;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_avatarSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_favoriteBadgePressed:(id)arg1;
- (long long)_preferredSizeClass;
- (id)_stretchableGradientImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 gradientColor:(id)arg3;
- (void)_updateSelection;
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;
- (void)_updateType;
- (struct CGSize { double x1; double x2; })avatarSize;
- (id)avatarView;
- (bool)blurApplied;
- (id)blurView;
- (id)checkmarkView;
- (id)delegate;
- (id)favoriteBadge;
- (id)gradientView;
- (id)highlightOverlayView;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFavorite;
- (bool)isReordering;
- (void)layoutSubviews;
- (id)mirrorView;
- (id)name;
- (id)nameLabel;
- (bool)ppt_fullImageLoaded;
- (void)prepareForReuse;
- (id)roundCornerOverlay;
- (unsigned long long)selectionStyle;
- (id)selectionView;
- (void)setAvatarSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBlurApplied:(bool)arg1;
- (void)setBlurView:(id)arg1;
- (void)setCheckmarkView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setFavoriteBadge:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setHighlightOverlayView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setMirrorView:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPpt_fullImageLoaded:(bool)arg1;
- (void)setReordering:(bool)arg1;
- (void)setRoundCornerOverlay:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionStyle:(unsigned long long)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setTextAlpha:(double)arg1;
- (void)setTitleUsesAllCaps:(bool)arg1;
- (double)textAlpha;
- (bool)titleUsesAllCaps;
- (void)traitCollectionDidChange:(id)arg1;

@end
