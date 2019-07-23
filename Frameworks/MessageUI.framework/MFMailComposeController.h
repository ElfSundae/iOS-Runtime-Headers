/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeController : UIViewController <CNContactPickerDelegate, CNContactViewControllerDelegate, MFComposeActivityHandoffOperationDelegate, MFComposeHeaderViewDelegate, MFComposeImageSizeViewDelegate, MFComposeRecipientTextViewDelegate, MFComposeSubjectViewDelegate, MFComposeTypeFactoryDelegate, MFGroupDetailViewControllerDelegate, MFMailComposeToFieldDelegate, MFMailComposeViewDelegate, MFSecureMIMECompositionManagerDelegate, NSUserActivityDelegate, QLPreviewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    MFLANHandoffAgent * _LANHandoffAgent;
    MFMailAccountProxyGenerator * _accountProxyGenerator;
    NSString * _addressForMissingIdentity;
    MFAddressPickerReformatter * _addressPickerReformatter;
    bool  _allowRestrictedAccounts;
    UIView * _alternateTitleView;
    MFModernComposeRecipientAtom * _atomPresentingCard;
    bool  _attachmentToMarkupIsLoaded;
    id  _autorotationDelegate;
    unsigned int  _autosaveCount;
    NSString * _autosaveIdentifier;
    bool  _autosaveIsValid;
    MFLock * _autosaveLock;
    NSObject<OS_dispatch_queue> * _autosaveQueue;
    NSTimer * _autosaveTimer;
    NSDate * _autosavedDate;
    NSArray * _bccAddresses;
    UIView<MFComposeBodyField> * _bodyField;
    unsigned int  _bodyTextChanged;
    UIView * _bodyTextView;
    NSArray * _ccAddresses;
    MFComposeRecipientTextView * _ccField;
    NSDictionary * _certificatesByRecipient;
    UIBarButtonItem * _closeButtonItem;
    _MFMailCompositionContext * _compositionContext;
    CNContactViewController * _contactViewController;
    MFFuture * _content;
    bool  _contentVisible;
    bool  _delayToShowMarkupHasPassed;
    <MFMailComposeViewControllerDelegate> * _delegate;
    MFOutgoingMessageDelivery * _delivery;
    unsigned int  _didShowNotifyConfirmation;
    NSMutableSet * _drawingFileAttachments;
    long long  _drawingInsertCount;
    int  _encryptionIdentityStatus;
    bool  _encryptionOverrideSetting;
    bool  _encryptionStatusIsKnown;
    NSDictionary * _errorsByRecipient;
    UIKeyCommand * _escapeKeyCommand;
    unsigned int  _fromAddressPickerWasVisible;
    MFComposeActivityHandoffOperation * _handoffOperation;
    UIProgressView * _handoffProgressView;
    unsigned int  _hasViewAppeared;
    unsigned int  _hosted;
    NSObject<OS_dispatch_group> * _imageScalingGroup;
    MFComposeImageSizeView * _imageSizeField;
    unsigned long long  _initialAttachmentCount;
    NSString * _initialTitle;
    bool  _insertingDrawing;
    unsigned int  _isDirty;
    bool  _isModal;
    unsigned int  _isPopoverVisible;
    unsigned int  _isSuspended;
    NSDate * _lastActiveDate;
    MFMailboxUid * _lastDraftMailboxUid;
    NSString * _lastDraftMessageID;
    MFComposeRecipientTextView * _lastFocusedRecipientView;
    unsigned short  _lastTypedCharacter;
    MFMailMarkup * _markupExtension;
    unsigned long long  _markupReplyAttachmentLoadingProgress;
    UIAlertController * _notifyConfirmation;
    unsigned long long  _options;
    NSArray * _originalBccAddresses;
    NSString * _originalSendingEmailAddress;
    NSString * _originatingBundleID;
    CNContactPickerViewController * _peoplePicker;
    UIImagePickerController * _photosImagePickerController;
    UIAlertController * _popoverAlert;
    MFMailPopoverManager * _popoverManager;
    QLPreviewController * _previewController;
    MFAttachment * _previewingAttachment;
    NSString * _primaryAddressForForcedSendingAccount;
    MFMessageContentProgressLayer * _progressIndicatorView;
    MFRecentComposeRecipient * _recentRecipientPresentingCard;
    int  _recipientFieldWhileViewUnloaded;
    MFComposeRecipient * _recipientPresentingCard;
    id  _remoteViewControllerProxy;
    int  _resolution;
    unsigned int  _rotationSnapshotTaken;
    UIResponder * _savedFirstResponder;
    MFMutableMessageHeaders * _savedHeaders;
    MFSecureMIMECompositionManager * _secureCompositionManager;
    NSDictionary * _securityScopes;
    UIBarButtonItem * _sendButtonItem;
    UIKeyCommand * _sendKeyCommand;
    NSString * _sendingEmailAddress;
    long long  _sendingEmailAddressIndex;
    unsigned int  _shouldAutosaveWithSuspendInfo;
    unsigned int  _showingNotifyConfirmation;
    MFMailSignatureController * _signatureController;
    int  _signingIdentityStatus;
    int  _sourceAccountManagement;
    unsigned int  _stillLoading;
    NSString * _subject;
    MFComposeSubjectView * _subjectField;
    NSArray * _toAddresses;
    MFComposeRecipientTextView * _toField;
    bool  _useMailDrop;
    unsigned int  _useSuspended;
    unsigned int  _viewWasUnloaded;
}

