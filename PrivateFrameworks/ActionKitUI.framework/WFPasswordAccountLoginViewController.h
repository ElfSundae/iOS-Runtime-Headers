/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface WFPasswordAccountLoginViewController : WFAccountLoginViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    UIBarButtonItem * _loadingItem;
    UIBarButtonItem * _loginItem;
    UITextField * _passwordField;
    UITableView * _tableView;
    NSDictionary * _textFieldsByIndexPath;
    UITextField * _usernameField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *loadingItem;
@property (nonatomic, retain) UIBarButtonItem *loginItem;
@property (nonatomic, readonly) NSURL *loginURL;
@property (nonatomic, readonly) UITextField *passwordField;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, copy) NSDictionary *textFieldsByIndexPath;
@property (nonatomic, readonly) UITextField *usernameField;

- (void).cxx_destruct;
- (bool)canAttemptLogin;
- (void)cancelPressed:(id)arg1;
- (void)configureTextField:(id)arg1 forKey:(id)arg2;
- (id)initWithAccountClass:(Class)arg1;
- (void)loadView;
- (id)loadingItem;
- (id)loginItem;
- (void)loginPressed:(id)arg1;
- (id)loginURL;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)passwordField;
- (void)setLoadingItem:(id)arg1;
- (void)setLoginItem:(id)arg1;
- (void)setTextFieldsByIndexPath:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)textFieldsByIndexPath;
- (id)usernameField;
- (bool)usernameIsEmail;

@end
