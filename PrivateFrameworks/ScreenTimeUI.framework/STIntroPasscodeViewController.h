/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroPasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate> {
    id /* block */  _continueHandler;
    NSString * _initialPasscode;
    STIntroductionModel * _model;
    bool  _numeric;
    unsigned long long  _numericLength;
    long long  _passcodeState;
}

@property (readonly, copy) id /* block */ continueHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *initialPasscode;
@property (readonly) STIntroductionModel *model;
@property (getter=isNumeric) bool numeric;
@property unsigned long long numericLength;
@property long long passcodeState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_passcodeView;
- (id /* block */)continueHandler;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(id /* block */)arg2;
- (id)initialPasscode;
- (bool)isNumeric;
- (void)loadView;
- (id)model;
- (void)nextButtonTapped;
- (unsigned long long)numericLength;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeInputView;
- (long long)passcodeState;
- (void)passcodeTypeChanged:(bool)arg1;
- (void)setInitialPasscode:(id)arg1;
- (void)setNumeric:(bool)arg1;
- (void)setNumericLength:(unsigned long long)arg1;
- (void)setPasscodeState:(long long)arg1;
- (void)updatePasscodeType;
- (void)userEnteredPasscode:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
