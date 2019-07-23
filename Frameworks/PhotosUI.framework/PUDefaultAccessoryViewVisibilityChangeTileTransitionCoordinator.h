/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDefaultAccessoryViewVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {
    BOOL  _shouldAnimateAccessory;
    BOOL  _shouldAnimateContent;
    BOOL  _shouldSlideAccessory;
    PUBrowsingViewModel * _viewModel;
}

@property (nonatomic) BOOL shouldAnimateAccessory;
@property (nonatomic) BOOL shouldAnimateContent;
@property (nonatomic) BOOL shouldSlideAccessory;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(int)arg3;
- (void)setShouldAnimateAccessory:(BOOL)arg1;
- (void)setShouldAnimateContent:(BOOL)arg1;
- (void)setShouldSlideAccessory:(BOOL)arg1;
- (void)setViewModel:(id)arg1;
- (BOOL)shouldAnimateAccessory;
- (BOOL)shouldAnimateContent;
- (BOOL)shouldSlideAccessory;
- (id)viewModel;

@end
