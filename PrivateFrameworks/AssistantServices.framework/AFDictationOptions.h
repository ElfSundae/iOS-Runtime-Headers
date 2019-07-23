/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDictationOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationName;
    NSString * _applicationVersion;
    STSiriContext * _context;
    BOOL  _detectUtterances;
    NSString * _fieldIdentifier;
    NSString * _fieldLabel;
    BOOL  _forceOfflineRecognition;
    NSArray * _inlineItemList;
    NSString * _interactionIdentifier;
    int  _keyboardType;
    NSString * _languageCodeOverride;
    double  _maximumRecognitionDuration;
    NSString * _microphoneIdentifier;
    NSString * _offlineLanguage;
    NSString * _orthography;
    NSString * _postfixText;
    NSString * _prefixText;
    BOOL  _releaseAudioSessionOnRecordingCompletion;
    NSString * _requestIdentifier;
    int  _returnKeyType;
    BOOL  _secureOfflineOnly;
    NSString * _selectedText;
    int  _taskHint;
    int  _transcriptionMode;
    NSDictionary * _voiceSearchHeaderFields;
    NSDictionary * _voiceSearchQueryParameters;
    int  _voiceSearchTypeOptions;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic, copy) NSString *applicationVersion;
@property (nonatomic, retain) STSiriContext *context;
@property (nonatomic) BOOL detectUtterances;
@property (nonatomic, copy) NSString *fieldIdentifier;
@property (nonatomic, copy) NSString *fieldLabel;
@property (nonatomic) BOOL forceOfflineRecognition;
@property (nonatomic, copy) NSArray *inlineItemList;
@property (nonatomic, copy) NSString *interactionIdentifier;
@property (nonatomic) int keyboardType;
@property (nonatomic, copy) NSString *languageCodeOverride;
@property (nonatomic) double maximumRecognitionDuration;
@property (nonatomic, copy) NSString *microphoneIdentifier;
@property (nonatomic, copy) NSString *offlineLanguage;
@property (nonatomic, copy) NSString *orthography;
@property (nonatomic, copy) NSString *postfixText;
@property (nonatomic, copy) NSString *prefixText;
@property (nonatomic) BOOL releaseAudioSessionOnRecordingCompletion;
@property (nonatomic, copy) NSString *requestIdentifier;
@property (nonatomic) int returnKeyType;
@property (nonatomic) BOOL secureOfflineOnly;
@property (nonatomic, copy) NSString *selectedText;
@property (nonatomic) int taskHint;
@property (nonatomic) int transcriptionMode;
@property (nonatomic, copy) NSDictionary *voiceSearchHeaderFields;
@property (nonatomic, copy) NSDictionary *voiceSearchQueryParameters;
@property (nonatomic) int voiceSearchTypeOptions;
@property (nonatomic, copy) NSDictionary *voiceTriggerEventInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationName;
- (id)applicationVersion;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)detectUtterances;
- (id)dictationOptionsWithoutTextContext;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldIdentifier;
- (id)fieldLabel;
- (BOOL)forceOfflineRecognition;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inlineItemList;
- (id)interactionIdentifier;
- (int)keyboardType;
- (id)languageCodeOverride;
- (double)maximumRecognitionDuration;
- (id)microphoneIdentifier;
- (id)offlineLanguage;
- (id)orthography;
- (id)postfixText;
- (id)prefixText;
- (BOOL)releaseAudioSessionOnRecordingCompletion;
- (id)requestIdentifier;
- (int)returnKeyType;
- (BOOL)secureOfflineOnly;
- (id)selectedText;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDetectUtterances:(BOOL)arg1;
- (void)setFieldIdentifier:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setForceOfflineRecognition:(BOOL)arg1;
- (void)setInlineItemList:(id)arg1;
- (void)setInteractionIdentifier:(id)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setLanguageCodeOverride:(id)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setMicrophoneIdentifier:(id)arg1;
- (void)setOfflineLanguage:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setReleaseAudioSessionOnRecordingCompletion:(BOOL)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setReturnKeyType:(int)arg1;
- (void)setSecureOfflineOnly:(BOOL)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setTaskHint:(int)arg1;
- (void)setTranscriptionMode:(int)arg1;
- (void)setVoiceSearchHeaderFields:(id)arg1;
- (void)setVoiceSearchQueryParameters:(id)arg1;
- (void)setVoiceSearchTypeOptions:(int)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (int)taskHint;
- (int)transcriptionMode;
- (id)voiceSearchHeaderFields;
- (id)voiceSearchQueryParameters;
- (int)voiceSearchTypeOptions;
- (id)voiceTriggerEventInfo;

@end
