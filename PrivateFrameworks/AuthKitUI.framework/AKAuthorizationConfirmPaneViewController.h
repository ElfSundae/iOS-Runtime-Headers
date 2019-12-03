/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKAuthorizationConfirmPaneViewController : AKAuthorizationPaneViewController <AKAuthorizationEditableDataSources, AKAuthorizationPasswordAuthenticationDelegate, AKAuthorizationSubPaneConfirmButtonDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    AKTiburonAuthorizationUIReport * _analyticsReport;
    AKAuthorizationSubPaneConfirmButton * _confirmButton;
    AKAuthorizationScopeChoices * _editableScopeChoices;
    bool  _editableScopeChoicesChanged;
    unsigned long long  _editingFamilyNameIndex;
    unsigned long long  _editingGivenNameIndex;
    AKUserInformation * _editingUserInformation;
    AKAuthorizationSubPaneImage * _imageSubPane;
    bool  _internalIsEditingName;
    bool  _internalIsEmailExpanded;
    double  _nameEditHeightChange;
    AKAuthorizationNameFormatter * _nameFormatter;
    AKAuthorizationPresentationContext * _presentationContext;
    UIBarButtonItem * _savedLeftBarButtonItem;
    UIBarButtonItem * _savedRightBarButtonItem;
    NSArray * _validatedScopes;
}

@property (nonatomic, readonly) bool _shouldAllowAuthorization;
@property (nonatomic, retain) AKAuthorizationSubPaneConfirmButton *confirmButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AKAuthorizationScopeChoices *editableScopeChoices;
@property (nonatomic) bool editableScopeChoicesChanged;
@property (nonatomic) unsigned long long editingFamilyNameIndex;
@property (nonatomic) unsigned long long editingGivenNameIndex;
@property (getter=isEditingName, nonatomic) bool editingName;
@property (nonatomic, copy) AKUserInformation *editingUserInformation;
@property (getter=isEmailExpanded, nonatomic) bool emailExpanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AKAuthorizationSubPaneImage *imageSubPane;
@property (nonatomic) bool internalIsEditingName;
@property (nonatomic) bool internalIsEmailExpanded;
@property (nonatomic) double nameEditHeightChange;
@property (nonatomic, retain) AKAuthorizationNameFormatter *nameFormatter;
@property (nonatomic, readonly) AKAuthorizationPresentationContext *presentationContext;
@property (nonatomic, retain) UIBarButtonItem *savedLeftBarButtonItem;
@property (nonatomic, retain) UIBarButtonItem *savedRightBarButtonItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *validatedScopes;

