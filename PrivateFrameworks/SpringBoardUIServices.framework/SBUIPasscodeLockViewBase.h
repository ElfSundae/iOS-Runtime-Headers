/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewBase : UIView <SBFLegibilitySettingsProviderDelegate, SBUIBiometricResourceObserver, SBUIPasscodeLockView, SBUIPasscodeLockView_Internal> {
    BOOL  _allowsStatusTextUpdatingOnResignFirstResponder;
    _UIFeedbackEventBehavior * _authenticationFeedbackBehavior;
    float  _backgroundAlpha;
    <SBFLegibilitySettingsProvider> * _backgroundLegibilitySettingsProvider;
    BOOL  _becameVisible;
    unsigned int  _biometricMatchMode;
    <BSInvalidatable> * _biometricMatchingAssertion;
    NSMutableSet * _biometricMatchingEnabledOverrideReasons;
    unsigned int  _biometricMatchingState;
    <SBUIBiometricResource> * _biometricResource;
    float  _currentBacklightLevel;
    int  _currentPendingBioUnlockToken;
    UIColor * _customBackgroundColor;
    <SBUIPasscodeLockViewDelegate> * _delegate;
    BOOL  _deviceHasBeenUnlockedOnceSinceBoot;
    SBUIPasscodeEntryField * _entryField;
    BOOL  _isBiometricAuthenticationAllowed;
    _UIFeedbackKeyboardBehavior * _keyboardFeedbackBehavior;
    _UILegibilitySettings * _legibilitySettings;
    float  _luminanceBoost;
    BOOL  _mesaLockedOut;
    BOOL  _needStatusTextUpdate;
    BOOL  _pendingBioUnlock;
    BOOL  _playsKeypadSounds;
    NSTimer * _screenBrightnessChangedTimer;
    BOOL  _screenOn;
    BOOL  _shouldResetForFailedPasscodeAttempt;
    BOOL  _showsCancelButton;
    BOOL  _showsEmergencyCallButton;
    BOOL  _showsStatusField;
    unsigned int  _statusState;
    NSString * _statusSubtitleText;
    NSString * _statusText;
    int  _style;
}

@property (getter=_entryField, setter=_setEntryField:, nonatomic, retain) SBUIPasscodeEntryField *_entryField;
@property (nonatomic, retain) _UIFeedbackEventBehavior *authenticationFeedbackBehavior;
@property (nonatomic) float backgroundAlpha;
@property (nonatomic, retain) <SBFLegibilitySettingsProvider> *backgroundLegibilitySettingsProvider;
@property (getter=isBiometricAuthenticationAllowed, nonatomic) BOOL biometricAuthenticationAllowed;
@property (nonatomic) unsigned int biometricMatchMode;
@property (nonatomic, retain) <SBUIBiometricResource> *biometricResource;
@property (nonatomic, retain) UIColor *customBackgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPasscodeLockViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _UIFeedbackKeyboardBehavior *keyboardFeedbackBehavior;
@property (getter=_luminosityBoost, setter=_setLuminosityBoost:, nonatomic) float luminosityBoost;
@property (nonatomic, readonly) NSString *passcode;
@property (nonatomic) BOOL playsKeypadSounds;
@property (nonatomic, retain) NSTimer *screenBrightnessChangedTimer;
@property (getter=isScreenOn, nonatomic) BOOL screenOn;
@property (nonatomic) BOOL shouldResetForFailedPasscodeAttempt;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsEmergencyCallButton;
@property (nonatomic) BOOL showsStatusField;
@property (getter=_statusState, setter=_setStatusState:, nonatomic) unsigned int statusState;
@property (getter=_statusSubtitleText, setter=_setStatusSubtitleText:, nonatomic, copy) NSString *statusSubtitleText;
@property (getter=_statusText, setter=_setStatusText:, nonatomic, copy) NSString *statusText;
@property (nonatomic) int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearBrightnessChangeTimer;
- (id)_defaultStatusText;
- (id)_entryField;
- (void)_evaluateBiometricMatchingState;
- (void)_evaluateLuminance;
- (void)_handleBiometricAuthentication;
- (BOOL)_isBoundsPortraitOriented;
- (void)_luminanceBoostDidChange;
- (float)_luminanceBoostFromDisplayBrightness;
- (float)_luminanceBoostFromLegibility;
- (float)_luminosityBoost;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(BOOL)arg1;
- (void)_noteScreenBrightnessDidChange;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (int)_orientation;
- (void)_overrideBiometricMatchingEnabled:(BOOL)arg1 forReason:(id)arg2;
- (void)_playAuthenticationFeedbackForSuccess:(BOOL)arg1 jiggleLock:(BOOL)arg2;
- (void)_resetForFailedMesaAttempt;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (void)_resetStatusText;
- (void)_screenBrightnessReallyDidChange;
- (void)_sendDelegateKeypadKeyDown;
- (void)_sendDelegateKeypadKeyUp;
- (void)_setBiometricMatchingState:(unsigned int)arg1;
- (void)_setEntryField:(id)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (void)_setLuminosityBoost:(float)arg1;
- (void)_setStatusState:(unsigned int)arg1;
- (void)_setStatusState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_setStatusSubtitleText:(id)arg1;
- (void)_setStatusText:(id)arg1;
- (unsigned int)_statusState;
- (unsigned int)_statusStateForLockoutState:(unsigned int)arg1;
- (id)_statusSubtitleText;
- (id)_statusText;
- (void)_updateStatusStateForLockoutIfNecessaryAnimatedly:(BOOL)arg1;
- (void)_updateStatusTextForBioEvent:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)authenticationFeedbackBehavior;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(id /* block */)arg1;
- (float)backgroundAlpha;
- (id)backgroundLegibilitySettingsProvider;
- (BOOL)becomeFirstResponder;
- (unsigned int)biometricMatchMode;
- (id)biometricResource;
- (void)biometricResource:(id)arg1 matchingEnabledDidChange:(BOOL)arg2;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned int)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)customBackgroundColor;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBiometricAuthenticationAllowed;
- (BOOL)isFirstResponder;
- (BOOL)isScreenOn;
- (id)keyboardFeedbackBehavior;
- (id)passcode;
- (BOOL)playsKeypadSounds;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)reset;
- (void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
- (void)resetForFailedPasscode;
- (void)resetForScreenOff;
- (BOOL)resignFirstResponder;
- (id)screenBrightnessChangedTimer;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
- (void)setAuthenticationFeedbackBehavior:(id)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setBackgroundLegibilitySettingsProvider:(id)arg1;
- (void)setBiometricAuthenticationAllowed:(BOOL)arg1;
- (void)setBiometricMatchMode:(unsigned int)arg1;
- (void)setBiometricResource:(id)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardFeedbackBehavior:(id)arg1;
- (void)setNeedsStatusTextUpdate;
- (void)setPlaysKeypadSounds:(BOOL)arg1;
- (void)setScreenBrightnessChangedTimer:(id)arg1;
- (void)setScreenOn:(BOOL)arg1;
- (void)setShouldResetForFailedPasscodeAttempt:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setShowsStatusField:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (BOOL)shouldResetForFailedPasscodeAttempt;
- (BOOL)showsCancelButton;
- (BOOL)showsEmergencyCallButton;
- (BOOL)showsStatusField;
- (int)style;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
- (void)updateStatusTextAnimated:(BOOL)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
