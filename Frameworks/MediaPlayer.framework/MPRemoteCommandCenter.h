/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal> {
    NSMutableArray * _activeCommands;
    MPFeedbackCommand * _addItemToLibraryCommand;
    MPFeedbackCommand * _addNowPlayingItemToLibraryCommand;
    MPAdvanceRepeatModeCommand * _advanceRepeatModeCommand;
    MPAdvanceShuffleModeCommand * _advanceShuffleModeCommand;
    MPFeedbackCommand * _bookmarkCommand;
    bool  _canBeNowPlayingApplication;
    MPChangePlaybackPositionCommand * _changePlaybackPositionCommand;
    MPChangePlaybackProgressCommand * _changePlaybackProgressCommand;
    MPChangePlaybackRateCommand * _changePlaybackRateCommand;
    MPChangeRepeatModeCommand * _changeRepeatModeCommand;
    MPChangeShuffleModeCommand * _changeShuffleModeCommand;
    MPRemoteCommand * _createRadioStationCommand;
    bool  _disableAutomaticCanBeNowPlaying;
    MPRemoteCommand * _disableLanguageOptionCommand;
    MPFeedbackCommand * _dislikeCommand;
    MPRemoteCommand * _enableLanguageOptionCommand;
    bool  _handlingPlaybackQueueCommands;
    MPInsertIntoPlaybackQueueCommand * _insertIntoPlaybackQueueCommand;
    MPFeedbackCommand * _likeCommand;
    void * _mediaRemoteCommandHandler;
    MPRemoteCommand * _nextTrackCommand;
    MPRemoteCommand * _pauseCommand;
    MPRemoteCommand * _playCommand;
    MPRemoteCommand * _playItemInQueueCommand;
    NSString * _playerID;
    MPMRNowPlayingPlayerPathWrapper * _playerPath;
    MPRemoteCommand * _prepareForSetPlaybackQueueCommand;
    MPRemoteCommand * _previousTrackCommand;
    MPRatingCommand * _ratingCommand;
    MPRemoteCommand * _removeFromPlaybackQueueCommand;
    MPReorderQueueCommand * _reorderQueueCommand;
    MPRemoteCommand * _reshuffleCommand;
    bool  _scheduledSupportedCommandsChangedNotification;
    MPRemoteCommand * _seekBackwardCommand;
    MPRemoteCommand * _seekForwardCommand;
    NSObject<OS_dispatch_queue> * _serialQueue;
    MPSetPlaybackQueueCommand * _setPlaybackQueueCommand;
    MPSetPlaybackSessionCommand * _setPlaybackSessionCommand;
    MPSkipIntervalCommand * _skipBackwardCommand;
    MPSkipIntervalCommand * _skipForwardCommand;
    MPRemoteCommand * _specialSeekBackwardCommand;
    MPRemoteCommand * _specialSeekForwardCommand;
    MPRemoteCommand * _stopCommand;
    MPRemoteCommand * _togglePlayPauseCommand;
}

