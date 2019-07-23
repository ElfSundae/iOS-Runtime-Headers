/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent {
    MPRemotePlaybackQueue * _playbackQueue;
}

@property (nonatomic, readonly) MPRemotePlaybackQueue *playbackQueue;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)playbackQueue;

@end
