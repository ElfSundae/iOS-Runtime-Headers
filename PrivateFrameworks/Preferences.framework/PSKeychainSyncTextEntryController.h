/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSKeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {
    BOOL  _convertsNumeralsToASCII;
    BOOL  _hidesNextButton;
    unsigned int  _numberOfPasscodeFields;
    BOOL  _secureTextEntry;
    PSTableCell * _textEntryCell;
    PSSpecifier * _textEntrySpecifier;
    int  _textEntryType;
    UIView<UIKeyInput> * _textEntryView;
    BOOL  _textFieldHasRoundBorder;
    NSString * _textValue;
}

@property (nonatomic) BOOL convertsNumeralsToASCII;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hidesNextButton;
@property (nonatomic) unsigned int numberOfPasscodeFields;
@property (nonatomic) BOOL secureTextEntry;
@property (readonly) Class superclass;
@property (nonatomic) int textEntryType;
@property (nonatomic) BOOL textFieldHasRoundBorder;
@property (nonatomic, retain) NSString *textValue;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)convertsNumeralsToASCII;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (id)getTextValueForSpecifier:(id)arg1;
- (BOOL)hidesNextButton;
- (id)init;
- (void)loadView;
- (void)nextPressed;
- (unsigned int)numberOfPasscodeFields;
- (void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2;
- (id)placeholderText;
- (BOOL)secureTextEntry;
- (void)setConvertsNumeralsToASCII:(BOOL)arg1;
- (void)setHidesNextButton:(BOOL)arg1;
- (void)setNumberOfPasscodeFields:(unsigned int)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setTextEntryText:(id)arg1;
- (void)setTextEntryType:(int)arg1;
- (void)setTextFieldHasRoundBorder:(BOOL)arg1;
- (void)setTextValue:(id)arg1;
- (void)setTextValue:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (id)textEntrySpecifier;
- (id)textEntryText;
- (int)textEntryType;
- (id)textEntryView;
- (void)textEntryViewDidChange:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (BOOL)textFieldHasRoundBorder;
- (id)textValue;
- (void)updateNextButton;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willBecomeActive;

@end
