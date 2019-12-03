/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

@interface NUMediaViewRenderer : NSObject <NUMediaPlayer> {
    bool  __videoEnabled;
    NUSurfaceRenderClient * _backfillClient;
    NUResponse * _backfillRenderResponse;
    double  _backingScale;
    bool  _canRenderLoopingVideoLive;
    NUColorSpace * _colorSpace;
    NUComposition * _composition;
    unsigned long long  _computedDisplayType;
    bool  _didReleaseAVObjects;
    unsigned long long  _displayType;
    bool  _isPanning;
    bool  _isZooming;
    <NURenderStatistics> * _lastBackfillRenderStatictics;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastZoomRect;
    <NURenderStatistics> * _lastZoomRenderStatistics;
    double  _lastZoomRenderTime;
    double  _lastZoomScale;
    NULivePhotoRenderClient * _livePhotoClient;
    NUCoalescer * _livePhotoUpdateCoalescer;
    UIView * _livePhotoView;
    double  _maximumZoomScale;
    NUMediaView * _mediaView;
    bool  _muted;
    NUAVPlayerController * _nuAVPlayerController;
    NUObservatory * _observatory;
    NSArray * _pipelineFilters;
    NUPixelFormat * _pixelFormat;
    long long  _playbackMode;
    NSArray * _previousPipelineFilters;
    AVComposition * _previousVideo;
    NSObject<OS_dispatch_group> * _renderGroup;
    NSObject<OS_dispatch_queue> * _renderQueue;
    NUVideoRenderClient * _videoClient;
    _Atomic int  _videoRenderInFlightCount;
    NUCoalescer * _videoUpdateCoalescer;
    NUSurfaceRenderClient * _zoomClient;
    NUResponse * _zoomRenderResponse;
}

@property (getter=_isVideoEnabled, setter=_setVideoEnabled:, nonatomic) bool _videoEnabled;
@property (nonatomic) double backingScale;
@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic, copy) NUComposition *composition;
@property (nonatomic, readonly) unsigned long long computedDisplayType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayType;
@property (readonly) unsigned long long hash;
@property (readonly) bool isReady;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } mediaDuration;
@property (nonatomic, readonly) NUMediaView *mediaView;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, readonly) NUAVPlayerController *nuAVPlayerController;
@property (nonatomic, copy) NSArray *pipelineFilters;
@property (nonatomic, retain) NUPixelFormat *pixelFormat;
@property (nonatomic) long long playbackMode;
@property (nonatomic) double playbackRate;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly, copy) NSArray *previousPipelineFilters;
@property (nonatomic, retain) AVComposition *previousVideo;
@property (readonly) Class superclass;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (getter=isZoomedToFit, nonatomic, readonly) bool zoomedToFit;

+ (bool)_forceUpdateForNewVideoComposition:(id)arg1 previousComposition:(id)arg2 newAsset:(id)arg3 previousAsset:(id)arg4 isPlaying:(bool)arg5;

- (void).cxx_destruct;
- (void)_addFullExtentConstraintsForView:(id)arg1;
- (id)_backfillRenderRequestForComposition:(id)arg1;
- (id /* block */)_backfillRenderResponseHandler;
- (void)_beginAnimating;
- (void)_coalesceUpdateLivePhotoComposition:(id)arg1;
- (void)_coalesceUpdateVideoComposition:(id)arg1;
- (void)_endAnimating;
- (bool)_isVideoEnabled;
- (double)_lastRenderDuration;
- (id)_livePhotoFromResponse:(id)arg1;
- (void)_notifyPlaybackStateChange:(long long)arg1;
- (void)_notifyPlaybackTimeChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)_playbackStateFromPlayerStatus:(long long)arg1 rate:(float)arg2;
- (void)_playerStatusDidChange:(long long)arg1;
- (id)_regionPolicyForZoomTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_releaseAVObjects;
- (void)_renderFinishedWithGeometry:(id)arg1 layer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scrollBounds;
- (void)_setDisplayType:(unsigned long long)arg1;
- (void)_setVideoEnabled:(bool)arg1;
- (void)_setupAVPlayerController;
- (double)_targetZoomScale;
- (void)_tearDownAVPlayerController;
- (void)_updateBackfillLayerWithLatestRenderResponse;
- (void)_updateBackfillLayerWithRenderResponse:(id)arg1;
- (void)_updateDisplayForMediaType:(long long)arg1;
- (id)_updateImageLayer:(id)arg1 withRenderResponse:(id)arg2;
- (void)_updateImageRenderForComposition:(id)arg1;
- (void)_updateLivePhotoComposition:(id)arg1;
- (void)_updateLivePhotoWithResponse:(id)arg1;
- (void)_updateROILayerWithLatestRenderResponse;
- (void)_updateROILayerWithRenderResponse:(id)arg1;
- (void)_updateVideoComposition:(id)arg1;
- (void)_updateVideoViewLayoutWithGeometry:(id)arg1;
- (void)_updateVideoWithResult:(id)arg1;
- (id /* block */)_videoFrameImageRenderResponseHandler;
- (void)_withComposition:(id)arg1 visitRenderClient:(id /* block */)arg2;
- (id)_zoomRenderRequestForComposition:(id)arg1;
- (id /* block */)_zoomRenderResponseHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_zoomTargetRect;
- (id)addPlaybackStateObserver:(id /* block */)arg1;
- (id)addPlaybackTimeObserver:(id /* block */)arg1;
- (double)backingScale;
- (void)beginPanning;
- (void)beginZooming;
- (id)cacheVideoRenderFilter;
- (bool)canRenderVideoLive;
- (id)colorSpace;
- (id)composition;
- (unsigned long long)computedDisplayType;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromImageToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toImageFromView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromImageToView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toImageFromView:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (unsigned long long)displayType;
- (void)endPanning;
- (void)endZooming;
- (id)init;
- (id)initWithMediaView:(id)arg1;
- (bool)isMuted;
- (bool)isReady;
- (bool)isVideoEnabled;
- (bool)isZoomedToFit;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoViewDidBeginScrubbing:(id)arg1;
- (void)livePhotoViewDidEndScrubbing:(id)arg1;
- (double)maximumZoomScale;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })mediaDuration;
- (id)mediaView;
- (id)newRenderRequestForComposition:(id)arg1 scalePolicy:(id)arg2 regionPolicy:(id)arg3;
- (id)nuAVPlayerController;
- (void)pause;
- (bool)pipelineFilersHaveChanged;
- (id)pipelineFilters;
- (id)pixelFormat;
- (void)play;
- (long long)playbackMode;
- (double)playbackRate;
- (long long)playbackState;
- (id)previousPipelineFilters;
- (id)previousVideo;
- (void)removeObserver:(id)arg1;
- (id)renderClient;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 exact:(bool)arg2;
- (void)setBackingScale:(double)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setDisplayType:(unsigned long long)arg1;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPipelineFilters:(id)arg1;
- (void)setPixelFormat:(id)arg1;
- (void)setPlaybackMode:(long long)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPreviousVideo:(id)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)stepByCount:(long long)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (void)updateComposition:(id)arg1;
- (void)wait;

@end
