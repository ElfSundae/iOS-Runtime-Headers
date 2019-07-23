/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationTimeline : NSObject {
    <NTKComplicationTimelineDelegate> * _delegate;
    _TimelineGapNode * _gapNode;
    _TimelineEntryNode * _leftmostNode;
    _TimelineWindow * _nowWindow;
    bool  _paused;
    _TimelineEntryNode * _rightmostNode;
    NSDate * _timeTravelDate;
    NSDate * _timeTravelLeftBoundary;
    NSDate * _timeTravelRightBoundary;
    _TimelineWindow * _timeTravelWindow;
    NSTimer * _timer;
}

@property (nonatomic) <NTKComplicationTimelineDelegate> *delegate;
@property (nonatomic) bool paused;
@property (nonatomic, retain) NSDate *timeTravelDate;
@property (nonatomic, retain) NSDate *timeTravelLeftBoundary;
@property (nonatomic, retain) NSDate *timeTravelRightBoundary;

- (void).cxx_destruct;
- (id)_afterGapDate;
- (id)_beforeGapDate;
- (id)_effectiveTimeTravelDate;
- (id)_leftmostDate;
- (id)_nowNode;
- (void)_recycleAllNodes;
- (id)_rightmostDate;
- (void)_setupWithEntry:(id)arg1;
- (struct NSArray { Class x1; }*)_sortedEntries:(struct NSArray { Class x1; }*)arg1;
- (id)_timeTravelNode;
- (id)_timelineSegmentFromSortedEntries:(struct NSArray { Class x1; }*)arg1 withLowerBound:(id)arg2 upperBound:(id)arg3;
- (void)_timerFired;
- (void)_trimTimeline;
- (void)_updateNowWindow;
- (void)_updateTimeTravelWindow;
- (void)_updateTimer;
- (void)clearTimeTravelCache;
- (void)dealloc;
- (id)delegate;
- (id)endOfVisibilityForNowEntry;
- (void)extendLeftFromDate:(id)arg1 withEntries:(struct NSArray { Class x1; }*)arg2;
- (void)extendRightFromDate:(id)arg1 withEntries:(struct NSArray { Class x1; }*)arg2;
- (id)initWithEntry:(id)arg1;
- (id)nowEntry;
- (id)nowWindow;
- (long long)nowWindowNodeCapacity;
- (bool)paused;
- (void)resetWithEntry:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1;
- (void)setTimeTravelLeftBoundary:(id)arg1;
- (void)setTimeTravelRightBoundary:(id)arg1;
- (id)timeTravelDate;
- (id)timeTravelEntry;
- (id)timeTravelLeftBoundary;
- (id)timeTravelRightBoundary;
- (id)timeTravelWindow;
- (long long)timeTravelWindowNodeCapacity;

@end
