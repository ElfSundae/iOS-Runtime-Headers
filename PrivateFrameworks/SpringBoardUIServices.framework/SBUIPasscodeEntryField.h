/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate> {
    UIColor *_customBackgroundColor;
    <SBUIPasscodeEntryFieldDelegate> *_delegate;
    BOOL _ignoreCallbacks;
    NSMutableCharacterSet *_numericTrimmingSet;
    BOOL _resigningFirstResponder;
    UITextField *_textField;
}

@property (nonatomic, retain) UIColor *customBackgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPasscodeEntryFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (getter=_textField, nonatomic, readonly) UITextField *textField;

+ (BOOL)_usesTextFieldForFirstResponder;

- (void).cxx_destruct;
- (void)_appendString:(id)arg1;
- (void)_autofillForMesaWithCompletion:(id /* block */)arg1;
- (void)_deleteLastCharacter;
- (void)_handleKeyUIEvent:(id)arg1 source:(int)arg2;
- (BOOL)_hasAnyCharacters;
- (void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2;
- (void)_setLuminosityBoost:(float)arg1;
- (id)_textField;
- (struct CGSize { float x1; float x2; })_viewSize;
- (void)appendString:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)customBackgroundColor;
- (id)delegate;
- (void)deleteLastCharacter;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
- (BOOL)isFirstResponder;
- (void)notePasscodeFieldDidAcceptEntry;
- (void)notePasscodeFieldTextDidChange;
- (void)reset;
- (void)resetForFailedPasscode;
- (BOOL)resignFirstResponder;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStringValue:(id)arg1;
- (BOOL)shouldInsertPasscodeText:(id)arg1;
- (id)stringValue;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
