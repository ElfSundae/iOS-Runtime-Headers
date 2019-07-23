/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKUserEditorTableViewController : UITableViewController <CRKSwitchTableViewCellDelegate> {
    <CRKUserEditorTableViewControllerDelegate> * _delegate;
    BOOL  _showsFamilyNameName;
    BOOL  _showsPhoneticName;
    CRKUser * _user;
    int  mMeCardSwitchCellSection;
    CRKUser * mMeCardUser;
    int  mNumberOfSections;
    BOOL  mUseMeCardUser;
    int  mUserCellSection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKUserEditorTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL showsFamilyNameName;
@property (nonatomic) BOOL showsPhoneticName;
@property (readonly) Class superclass;
@property (nonatomic, retain) CRKUser *user;

- (void).cxx_destruct;
- (id)delegate;
- (void)editorTextFieldDidChange:(id)arg1;
- (id)init;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsFamilyNameName:(BOOL)arg1;
- (void)setShowsPhoneticName:(BOOL)arg1;
- (void)setUser:(id)arg1;
- (BOOL)showsFamilyNameName;
- (BOOL)showsPhoneticName;
- (void)switchCellValueDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateTableView;
- (id)user;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
