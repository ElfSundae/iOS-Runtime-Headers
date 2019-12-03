/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsController : CKScrollViewController <CKBusinessInfoViewDelegate, CKDetailsAddGroupNameViewDelegate, CKDetailsContactsManagerDelegate, CKDetailsContactsTableViewCellDelegate, CKDetailsDownloadAttachmentsHeaderFooterViewDelegate, CKDetailsSearchControllerDelegate, CNAvatarViewDelegate, FMFMapViewControllerDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UIViewControllerPreviewingDelegate> {
    CKGroupRecipientSelectionController * _addRecipientsController;
    CKAvatarPickerViewController * _avatarPickerViewController;
    CKBusinessInfoView * _businessInfoView;
    CKDetailsContactsManager * _contactsManager;
    double  _contentOffsetYShiftAfterKeyboardNotification;
    CKConversation * _conversation;
    <CKDetailsControllerDelegate> * _detailsControllerDelegate;
    bool  _didPerformPurgedAttachmentsCheck;
    CKDetailsDownloadAttachmentsHeaderFooterView * _downloadAttachmentsFooterView;
    unsigned long long  _downloadButtonState;
    bool  _fmfEnabled;
    bool  _fmfRestricted;
    NSTimer * _fmfUpdateTimer;
    CKDetailsGroupNameCell * _groupNameCell;
    CKDetailsAddGroupNameView * _groupNameView;
    bool  _isContactsSectionCollapsed;
    bool  _isDisplayingPhotos;
    CKTranscriptDetailsResizableCell * _locationSendCell;
    CKDetailsLocationShareCell * _locationShareCell;
    UITextView * _locationSharingTextView;
    CKTranscriptDetailsResizableCell * _locationStartShareCell;
    CKDetailsMapViewCell * _mapViewCell;
    FMFMapViewController * _mapViewController;
    CKEntity * _presentedEntity;
    CKDetailsSearchViewController * _searchViewController;
    id  _selfWeakWrapper;
    CNContactStore * _suggestionsEnabledContactStore;
    CKDetailsTableView * _tableView;
    unsigned long long  _undownloadedPhotoAttachmentCount;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) CKGroupRecipientSelectionController *addRecipientsController;
