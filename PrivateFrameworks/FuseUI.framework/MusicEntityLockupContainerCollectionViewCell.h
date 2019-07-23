/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityLockupContainerCollectionViewCell : UICollectionViewCell <MusicEntityContentDescriptorViewConfiguring, MusicEntityHorizontalLockupViewDelegate, MusicEntityVerticalLockupViewDelegate> {
    UITraitCollection * _cachedTraitCollection;
    BOOL  _entityDisabled;
    UIColor * _hairlineColor;
    UIView * _hairlineView;
    UIImageView * _highlightBackgroundView;
    BOOL  _highlightBackgroundViewVisible;
    unsigned int  _highlightBackgroundVisibilityTransactionCount;
    MusicEntityVerticalLockupView * _lockupView;
    BOOL  _showsHairline;
    float  _textLateralEdgePadding;
}

@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (nonatomic, copy) UIColor *hairlineColor;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL showsHairline;
@property (readonly) Class superclass;

+ (float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (void)_layoutHairlineView;
- (id)_parentCollectionView;
- (void)_reloadHighlightImageViewAnimated:(BOOL)arg1;
- (id)contentDescriptor;
- (void)dealloc;
- (id)entityValueProvider;
- (id)hairlineColor;
- (void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned int)arg2;
- (void)horizontalLockupViewDidLayoutSubviews:(id)arg1;
- (void)horizontalLockupViewDidSelectAddButton:(id)arg1 events:(unsigned int)arg2;
- (void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentDescriptor:(id)arg1;
- (void)setEntityDisabled:(BOOL)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)setHairlineColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowsHairline:(BOOL)arg1;
- (void)setTextLateralEdgePadding:(float)arg1;
- (BOOL)showsHairline;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForAsynchronousPropertyLoadCompleted;
- (void)verticalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned int)arg2;

@end
