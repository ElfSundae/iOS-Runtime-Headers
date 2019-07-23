/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingOptionView : UICollectionReusableView {
    SEL  _action;
    id  _target;
    PLPhotoTileBadgeView * _toggleGlyphButton;
}

@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (getter=isSelected, nonatomic) BOOL selected;

- (void).cxx_destruct;
- (void)_handlePrimaryAction:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
