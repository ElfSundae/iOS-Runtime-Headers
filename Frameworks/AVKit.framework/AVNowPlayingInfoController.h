/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVNowPlayingInfoController : NSObject {
    BOOL  _enabled;
    NSUUID * _identifier;
    BOOL  _nowPlayingInfoNeedsUpdate;
    AVPlayerController * _playerController;
    id  _playerControllerCurrentTimeJumpedObserver;
    BOOL  _shouldOwnNowPlayingInfo;
}

@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, retain) AVPlayerController *playerController;

- (void).cxx_destruct;
- (int)_handleRemoteCommandEvent:(id)arg1;
- (BOOL)_ownsNowPlayingInfo;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfo;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithPlayerController:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playerController;
- (void)setEnabled:(BOOL)arg1;
- (void)setPlayerController:(id)arg1;

@end
