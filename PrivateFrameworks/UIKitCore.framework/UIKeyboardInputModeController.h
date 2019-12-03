/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardInputModeController : NSObject {
    NSArray * _allExtensions;
    NSArray * _allowedExtensions;
    bool  _cacheNeedsRefresh;
    UIKeyboardInputMode * _currentInputMode;
    UIKeyboardInputMode * _currentUsedInputMode;
    <UIKeyboardInputModeControllerDelegate> * _delegate;
    UITextInputMode * _documentInputMode;
    bool  _excludeExtensionInputModes;
    id  _extensionMatchingContext;
    NSString * _inputModeContextIdentifier;
    NSArray * _inputModesWithoutHardwareSupport;
    NSObject * _keyboardTagForUserNotification;
    UIKeyboardInputMode * _lastUsedInputMode;
    bool  _loadingExtensions;
    bool  _needsUpdateExtensions;
    NSString * _newModeForUserNotification;
    UIKeyboardInputMode * _nextInputModeToUse;
    int  _notifyPasscodeChangedToken;
    bool  _shouldRunContinuousDiscovery;
    bool  _skipExtensionInputModes;
    bool  _suppressCurrentPublicInputMode;
    struct __CFUserNotification { } * _userNotification;
    struct __CFRunLoopSource { } * _userNotificationRunLoopSource;
    NSArray * _userSelectableKeyboardInputModeIdentifiers;
    NSArray * _userSelectableKeyboardInputModes;
    NSArray * defaultInputModes;
    NSArray * defaultKeyboardInputModes;
    NSArray * defaultNormalizedInputModes;
    NSArray * defaultRawInputModes;
    bool  disableFloatingKeyboardFilter;
    NSArray * enabledInputModes;
    NSArray * keyboardInputModeIdentifiers;
    NSArray * keyboardInputModes;
    NSArray * normalizedInputModes;
    NSArray * suggestedInputModesForSiriLanguage;
}

@property (nonatomic, readonly) NSArray *activeDictationLanguages;
@property (nonatomic, readonly) NSArray *activeDictationSupportedInputModeIdentifiers;
@property (readonly) NSArray *activeInputModeIdentifiers;
@property (readonly) NSArray *activeUserSelectableInputModeIdentifiers;
@property (nonatomic, readonly) NSArray *allowedExtensions;
@property (nonatomic, readonly) bool containsDictationSupportedInputMode;
@property (retain) UIKeyboardInputMode *currentInputMode;
@property (nonatomic) UIKeyboardInputMode *currentInputModeInPreference;
@property (nonatomic, readonly) UIKeyboardInputMode *currentLinguisticInputMode;
@property (nonatomic, readonly) UIKeyboardInputMode *currentPublicInputMode;
@property (nonatomic, readonly) UIKeyboardInputMode *currentSystemInputMode;
@property (nonatomic, retain) UIKeyboardInputMode *currentUsedInputMode;
@property (retain) NSArray *defaultInputModes;
@property (retain) NSArray *defaultKeyboardInputModes;
@property (retain) NSArray *defaultNormalizedInputModes;
@property (nonatomic, copy) NSArray *defaultRawInputModes;
@property (nonatomic) <UIKeyboardInputModeControllerDelegate> *delegate;
@property (nonatomic) bool disableFloatingKeyboardFilter;
@property (nonatomic, retain) UITextInputMode *documentInputMode;
@property (nonatomic, readonly) NSArray *enabledDictationLanguages;
@property (readonly) NSArray *enabledInputModeIdentifiers;
@property (readonly) NSArray *enabledInputModeLanguages;
@property (retain) NSArray *enabledInputModes;
@property (nonatomic, retain) id extensionMatchingContext;
@property (nonatomic, readonly) UIKeyboardInputMode *hardwareInputMode;
@property (nonatomic, copy) NSString *inputModeContextIdentifier;
@property (readonly) NSArray *inputModesWithoutHardwareSupport;
@property (retain) NSArray *keyboardInputModeIdentifiers;
@property (retain) NSArray *keyboardInputModes;
@property (nonatomic, retain) UIKeyboardInputMode *lastUsedInputMode;
@property (nonatomic, readonly) UIKeyboardInputMode *lastUsedInputModeForCurrentContext;
@property (nonatomic, retain) UIKeyboardInputMode *nextInputModeToUse;
@property (readonly) NSArray *normalizedEnabledInputModeIdentifiers;
@property (retain) NSArray *normalizedInputModes;
@property (nonatomic) bool shouldRunContinuousDiscovery;
@property (retain) NSArray *suggestedInputModesForSiriLanguage;
@property (readonly) NSArray *supportedInputModeIdentifiers;
@property (retain) NSArray *userSelectableKeyboardInputModeIdentifiers;
@property (retain) NSArray *userSelectableKeyboardInputModes;

