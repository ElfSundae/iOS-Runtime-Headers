/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPPassphraseEntryPane : DevicePINPane {
    CDPPaneHeaderView * _headerView;
    float  _keyboardOffset;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } availableHeaderRect;

- (void).cxx_destruct;
- (void)_keyboardLayoutChanged;
- (void)_layoutHeaderRect;
- (void)_layoutPinView;
- (void)_layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })availableHeaderRect;
- (void)dealloc;
- (void)didFinishResizingHeaderView;
- (void)didFinishResizingPinView;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)keyboardHeightOffset;
- (void)layoutSubviews;

@end