- (void).cxx_destruct;
- (void)_addAuthorizationButtonToPaneContext:(id)arg1;
- (void)_addUseOtherIDButtonToContext:(id)arg1;
- (void)_beginEditing;
- (void)_beginEditingRow:(unsigned long long)arg1;
- (id)_cellForRow:(long long)arg1;
- (id)_cellForScope:(id)arg1 localRow:(long long)arg2;
- (void)_clearAction:(id)arg1 event:(id)arg2;
- (id)_clearButton;
- (id)_clearImage;
- (void)_createIconViewWithIcon:(id)arg1;
- (id)_defaultSharedEmail;
- (id)_doneBarButtonItem;
- (void)_doneButtonSelected:(id)arg1;
- (id)_editingNameCellForRow:(unsigned long long)arg1;
- (id)_emailCellForLocalRow:(long long)arg1;
- (bool)_emailScopeAllowsAuthorization;
- (void)_enableOrDisableConfirmButton;
- (void)_endEditing;
- (void)_fetchWebIconIfNeeded;
- (bool)_getValidEditingGivenName:(id*)arg1 familyName:(id*)arg2;
- (void)_handleAuthorizationError:(id)arg1;
- (bool)_hasAnyScope;
- (bool)_hasEmailScope;
- (bool)_hasNameScope;
- (id)_hideMyEmailCell;
- (double)_iPadNameEditHeightChange;
- (double)_iPhoneNameEditHeightChange;
- (id)_infoLabelText;
- (bool)_isValidEditingName;
- (id)_localizedEmailKey;
- (id)_localizedNameKey;
- (double)_mainSectionScreenMaxY;
- (id)_nameCell;
- (void)_nameEditDone;
- (double)_nameEditHeightChange;
- (bool)_nameScopeAllowsAuthorization;
- (long long)_numberOfRowsInScope:(id)arg1;
- (long long)_numberOfRowsInValidatedScopes;
- (void)_paneDelegate_authorizationPaneViewControllerDidRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(id /* block */)arg2;
- (void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2;
- (void)_performAuthorizationWithRawPassword:(id)arg1;
- (void)_performAuthorizationWithRawPassword:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_performPasswordAuthentication;
- (void)_reloadDataAnimated:(bool)arg1 heightChange:(id /* block */)arg2;
- (void)_reloadDataAnimated:(bool)arg1 heightChange:(id /* block */)arg2 animation:(id /* block */)arg3;
- (void)_reloadDataAnimated:(bool)arg1 heightChange:(id /* block */)arg2 animation:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_selectEmailLocalRow:(long long)arg1;
- (void)_selectHideMyEmail;
- (void)_selectRow:(long long)arg1;
- (void)_selectScope:(id)arg1 localRow:(long long)arg2;
- (void)_selectShareMyEmail;
- (void)_selectSingleEmailAtIndex:(long long)arg1;
- (void)_setCancelButtonEnabled:(bool)arg1;
- (void)_setEditingName:(bool)arg1 clearing:(bool)arg2 animated:(bool)arg3;
- (void)_setFamilyNameFromTextField:(id)arg1;
- (void)_setGivenNameFromTextField:(id)arg1;
- (void)_setupFamilyNameCell:(id)arg1;
- (void)_setupGivenNameCell:(id)arg1;
- (void)_setupIconView;
- (void)_setupValidatedScopes;
- (id)_shareMyEmailCell;
- (bool)_shouldAllowAuthorization;
- (bool)_shouldOverrideIntrinsicContentHeight;
- (id)_singleEmailCellForIndex:(long long)arg1;
- (id)_textFieldForRow:(unsigned long long)arg1;
- (id)_textFromTextField:(id)arg1;
- (void)_transitionFromEditingNameAnimated:(bool)arg1;
- (void)_transitionToEditingNameAnimated:(bool)arg1;
- (void)_updateDataSourceWithValidEditingName;
- (void)_updateIconViewWithIconContext:(id)arg1;
- (void)_updateLayoutForHeightChange:(double)arg1;
- (void)_useOtherIDButtonSelected:(id)arg1;
- (id)confirmButton;
- (double)contentScrollOffset;
- (void)dealloc;
- (void)didSelectEditScope:(id)arg1 options:(id)arg2;
- (id)editableScopeChoices;
- (bool)editableScopeChoicesChanged;
- (unsigned long long)editingFamilyNameIndex;
- (unsigned long long)editingGivenNameIndex;
- (id)editingUserInformation;
- (id)imageSubPane;
- (id)init;
- (id)initWithAuthorizationContext:(id)arg1 scopeChoices:(id)arg2;
- (bool)internalIsEditingName;
- (bool)internalIsEmailExpanded;
- (double)intrinsicContentHeight;
- (bool)isEditingName;
- (bool)isEmailExpanded;
- (double)nameEditHeightChange;
- (id)nameFormatter;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2;
- (void)performAuthorization;
- (void)performPasswordAuthentication;
- (id)presentationContext;
- (id)savedLeftBarButtonItem;
- (id)savedRightBarButtonItem;
- (void)setConfirmButton:(id)arg1;
- (void)setEditableScopeChoicesChanged:(bool)arg1;
- (void)setEditingFamilyNameIndex:(unsigned long long)arg1;
- (void)setEditingGivenNameIndex:(unsigned long long)arg1;
- (void)setEditingName:(bool)arg1;
- (void)setEditingName:(bool)arg1 animated:(bool)arg2;
- (void)setEditingNameClearing:(bool)arg1 animated:(bool)arg2;
- (void)setEditingUserInformation:(id)arg1;
- (void)setEmailExpanded:(bool)arg1;
- (void)setEmailExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setImageSubPane:(id)arg1;
- (void)setInternalIsEditingName:(bool)arg1;
- (void)setInternalIsEmailExpanded:(bool)arg1;
- (void)setNameEditHeightChange:(double)arg1;
- (void)setNameFormatter:(id)arg1;
- (void)setPaneDelegate:(id)arg1;
- (void)setSavedLeftBarButtonItem:(id)arg1;
- (void)setSavedRightBarButtonItem:(id)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1;
- (void)subpaneConfirmButtonDidFailBiometry:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)validateReadyForAuthorization;
- (id)validatedScopes;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
