/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewActionSheetItemView : UIView {
    UIPreviewAction *_action;
    UIImageView *_imageView;
    UILabel *_label;
    BOOL _selected;
}

@property (nonatomic, copy) UIPreviewAction *action;
@property (nonatomic) UIImageView *imageView;
@property (nonatomic) UILabel *label;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (void)_contentSizeChanged:(id)arg1;
- (void)_updateConstraints;
- (void)_updateImageFromAction;
- (void)_updateLabelFont;
- (void)_updateTitleFromAction;
- (id)action;
- (void)dealloc;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 action:(id)arg2;
- (id)label;
- (BOOL)selected;
- (void)setAction:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;

@end