@property (nonatomic, readonly) MPFeedbackCommand *addItemToLibraryCommand;
@property (nonatomic, readonly) MPFeedbackCommand *addNowPlayingItemToLibraryCommand;
@property (nonatomic, readonly) MPAdvanceRepeatModeCommand *advanceRepeatModeCommand;
@property (nonatomic, readonly) MPAdvanceShuffleModeCommand *advanceShuffleModeCommand;
@property (nonatomic, readonly) MPFeedbackCommand *bookmarkCommand;
@property (nonatomic, readonly) MPChangePlaybackPositionCommand *changePlaybackPositionCommand;
@property (nonatomic, readonly) MPChangePlaybackProgressCommand *changePlaybackProgressCommand;
@property (nonatomic, readonly) MPChangePlaybackRateCommand *changePlaybackRateCommand;
@property (nonatomic, readonly) MPChangeRepeatModeCommand *changeRepeatModeCommand;
@property (nonatomic, readonly) MPChangeShuffleModeCommand *changeShuffleModeCommand;
@property (nonatomic, readonly) MPRemoteCommand *createRadioStationCommand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAutomaticCanBeNowPlaying;
@property (nonatomic, readonly) MPRemoteCommand *disableLanguageOptionCommand;
@property (nonatomic, readonly) MPRemoteCommand *disableQueueModificationsCommand;
@property (nonatomic, readonly) MPFeedbackCommand *dislikeCommand;
@property (nonatomic, readonly) MPRemoteCommand *enableLanguageOptionCommand;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPInsertIntoPlaybackQueueCommand *insertIntoPlaybackQueueCommand;
@property (nonatomic, readonly) MPFeedbackCommand *likeCommand;
@property (nonatomic, readonly) MPRemoteCommand *nextTrackCommand;
@property (nonatomic, readonly) MPRemoteCommand *pauseCommand;
@property (nonatomic, readonly) MPRemoteCommand *playCommand;
@property (nonatomic, readonly) MPRemoteCommand *playItemInQueueCommand;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (nonatomic, readonly) MPRemoteCommand *prepareForSetPlaybackQueueCommand;
@property (nonatomic, readonly) MPRemoteCommand *previousTrackCommand;
@property (nonatomic, readonly) MPRatingCommand *ratingCommand;
@property (nonatomic, readonly) MPRemoteCommand *removeFromPlaybackQueueCommand;
@property (nonatomic, readonly) MPReorderQueueCommand *reorderQueueCommand;
@property (nonatomic, readonly) MPRemoteCommand *reshuffleCommand;
@property (nonatomic, readonly) MPRemoteCommand *seekBackwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *seekForwardCommand;
@property (nonatomic, readonly) MPSetPlaybackQueueCommand *setPlaybackQueueCommand;
@property (nonatomic, readonly) MPSetPlaybackSessionCommand *setPlaybackSessionCommand;
@property (nonatomic, readonly) MPSkipIntervalCommand *skipBackwardCommand;
@property (nonatomic, readonly) MPSkipIntervalCommand *skipForwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *specialSeekBackwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *specialSeekForwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *stagePlaybackSessionCommand;
@property (nonatomic, readonly) MPRemoteCommand *startPictureInPictureCommand;
@property (nonatomic, readonly) MPRemoteCommand *stopCommand;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPRemoteCommand *togglePlayPauseCommand;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (long long)_numberOfCommandCentersWithTargets;
+ (id)commandCenterForPlayerID:(id)arg1;
+ (void)getPendingCommandTypesWithCompletion:(id /* block */)arg1;
+ (id)sharedCommandCenter;
+ (void)updateLaunchCommandsWithConfigurationHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_activeCommands;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned int)arg2;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2 completion:(id /* block */)arg3;
- (void)_scheduleSupportedCommandsChanged;
- (void)_startMediaRemoteSync;
- (void)_stopMediaRemoteSync;
- (id)addItemToLibraryCommand;
- (id)addNowPlayingItemToLibraryCommand;
- (id)advanceRepeatModeCommand;
- (id)advanceShuffleModeCommand;
- (id)bookmarkCommand;
- (id)changePlaybackPositionCommand;
- (id)changePlaybackProgressCommand;
- (id)changePlaybackRateCommand;
- (id)changeRepeatModeCommand;
- (id)changeShuffleModeCommand;
- (id)createRadioStationCommand;
- (void)dealloc;
- (bool)disableAutomaticCanBeNowPlaying;
- (id)disableLanguageOptionCommand;
- (id)dislikeCommand;
- (void)dispatchCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)enableLanguageOptionCommand;
- (void)getPendingCommandTypesWithCompletion:(id /* block */)arg1;
- (id)initWithPlayerID:(id)arg1;
- (id)insertIntoPlaybackQueueCommand;
- (id)likeCommand;
- (id)nextTrackCommand;
- (id)pauseCommand;
- (id)playCommand;
- (id)playItemInQueueCommand;
- (id)playerID;
- (id)prepareForSetPlaybackQueueCommand;
- (id)previousTrackCommand;
- (id)ratingCommand;
- (void)remoteCommandDidMutatePropagatableProperty:(id)arg1;
- (id)removeFromPlaybackQueueCommand;
- (id)reorderQueueCommand;
- (id)reshuffleCommand;
- (id)seekBackwardCommand;
- (id)seekForwardCommand;
- (void)setDisableAutomaticCanBeNowPlaying:(bool)arg1;
- (id)setPlaybackQueueCommand;
- (id)setPlaybackSessionCommand;
- (id)skipBackwardCommand;
- (id)skipForwardCommand;
- (id)specialSeekBackwardCommand;
- (id)specialSeekForwardCommand;
- (id)stopCommand;
- (id)togglePlayPauseCommand;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)disableQueueModificationsCommand;
- (id)stagePlaybackSessionCommand;
- (id)startPictureInPictureCommand;

@end
