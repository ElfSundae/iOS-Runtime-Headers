/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <CNAvatarViewDelegate, MFMailComposeViewControllerDelegate, PKAMPEnrollmentManagerObserver, PKAccountAutomaticPaymentsControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKAccountServiceObserver, PKAccountServicePerformActionViewControllerDelegate, PKBalanceDetailsViewControllerDelegate, PKCreditAccountPaymentDetailsViewControllerDelegate, PKPassHeaderViewDelegate, PKPaymentDataProviderDelegate, PKPaymentPassActionWidgetViewDelegate, PKPaymentSetupDelegate, PKPaymentVerificationControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPeerPaymentActionViewControllerDelegate, PKPeerPaymentContactResolverDelegate, PKPerformActionViewControllerDelegate, PKPhysicalCardActionControllerDelegate, PSStateRestoration, UITableViewDataSource, UITableViewDelegate, UIViewControllerPreviewingDelegate> {
    PKAccount * _account;
    unsigned long long  _accountFeatureIdentifier;
    PKAccountService * _accountService;
    PKAccountServicePerformActionViewController * _accountServiceActionViewController;
    NSDictionary * _actionForBalance;
    PKPaymentPassDetailActivationFooterView * _activationFooter;
    bool  _allContentIsLoaded;
    bool  _allowStatementCreditRedemption;
    NSArray * _arbitraryInfoFields;
    LAContext * _authenticationContext;
    PKSettingTableCell * _automaticPresentationSwitch;
    NSArray * _balanceFields;
    NSDictionary * _balances;
    PKSpinnerHeaderView * _billingAddressHeaderView;
    CNContact * _billingContact;
    PKBusinessChatController * _businessChatController;
    unsigned long long  _cashbackResolution;
    bool  _changingDefaultPaymentApplication;
    NSArray * _commutePlanFields;
    NSArray * _commuterFields;
    PKPeerPaymentContactResolver * _contactResolver;
    NSArray * _contactlessPaymentApplications;
    PKPassPresentationContext * _context;
    NSMutableDictionary * _contextualActionHandlers;
    PKSettingTableCell * _dailyCashSwitch;
    bool  _deepLinkingEnabled;
    PKPaymentApplication * _defaultPaymentApplication;
    NSNumber * _defaultTableViewCellHeightCache;
    <PKPassDeleteHandler> * _deleteOverrider;
    UIColor * _detailTextColor;
    long long  _detailViewStyle;
    NSArray * _devicePaymentApplications;
    NSArray * _displayableBalanceFields;
    NSDateFormatter * _dueDateFormatter;
    NSDateFormatter * _dueTimeFormatter;
    NSMutableArray * _executionBlocksContentIsLoaded;
    PKSettingTableCell * _expressAccessSwitch;
    bool  _expressModeEnabled;
    bool  _expressModeSupported;
    PKExpressPassController * _expressPassController;
    int  _expressPassesInformationToken;
    UIView * _footerView;
    bool  _forcedRefresh;
    double  _forcedTopContentInset;
    bool  _hasTabBar;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerContentInset;
    double  _headerHeight;
    UIView * _headerView;
    UIColor * _highlightColor;
    CLInUseAssertion * _inUseAssertion;
    NSObject<OS_dispatch_group> * _initialLoadGroup;
    bool  _initialLoadTimedout;
    bool  _isAmpEligible;
    bool  _isAppleAccess;
    UIColor * _linkTextColor;
    PKLinkedApplication * _linkedApplication;
    bool  _loadingAMPEligibility;
    bool  _loadingAccountTermsAndConditions;
    bool  _loadingAutomaticPayments;
    bool  _loadingBankAccounts;
    bool  _loadingBillingContact;
    bool  _loadingEnableDisablePhysicalCard;
    bool  _loadingOrderPhysicalCard;
    bool  _loadingPayments;
    NSIndexPath * _loadingPeerPaymentAccountActionIndexPath;
    bool  _loadingPeerPaymentPreferences;
    bool  _loadingReplacePhysicalCard;
    bool  _loadingVirtualCard;
    UIImageView * _logoView;
    PKSettingTableCell * _messagesSwitch;
    bool  _navigationBarVisible;
    bool  _navigationControllerHidesShadow;
    PKSettingTableCell * _notificationsSwitch;
    PKPaymentPass * _pass;
    PKPassHeaderView * _passHeaderView;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    UIView * _passSnapshotView;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    unsigned long long  _peerPaymentAccountResolution;
    PKPeerPaymentAccountResolutionController * _peerPaymentAccountResolutionController;
    PKPeerPaymentAccountResolutionController * _peerPaymentAccountResolutionControllerForAccountService;
    PKPeerPaymentActionViewController * _peerPaymentActionViewController;
    PKPeerPaymentController * _peerPaymentController;
    PKPeerPaymentPreferences * _peerPaymentPreferences;
    PKSpinnerHeaderView * _peerPaymentPreferencesHeaderView;
    PKPeerPaymentWebService * _peerPaymentWebService;
    bool  _performingCardTransfer;
    PKPhysicalCardActionController * _physicalCardActionController;
    PKPhysicalCardController * _physicalCardController;
    double  _pinnedTopViewHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousLayoutContentSize;
    double  _previousLayoutTableViewWidth;
    UIColor * _primaryTextColor;
    NSArray * _recurringPayments;
    bool  _redeemingRewards;
    unsigned long long  _redemptionStatus;
    UIRefreshControl * _refreshControl;
    NSObject<OS_dispatch_source> * _refreshTimeout;
    NSMutableDictionary * _reminderForBalance;
    PKPassFaceViewRendererState * _rendererState;
    bool  _requestingStatement;
    PKAccountServiceAccountResolutionController * _resolutionController;
    NSArray * _scheduledPayments;
    PKSpinnerHeaderView * _scheduledPaymentsHeaderView;
    UISegmentedControl * _tabBar;
    NSArray * _tabBarSegments;
    PKAnimatedNavigationBarTitleView * _titleIconView;
    PKPaymentTransactionCellController * _transactionCellController;
    NSArray * _transactionCountAndYear;
    NSNumberFormatter * _transactionCountFormatter;
    PKPaymentTransactionDetailsFactory * _transactionDetailsFactory;
    PKDashboardTransactionFetcher * _transactionFetcher;
    NSObject<OS_dispatch_source> * _transactionTimer;
    NSDateFormatter * _transactionYearFormatter;
    NSArray * _transactions;
    PKSettingTableCell * _transactionsSwitch;
    PKTransitBalanceModel * _transitBalanceModel;
    PKTransitPassProperties * _transitProperties;
    PKPaymentBalanceReminder * _transitPropertiesBalanceReminder;
    PKPaymentVerificationController * _verificationController;
    unsigned char  _visiblityState;
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
- (bool)_accountInGoodStateForAMPEligbilityCheck;
- (id)_accountServiceBankAccountsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_accountServiceCardNumbersCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_accountServiceCreditDetailsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (unsigned long long)_accountServiceCreditDetailsRowForRowIndex:(long long)arg1;
- (bool)_accountServiceCreditDetailsRowIsEnabled:(unsigned long long)arg1;
- (id)_accountServiceMakeDefaultCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_accountServicePhysicalCardCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (unsigned long long)_accountServicePhysicalCardRowForRowIndex:(long long)arg1;
- (bool)_accountServicePhysicalCardRowIsEnabled:(unsigned long long)arg1;
- (id)_accountServiceRewardsDetailsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (unsigned long long)_accountServiceRewardsRowForRowIndex:(long long)arg1;
- (bool)_accountServiceRewardsRowIsEnabled:(unsigned long long)arg1;
- (id)_accountServiceScheduledPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (unsigned long long)_accountServiceScheduledPaymentsRowTypeForRowIndex:(long long)arg1;
- (void)_activationFooterPressed:(id)arg1;
- (id)_activationFooterView;
- (void)_ampEligbilityUpdated:(bool)arg1;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (void)_applyDefaultStaticStylingToCell:(id)arg1;
- (id)_arbitraryInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_automaticPresentationCellForTableView:(id)arg1;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (id)_availableActions;
- (id)_availableCommutePlanActions;
- (id)_balanceCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_balanceOrCommutePlanCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_balanceReminderCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_billingAddressCellWithLabel:(bool)arg1 forTableView:(id)arg2;
- (bool)_canDoManualIdentityVerification;
- (bool)_canSelectBalanceOrCommutePlanCellAtRowIndex:(long long)arg1;
- (void)_cancelPendingTransactionTimer;
- (unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_cellForField:(id)arg1 tableView:(id)arg2;
- (id)_checkmarkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_commuterRouteCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (unsigned long long)_contactBankCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_contactKeysToFetch;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (void)_dailyCashSwitchChanged:(id)arg1;
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (double)_defaultTableViewCellHeight;
- (id)_deleteCardCellForTableView:(id)arg1;
- (id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_didSelectAccountServiceBankAccountsAtIndexPath:(id)arg1;
- (void)_didSelectAccountServiceCardNumbersAtIndexPath:(id)arg1;
- (void)_didSelectAccountServiceMakeDefaultAtIndexPath:(id)arg1;
- (void)_didSelectAccountServicePhysicalCardAtIndexPath:(id)arg1;
- (void)_didSelectAccountServiceRewardsDetailsAtIndexPath:(id)arg1;
- (void)_didSelectAccountServiceScheduledPaymentsAtIndexPath:(id)arg1;
- (void)_didSelectAutomaticallyAcceptPaymentsPreferenceAtIndexPath:(id)arg1;
- (void)_didSelectBalanceAtRowIndex:(long long)arg1;
- (void)_didSelectBalanceOrCommutePlanCellAtIndexPath:(id)arg1;
- (void)_didSelectBillingAddress;
- (void)_didSelectCardInfoCellAtIndexPath:(id)arg1;
- (void)_didSelectCommutePlanAtRowIndex:(long long)arg1;
- (void)_didSelectContactBankSectionAtIndexPath:(long long)arg1;
- (void)_didSelectCreditDetailsCell:(id)arg1;
- (void)_didSelectDeleteCard;
- (void)_didSelectFixPeerPaymentAtIndexPath:(id)arg1;
- (void)_didSelectMakePayment;
- (void)_didSelectNetworkBenefitsCell;
- (void)_didSelectPassOperationsSectionAtIndexPath:(id)arg1;
- (void)_didSelectPassStateSection;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentAccountActionAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentBalanceAndMoneyActionAtRow:(long long)arg1;
- (void)_didSelectPeerPaymentBankAccountsAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentManualIdentityVerificationAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentStatementAtIndexPath:(id)arg1;
- (void)_didSelectPrivacySectionAtRow:(long long)arg1;
- (void)_didSelectRedeemAtIndexPath:(id)arg1;
- (void)_didSelectServicingWalletLink;
- (void)_didSelectTransactionAtRow:(long long)arg1;
- (void)_didSelectTransactionCountByPeriodAtIndexPath:(id)arg1;
- (void)_didSelectTransferCardAtIndexPath:(id)arg1;
- (void)_didSelectTransferToBank;
- (void)_didSelectTransitTicketAtRow:(long long)arg1;
- (id)_disabledCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2;
- (void)_done:(id)arg1;
- (void)_doneLoadingPeerPaymentAccountAction;
- (id)_dueDateFormatter;
- (id)_dueTimeFormatter;
- (unsigned long long)_employeeInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_expressAccessCellForTableView:(id)arg1;
- (void)_expressAccessSwitchChanged:(id)arg1;
- (void)_expressPassDidChange;
- (void)_fetchBalanceRemindersWithActionForBalance:(id)arg1 transitProperties:(id)arg2 pass:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_fetchScheduledPaymentsWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForApplePayProductPrivacySection;
- (id)_footerViewForPassStateSection;
- (double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (void)_handleAccountServiceAccountDidChangeNotification:(id)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (bool)_hasActionOfType:(unsigned long long)arg1;
- (id)_headerTitleForPassStateSection;
- (double)_heightForPassStateSectionWithTableView:(id)arg1;
- (id)_imageViewCellForImage:(id)arg1 contentMode:(long long)arg2 forTableView:(id)arg3;
- (id)_indexPathForAccountServiceScheduledPaymentsSetUpRecurringPaymentsRow;
- (id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 reuseIdentifier:(id)arg4 forTableView:(id)arg5;
- (bool)_isDeletingPass;
- (bool)_isJapaneseRegion;
- (id)_linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_linkedAppCellForTableView:(id)arg1;
- (id)_linkedApplicationCellForTableView:(id)arg1;
- (id)_messagesSwitchCellForTableView:(id)arg1;
- (void)_messagesSwitchChanged:(id)arg1;
- (id)_moreTransactionsCellForTableView:(id)arg1;
- (void)_normalizeContentOffset;
- (struct CGPoint { double x1; double x2; })_normalizedContentOffsetForTargetOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_notificationSwitchChanged:(id)arg1;
- (long long)_numberOfAccountServiceCreditDetailsRowsEnabled;
- (long long)_numberOfAccountServicePhysicalCardRowsEnabled;
- (long long)_numberOfAccountServiceRewardsRowsEnabled;
- (unsigned long long)_numberOfPeerPaymentBalanceAndMoneyActionsEnabled;
- (double)_offscreenHeaderHeight;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2;
- (unsigned long long)_passOperationsCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_passSettingsChanged:(id)arg1;
- (unsigned long long)_passStateSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (double)_paymentTransactionCellHeightForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_peerPaymentAccountActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentAutomaticallyAcceptPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentBalanceAndMoneyActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (bool)_peerPaymentBalanceAndMoneyActionEnabled:(unsigned long long)arg1;
- (unsigned long long)_peerPaymentBalanceAndMoneyActionForRowIndex:(unsigned long long)arg1;
- (id)_peerPaymentBankAccountsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentCardInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentManualIdentityVerificationCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_peerPaymentPaymentRequestPreferenceChanged:(id)arg1;
- (id)_peerPaymentStatementCellForTableView:(id)arg1;
- (void)_preflightWatchForTransferWithCompletion:(id /* block */)arg1;
- (void)_presentContactBankViewController:(unsigned long long)arg1;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (void)_presentNotImplementedAlertWithRadarNumber:(long long)arg1;
- (void)_presentPhysicalCardPasswordAuthorization:(id /* block */)arg1;
- (unsigned long long)_privacyTermsSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_refreshFinished:(bool)arg1;
- (void)_refreshPaymentApplicationsSelection;
- (void)_reloadPassAndView;
- (void)_reloadTitle;
- (void)_reloadTransactionSectionsAnimated:(bool)arg1;
- (void)_reloadTransactionsWithCompletion:(id /* block */)arg1;
- (void)_reloadView;
- (long long)_rowIndexForExpressTransitSettingsCell;
- (unsigned long long)_rowIndexForPeerPaymentBalanceActionRow:(unsigned long long)arg1;
- (id)_scheduledPaymentCellForPayment:(id)arg1 tableView:(id)arg2;
- (void)_setExpressAccessEnabled:(bool)arg1 paymentSetupContext:(long long)arg2 authenticationCredential:(id)arg3;
- (void)_setTransitProperties:(id)arg1;
- (bool)_shouldShowAccountActions;
- (bool)_shouldShowAutomaticPresentation;
- (bool)_shouldShowBillingAddressCell;
- (bool)_shouldShowContactCell;
- (bool)_shouldShowDeleteCell;
- (bool)_shouldShowEmployeeInformation;
- (bool)_shouldShowNetworkBenefitsCell;
- (bool)_shouldShowPrivacyPolicyCell;
- (bool)_shouldShowServiceMode;
- (bool)_shouldShowServicingSection;
- (bool)_shouldShowTermsCell;
- (bool)_shouldShowTransferCell;
- (bool)_shouldShowWidgets;
- (void)_showAccountServiceActionViewControllerForAction:(unsigned long long)arg1;
- (bool)_showExpressDetails;
- (void)_showPeerPaymentActionViewControllerForAction:(unsigned long long)arg1;
- (void)_showSpinner:(bool)arg1 inCellAtRowIndexPath:(id)arg2;
- (void)_showSpinner:(bool)arg1 inCellAtRowIndexPath:(id)arg2 detailText:(id)arg3;
- (bool)_showsTransactionHistorySwitch;
- (id)_spinnerCellForTableView:(id)arg1;
- (void)_startPendingTransactionTimer;
- (id)_subtitleCellForTableView:(id)arg1;
- (id)_switchCellWithText:(id)arg1 forTableView:(id)arg2;
- (void)_tabBarSegmentChanged:(id)arg1;
- (id)_titleForScheduledPaymentsSection;
- (bool)_transactionCellEditActionsGenerateWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionCountByPeriodCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionCountFormatter;
- (bool)_transactionDeepLinkingEnabled;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (bool)_transactionSectionsDataIsChangedForNewTransactions:(id)arg1 oldTransactions:(id)arg2 newtransactionCountByPeriod:(id)arg3 oldtransactionCountByPeriod:(id)arg4;
- (id)_transactionYearFormatter;
- (id)_transactionsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_transactionsSwitchChanged:(id)arg1;
- (id)_transferCardCellForTableView:(id)arg1;
- (long long)_transitCellGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_updateAmpEligibility;
- (void)_updateCashbackPeerPaymentResolutionSection;
- (void)_updateDisplayableBalances;
- (void)_updateDisplayableBalancesAndTransitPropertiesWithBalances:(id)arg1 transitProperties:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_updateDisplayableBalancesWithBalances:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_updateExpressPassInformation;
- (void)_updateHeaderActionView;
- (bool)_updateHeaderHeightDeterminingLayout:(bool)arg1;
- (void)_updatePassProperties:(bool)arg1;
- (void)_updatePeerPaymentAccount;
- (void)_updatePeerPaymentPreferences;
- (void)_updatePeerPaymentPreferencesSectionVisibilityAndReloadIfNecessary;
- (void)_updatePeerPaymentPreferencesWithNewPreferences:(id)arg1;
- (void)_updateTabBar;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTransitPassPropertiesSections;
- (void)_updateTransitPropertiesWithCompletion:(id /* block */)arg1;
- (id)_widgetCellForTableView:(id)arg1;
- (void)accountAutomaticPaymentsController:(id)arg1 didSchedulePayment:(id)arg2;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)accountServicePerformActionViewController:(id)arg1 didSchedulePayments:(id)arg2;
- (void)accountServicePerformActionViewControllerDidCancel:(id)arg1;
- (void)accountServicePerformActionViewControllerDidPerformAction:(id)arg1;
- (void)addMoney;
- (void)ampEnrollmentManager:(id)arg1 didEnrollPaymentPass:(id)arg2 success:(bool)arg3;
- (void)authAndDecryptWithVirtualCard:(id)arg1;
- (void)balanceDetailsViewController:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalance:(id)arg3;
- (void)callIssuer;
- (bool)canBeShownFromSuspendedState;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)contentIsLoaded;
- (void)dealloc;
- (id)deleteOverrider;
- (id)detailTextColor;
- (void)didChangeVerificationPresentation;
- (void)emailIssuer;
- (void)executeAfterContentIsLoaded:(id /* block */)arg1;
- (id)highlightColor;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 accountService:(id)arg4 style:(long long)arg5 passLibraryDataProvider:(id)arg6 paymentServiceDataProvider:(id)arg7;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 accountService:(id)arg4 style:(long long)arg5 passLibraryDataProvider:(id)arg6 paymentServiceDataProvider:(id)arg7 rendererState:(id)arg8 context:(id)arg9;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 style:(long long)arg4 passLibraryDataProvider:(id)arg5 paymentServiceDataProvider:(id)arg6;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 style:(long long)arg4 passLibraryDataProvider:(id)arg5 paymentServiceDataProvider:(id)arg6 rendererState:(id)arg7 context:(id)arg8;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4;
- (bool)isTotalBalanceCellSelectable;
- (id)linkTextColor;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)openBusinessChat;
- (void)openIssuerWebsite;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)paymentDetailsViewController:(id)arg1 didCancelPayment:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)peerPaymentActionViewControllerDidCancel:(id)arg1;
- (void)peerPaymentActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)performPaymentPassAction:(id)arg1;
- (void)physicalCardActionController:(id)arg1 didChangeToState:(long long)arg2 withError:(id)arg3;
- (double)pkui_preferredNavigationBarBackgroundOpacity;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)postServiceModeNotification;
- (void)presentBalanceDetails;
- (void)presentBankAccounts;
- (void)presentCardNumbers;
- (void)presentContactIssuerSheet;
- (void)presentSchedulePayments;
- (void)presentTermsAndConditionsWithRow:(unsigned long long)arg1;
- (void)presentTopUp;
- (void)presentTransactionDetailsForTransaction:(id)arg1 animated:(bool)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(bool)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)primaryTextColor;
- (void)refreshControlValueChanged:(id)arg1;
- (void)reloadSection:(unsigned long long)arg1;
- (void)reloadSections:(id)arg1;
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setDeleteOverrider:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setShowDoneButton:(bool)arg1;
- (void)setWarningTextColor:(id)arg1;
- (bool)shouldAllowRefresh;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)topUpActionForRow:(long long)arg1 balance:(id*)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transferToBank;
- (void)updateActivationFooterViewContents;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)warningTextColor;
- (void)willMoveToParentViewController:(id)arg1;

@end
