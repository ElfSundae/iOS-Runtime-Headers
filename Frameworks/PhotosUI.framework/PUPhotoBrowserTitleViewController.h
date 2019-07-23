/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoBrowserTitleViewController : NSObject {
    NSString * __dayDescription;
    PLDateRangeFormatter * __dayFormatter;
    BOOL  __isPerformingChanges;
    BOOL  __isUpdating;
    BOOL  __needsUpdateDayAndTimeDescriptions;
    BOOL  __needsUpdateGestureRecognizers;
    BOOL  __needsUpdateLabels;
    BOOL  __needsUpdatePlayClockDescription;
    NSString * __playClockDescription;
    NSDateComponentsFormatter * __playClockFormatter;
    UITapGestureRecognizer * __tapGestureRecognizer;
    NSString * __timeDescription;
    PLDateRangeFormatter * __timeFormatter;
    NSDate * _creationDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentPlaybackTime;
    <PUPhotoBrowserTitleViewControllerDelegate> * _delegate;
    struct { 
        BOOL respondsToTapped; 
    }  _delegateFlags;
    NSString * _geoDescription;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playbackDuration;
    BOOL  _tappable;
    BOOL  _usingCompactTitleView;
    UIView * _view;
}

@property (setter=_setDayDescription:, nonatomic, retain) NSString *_dayDescription;
@property (nonatomic, readonly) PLDateRangeFormatter *_dayFormatter;
@property (setter=_setPerformingChanges:, nonatomic) BOOL _isPerformingChanges;
@property (setter=_setUpdating:, nonatomic) BOOL _isUpdating;
@property (setter=_setNeedsUpdateDayAndTimeDescriptions:, nonatomic) BOOL _needsUpdateDayAndTimeDescriptions;
@property (setter=_setNeedsUpdateGestureRecognizers:, nonatomic) BOOL _needsUpdateGestureRecognizers;
@property (setter=_setNeedsUpdateLabels:, nonatomic) BOOL _needsUpdateLabels;
@property (setter=_setNeedsUpdatePlayClockDescription:, nonatomic) BOOL _needsUpdatePlayClockDescription;
@property (setter=_setPlayClockDescription:, nonatomic, retain) NSString *_playClockDescription;
@property (nonatomic, readonly) NSDateComponentsFormatter *_playClockFormatter;
@property (setter=_setTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setTimeDescription:, nonatomic, retain) NSString *_timeDescription;
@property (nonatomic, readonly) PLDateRangeFormatter *_timeFormatter;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentPlaybackTime;
@property (nonatomic) <PUPhotoBrowserTitleViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *geoDescription;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } playbackDuration;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (getter=isTappable, nonatomic) BOOL tappable;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isUsingCompactTitleView, nonatomic) BOOL usingCompactTitleView;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_dateFormatterChanged:(id)arg1;
- (id)_dayDescription;
- (id)_dayFormatter;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_invalidateDayAndTimeDescriptions;
- (void)_invalidateGestureRecognizers;
- (void)_invalidateLabels;
- (void)_invalidatePlayClockDescription;
- (BOOL)_isPerformingChanges;
- (BOOL)_isUpdating;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateDayAndTimeDescriptions;
- (BOOL)_needsUpdateGestureRecognizers;
- (BOOL)_needsUpdateLabels;
- (BOOL)_needsUpdatePlayClockDescription;
- (id)_playClockDescription;
- (id)_playClockFormatter;
- (void)_setDayDescription:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateDayAndTimeDescriptions:(BOOL)arg1;
- (void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1;
- (void)_setNeedsUpdateLabels:(BOOL)arg1;
- (void)_setNeedsUpdatePlayClockDescription:(BOOL)arg1;
- (void)_setPerformingChanges:(BOOL)arg1;
- (void)_setPlayClockDescription:(id)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTimeDescription:(id)arg1;
- (void)_setUpdating:(BOOL)arg1;
- (id)_tapGestureRecognizer;
- (id)_timeDescription;
- (id)_timeFormatter;
- (void)_updateDayAndTimeDescriptionsIfNeeded;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLabelsIfNeeded;
- (void)_updatePlayClockDescriptionIfNeeded;
- (id)creationDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentPlaybackTime;
- (void)dealloc;
- (id)delegate;
- (id)geoDescription;
- (id)init;
- (BOOL)isTappable;
- (BOOL)isUsingCompactTitleView;
- (void)performChanges:(id /* block */)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackDuration;
- (void)setCreationDate:(id)arg1;
- (void)setCurrentPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeoDescription:(id)arg1;
- (void)setPlaybackDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTappable:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUsingCompactTitleView:(BOOL)arg1;
- (id)subtitle;
- (id)textColor;
- (id)title;
- (id)view;

@end
