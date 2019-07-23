/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <CNAvatarViewDelegate, MFMailComposeViewControllerDelegate, PKCommutePlanRenewalReminderSetupViewControllerDelegate, PKLowBalanceReminderSetupViewControllerDelegate, PKPassHeaderViewDelegate, PKPaymentDataProviderDelegate, PKPaymentSetupDelegate, PKPaymentVerificationControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPeerPaymentContactResolverDelegate, PKPeerPaymentPerformActionViewControllerDelegate, PKPerformActionViewControllerDelegate, PSStateRestoration, UITableViewDataSource, UITableViewDelegate, UIViewControllerPreviewingDelegate> {
    PKPaymentPassDetailActivationFooterView * _activationFooter;
    LAContext * _authenticationContext;
    PKSettingTableCell * _automaticPresentationSwitch;
    UIVisualEffectView * _blurView;
    bool  _changingDefaultPaymentApplication;
    NSDateComponentsFormatter * _commutePlanRenewalReminderTimeIntervalFormatter;
    NSArray * _commuterFields;
    PKPeerPaymentContactResolver * _contactResolver;
    NSArray * _contactlessPaymentApplications;
    NSMutableDictionary * _contextualActionHandlers;
    bool  _deepLinkingEnabled;
    PKPaymentApplication * _defaultPaymentApplication;
    <PKPassDeleteHandler> * _deleteOverrider;
    UIColor * _detailTextColor;
    long long  _detailViewStyle;
    NSArray * _devicePaymentApplications;
    bool  _expressAccessEnabled;
    PKExpressPassInformation * _expressAccessPassInformation;
    PKSettingTableCell * _expressAccessSwitch;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerContentInset;
    double  _headerHeight;
    UIView * _headerView;
    UIColor * _highlightColor;
    UIView * _keyLine;
    UIColor * _linkTextColor;
    PKLinkedApplication * _linkedApplication;
    NSIndexPath * _loadingPeerPaymentAccountActionIndexPath;
    bool  _loadingPeerPaymentPreferences;
    PKSettingTableCell * _messagesSwitch;
    bool  _navigationControllerHidesShadow;
    PKPaymentPass * _pass;
    PKPassHeaderView * _passHeaderView;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    NSNumber * _paymentTransactionCellHeightCache;
    PKPeerPaymentAccount * _peerPaymentAccount;
    unsigned long long  _peerPaymentAccountResolution;
    PKPeerPaymentAccountResolutionController * _peerPaymentAccountResolutionController;
    PKPeerPaymentPerformActionViewController * _peerPaymentActionViewController;
    PKPeerPaymentController * _peerPaymentController;
    PKPeerPaymentPreferences * _peerPaymentPreferences;
    PKSpinnerHeaderView * _peerPaymentPreferencesHeaderView;
    PKPeerPaymentWebService * _peerPaymentWebService;
    bool  _performingCardTransfer;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousLayoutContentSize;
    double  _previousLayoutTableViewWidth;
    UIColor * _primaryTextColor;
    bool  _requestingStatement;
    UISegmentedControl * _tabBar;
    double  _tabBarHeight;
    NSArray * _tabBarSegments;
    PKPaymentTransactionCellController * _transactionCellController;
    NSArray * _transactionCountAndYear;
    NSNumberFormatter * _transactionCountFormatter;
    NSObject<OS_dispatch_source> * _transactionTimer;
    NSDateFormatter * _transactionYearFormatter;
    NSArray * _transactions;
    PKSettingTableCell * _transactionsSwitch;
    PKTransitPassProperties * _transitProperties;
    PKPaymentVerificationController * _verificationController;
    bool  _viewIsDisappearing;
    UIColor * _warningTextColor;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassDeleteHandler> *deleteOverrider;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIColor *detailTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIColor *highlightColor;
@property (nonatomic) UIColor *linkTextColor;
@property (nonatomic) UIColor *primaryTextColor;
@property (readonly) Class superclass;
@property (nonatomic) UIColor *warningTextColor;

- (void).cxx_destruct;
- (void)_activationFooterPressed:(id)arg1;
- (id)_activationFooterView;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (void)_applyDefaultStaticStylingToCell:(id)arg1;
- (id)_automaticPresentationCellForTableView:(id)arg1;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (id)_availableActionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_availableActions;
- (id)_billingAddressCellForTableView:(id)arg1;
- (void)_callIssuer;
- (bool)_canDoManualIdentityVerification;
- (void)_cancelPendingTransactionTimer;
- (unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_checkmarkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_commuterRouteCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (unsigned long long)_contactBankCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_contactKeysToFetch;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (id)_deleteCardCellForTableView:(id)arg1;
- (id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_didSelectAddMoney;
- (void)_didSelectAutomaticallyAcceptPaymentsPreferenceAtIndexPath:(id)arg1;
- (void)_didSelectAvailableActionAtRow:(long long)arg1;
- (void)_didSelectBillingAddress;
- (void)_didSelectContactBankSectionAtIndexPath:(long long)arg1;
- (void)_didSelectDeleteCard;
- (void)_didSelectPassOperationsSectionAtIndexPath:(id)arg1;
- (void)_didSelectPassStateSection;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentAccountActionAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentManualIdentityVerificationAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentMoneyActionAtRow:(long long)arg1;
- (void)_didSelectPeerPaymentStatementAtIndexPath:(id)arg1;
- (void)_didSelectPrivacySectionAtRow:(long long)arg1;
- (void)_didSelectReminderConfigurationRowAtIndex:(long long)arg1;
- (void)_didSelectTransactionAtRow:(long long)arg1;
- (void)_didSelectTransactionCountByYearAtIndexPath:(id)arg1;
- (void)_didSelectTransferCardAtIndexPath:(id)arg1;
- (void)_didSelectTransferToBank;
- (void)_didSelectTransitTicketAtRow:(long long)arg1;
- (id)_disabledCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2;
- (void)_done:(id)arg1;
- (void)_doneLoadingPeerPaymentAccountAction;
- (void)_emailIssuer;
- (unsigned long long)_employeeInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_expressAccessCellForTableView:(id)arg1;
- (void)_expressAccessSwitchChanged:(id)arg1;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForPassStateSection;
- (double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (bool)_hasActionOfType:(unsigned long long)arg1;
- (id)_headerTitleForPassStateSection;
- (double)_heightForPassStateSectionWithTableView:(id)arg1;
- (id)_imageViewCellForImage:(id)arg1 contentMode:(long long)arg2 forTableView:(id)arg3;
- (id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 reuseIdentifier:(id)arg4 forTableView:(id)arg5;
- (bool)_isJapaneseRegion;
- (id)_linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_linkedAppCellForTableView:(id)arg1;
- (id)_linkedApplicationCellForTableView:(id)arg1;
- (id)_messagesSwitchCellForTableView:(id)arg1;
- (void)_messagesSwitchChanged:(id)arg1;
- (id)_moreTransactionsCellForTableView:(id)arg1;
- (void)_normalizeContentOffset;
- (struct CGPoint { double x1; double x2; })_normalizedContentOffsetForTargetOffset:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_numberOfPeerPaymentBalanceActionsEnabled;
- (double)_offscreenHeaderHeight;
- (void)_openIssuerWebsite;
- (void)_openPaymentSetup;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2;
- (unsigned long long)_passOperationsCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_passSettingsChanged:(id)arg1;
- (unsigned long long)_passStateSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (double)_paymentTransactionCellHeight;
- (id)_peerPaymentAccountActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentAutomaticallyAcceptPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (bool)_peerPaymentBalanceActionEnabled:(unsigned long long)arg1;
- (unsigned long long)_peerPaymentBalanceActionForRowIndex:(unsigned long long)arg1;
- (id)_peerPaymentCardInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentManualIdentityVerificationCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentMoneyActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (void)_peerPaymentPaymentRequestPreferenceChanged:(id)arg1;
- (id)_peerPaymentStatementCellForTableView:(id)arg1;
- (void)_preflightWatchForTransferWithCompletion:(id /* block */)arg1;
- (void)_presentContactBankViewController;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (void)_presentNotImplementedAlertWithRadarNumber:(long long)arg1;
- (unsigned long long)_privacyTermsSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_refreshPaymentApplicationsSelection;
- (void)_reloadPassAndView;
- (void)_reloadTransactionSectionsAnimated:(bool)arg1;
- (void)_reloadTransactionsWithCompletion:(id /* block */)arg1;
- (void)_reloadView;
- (id)_remindersConfigurationCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (unsigned long long)_rowIndexForPeerPaymentBalanceActionRow:(unsigned long long)arg1;
- (void)_setExpressAccessEnabled:(bool)arg1 paymentSetupContext:(long long)arg2 authenticationCredential:(id)arg3;
- (void)_setTransitProperties:(id)arg1;
- (bool)_shouldShowAccountActions;
- (bool)_shouldShowAutomaticPresentation;
- (bool)_shouldShowBillingAddressCell;
- (bool)_shouldShowContactCell;
- (bool)_shouldShowDeleteCell;
- (bool)_shouldShowEmployeeInformation;
- (bool)_shouldShowPrivacyPolicyCell;
- (bool)_shouldShowServiceMode;
- (bool)_shouldShowTermsCell;
- (bool)_shouldShowTransferCell;
- (void)_showPeerPaymentActionViewControllerForAction:(unsigned long long)arg1;
- (id)_spinnerCellForTableView:(id)arg1;
- (void)_startPendingTransactionTimer;
- (id)_subtitleCellForTableView:(id)arg1;
- (id)_switchCellWithText:(id)arg1 forTableView:(id)arg2;
- (void)_tabBarSegmentChanged:(id)arg1;
- (bool)_transactionCellEditActionsGenerateWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionCountByYearCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionCountFormatter;
- (bool)_transactionDeepLinkingEnabled;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (bool)_transactionSectionsDataIsChangedForNewTransactions:(id)arg1 oldTransactions:(id)arg2 newTransactionCountByYear:(id)arg3 oldTransactionCountByYear:(id)arg4;
- (id)_transactionYearFormatter;
- (id)_transactionsSwitchCellForTableView:(id)arg1;
- (void)_transactionsSwitchChanged:(id)arg1;
- (id)_transferCardCellForTableView:(id)arg1;
- (long long)_transitCellGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_updateAccessExpressPassInformation;
- (bool)_updateHeaderHeightDeterminingLayout:(bool)arg1;
- (void)_updatePassProperties;
- (void)_updatePeerPaymentAccount;
- (void)_updatePeerPaymentPreferences;
- (void)_updatePeerPaymentPreferencesSectionVisibilityAndReloadIfNecessary;
- (void)_updatePeerPaymentPreferencesWithNewPreferences:(id)arg1;
- (void)_updateTabBar;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTransitProperties;
- (bool)canBeShownFromSuspendedState;
- (id)commutePlanRenewalReminderTimeIntervalFormatter;
- (void)commutePlanRenewalReminderValueDidChange:(id)arg1;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)dealloc;
- (id)deleteOverrider;
- (id)detailTextColor;
- (void)didChangeVerificationPresentation;
- (id)highlightColor;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 style:(long long)arg4 passLibraryDataProvider:(id)arg5 paymentServiceDataProvider:(id)arg6;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4;
- (id)linkTextColor;
- (void)loadView;
- (void)lowBalanceReminderValueDidChange:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)peerPaymentPerformActionViewControllerDidCancel:(id)arg1;
- (void)peerPaymentPerformActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)presentTermsAndConditions;
- (void)presentTransactionDetailsForTransaction:(id)arg1 animated:(bool)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(bool)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)primaryTextColor;
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setDeleteOverrider:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setWarningTextColor:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateActivationFooterViewContents;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)warningTextColor;

@end
