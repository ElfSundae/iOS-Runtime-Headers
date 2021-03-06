/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRemotePlaybackEngine : MPCPlaybackEngine {
    NSXPCConnection * _connection;
    MPCPlayerPath * _playerPath;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (bool)requiresMainThread;

- (void).cxx_destruct;
- (void)_initializePlaybackStack;
- (void)_updatePlayerPath;
- (void)becomeActive;
- (id)connection;
- (void)dealloc;
- (id)playerPath;
- (void)setConnection:(id)arg1;
- (void)setWantsReverseProcessAssertion:(bool)arg1;
- (void)start;

@end
