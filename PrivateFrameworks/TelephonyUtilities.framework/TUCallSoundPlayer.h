/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallSoundPlayer : NSObject {
    TUSoundPlayer *_player;
}

@property (nonatomic, retain) TUSoundPlayer *player;
@property (getter=isPlaying, nonatomic, readonly) BOOL playing;

- (void).cxx_destruct;
- (BOOL)attemptToPlaySoundType:(int)arg1 forCall:(id)arg2;
- (BOOL)attemptToPlaySoundType:(int)arg1 forCall:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (BOOL)isPlaying;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)stopPlaying;

@end
