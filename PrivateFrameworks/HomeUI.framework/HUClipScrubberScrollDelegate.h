/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUClipScrubberScrollDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _clipCollectionView;
    HMCameraClip * _currentClip;
    HUClipScrubberDataSource * _dataSource;
    bool  _hasUserInteractedWithScrubber;
    bool  _isUserScrubbing;
    double  _lastContentWidth;
    HFCameraPlaybackEngine * _playbackEngine;
    bool  _shouldIgnoreScrolling;
    double  _targetScrollOffset;
}

@property (nonatomic) UICollectionView *clipCollectionView;
@property (nonatomic, retain) HMCameraClip *currentClip;
@property (nonatomic) HUClipScrubberDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasUserInteractedWithScrubber;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUserScrubbing;
@property (nonatomic) double lastContentWidth;
@property (nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic) bool shouldIgnoreScrolling;
@property (readonly) Class superclass;
@property (nonatomic) double targetScrollOffset;

- (void).cxx_destruct;
- (void)_handleOutOfBoundsTimelinePosition:(float)arg1;
- (bool)_indexPathContainsClip:(id)arg1;
- (id)_interpolatedDateFromClip:(id)arg1 toClip:(id)arg2 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atTimelinePosition:(float)arg4;
- (id)_selectedDateForAreaOfNoActivityAtPoint:(struct CGPoint { double x1; double x2; })arg1 inScrollView:(id)arg2;
- (id)_selectedDateForClipInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_selectedDateForTodayFromClip:(id)arg1 percentDuration:(float)arg2;
- (id)_selectedDateForYesterdayFromPreviousClip:(id)arg1 percentDuration:(float)arg2;
- (bool)_shouldScrollBypassPlaybackEngineUpdate;
- (bool)_spacerPrecedingClipSpansMultipleDays:(id)arg1;
- (void)beginEditing;
- (id)clipCollectionView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)currentClip;
- (id)dataSource;
- (void)finishEditing;
- (bool)hasUserInteractedWithScrubber;
- (id)initWithDataSource:(id)arg1;
- (bool)isUserScrubbing;
- (double)lastContentWidth;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playbackEngine;
- (float)playheadPosition;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setClipCollectionView:(id)arg1;
- (void)setCurrentClip:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setHasUserInteractedWithScrubber:(bool)arg1;
- (void)setIsUserScrubbing:(bool)arg1;
- (void)setLastContentWidth:(double)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setShouldIgnoreScrolling:(bool)arg1;
- (void)setTargetScrollOffset:(double)arg1;
- (bool)shouldIgnoreScrolling;
- (double)targetScrollOffset;
- (void)updateCollectionView:(id)arg1;
- (void)updatePlaybackEngineDate:(id)arg1;

@end