@property (nonatomic, copy) NSString *addressForMissingIdentity;
@property (nonatomic, retain) MFModernComposeRecipientAtom *atomPresentingCard;
@property (nonatomic) bool attachmentToMarkupIsLoaded;
@property (nonatomic, retain) NSString *autosaveIdentifier;
@property (nonatomic) bool autosaveIsValid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *autosaveQueue;
@property (nonatomic, readonly) NSDate *autosavedDate;
@property (nonatomic, retain) NSDictionary *certificatesByRecipient;
@property (nonatomic, retain) CNContactViewController *contactViewController;
@property (nonatomic, readonly) long long countofDrawingAttachmentsLeftInCompose;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delayToShowMarkupHasPassed;
@property (nonatomic) id delegate;
@property (nonatomic, readonly) MFOutgoingMessageDelivery *delivery;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *drawingFileAttachments;
@property (nonatomic) long long drawingInsertCount;
@property (nonatomic, retain) NSDictionary *errorsByRecipient;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool insertingDrawing;
@property (nonatomic) bool isModal;
@property (nonatomic, readonly) MFMailboxUid *lastDraftMailboxUid;
@property (nonatomic, readonly) NSString *lastDraftMessageID;
@property (nonatomic) unsigned long long markupReplyAttachmentLoadingProgress;
@property (nonatomic, copy) NSString *originatingBundleID;
@property (nonatomic, retain) CNContactPickerViewController *peoplePicker;
@property (nonatomic, retain) UIAlertController *popoverAlert;
@property (nonatomic) QLPreviewController *previewController;
@property (nonatomic, retain) MFAttachment *previewingAttachment;
@property (nonatomic, retain) MFComposeRecipient *recipientPresentingCard;
@property (nonatomic, retain) id remoteViewControllerProxy;
@property (nonatomic) int sourceAccountManagement;
@property (readonly) Class superclass;
@property (nonatomic) bool useMailDrop;
@property (getter=isVerticallyCompact, nonatomic, readonly) bool verticallyCompact;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (bool)isSetupForDeliveryAllowingRestrictedAccounts:(bool)arg1;
+ (bool)isSetupForDeliveryAllowingRestrictedAccounts:(bool)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (id)preferenceForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (id)_addressFieldForField:(int)arg1;
- (id)_allRecipientViews;
- (id)_allocateComposeView;
- (id)_alternateTitleView;
- (bool)_anyRecipientViewContainsAddress:(id)arg1;
- (void)_attachmentLoaderFinishedWithOriginalContent:(id)arg1;
- (id)_attachmentToMarkup;
- (void)_autosaveTimerFired:(id)arg1;
- (id)_availableAccountProxies;
- (void)_beginBlockingBodyScroll;
- (unsigned long long)_bodyFieldTextContentLength;
- (void)_bodyTextChanged;
- (void)_checkForCanSendMailWithContinuation:(id /* block */)arg1;
- (void)_checkForEmptySubjectWithContinuation:(id /* block */)arg1;
- (void)_checkForInvalidAddressesWithContinuation:(id /* block */)arg1;
- (void)_checkForReplyAndForwardRestriction;
- (void)_checkForUnencryptedWithContinuation:(id /* block */)arg1;
- (void)_clearMessageValues;
- (void)_close;
- (void)_composeViewDidDraw:(id)arg1;
- (id)_contactViewControllerForRecipient:(id)arg1;
- (id)_copyMessageDataForActivityHandoff;
- (id)_copyMessagePlainTextForDonation;
- (void)_createAndAddHandoffProgressViewIfNecessary;
- (id)_createSignatureController;
- (id)_defaultAccount;
- (unsigned long long)_defaultAtomPresentationOptions;
- (Class)_deliveryClass;
- (void)_didDismissDocumentPicker;
- (void)_dismissPeoplePicker:(id)arg1;
- (void)_dismissPersonCard;
- (void)_displayPopoverAlert:(id)arg1;
- (void)_draftContentDidChange;
- (id)_emailAddresses;
- (void)_endBlockingBodyScroll;
- (id)_estimateMessageSize;
- (void)_explainAirplaneMode;
- (int)_fieldForAddressField:(id)arg1;
- (void)_finishEnteringRecipients;
- (void)_finishModalAlertClosingComposition:(bool)arg1;
- (void)_finishPopoverAlertClosingComposition:(bool)arg1;
- (void)_finishedComposing;
- (void)_finishedLoadingAllContentAndAttachments;
- (void)_focusBccHeaderCommandInvoked:(id)arg1;
- (void)_focusGained:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_hasEncryptionIdentityError;
- (bool)_hasRecipients;
- (void)_hideHandoffProgressViewAnimated:(bool)arg1;
- (bool)_isActiveComposeController;
- (bool)_isPopoverOrActionSheetOrAlertVisible;
- (bool)_isReplyOrForward;
- (bool)_isRestoredComposition;
- (bool)_isSetupForDelivery;
- (bool)_isTabKeyCommandInvocationPossible;
- (void)_leaveMessageInOutbox;
- (void)_loadAttachments;
- (void)_loadCompositionContext;
- (void)_loadingContextDidLoadMessage;
- (void)_makeComposeUserActivityCurrent;
- (id)_messageForAutosave;
- (id)_messageForDraft;
- (id)_messageForRemoteDelivery;
- (id)_messageToDonate;
- (id)_messageWithCompositionSpecification:(id)arg1 useSuspendInfo:(bool)arg2 endingEditing:(bool)arg3;
- (id)_missingIdentityErrorWithFormat:(id)arg1 title:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_optimalRectForPresentingPopoverInBodyField;
- (id)_outgoingMessageWithSubstituteDocument:(id)arg1 compositionSpecification:(id)arg2 useSuspendInfo:(bool)arg3 endingEditing:(bool)arg4;
- (void)_physicallyScaleImagesToScale:(unsigned long long)arg1;
- (void)_placeCaretAtStartOfBodyField;
- (void)_popoverWillBePresented:(id)arg1;
- (void)_preferredContentSizeCategoryDidChange:(id)arg1;
- (void)_prepareCompositionContextForLoading:(id)arg1;
- (void)_prepareForSuspend;
- (void)_prepareImagesForSendWithContinuation:(id /* block */)arg1;
- (void)_presentModalAlert:(id)arg1;
- (void)_promptForMailDropIfNecessaryWithContinuation:(id /* block */)arg1;
- (void)_recipientTextChanged:(id)arg1;
- (id)_reformattedAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)_reloadNumberOfReformattedAddressesWithMaximumWidth:(double)arg1 defaultFontSize:(double)arg2;
- (void)_removeRecent;
- (void)_replyAllCommandInvoked:(id)arg1;
- (void)_resetProxyGenerator;
- (void)_resetSecureCompositionManager;
- (void)_resetSecureCompositionManagerUsingNewAccount:(bool)arg1;
- (void)_restoreMessageValues;
- (void)_saveMessageValues;
- (void)_scaleImages;
- (bool)_secureCompositionManagerHasRecipients;
- (id)_selectedAttachmentURLs;
- (void)_setAutosaveIsValid:(bool)arg1;
- (void)_setBodyFieldAutocorrectionContext:(id)arg1;
- (void)_setInitialStateForImageField;
- (void)_setIsLoading:(bool)arg1;
- (void)_setLastFocusedRecipientView:(id)arg1;
- (void)_setRecipients:(id)arg1 forField:(int)arg2;
- (bool)_setSendingEmailAddress:(id)arg1 addIfNotPresent:(bool)arg2;
- (void)_setTitleBarSubtitleText:(id)arg1 style:(unsigned long long)arg2;
- (void)_setUpDeliveryObject:(id /* block */)arg1;
- (void)_setupForAutosavedMessage:(id)arg1;
- (void)_setupForDraft:(id)arg1;
- (void)_setupForExistingNewMessage:(id)arg1 content:(id)arg2;
- (void)_setupForOutbox:(id)arg1;
- (void)_setupForSaveAsDraft;
- (bool)_shouldAutosaveAfterTimerFiredWithInterval:(double)arg1;
- (bool)_shouldEnableCloseButton;
- (bool)_shouldEnableSendButton;
- (bool)_shouldPrependBlankLineForAttachments;
- (bool)_shouldUseMailDrop;
- (void)_showMissingIdentityAlert;
- (void)_showPersonCardForRecipient:(id)arg1 showDeleteButton:(bool)arg2;
- (unsigned long long)_sizeForScale:(unsigned long long)arg1 imagesOnly:(bool)arg2;
- (void)_startAutosaveTimerIfNeeded;
- (void)_subjectTextChanged:(id)arg1;
- (void)_tabKeyCommandInvoked:(id)arg1;
- (void)_tryAddSenderToBccRecipients;
- (void)_unscaleImages;
- (void)_updateAutoBccSendingAddress:(id)arg1 withNewSendingAddress:(id)arg2;
- (void)_updateBodyFieldAutoCorrectionContext;
- (void)_updateIdentityStatus:(int*)arg1 withPolicy:(int)arg2 identity:(struct __SecIdentity { }*)arg3 error:(id)arg4;
- (void)_updateImageSizeTitles;
- (void)_updateNavigationBarTitleAnimated:(bool)arg1;
- (void)_updateOriginalBccStatusForRestore;
- (void)_updateOriginalBccStatusForRestoreAddingAddress:(bool)arg1;
- (void)_updatePersonCard;
- (void)_updateRecipientAtomStyles;
- (void)_updateSMIMEButtonEnabledForRecipientCount;
- (void)_updateSMIMEButtonForEncryptionStatus:(int)arg1;
- (void)_updateSendAndCloseEnabled;
- (void)_updateTableCell:(id)arg1 isChecked:(bool)arg2;
- (void)_updateTitleBarForEncryptionStatus:(int)arg1;
- (bool)_wantsEncryption;
- (void)_willPresentDocumentPicker;
- (id)accountProxyGenerator;
- (void)activityHandoffOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)activityHandoffOperation:(id)arg1 didFinishReceivingData:(id)arg2;
- (void)activityHandoffOperation:(id)arg1 didFinishSendingDataWithResult:(long long)arg2;
- (void)activityHandoffOperationReceivedBytes:(id)arg1;
- (void)addAddress:(id)arg1 field:(int)arg2;
- (void)addSignature:(bool)arg1;
- (id)addressForMissingIdentity;
- (id)addressesForField:(int)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)atomPresentingCard;
- (void)attachmentFinishedLoading:(id)arg1;
- (id)attachmentIcon:(id)arg1;
- (bool)attachmentToMarkupIsLoaded;
- (id)attachments;
- (void)attachmentsRemoved:(id)arg1;
- (id)autosaveIdentifier;
- (bool)autosaveIsValid;
- (id)autosaveQueue;
- (void)autosaveWithHandler:(id /* block */)arg1;
- (id)autosavedDate;
- (bool)bccAddressesDirtied;
- (id)bccRecipients;
- (id)bodyField;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canShowAttachmentPicker;
- (bool)canShowFromField;
- (bool)canShowImageSizeField;
- (id)ccRecipients;
- (id)certificatesByRecipient;
- (void)changeQuoteLevel:(long long)arg1;
- (bool)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (void)clearAllFields;
- (void)clearInitialTitle;
- (void)close:(id)arg1;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeHeaderViewDidChangeValue:(id)arg1;
- (void)composeHeaderViewDidConfirmValue:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (void)composeRecipientView:(id)arg1 didAddRecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
- (void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (bool)composeRecipientViewShowingSearchResults:(id)arg1;
- (void)composeShortcutInvoked:(id)arg1;
- (void)composeSubjectViewDidSelectNotifyButton:(id)arg1;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1;
- (void)composeSubjectViewWillRemoveContent:(id)arg1;
- (int)composeType;
- (void)composeViewBodyTextChanged:(id)arg1;
- (id)compositionContext;
- (int)compositionType;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactViewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)contentDidChange;
- (long long)countofDrawingAttachmentsLeftInCompose;
- (id)currentScaleImageSize;
- (void)dealloc;
- (bool)delayToShowMarkupHasPassed;
- (id)delegate;
- (long long)deliverMessageRemotely;
- (id)delivery;
- (void)didBecomeActiveComposeController;
- (void)didInsertAttachment:(id)arg1;
- (void)didInsertBodyText:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSelectCellAtRow:(unsigned long long)arg1;
- (id)dismissActionsForPreviewController:(id)arg1;
- (void)dismissMarkupViewController;
- (void)dismissSearchResultsForComposeRecipientView:(id)arg1;
- (void)dismissSheet;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)drawingFileAttachments;
- (long long)drawingInsertCount;
- (id)emailAddresses;
- (id)errorsByRecipient;
- (void)finalizeSignature:(id /* block */)arg1;
- (void)forceSaveAsDraft;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAttachmentWithIdentifier:(id)arg1;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (void)handleLargeMessageComposeHandoffWithInputStream:(id)arg1 outputStream:(id)arg2 error:(id)arg3;
- (void)handleMarkupData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 attachment:(id)arg4;
- (void)handleMarkupError:(id)arg1 attachment:(id)arg2;
- (void)handleMarkupURL:(id)arg1 attachment:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasAnyHiddenTrailingEmptyQuote;
- (bool)hasAttachments;
- (void)hostApplicationDidEnterBackground;
- (void)hostApplicationWillEnterForeground;
- (bool)hosted;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imageSizeView:(id)arg1 changedSelectedScaleTo:(unsigned long long)arg2;
- (void)importDocument;
- (id)initWithCompositionContext:(id)arg1 options:(unsigned long long)arg2;
- (void)insertDrawing;
- (void)insertPhotoOrVideo;
- (bool)insertingDrawing;
- (bool)isDirty;
- (bool)isManagedAccount;
- (bool)isModal;
- (bool)isSavingAsDraft;
- (bool)isShowingRecentPersonCard;
- (bool)isVerticallyCompact;
- (id)keyCommands;
- (id)lastDraftMailboxUid;
- (id)lastDraftMessageID;
- (void)loadView;
- (id)mailComposeView;
- (void)markupAttachment:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })markupAttachmentBoundsForAttachment:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })markupAttachmentMaskForAttachment:(id)arg1;
- (id)markupReplacementAttachment;
- (unsigned long long)markupReplyAttachmentLoadingProgress;
- (id)navigationBarTitle;
- (id)navigationControllerForRecentPersonCard;
- (bool)needsDelivery;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)originatingBundleID;
- (id)peoplePicker;
- (void)pickInitialFirstResponder;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (unsigned long long)pickerView:(id)arg1 numberOfRowsInComponent:(unsigned long long)arg2;
- (id)popoverAlert;
- (id)popoverManager;
- (id)popoverManagerCreateIfNeeded:(bool)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)popoverPresentationStyleForViewController:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentMarkupViewController:(id)arg1;
- (bool)presentSearchResultsForComposeRecipientView:(id)arg1;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (id)presentationViewController;
- (id)previewController;
- (bool)previewController:(id)arg1 canEditItem:(id)arg2;
- (bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (void)previewController:(id)arg1 updatedContentsURL:(id)arg2 forEditedItem:(id)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewingAttachment;
- (id)recipientPresentingCard;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfAttachment:(id)arg1;
- (id)remoteViewControllerProxy;
- (void)removeAddressAtIndex:(unsigned long long)arg1 field:(int)arg2;
- (int)resolution;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)saveAndResignFirstResponder;
- (id)savedHeaders;
- (void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
- (void)secureMIMECompositionManager:(id)arg1 encryptionStatusDidChange:(int)arg2 context:(id)arg3;
- (void)secureMIMECompositionManager:(id)arg1 signingStatusDidChange:(int)arg2 context:(id)arg3;
- (void)securityScopeForURL:(id)arg1 withHandler:(id /* block */)arg2;
- (void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
- (void)send:(id)arg1;
- (void)sendMessage;
- (bool)sendingAccountIsExchange;
- (id)sendingAccountProxy;
- (id)sendingEmailAddress;
- (id)sendingEmailAddressIfExists;
- (bool)sendingEmailDirtied;
- (void)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(id /* block */)arg5;
- (void)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(id /* block */)arg5;
- (void)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 withHandler:(id /* block */)arg4;
- (void)setAddressForMissingIdentity:(id)arg1;
- (void)setAddresses:(id)arg1 field:(int)arg2;
- (void)setAtomPresentingCard:(id)arg1;
- (void)setAttachmentToMarkupIsLoaded:(bool)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setAutosaveIsValid:(bool)arg1;
- (void)setAutosaveQueue:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setCertificatesByRecipient:(id)arg1;
- (void)setCompositionContext:(id)arg1;
- (void)setContactViewController:(id)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)setDelayToShowMarkupHasPassed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraftMessageID:(id)arg1 mailbox:(id)arg2;
- (void)setDrawingFileAttachments:(id)arg1;
- (void)setDrawingInsertCount:(long long)arg1;
- (void)setErrorsByRecipient:(id)arg1;
- (void)setHosted:(bool)arg1;
- (void)setInitialTitle:(id)arg1;
- (void)setInsertingDrawing:(bool)arg1;
- (void)setIsModal:(bool)arg1;
- (void)setMarkupReplyAttachmentLoadingProgress:(unsigned long long)arg1;
- (void)setOriginatingBundleID:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (void)setPopoverAlert:(id)arg1;
- (void)setPreviewController:(id)arg1;
- (void)setPreviewingAttachment:(id)arg1;
- (void)setProgressUIVisible:(bool)arg1 animated:(bool)arg2;
- (void)setRecipientPresentingCard:(id)arg1;
- (void)setRecipientsKeyboardType:(long long)arg1;
- (void)setRemoteViewControllerProxy:(id)arg1;
- (void)setSavedHeaders:(id)arg1;
- (void)setSendingEmailAddress:(id)arg1;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(bool)arg2;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setUseMailDrop:(bool)arg1;
- (id)shouldCreateRichTextRepresentation;
- (bool)shouldShowSMIMEButton;
- (void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
- (int)sourceAccountManagement;
- (id)subject;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tappedSMIMEButton;
- (id)toRecipients;
- (void)updateSignature;
- (void)updateUserActivityState:(id)arg1;
- (bool)useMailDrop;
- (void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillUnload;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
