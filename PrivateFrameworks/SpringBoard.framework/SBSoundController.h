/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSoundController : NSObject {
    UINotificationFeedbackGenerator * _hapticFeedbackGenerator;
    NSHashTable * _observers;
    NSMutableArray * _pendedCallbacks;
    unsigned long long  _pendingCallbacks;
    NSMutableDictionary * _soundsBySystemSoundIDs;
    NSMapTable * _soundsByToneAlerts;
    NSMapTable * _toneAlertsBySounds;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_beginPendingCallbacksBlock;
- (void)_cleanupSystemSound:(unsigned int)arg1 andKill:(bool)arg2;
- (void)_cleanupToneAlertForSound:(id)arg1 andKill:(bool)arg2;
- (void)_endPendingCallbacksBlock;
- (void)_enqueueCallback:(id /* block */)arg1;
- (bool)_playFeedback:(id)arg1;
- (bool)_playSystemSound:(id)arg1;
- (bool)_playToneAlert:(id)arg1;
- (void)_ringerStateChanged:(id)arg1;
- (void)_soundDidFinishPlaying:(id)arg1;
- (void)_soundDidStartPlaying:(id)arg1;
- (void)addObserver:(id)arg1;
- (bool)handleVolumeButtonDownEvent;
- (id)init;
- (bool)isPlaying:(id)arg1;
- (bool)isPlayingAnySound;
- (bool)playSound:(id)arg1 environments:(long long)arg2 completion:(id /* block */)arg3;
- (bool)playSoundWithDefaultEnvironment:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)stopAllSounds;
- (bool)stopSound:(id)arg1;

@end
