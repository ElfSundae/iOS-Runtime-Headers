/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver> {
    _UIBackdropView *_backdropView;
    UIImageView *_titleMaskImageView;
}

@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) UIImageView *titleMaskImageView;

+ (id)autoLayoutCommonWallpaperButton;
+ (id)autoLayoutCommonWallpaperButtonWithStyle:(int)arg1;

- (void)_setupBackdropView;
- (id)backdropView;
- (void)backdropViewDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)setBackdropView:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTitleMaskImageView:(id)arg1;
- (id)titleMaskImageView;

@end
