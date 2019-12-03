/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAlternativeVoices : NSObject {
    NSMutableDictionary * _voiceClassesMap;
    NSMutableDictionary * _voiceNameMap;
}

@property (nonatomic, retain) NSMutableDictionary *voiceClassesMap;
@property (nonatomic, retain) NSMutableDictionary *voiceNameMap;

+ (bool)inUnitTestMode;
+ (void)setInUnitTestMode:(bool)arg1;
+ (id)sharedInstance;
+ (bool)supportsAlex;
+ (bool)supportsSiri;

- (void).cxx_destruct;
- (id)_siriBaseIdentifierFromIdentifier:(id)arg1;
- (id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3;
- (bool)isAlexAvailableForLanguage:(id)arg1;
- (bool)isAlternativeVoice:(id)arg1;
- (bool)isNashvilleSystemVoice:(id)arg1;
- (bool)isOldSiriVoiceIdentifier:(id)arg1;
- (bool)isSiriVoiceIdentifier:(id)arg1;
- (id)nameForVoiceIdentifier:(id)arg1;
- (void)setVoiceClassesMap:(id)arg1;
- (void)setVoiceNameMap:(id)arg1;
- (id)voiceClassesMap;
- (id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (id)voiceNameMap;

@end
