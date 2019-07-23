/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAVPlayer : AVPlayer <AVPlayerItemDelegate> {
    int  _audioMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cumulativeTimePlayed;
    double  _duration;
    SXKeyValueObserver * _durationObserver;
    double  _elapsedTime;
    double  _frameRate;
    SXKeyValueObserver * _loadedTimeRangesObserver;
    id /* block */  _loadingProgressBlock;
    int  _playbackPosition;
    id /* block */  _playbackProgressBlock;
    int  _playbackStatus;
    id /* block */  _playbackStatusBlock;
    SXKeyValueObserver * _statusObserver;
    SXKeyValueObserver * _timeControlStatusObserver;
    id  _timeObserver;
}

@property (nonatomic, readonly) int audioMode;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cumulativeTimePlayed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, retain) SXKeyValueObserver *durationObserver;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double frameRate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXKeyValueObserver *loadedTimeRangesObserver;
@property (nonatomic, copy) id /* block */ loadingProgressBlock;
@property (nonatomic) int playbackPosition;
@property (nonatomic, copy) id /* block */ playbackProgressBlock;
@property (nonatomic) int playbackStatus;
@property (nonatomic, copy) id /* block */ playbackStatusBlock;
@property (nonatomic, retain) SXKeyValueObserver *statusObserver;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXKeyValueObserver *timeControlStatusObserver;
@property (nonatomic, retain) id timeObserver;
@property (nonatomic, readonly) double totalTimePlayed;

- (void).cxx_destruct;
- (void)addObservers;
- (int)audioMode;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cumulativeTimePlayed;
- (void)dealloc;
- (double)duration;
- (void)durationChanged;
- (id)durationObserver;
- (double)elapsedTime;
- (double)frameRate;
- (id)initWithPlayerItem:(id)arg1 audioMode:(int)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 audioMode:(int)arg2;
- (void)loadFrameRate;
- (void)loadedTimeRangesChanged;
- (id)loadedTimeRangesObserver;
- (id /* block */)loadingProgressBlock;
- (int)playbackPosition;
- (id /* block */)playbackProgressBlock;
- (int)playbackStatus;
- (id /* block */)playbackStatusBlock;
- (void)playedToEnd:(id)arg1;
- (void)seekToStartWithCompletionBlock:(id /* block */)arg1;
- (void)setCumulativeTimePlayed:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDuration:(double)arg1;
- (void)setDurationObserver:(id)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setElapsedTime:(double)arg1 duration:(double)arg2;
- (void)setFrameRate:(double)arg1;
- (void)setLoadedTimeRangesObserver:(id)arg1;
- (void)setLoadingProgressBlock:(id /* block */)arg1;
- (void)setPlaybackPosition:(int)arg1;
- (void)setPlaybackProgressBlock:(id /* block */)arg1;
- (void)setPlaybackStatus:(int)arg1;
- (void)setPlaybackStatusBlock:(id /* block */)arg1;
- (void)setStatusObserver:(id)arg1;
- (void)setTimeControlStatusObserver:(id)arg1;
- (void)setTimeObserver:(id)arg1;
- (void)startTimeObserver;
- (void)statusChanged;
- (id)statusObserver;
- (void)stopTimeObserver;
- (void)timeControlStatusChanged;
- (id)timeControlStatusObserver;
- (id)timeObserver;
- (double)totalTimePlayed;
- (void)updateTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
