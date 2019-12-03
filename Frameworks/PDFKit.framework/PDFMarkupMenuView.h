/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFMarkupMenuView : UIView {
    PDFMarkupMenuViewPrivate * _private;
}

- (void).cxx_destruct;
- (int)_colorMenuIconForMarkupStyle:(unsigned long long)arg1;
- (int)_colorPaletteMenuIconForMarkupStyle:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dividerLineRectForControl:(long long)arg1;
- (void)_handleDeleteButtonTap;
- (id)_menuControls;
- (id)_newMaskView:(long long)arg1;
- (int)_noteMenuIconForMarkupStyle:(unsigned long long)arg1;
- (void)_setBlurDisabled:(bool)arg1;
- (void)_setControls:(id)arg1;
- (void)_setupViews;
- (bool)_shouldShowCompactMenu;
- (struct CGSize { double x1; double x2; })_sizeThatFitsControls:(id)arg1;
- (void)_updateAppearance;
- (void)handleAddNoteButton:(id)arg1;
- (void)handleDeleteButtonTap:(id)arg1;
- (void)handleRightArrowButton:(id)arg1;
- (void)hide;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 view:(id)arg2 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setDelegate:(id)arg1;
- (void)setMarkupNoteStyle:(unsigned long long)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1;
- (void)showColorControlsMenu:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)useColorOf:(id)arg1;

@end
