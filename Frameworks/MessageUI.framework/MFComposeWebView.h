/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeWebView : WKWebView <MFComposeBodyField, MFComposeBodyFieldInternal, MFComposeBodyFieldObserver, WKNavigationDelegate, WKUIDelegatePrivate, _WKInputDelegate> {
    NSMutableDictionary * _attachmentCIDsByIdentifier;
    bool  _attachmentDataMissingAlertDisplayed;
    unsigned long long  _attachmentSequenceNumber;
    NSMutableDictionary * _attachmentsByUniqueIdentifier;
    _WKRemoteObjectInterface * _bodyFieldObserverInterface;
    <MFComposeBodyFieldController> * _bodyFieldProxy;
    <MFComposeWebViewDelegate> * _composeWebViewDelegate;
    NSString * _compositionContextID;
    bool  _dirty;
    unsigned long long  _dirtyChangeIgnoreCount;
    unsigned long long  _imageCount;
    <_WKFormInputSession> * _inputSession;
    bool  _isFinishing;
    UIBarButtonItemGroup * _leadingInputAssistantItemGroup;
    <MFMailComposeViewDelegate> * _mailComposeViewDelegate;
    NSArray * _originalAttachmentWrappers;
    bool  _originalAttachmentsWereRestored;
    NSArray * _selectedAttachmentIdentifiers;
    bool  _selectionContainsLink;
    bool  _shouldShowStandardButtons;
    <MFMailSignatureController> * _signatureControllerProxy;
    NSArray * _trailingInputAssistantItemGroups;
}

@property (setter=_setLeadingInputAssistantItemGroup:, nonatomic, retain) UIBarButtonItemGroup *_leadingInputAssistantItemGroup;
@property (nonatomic, readonly) UIBarButtonItemGroup *_mailComposeEditingLeadingInputAssistantGroup;
@property (nonatomic, readonly) NSArray *_mailComposeEditingTrailingInputAssistantGroups;
@property (setter=_setTrailingInputAssistantItemGroups:, nonatomic, retain) NSArray *_trailingInputAssistantItemGroups;
@property (nonatomic, readonly) bool allowsAttachmentElements;
@property (nonatomic) <MFComposeWebViewDelegate> *composeWebViewDelegate;
@property (nonatomic) NSString *compositionContextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirty, nonatomic) bool dirty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <_WKFormInputSession> *inputSession;
@property (nonatomic) <MFMailComposeViewDelegate> *mailComposeViewDelegate;
@property (nonatomic, readonly) <MFMailSignatureController> *signatureControllerProxy;
@property (readonly) Class superclass;

+ (id)_webViewConfiguration;

