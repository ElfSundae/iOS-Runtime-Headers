/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMovieScrubberTrackView : UIView {
    NSDictionary *_childThumbnailViews;
    <UIMovieScrubberTrackViewDataSource> *_dataSource;
    <UIMovieScrubberTrackViewDelegate> *_delegate;
    double _duration;
    double _endValue;
    UIView *_maskContainerView;
    UIMovieScrubberTrackOverlayView *_overlayView;
    double _startValue;
    NSArray *_summaryThumbnailChildTimestamps;
    NSArray *_summaryThumbnailTimestamps;
    NSArray *_summaryThumbnailViews;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    NSDictionary *_thumbnailStartXValues;
    NSMutableDictionary *_thumbnailViews;
    NSArray *_timestamps;
    struct { 
        unsigned int delegateSizeOriginDelta : 1; 
        unsigned int delegateDidExpand : 1; 
        unsigned int delegateDidCollapse : 1; 
        unsigned int delegateWillRequestThumbs : 1; 
        unsigned int delegateDidRequestThumbs : 1; 
        unsigned int delegateZoomAnimationDuration : 1; 
        unsigned int delegateZoomAnimationDelay : 1; 
        unsigned int needsReload : 1; 
        unsigned int editing : 1; 
        unsigned int editingHandle; 
        unsigned int zoomIsDisabled : 1; 
    } _trackFlags;
    float _unclampedZoomWidthDelta;
    double _value;
    float _zoomAnimationDuration;
    float _zoomOriginXDelta;
    float _zoomWidthDelta;
}

@property (nonatomic) <UIMovieScrubberTrackViewDataSource> *dataSource;
@property (nonatomic) <UIMovieScrubberTrackViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)_createImageViewForTimestamp:(id)arg1 isSummaryThumbnail:(BOOL)arg2;
- (void)_reallyReloadData;
- (void)_setOverlayViewIsZoomed:(BOOL)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (void)_unzoomAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)_zoomAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)animateFillFramesAway;
- (void)clear;
- (id)dataSource;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEndValue:(double)arg1;
- (void)setStartValue:(double)arg1;
- (void)setThumbnailImage:(struct CGImage { }*)arg1 forTimestamp:(id)arg2;
- (void)setValue:(double)arg1;
- (void)setZoomAnimationDuration:(double)arg1;
- (void)unzoom;
- (double)zoomAnimationDuration;
- (BOOL)zoomAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end