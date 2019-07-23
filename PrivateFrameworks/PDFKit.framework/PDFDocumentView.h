/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentView : UIView <PDFDocumentPageChangeDelegate> {
    PDFDocumentViewPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned int)arg3;
- (id)_createPageView:(id)arg1;
- (void)_shiftPagesAtIndex:(unsigned int)arg1 downwards:(bool)arg2;
- (void)_updateVisibilityDelegateForVisiblePageView:(id)arg1 atIndex:(unsigned int)arg2;
- (void)changedBoundsForBoxNotification:(id)arg1;
- (void)dealloc;
- (void)didInsertPage:(id)arg1 atIndex:(unsigned int)arg2;
- (void)didRemovePage:(id)arg1 atIndex:(unsigned int)arg2;
- (void)didSwapPage:(id)arg1 atIndex:(unsigned int)arg2 forPage:(id)arg3 atIndex:(unsigned int)arg4;
- (id)document;
- (struct CGSize { float x1; float x2; })documentViewSize;
- (void)forceUpdateWithDuration:(double)arg1;
- (void)forceWebKitMainThread:(bool)arg1;
- (id)getPDFView;
- (id)init;
- (float)lastLayoutDuration;
- (void)layoutDocumentView;
- (void)magnificationDidChange;
- (void)magnificationWillChange;
- (id)pageViewForPageAtIndex:(unsigned int)arg1;
- (id)pageViews;
- (void)previewRotateShiftPages:(float)arg1;
- (void)setDisplayBox:(int)arg1;
- (void)setDocument:(id)arg1;
- (void)setEnablePageShadows:(bool)arg1;
- (void)setPageViewVisibilityDelegate:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setShouldAntiAlias:(bool)arg1;
- (void)setWillForceUpdateWithDuration;
- (void)updateVisibility;
- (void)updateVisibilityWithWaitDuration:(double)arg1;

@end
