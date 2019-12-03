/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface _SiriUICachedPreferences : NSObject {
    bool  _HTTForTextInputEnabled;
    bool  _siriMiniIsEnabled;
    bool  _siriSafeForLockScreen;
    bool  _streamingDictationIsEnabled;
    NSUserDefaults * _textInputDefaults;
    bool  _textInputEnabled;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setSiriSafeForLockScreen:(bool)arg1;
- (void)_updatePreferences;
- (void)dealloc;
- (id)init;
- (bool)isHTTForTextInputEnabled;
- (bool)isSiriMiniEnabled;
- (bool)isSiriSafeForLockScreen;
- (bool)isStreamingDictationEnabled;
- (bool)isTextInputEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
