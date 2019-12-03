/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

@interface CACSpokenCommandCustom : CACSpokenCommand {
    NSDictionary * _customProperties;
    NSString * _primaryCommand;
}

@property (readonly) NSDictionary *customProperties;
@property (retain) NSString *primaryCommand;

- (void).cxx_destruct;
- (id)customProperties;
- (id)description;
- (void)handleSpokenCommand:(id)arg1;
- (id)initWithCommandIdentifier:(id)arg1;
- (bool)isCustomCommand;
- (id)primaryCommand;
- (void)setPrimaryCommand:(id)arg1;

@end
