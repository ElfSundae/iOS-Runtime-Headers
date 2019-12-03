/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeControllerWK2 : MFMailComposeController <MFComposeStyleSelectorViewControllerDelegate, UIPresentationControllerDelegatePrivate> {
    NSDictionary * _fontAttributes;
    id /* block */  _releaseActiveFocusedState;
    MFComposeStyleSelectorViewController * _styleSelector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *fontAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFComposeStyleSelectorViewController *styleSelector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allocateComposeView;
- (void)_beginBlockingBodyScroll;
- (unsigned long long)_bodyFieldTextContentLength;
- (id)_copyMessageDataForActivityHandoff;
- (id)_copyMessagePlainTextForDonation;
- (id)_copyMessagePlainTextForDonationRemoveQuotes:(bool)arg1;
- (id)_createSignatureController;
- (void)_didDismissDocumentPicker;
- (void)_endBlockingBodyScroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_optimalRectForPresentingPopoverInBodyField;
- (void)_placeCaretAtStartOfBodyField;
- (void)_preparePhotoPicker;
- (void)_retainFocusOfBodyFieldIfRequired:(id)arg1;
- (id)_selectedAttachmentURLs;
- (void)_setBodyFieldAutocorrectionContext:(id)arg1;
- (void)_willPresentDocumentPicker;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalContentInsetForBodyField:(id)arg1;
- (void)composeBodyFieldDidChangeFontAttributes:(id)arg1;
- (void)composeBodyFieldDidResignFirstResponder;
- (void)composeStyleSelector:(id)arg1 didChangeFont:(id)arg2;
- (void)composeStyleSelector:(id)arg1 didChangeFontSize:(double)arg2;
- (void)composeStyleSelector:(id)arg1 didChangeTextColor:(id)arg2;
- (void)composeStyleSelector:(id)arg1 didSelectStyle:(id)arg2;
- (void)composeStyleSelectorDidCancel:(id)arg1;
- (void)composeStyleSelectorDidDismissFontPicker:(id)arg1;
- (void)composeStyleSelectorDidPresentColorPicker:(id)arg1;
- (id)composeStyleSelectorPresentationContext:(id)arg1;
- (id)fontAttributes;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setFontAttributes:(id)arg1;
- (void)setIsModal:(bool)arg1;
- (void)setStyleSelector:(id)arg1;
- (void)showMissingAttachmentDataAlert;
- (void)showStyleSelector:(id)arg1;
- (id)styleSelector;

@end