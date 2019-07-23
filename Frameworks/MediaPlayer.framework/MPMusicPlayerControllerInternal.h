/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController> {
    unsigned int  _allowsBackgroundVideo;
    unsigned int  _cachedPlaybackStateIsValid;
    unsigned int  _clientPort;
    unsigned int  _didCheckIn;
    int  _inBlockHandlingPlaybackStateChangedMessageFromServer;
    MPMediaItemCollection * _itemCollection;
    MPMusicPlayerController * _musicPlayerController;
    int  _playbackNotificationObservers;
    int  _playbackState;
    id /* block */  _prepareToPlayCompletionHandler;
    BOOL  _preparedToPlay;
    BKSProcessAssertion * _processAssertion;
    MPMediaQuery * _query;
    struct __CFRunLoopSource { } * _runLoopSource;
    unsigned int  _useApplicationSpecificQueue;
    unsigned int  _useCachedPlaybackState;
    unsigned int  _wantsQueueModificationsDisabled;
}

@property BOOL inBlockHandlingPlaybackStateChangedMessageFromServer;

- (void).cxx_destruct;
- (id)_bundleIdentifier;
- (void)acquireProcessAssertion;
- (void)dealloc;
- (void)didPrepareForRemoteSelectorInvocation;
- (BOOL)inBlockHandlingPlaybackStateChangedMessageFromServer;
- (id)initWithMusicPlayerController:(id)arg1;
- (BOOL)prepareForRemoteSelectorInvocation;
- (void)serverConnectionDied;
- (void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(BOOL)arg1;

@end