- (void).cxx_destruct;
- (void)_addAttachment:(id)arg1;
- (id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3;
- (id)_attachmentInfoByIdentifier;
- (id)_attachmentInfoByURL;
- (id)_bodyFieldProxy;
- (void)_changeQuoteLevelBy:(long long)arg1;
- (void)_close;
- (void)_decreaseQuoteLevel:(id)arg1;
- (void)_decreaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_didTapCameraButton:(id)arg1;
- (void)_didTapFormatAccessoryViewButton:(id)arg1;
- (void)_didTapImportDocumentButton:(id)arg1;
- (void)_didTapInsertDrawingOrMarkupButton:(id)arg1;
- (void)_didTapInsertPhotoButton:(id)arg1;
- (void)_didTapScanDocumentButton:(id)arg1;
- (void)_increaseQuoteLevel:(id)arg1;
- (void)_increaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_insertDocumentFromData:(id)arg1 isImage:(bool)arg2 contentID:(id)arg3;
- (id)_leadingInputAssistantItemGroup;
- (id)_mailComposeEditingLeadingInputAssistantGroup;
- (id)_mailComposeEditingTrailingInputAssistantGroups;
- (void)_menuDidHide:(id)arg1;
- (void)_pasteAsQuotationKeyCommandInvoked:(id)arg1;
- (void)_removeAttachment:(id)arg1;
- (void)_removeInlineAttachment:(id)arg1;
- (void)_replaceFilenamePlaceholderWithAttachment:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)_setLeadingInputAssistantItemGroup:(id)arg1;
- (void)_setTrailingInputAssistantItemGroups:(id)arg1;
- (bool)_shouldShowInsertPhotosButton;
- (bool)_shouldShowMarkupButton;
- (bool)_sourceIsManaged;
- (id)_trailingInputAssistantItemGroups;
- (long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2;
- (long long)_webView:(id)arg1 decidePolicyForFocusedElement:(id)arg2;
- (void)_webView:(id)arg1 didChangeFontAttributes:(id)arg2;
- (void)_webView:(id)arg1 didInsertAttachment:(id)arg2 withSource:(id)arg3;
- (void)_webView:(id)arg1 didInvalidateDataForAttachment:(id)arg2;
- (void)_webView:(id)arg1 didRemoveAttachment:(id)arg2;
- (void)_webView:(id)arg1 willStartInputSession:(id)arg2;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(bool)arg1;
- (bool)allowsAttachmentElements;
- (void)appendMarkupString:(id)arg1 quote:(bool)arg2;
- (void)appendOrReplace:(id)arg1 withMarkupString:(id)arg2 quote:(bool)arg3;
- (void)attachmentTapped:(id)arg1;
- (bool)becomeFirstResponder;
- (void)beginPreventingLayout;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)changeQuoteLevel:(long long)arg1;
- (void)composeBodyFieldDidChange;
- (void)composeBodyFieldDidThrowException:(id)arg1;
- (void)composeBodyFieldIsDirtyChanged:(bool)arg1;
- (void)composeBodyFieldSelectionContainsLinkStateDidChange:(bool)arg1;
- (id)composeWebViewDelegate;
- (id)compositionContextID;
- (void)compositionDidFailToFinish;
- (void)compositionWillFinish;
- (id)containsRichText;
- (id)contentIDsForMediaAttachments;
- (void)endPreventingLayout;
- (void)getHTMLStringsAttachmentsAndPlainTextAlternative:(id /* block */)arg1;
- (void)getHTMLStringsAttachmentsAndPlainTextAlternativeRemovingSignature:(bool)arg1 completion:(id /* block */)arg2;
- (void)getHTMLStringsAttachmentsAndPlainTextAlternativeRemovingSignature:(bool)arg1 removeQuotes:(bool)arg2 completion:(id /* block */)arg3;
- (id)htmlString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputSession;
- (void)insertDocumentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)insertDocumentWithURL:(id)arg1 isDrawingFile:(bool)arg2;
- (void)insertPhotoOrVideoWithAssetIdentifier:(id)arg1 infoDictionary:(id)arg2;
- (void)insertScannedDocumentWithData:(id)arg1;
- (bool)isDirty;
- (id)keyCommands;
- (void)layoutWithMinimumSize;
- (id)mailComposeViewDelegate;
- (void)markupSelectedAttachment;
- (id)nextAttachmentName;
- (void)placeCaretAtStartOfBodyField;
- (id)plainTextContent;
- (void)prependMarkupString:(id)arg1 quote:(bool)arg2;
- (void)prependPreamble:(id)arg1 quote:(bool)arg2;
- (void)prependString:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfElementWithID:(id)arg1;
- (void)releaseFocusAfterDismissing;
- (void)removeDropPlaceholders;
- (void)removeMediaWithAssetIdentifier:(id)arg1;
- (void)replaceAttachment:(id)arg1 withDocumentAtURL:(id)arg2 completion:(id /* block */)arg3;
- (void)replaceAttachment:(id)arg1 withDocumentData:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (void)replaceImagesIfNecessary;
- (bool)resignFirstResponder;
- (void)retainFocusAfterPresenting;
- (void)scaleImagesToScale:(unsigned long long)arg1;
- (void)selectedAttachmentIdentifiersDidChange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setComposeWebViewDelegate:(id)arg1;
- (void)setCompositionContextID:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setMailComposeViewDelegate:(id)arg1;
- (void)setMarkupString:(id)arg1;
- (void)setMarkupString:(id)arg1 quote:(bool)arg2;
- (void)setOriginalAttachmentInfo:(id)arg1;
- (void)setPrefersFirstLineSelection;
- (void)setReplacementFilenamesByContentID:(id)arg1;
- (void)showOriginalAttachments;
- (void)showQuoteLevelOptions;
- (id)signatureControllerProxy;
- (void)unscaleImages;
- (void)updateInputAssistantItem;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;

@end