@property (nonatomic, retain) CKAvatarPickerViewController *avatarPickerViewController;
@property (nonatomic, retain) CKBusinessInfoView *businessInfoView;
@property (nonatomic, retain) CKDetailsContactsManager *contactsManager;
@property (nonatomic) double contentOffsetYShiftAfterKeyboardNotification;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CKDetailsControllerDelegate> *detailsControllerDelegate;
@property (nonatomic) bool didPerformPurgedAttachmentsCheck;
@property (nonatomic, retain) CKDetailsDownloadAttachmentsHeaderFooterView *downloadAttachmentsFooterView;
@property (nonatomic) unsigned long long downloadButtonState;
@property (nonatomic) bool fmfEnabled;
@property (nonatomic) bool fmfRestricted;
@property (nonatomic, retain) NSTimer *fmfUpdateTimer;
@property (nonatomic, retain) CKDetailsGroupNameCell *groupNameCell;
@property (nonatomic, retain) CKDetailsAddGroupNameView *groupNameView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isContactsSectionCollapsed;
@property (nonatomic) bool isDisplayingPhotos;
@property (nonatomic, retain) CKTranscriptDetailsResizableCell *locationSendCell;
@property (nonatomic, retain) CKDetailsLocationShareCell *locationShareCell;
@property (nonatomic, retain) UITextView *locationSharingTextView;
@property (nonatomic, retain) CKTranscriptDetailsResizableCell *locationStartShareCell;
@property (nonatomic, retain) CKDetailsMapViewCell *mapViewCell;
@property (nonatomic, retain) FMFMapViewController *mapViewController;
@property (nonatomic, retain) CKEntity *presentedEntity;
@property (nonatomic, retain) CKDetailsSearchViewController *searchViewController;
@property (nonatomic, retain) id selfWeakWrapper;
@property (nonatomic, readonly) bool shouldShowDownloadMoreCell;
@property (nonatomic, retain) CNContactStore *suggestionsEnabledContactStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKDetailsTableView *tableView;
@property (nonatomic) unsigned long long undownloadedPhotoAttachmentCount;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (bool)_allRecipientsAlreadyFollowingLocation;
- (void)_batchDownloadNotificationFired:(id)arg1;
- (bool)_canLeaveConversation;
- (void)_configureSeparatorForCell:(id)arg1 indexPath:(id)arg2;
- (id)_conversationOfferTimeExpiration;
- (unsigned long long)_countOfContactViewModels;
- (bool)_fmfExpirationDateIsValid;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_handleKeyboardWillShowNotification:(id)arg1;
- (double)_heightForAuxContactCellAtindexPath:(id)arg1;
- (double)_heightForContactCellAtIndexPath:(id)arg1;
- (void)_lastAddressedHandleUpdateNotification:(id)arg1;
- (void)_presentRemoveRecipientSheetForHandle:(id)arg1 fromView:(id)arg2;
- (unsigned long long)_purgedAttachmentCount;
- (void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(bool)arg4;
- (void)_resetPurgedAttachmentCount;
- (void)_showContactCardForEntity:(id)arg1 fromView:(id)arg2;
- (id)_tableViewCellForSendLocation;
- (id)_tableViewCellForSharingLocation:(bool)arg1;
- (void)_toggleSharingStateFromABCard;
- (void)_updateDownloadButtonStateIfNeeded;
- (void)_updateDownloadFooterView;
- (id)addRecipientsController;
- (void)adjustContentOffsetReloadingSharedAssetsContentViewCell;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)annotationContactForHandle:(id)arg1;
- (id)annotationImageForHandle:(id)arg1;
- (id)avatarPickerViewController;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)businessInfoFooterViewForSection:(long long)arg1;
- (id)businessInfoView;
- (void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2;
- (bool)canBecomeFirstResponder;
- (id)chatOptionsCellForIndexPath:(id)arg1;
- (id)childViewController:(id)arg1 cellForIndexPath:(id)arg2;
- (void)collapseContactsSection;
- (void)contactsCellDidTapFaceTimeVideoButton:(id)arg1;
- (void)contactsCellDidTapMessagesButton:(id)arg1;
- (void)contactsCellDidTapPhoneButton:(id)arg1;
- (id)contactsManager;
- (void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(bool)arg5;
- (id)contactsManagerCellForIndexPath:(id)arg1;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (double)contentOffsetYShiftAfterKeyboardNotification;
- (id)contentScrollView;
- (id)conversation;
- (bool)conversationHasLeft;
- (id)currentlyActiveFMFDevice;
- (void)dealloc;
- (void)detailsAddGroupNameView:(id)arg1 didCommitGroupName:(id)arg2;
- (id)detailsControllerDelegate;
- (void)detailsSearchController:(id)arg1 requestsPushOfSearchController:(id)arg2;
- (void)detailsSearchControllerContentDidChange:(id)arg1;
- (bool)didPerformPurgedAttachmentsCheck;
- (void)doNotDisturbValueChange:(id)arg1;
- (id)downloadAttachmentsFooterView;
- (id)downloadAttachmentsFooterViewForSection:(long long)arg1;
- (id)downloadAttachmentsText;
- (unsigned long long)downloadButtonState;
- (id)downloadButtonText;
- (id)editConversationCellForIndexPath:(id)arg1;
- (void)expandContactsSection;
- (bool)fmfEnabled;
- (id)fmfHandlesFromIMHandles:(id)arg1;
- (bool)fmfRestricted;
- (id)fmfUpdateTimer;
- (id)fmfViewControllerCellForIndexPath:(id)arg1;
- (id)groupNameCell;
- (id)groupNameCellForIndexPath:(id)arg1;
- (id)groupNameView;
- (void)handleActiveDeviceChanged:(id)arg1;
- (void)handleCancelAction:(id)arg1;
- (void)handleDoneAction:(id)arg1;
- (void)handleDoneButton:(id)arg1;
- (void)handleFriendshipStatusChanged:(id)arg1;
- (void)handleTapOnChromeAvatar:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (void)initializeBusinessInfoViewIfNecessary;
- (void)initializeLocationSharingTextViewIfNecessary;
- (id)inputAccessoryViewController;
- (bool)isContactsSectionCollapsed;
- (bool)isContactsSectionCollapsible;
- (bool)isDisplayingPhotos;
- (id)labelForChat;
- (id)leaveCellForIndexPath:(id)arg1;
- (void)loadView;
- (id)locationFooterViewForSection:(long long)arg1;
- (id)locationSendCell;
- (id)locationShareCell;
- (id)locationShareCellForIndexPath:(id)arg1;
- (id)locationSharingTextView;
- (id)locationStartShareCell;
- (id)mapViewCell;
- (id)mapViewController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentFullFMFMapViewController;
- (void)presentGroupRecipientSelectionController;
- (void)presentLeaveActionSheetFromView:(id)arg1;
- (void)presentSharingActionSheetCurrentlySharing:(bool)arg1 fromView:(id)arg2;
- (id)presentedEntity;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)readReceiptsSwitchValueChanged:(id)arg1;
- (long long)rowForAddMemberCell;
- (long long)rowForShowMoreContactsCell;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchAttachmentViewControllerCellForIndexPath:(id)arg1;
- (id)searchViewController;
- (id)selfWeakWrapper;
- (void)sendCurrentLocation;
- (void)setAddRecipientsController:(id)arg1;
- (void)setAvatarPickerViewController:(id)arg1;
- (void)setBusinessInfoView:(id)arg1;
- (void)setContactsManager:(id)arg1;
- (void)setContentOffsetYShiftAfterKeyboardNotification:(double)arg1;
- (void)setConversation:(id)arg1;
- (void)setDetailsControllerDelegate:(id)arg1;
- (void)setDidPerformPurgedAttachmentsCheck:(bool)arg1;
- (void)setDownloadAttachmentsFooterView:(id)arg1;
- (void)setDownloadButtonState:(unsigned long long)arg1;
- (void)setFmfEnabled:(bool)arg1;
- (void)setFmfRestricted:(bool)arg1;
- (void)setFmfUpdateTimer:(id)arg1;
- (void)setGroupNameCell:(id)arg1;
- (void)setGroupNameView:(id)arg1;
- (void)setIsContactsSectionCollapsed:(bool)arg1;
- (void)setIsDisplayingPhotos:(bool)arg1;
- (void)setLocationSendCell:(id)arg1;
- (void)setLocationShareCell:(id)arg1;
- (void)setLocationSharingTextView:(id)arg1;
- (void)setLocationStartShareCell:(id)arg1;
- (void)setMapViewCell:(id)arg1;
- (void)setMapViewController:(id)arg1;
- (void)setPresentedEntity:(id)arg1;
- (void)setSearchViewController:(id)arg1;
- (void)setSelfWeakWrapper:(id)arg1;
- (void)setSuggestionsEnabledContactStore:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setUndownloadedPhotoAttachmentCount:(unsigned long long)arg1;
- (void)setVisualEffectView:(id)arg1;
- (void)setupContactsManager;
- (void)setupFMF;
- (void)setupFMFTimerIfNecessary;
- (bool)shouldDisplayFooterForSection:(unsigned long long)arg1;
- (bool)shouldDisplayHeaderForSection:(unsigned long long)arg1;
- (bool)shouldShowActiveDeviceSwitchFooter;
- (bool)shouldShowBusinessInfoFooter;
- (bool)shouldShowDownloadMoreCell;
- (bool)shouldShowEnhancedGroupFeatures;
- (bool)shouldShowFMFView;
- (bool)shouldShowGroupAddNameField;
- (void)showMapkitBusinessData;
- (id)simTypeCellForIndexPath:(id)arg1;
- (id)suggestionsEnabledContactStore;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)undownloadedPhotoAttachmentCount;
- (void)updateTimedFMFState;
- (void)userDidTapDownloadForAttachmentsFooterView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (long long)visibleContactsRows;
- (id)visualEffectView;

@end
