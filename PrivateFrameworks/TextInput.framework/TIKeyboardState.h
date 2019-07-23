/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {
    union { 
        int integerValue; 
        struct { 
            unsigned int displayed : 1; 
            unsigned int autoDisplayMode : 1; 
        } fields; 
    } _autocorrectionListUIState;
    NSString *_clientIdentifier;
    TIKeyboardCandidate *_currentCandidate;
    NSUUID *_documentIdentifier;
    TIDocumentState *_documentState;
    NSString *_inputForMarkedText;
    NSString *_inputMode;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    union { 
        int integerValue; 
        struct { 
            unsigned int userSelectedCurrentCandidate : 1; 
            unsigned int shouldSkipCandidateSelection : 1; 
            unsigned int suppressingCandidateSelection : 1; 
            unsigned int needsCandidateMetadata : 1; 
            unsigned int keyboardEventsLagging : 1; 
            unsigned int hardwareKeyboardMode : 1; 
            unsigned int splitKeyboardMode : 1; 
            unsigned int wordLearningEnabled : 1; 
            unsigned int autocorrectionEnabled : 1; 
            unsigned int shortcutConversionEnabled : 1; 
            unsigned int candidateSelectionPredictionEnabled : 1; 
            unsigned int autocapitalizationEnabled : 1; 
        } fields; 
    } _mask;
    NSString *_recipientIdentifier;
    NSString *_responseContext;
    NSString *_searchStringForMarkedText;
    int _shiftState;
    TITextInputTraits *_textInputTraits;
}

@property (nonatomic) BOOL autocapitalizationEnabled;
@property (nonatomic) unsigned int autocapitalizationType;
@property (nonatomic) BOOL autocorrectionEnabled;
@property (nonatomic) BOOL autocorrectionListUIAutoDisplayMode;
@property (nonatomic) BOOL autocorrectionListUIDisplayed;
@property (nonatomic) BOOL candidateSelectionPredictionEnabled;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, retain) TIKeyboardCandidate *currentCandidate;
@property (nonatomic, retain) NSUUID *documentIdentifier;
@property (nonatomic, retain) TIDocumentState *documentState;
@property (nonatomic) BOOL hardwareKeyboardMode;
@property (nonatomic, copy) NSString *inputForMarkedText;
@property (nonatomic, copy) NSString *inputMode;
@property (nonatomic, retain) TIKeyboardLayout *keyLayout;
@property (nonatomic) BOOL keyboardEventsLagging;
@property (nonatomic) unsigned int keyboardType;
@property (nonatomic, copy) TIKeyboardLayoutState *layoutState;
@property (nonatomic) BOOL needsCandidateMetadata;
@property (nonatomic, copy) NSString *recipientIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic, copy) NSString *searchStringForMarkedText;
@property (nonatomic) BOOL secureTextEntry;
@property (nonatomic) int shiftState;
@property (nonatomic) BOOL shortcutConversionEnabled;
@property (nonatomic) BOOL shouldSkipCandidateSelection;
@property (nonatomic) BOOL splitKeyboardMode;
@property (nonatomic) BOOL suppressingCandidateSelection;
@property (nonatomic, retain) TITextInputTraits *textInputTraits;
@property (nonatomic) BOOL userSelectedCurrentCandidate;
@property (nonatomic) BOOL wordLearningEnabled;

+ (BOOL)supportsSecureCoding;

- (void)_createTextInputTraitsIfNecessary;
- (BOOL)autocapitalizationEnabled;
- (unsigned int)autocapitalizationType;
- (BOOL)autocorrectionEnabled;
- (BOOL)autocorrectionListUIAutoDisplayMode;
- (BOOL)autocorrectionListUIDisplayed;
- (BOOL)candidateSelectionPredictionEnabled;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCandidate;
- (void)dealloc;
- (id)description;
- (id)documentIdentifier;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hardwareKeyboardMode;
- (id)initWithCoder:(id)arg1;
- (id)inputForMarkedText;
- (id)inputMode;
- (id)keyLayout;
- (BOOL)keyboardEventsLagging;
- (unsigned int)keyboardType;
- (id)layoutState;
- (BOOL)needsCandidateMetadata;
- (id)recipientIdentifier;
- (id)responseContext;
- (id)searchStringForMarkedText;
- (BOOL)secureTextEntry;
- (void)setAutocapitalizationEnabled:(BOOL)arg1;
- (void)setAutocapitalizationType:(unsigned int)arg1;
- (void)setAutocorrectionEnabled:(BOOL)arg1;
- (void)setAutocorrectionListUIAutoDisplayMode:(BOOL)arg1;
- (void)setAutocorrectionListUIDisplayed:(BOOL)arg1;
- (void)setCandidateSelectionPredictionEnabled:(BOOL)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setCurrentCandidate:(id)arg1;
- (void)setDocumentIdentifier:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setHardwareKeyboardMode:(BOOL)arg1;
- (void)setInputForMarkedText:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setKeyboardEventsLagging:(BOOL)arg1;
- (void)setKeyboardType:(unsigned int)arg1;
- (void)setLayoutState:(id)arg1;
- (void)setNeedsCandidateMetadata:(BOOL)arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setSearchStringForMarkedText:(id)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setShiftState:(int)arg1;
- (void)setShortcutConversionEnabled:(BOOL)arg1;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (void)setSplitKeyboardMode:(BOOL)arg1;
- (void)setSuppressingCandidateSelection:(BOOL)arg1;
- (void)setTextInputTraits:(id)arg1;
- (void)setUserSelectedCurrentCandidate:(BOOL)arg1;
- (void)setWordLearningEnabled:(BOOL)arg1;
- (int)shiftState;
- (BOOL)shortcutConversionEnabled;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)splitKeyboardMode;
- (BOOL)suppressingCandidateSelection;
- (id)textInputTraits;
- (BOOL)userSelectedCurrentCandidate;
- (BOOL)wordLearningEnabled;

@end
