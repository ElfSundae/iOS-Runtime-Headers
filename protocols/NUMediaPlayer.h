/* Generated by RuntimeBrowser.
 */

@protocol NUMediaPlayer <NSObject>

@required

- (id)addPlaybackStateObserver:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NUMediaPlayer> *, long long, void*
- (id)addPlaybackTimeObserver:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NUMediaPlayer> *, struct { long long x1; int x2; unsigned int x3; long long x4; }, void*
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (bool)isMuted;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })mediaDuration;
- (void)pause;
- (void)play;
- (long long)playbackMode;
- (double)playbackRate;
- (long long)playbackState;
- (void)removeObserver:(id)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 exact:(bool)arg2;
- (void)setMuted:(bool)arg1;
- (void)setPlaybackMode:(long long)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)stepByCount:(long long)arg1;

@end
