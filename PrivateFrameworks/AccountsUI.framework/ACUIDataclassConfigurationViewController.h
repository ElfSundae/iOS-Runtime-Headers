/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIDataclassConfigurationViewController : ACUIViewController {
    ACAccount *_account;
    NSString *_accountIdentifier;
    PSSpecifier *_accountSummaryCellSpecifier;
    NSMutableDictionary *_allDesiredDataclassActions;
    id /* block */ _configurationCompletion;
    PSSpecifier *_dataclassGroupSpecifier;
    NSArray *_dataclassSpecifiers;
    PSSpecifier *_deleteButtonSpecifier;
    BOOL _didShowDataclassActionPickerDuringRemoval;
    NSMutableArray *_dirtyDataclassCells;
    BOOL _firstTimeSetup;
    BOOL _forceMailSetup;
    BOOL _isMailSetupForced;
    BOOL _isMergingSyncData;
    NSArray *_otherSpecifiers;
    NSArray *_preEnabledDataclasses;
    BOOL _shouldEnableAccountSummaryCell;
    BOOL _shouldEnableDeleteAccountButton;
    BOOL _shouldShowDeleteAccountButton;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) id /* block */ configurationCompletion;
@property (nonatomic, retain) PSSpecifier *dataclassGroupSpecifier;
@property (nonatomic, readonly) PSSpecifier *deleteButtonSpecifier;
@property (getter=isFirstTimeSetup, nonatomic) BOOL firstTimeSetup;
@property (nonatomic) BOOL isMailSetupForced;
@property (nonatomic, copy) NSArray *preEnabledDataclasses;
@property (nonatomic) BOOL shouldEnableAccountSummaryCell;
@property (nonatomic) BOOL shouldEnableDeleteAccountButton;
@property (nonatomic) BOOL shouldShowDeleteAccountButton;

+ (BOOL)shouldPresentAsModalSheet;

- (void).cxx_destruct;
- (id)_accountIdentifier;
- (id)_activityInProgressTextForDataclass:(id)arg1 isBeingEnabled:(BOOL)arg2;
- (BOOL)_confirmDeleteLocalDataForDataclasses:(id)arg1;
- (BOOL)_confirmKeepLocalDataForDataclasses:(id)arg1;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (BOOL)_isShowingDeleteAccountButton;
- (void)_markDataclassSwitchCellAsDirty:(id)arg1;
- (id)_navigationTitle;
- (void)_notifyOfAccountSetupCompletion;
- (id)_orderDataclassList:(id)arg1;
- (BOOL)_promptUserToConfirmAccountDeletion;
- (void)_setDataclass:(id)arg1 enabled:(BOOL)arg2;
- (void)_showDelayedActivityInProgressUIWithMessage:(id)arg1;
- (id)_specifiersForDataclasses:(id)arg1;
- (id)account;
- (Class)accountInfoControllerClass;
- (void)appendDeleteAccountButton;
- (void)cancelButtonTapped:(id)arg1;
- (id /* block */)configurationCompletion;
- (id)dataclassGroupSpecifier;
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;
- (id)dataclassSwitchStateForSpecifier:(id)arg1;
- (int)deleteButtonIndex;
- (id)deleteButtonSpecifier;
- (void)deleteButtonTapped:(id)arg1;
- (id)displayedAccountTypeString;
- (id)displayedShortAccountTypeString;
- (void)doneButtonTapped:(id)arg1;
- (void)forceMailSetup;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (id)init;
- (BOOL)isFirstTimeSetup;
- (BOOL)isMailSetupForced;
- (id)messageForAccountDeletionProgressUI;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (id)otherSpecifiers;
- (id)preEnabledDataclasses;
- (void)reloadDynamicSpecifiersWithAnimation:(BOOL)arg1;
- (void)resetDirtyDataclassSwitchCells;
- (void)setAccount:(id)arg1;
- (void)setConfigurationCompletion:(id /* block */)arg1;
- (void)setDataclass:(id)arg1 enabled:(BOOL)arg2;
- (void)setDataclassGroupSpecifier:(id)arg1;
- (void)setFirstTimeSetup:(BOOL)arg1;
- (void)setIsMailSetupForced:(BOOL)arg1;
- (void)setPreEnabledDataclasses:(id)arg1;
- (void)setShouldEnableAccountSummaryCell:(BOOL)arg1;
- (void)setShouldEnableDeleteAccountButton:(BOOL)arg1;
- (void)setShouldShowDeleteAccountButton:(BOOL)arg1;
- (BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1;
- (BOOL)shouldEnableAccountSummaryCell;
- (BOOL)shouldEnableDeleteAccountButton;
- (BOOL)shouldShowDeleteAccountButton;
- (BOOL)shouldShowOtherSpecifiersDuringFirstSetup;
- (BOOL)shouldShowSpecifierForDataclass:(id)arg1;
- (BOOL)shouldVerifyBeforeAccountSave;
- (id)specifierForAccountSummaryCell;
- (id)specifierForDataclass:(id)arg1;
- (id)specifiers;
- (id)titleForDeleteButton;
- (id)valueForAccountSummaryCell;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
