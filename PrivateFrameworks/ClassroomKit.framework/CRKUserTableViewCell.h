/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKUserTableViewCell : PSTableCell <CRKUserEditorTableViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    CNAvatarViewController * _avatarViewController;
    CNMutableContact * _contact;
    <CRKUserTableViewCellDelegate> * _delegate;
    UIButton * _editButton;
    BOOL  _editingUser;
    UITableView * _editorTableView;
    UITextField * _familyNameTextField;
    UILabel * _fullNameLabel;
    UITextField * _givenNameTextField;
    NSLayoutConstraint * _heightConstraint;
    UITextField * _phoneticFamilyNameTextField;
    UITextField * _phoneticGivenNameTextField;
    UIViewController * _presentingViewController;
    BOOL  _showsFamilyNameFirst;
    BOOL  _showsPhoneticName;
    CRKUser * _user;
    UIImageView * _userImageView;
    int  mFamilyNameCellIndex;
    int  mGivenNameCellIndex;
    int  mPhoneticFamilyNameCellIndex;
    int  mPhoneticGivenNameCellIndex;
}

@property (nonatomic, retain) CNAvatarViewController *avatarViewController;
@property (nonatomic, retain) CNMutableContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKUserTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *editButton;
@property (nonatomic) BOOL editingUser;
@property (nonatomic, retain) UITableView *editorTableView;
@property (nonatomic) UITextField *familyNameTextField;
@property (nonatomic, retain) UILabel *fullNameLabel;
@property (nonatomic) UITextField *givenNameTextField;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic) UITextField *phoneticFamilyNameTextField;
@property (nonatomic) UITextField *phoneticGivenNameTextField;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL showsFamilyNameFirst;
@property (nonatomic) BOOL showsPhoneticName;
@property (readonly) Class superclass;
@property (nonatomic, retain) CRKUser *user;
@property (nonatomic, retain) UIImageView *userImageView;

- (void).cxx_destruct;
- (void)_didPressEditButton:(id)arg1;
- (void)_didTapUserImage:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })aspectFillFrameForViewOfSize:(struct CGSize { float x1; float x2; })arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)avatarViewController;
- (BOOL)becomeFirstResponder;
- (id)contact;
- (id)delegate;
- (id)editButton;
- (BOOL)editingUser;
- (id)editorTableView;
- (id)familyNameTextField;
- (id)fullNameLabel;
- (id)givenNameTextField;
- (id)heightConstraint;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (int)indexForTextField:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)makeImagePickerController;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)phoneticFamilyNameTextField;
- (id)phoneticGivenNameTextField;
- (id)presentingViewController;
- (BOOL)resignFirstResponder;
- (void)setAvatarViewController:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setEditingUser:(BOOL)arg1;
- (void)setEditorTableView:(id)arg1;
- (void)setFamilyNameTextField:(id)arg1;
- (void)setFullNameLabel:(id)arg1;
- (void)setGivenNameTextField:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setPhoneticFamilyNameTextField:(id)arg1;
- (void)setPhoneticGivenNameTextField:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setShowsFamilyNameFirst:(BOOL)arg1;
- (void)setShowsPhoneticName:(BOOL)arg1;
- (void)setUser:(id)arg1;
- (void)setUserImageView:(id)arg1;
- (BOOL)showsFamilyNameFirst;
- (BOOL)showsPhoneticName;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)textFieldAtIndex:(int)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateCellAccessory;
- (void)updateCellIndexes;
- (void)updateHeightConstraint;
- (void)updateShouldShowFamilyNameFirstForNameComponents:(id)arg1;
- (void)updateUserImageView;
- (id)user;
- (void)userDidChange;
- (void)userEditorTableViewControllerDidFinishEditingUser:(id)arg1;
- (id)userImageView;

@end
