/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPasscodeLockController : PSListController <DevicePINControllerDelegate> {
    BOOL _canUnlockWatch;
    int _policyDictatedMaxFailedAttempts;
    PSSpecifier *_voiceDialGroupSpecifier;
    PSSpecifier *_voiceDialSpecifier;
}

@property (nonatomic) BOOL canUnlockWatch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (int)passcodeGracePeriod;

- (void).cxx_destruct;
- (void)_didUpdatePasscode:(id)arg1;
- (void)_localizeGracePeriodTitlesForSpecifier:(id)arg1;
- (id)_makeWipeDeviceGroupFooter;
- (void)_setWipeEnabled:(BOOL)arg1;
- (void)_showDeleteSavedFingerprintsAlert;
- (void)_updateGracePeriodForSpecifier:(id)arg1;
- (id)assistantUnderLockEnabled:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (BOOL)canUnlockWatch;
- (void)dealloc;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didAcceptRemovePIN;
- (void)disablePasscodeRequiredSpecifiers:(id)arg1;
- (id)enabledInLockScreen:(id)arg1;
- (int)fingerprintCount;
- (id)graceValue:(id)arg1;
- (id)init;
- (BOOL)isAssistantRestricted;
- (BOOL)isPasscodeSet;
- (BOOL)isVoiceDialRestricted;
- (BOOL)isWalletRestricted;
- (void)profileNotification:(id)arg1;
- (void)setAssistantUnderLockEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setCanUnlockWatch:(BOOL)arg1;
- (void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2;
- (void)setGraceValue:(id)arg1 specifier:(id)arg2;
- (void)setVoiceDial:(id)arg1 specifier:(id)arg2;
- (void)setWallet:(id)arg1 specifier:(id)arg2;
- (void)setWipeEnabled:(id)arg1 specifier:(id)arg2;
- (BOOL)shouldShowVoiceDial;
- (void)showKeychainAlert;
- (void)showPINSheet:(id)arg1;
- (BOOL)showReplyWithMessage;
- (id)specifiers;
- (void)suspend;
- (void)togglePasscode:(id)arg1;
- (void)updateGracePeriodSpecifier;
- (void)updateVoiceDialGroup;
- (id)voiceDial:(id)arg1;
- (id)wallet:(id)arg1;
- (id)wipeEnabled:(id)arg1;

@end