+ (id)ASCIICapableInputModeIdentifierForPreferredLanguages;
+ (id)disallowedDictationLanguagesForDeviceLanguage;
+ (id)hardwareInputModeAutomaticHardwareLayout;
+ (id)inputModeIdentifierForPreferredLanguages:(id)arg1 passingTest:(id /* block */)arg2;
+ (id)sharedInputModeController;

- (id)_MCFilteredExtensionIdentifiers;
- (id)_allExtensionsFromMatchingExtensions:(id)arg1;
- (void)_beginContinuousDiscoveryIfNeeded;
- (void)_clearAllExtensions;
- (void)_clearAllExtensionsIfNeeded;
- (void)_inputModeChangedWhileContextTracked;
- (bool)_mayContainExtensionInputModes;
- (void)_removeInputModes:(id)arg1;
- (void)_setCurrentAndNextInputModePreference;
- (void)_setCurrentInputMode:(id)arg1 force:(bool)arg2;
- (id)_systemInputModePassingLanguageTest:(id /* block */)arg1;
- (id)_systemInputModePassingTest:(id /* block */)arg1;
- (void)_trackInputModeIfNecessary:(id)arg1;
- (id)activeDictationLanguages;
- (id)activeDictationSupportedInputModeIdentifiers;
- (id)activeInputModeIdentifiers;
- (id)activeInputModes;
- (id)activeUserSelectableInputModeIdentifiers;
- (id)activeUserSelectableInputModes;
- (id)allowedExtensions;
- (id)appendPasscodeInputModes:(id)arg1;
- (void)clearNextInputModeToUse;
- (bool)containsDictationSupportedInputMode;
- (id)currentInputMode;
- (id)currentInputModeInPreference;
- (id)currentLinguisticInputMode;
- (bool)currentLocaleRequiresExtendedSetup;
- (id)currentPublicInputMode;
- (id)currentSystemInputMode;
- (id)currentUsedInputMode;
- (void)dealloc;
- (id)defaultDictationLanguages:(id)arg1;
- (id)defaultEnabledInputModesForCurrentLocale:(bool)arg1;
- (id)defaultInputModes;
- (id)defaultKeyboardInputModes;
- (id)defaultNormalizedInputModes;
- (id)defaultRawInputModes;
- (id)delegate;
- (bool)deviceStateIsLocked;
- (void)didAcceptAddKeyboardInputMode;
- (void)didEnterBackground:(id)arg1;
- (bool)disableFloatingKeyboardFilter;
- (id)documentInputMode;
- (id)enabledDictationLanguages;
- (id)enabledInputModeIdentifiers;
- (id)enabledInputModeIdentifiers:(bool)arg1;
- (id)enabledInputModeLanguages;
- (id)enabledInputModes;
- (id)extensionInputModes;
- (id)extensionMatchingContext;
- (void)extensionsChanged;
- (id)fallbackCurrentInputModeForFilteredInputMode:(id)arg1 fromInputModes:(id)arg2;
- (id)fallbackCurrentInputModeForFilteredInputModeIdentifier:(id)arg1 fromInputModeIdentifiers:(id)arg2;
- (id)filteredInputModesForSiriLanguageFromInputModes:(id)arg1;
- (id)filteredPadInputModesFromInputModes:(id)arg1 withRules:(id)arg2;
- (id)filteredTVInputModesFromInputModes:(id)arg1;
- (id)getDictationSLSLanguagesEnabled;
- (void)getHardwareKeyboardLanguage:(id*)arg1 countryCode:(id*)arg2;
- (void)handleLastUsedInputMode:(id)arg1 withNewInputMode:(id)arg2;
- (void)handleSpecificHardwareKeyboard;
- (id)hardwareInputMode;
- (id)hardwareLayoutToUseForInputMode:(id)arg1;
- (bool)identifierIsValidSystemInputMode:(id)arg1;
- (id)identifiersFromInputModes:(id)arg1;
- (id)init;
- (id)inputModeByReplacingSoftwareLayoutWithSoftwareLayout:(id)arg1 inInputMode:(id)arg2;
- (id)inputModeContextIdentifier;
- (id)inputModeForASCIIToggleWithTraits:(id)arg1;
- (id)inputModeIdentifierLastUsedForLanguage:(id)arg1;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (id)inputModeToAddForKeyboardLanguage:(id)arg1 countryCode:(id)arg2 activeModes:(id)arg3;
- (id)inputModeWithIdentifier:(id)arg1;
- (id)inputModesFromIdentifiers:(id)arg1;
- (id)inputModesWithoutHardwareSupport;
- (bool)isDictationLanguageEnabled:(id)arg1;
- (bool)isLockscreenPasscodeKeyboard;
- (id)keyboardInputModeIdentifiers;
- (id)keyboardInputModes;
- (id)keyboardLanguageForDictationLanguage:(id)arg1;
- (void)keyboardsPreferencesChanged:(id)arg1;
- (id)lastUsedInputMode;
- (id)lastUsedInputModeForCurrentContext;
- (id)lastUsedInputModeForTextInputMode:(id)arg1;
- (void)loadSuggestedInputModesForSiriLanguage;
- (id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(bool)arg2;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(bool)arg2 skipEmoji:(bool)arg3;
- (id)nextInputModeToUse;
- (id)nextInputModeToUseForTraits:(id)arg1;
- (id)nextInputModeToUseForTraits:(id)arg1 updatePreference:(bool)arg2;
- (id)normalizedEnabledInputModeIdentifiers;
- (id)normalizedInputModes;
- (void)performWithForcedExtensionInputModes:(id /* block */)arg1;
- (void)performWithoutExtensionInputModes:(id /* block */)arg1;
- (void)releaseAddKeyboardNotification;
- (void)saveDeviceUnlockPasscodeInputModes;
- (void)setCurrentInputMode:(id)arg1;
- (void)setCurrentInputModeInPreference:(id)arg1;
- (void)setCurrentUsedInputMode:(id)arg1;
- (void)setDefaultInputModes:(id)arg1;
- (void)setDefaultKeyboardInputModes:(id)arg1;
- (void)setDefaultNormalizedInputModes:(id)arg1;
- (void)setDefaultRawInputModes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictationSLSLanguagesEnabled:(id)arg1;
- (void)setDisableFloatingKeyboardFilter:(bool)arg1;
- (void)setDocumentInputMode:(id)arg1;
- (void)setEnabledInputModes:(id)arg1;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setInputModeContextIdentifier:(id)arg1;
- (void)setKeyboardInputModeIdentifiers:(id)arg1;
- (void)setKeyboardInputModes:(id)arg1;
- (void)setLastUsedInputMode:(id)arg1;
- (void)setNextInputModeToUse:(id)arg1;
- (void)setNormalizedInputModes:(id)arg1;
- (void)setShouldRunContinuousDiscovery:(bool)arg1;
- (void)setSuggestedInputModesForSiriLanguage:(id)arg1;
- (void)setUserSelectableKeyboardInputModeIdentifiers:(id)arg1;
- (void)setUserSelectableKeyboardInputModes:(id)arg1;
- (bool)shouldRunContinuousDiscovery;
- (void)showAddKeyboardAlertForInputModeIdentifier:(id)arg1;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)stopDictation;
- (id)suggestedDictationLanguagesForDeviceLanguage;
- (id)suggestedInputModesForCurrentHardwareKeyboardAndSuggestedInputModes:(id)arg1;
- (id)suggestedInputModesForCurrentLocale;
- (id)suggestedInputModesForCurrentLocale:(bool)arg1 fallbackToDefaultInputModes:(bool)arg2;
- (id)suggestedInputModesForHardwareKeyboardLanguage:(id)arg1 countryCode:(id)arg2 inputModes:(id)arg3;
- (id)suggestedInputModesForLocales:(id)arg1;
- (id)suggestedInputModesForPreferredLanguages;
- (id)suggestedInputModesForSiriLanguage;
- (id)supportedInputModeIdentifiers;
- (id)supportedInputModesFromArray:(id)arg1;
- (void)switchToCurrentSystemInputMode;
- (void)switchToDictationInputMode;
- (id)textInputModeForResponder:(id)arg1;
- (void)updateCurrentAndNextInputModes;
- (void)updateCurrentInputMode:(id)arg1;
- (void)updateDefaultInputModesIfNecessaryForIdiom;
- (void)updateEnabledDictationAndSLSLanguagesWithCompletionBlock:(id /* block */)arg1;
- (id)updateEnabledDictationLanguages:(bool)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)updateUserSelectableInputModes;
- (id)userSelectableInputModeIdentifiersFromInputModeIdentifiers:(id)arg1;
- (id)userSelectableInputModesFromInputModes:(id)arg1;
- (id)userSelectableKeyboardInputModeIdentifiers;
- (id)userSelectableKeyboardInputModes;
- (bool)verifyKeyboardExtensionsWithApp;
- (void)willEnterForeground:(id)arg1;

@end
