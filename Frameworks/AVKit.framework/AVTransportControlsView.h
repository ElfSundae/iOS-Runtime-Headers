/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTransportControlsView : AVView <AVScrubberDelegate> {
    AVBackdropView * _backdropView;
    bool  _backdropViewNeedsLayout;
    bool  _collapsed;
    UIView * _customContentTransitioningInfoPanel;
    NSArray * _customItems;
    <AVTransportControlsViewDelegate> * _delegate;
    AVBackdropView * _detachedExtraContentBackdropView;
    NSArray * _doubleRowLayoutConstraints;
    bool  _doubleRowLayoutEnabled;
    AVLabel * _elapsedTimeLabel;
    AVTouchIgnoringView * _embeddedExtraContentContainer;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    bool  _included;
    AVLabel * _liveBroadcastLabel;
    AVLabel * _liveBroadcastScrubberLabel;
    bool  _liveStreamingControlsIncludeScrubber;
    AVButton * _mediaSelectionButton;
    double  _minimumRequiredWidth;
    bool  _removed;
    AVPlaybackControlsRoutePickerView * _routePickerView;
    UILabel * _scrubInstructionsBackdropLabel;
    UILabel * _scrubInstructionsLabel;
    NSTimer * _scrubInstructionsTimer;
    AVScrubber * _scrubber;
    NSLayoutConstraint * _scrubberInstructionsDoubleRowActiveConstraint;
    float  _scrubberValueWhenScrubInstructionsTimerBegan;
    bool  _showsLiveStreamingControls;
    bool  _showsLoadingIndicator;
    AVButton * _skipBackButton;
    AVButton * _skipForwardButton;
    AVButton * _standardPlayPauseButton;
    AVButton * _startLeftwardContentTransitionButton;
    AVButton * _startRightwardContentTransitionButton;
    AVStyleSheet * _styleSheet;
    AVLabel * _timeRemainingLabel;
}

@property (nonatomic, readonly) AVBackdropView *backdropView;
@property (nonatomic) bool backdropViewNeedsLayout;
@property (nonatomic, readonly) bool canShowScrubInstructions;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (nonatomic, retain) UIView *customContentTransitioningInfoPanel;
@property (nonatomic, copy) NSArray *customItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTransportControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVBackdropView *detachedExtraContentBackdropView;
@property (nonatomic, readonly) NSArray *doubleRowLayoutConstraints;
@property (getter=isDoubleRowLayoutEnabled, nonatomic) bool doubleRowLayoutEnabled;
@property (nonatomic, readonly) AVLabel *elapsedTimeLabel;
@property (nonatomic, readonly) AVTouchIgnoringView *embeddedExtraContentContainer;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (readonly) unsigned long long hash;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, readonly) AVLabel *liveBroadcastLabel;
@property (nonatomic, readonly) AVLabel *liveBroadcastScrubberLabel;
@property (nonatomic) bool liveStreamingControlsIncludeScrubber;
@property (nonatomic, readonly) AVButton *mediaSelectionButton;
@property (nonatomic, readonly) double minimumRequiredWidth;
@property (getter=isRemoved, nonatomic) bool removed;
@property (nonatomic, readonly) AVPlaybackControlsRoutePickerView *routePickerView;
@property (nonatomic, readonly) UILabel *scrubInstructionsBackdropLabel;
@property (nonatomic, readonly) UILabel *scrubInstructionsLabel;
@property (nonatomic) NSTimer *scrubInstructionsTimer;
@property (nonatomic, readonly) AVScrubber *scrubber;
@property (nonatomic, readonly) NSLayoutConstraint *scrubberInstructionsDoubleRowActiveConstraint;
@property (nonatomic) float scrubberValueWhenScrubInstructionsTimerBegan;
@property (nonatomic) bool showsLiveStreamingControls;
@property (nonatomic) bool showsLoadingIndicator;
@property (nonatomic, readonly) NSArray *singleRowViews;
@property (nonatomic, readonly) AVButton *skipBackButton;
@property (nonatomic, readonly) AVButton *skipForwardButton;
@property (nonatomic, readonly) AVButton *standardPlayPauseButton;
@property (nonatomic, readonly) AVButton *startLeftwardContentTransitionButton;
@property (nonatomic, readonly) AVButton *startRightwardContentTransitionButton;
@property (nonatomic, retain) AVStyleSheet *styleSheet;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVLabel *timeRemainingLabel;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_ensureLayoutConstraints;
- (id)_scrubInstructionsAttributedText;
- (void)_showScrubInstructions;
- (void)_updateCustomContentTransitioningInfoPanelLayout;
- (void)_updateFontSizes;
- (void)_updateScrubInstructionsLabelsText;
- (id)backdropView;
- (bool)backdropViewNeedsLayout;
- (void)beginScrubbing:(id)arg1;
- (bool)canShowScrubInstructions;
- (id)customContentTransitioningInfoPanel;
- (id)customItems;
- (id)delegate;
- (id)detachedExtraContentBackdropView;
- (id)doubleRowLayoutConstraints;
- (id)elapsedTimeLabel;
- (id)embeddedExtraContentContainer;
- (void)endScrubbing:(id)arg1;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleSheet:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isDoubleRowLayoutEnabled;
- (bool)isIncluded;
- (bool)isRemoved;
- (void)layoutSubviews;
- (id)liveBroadcastLabel;
- (id)liveBroadcastScrubberLabel;
- (bool)liveStreamingControlsIncludeScrubber;
- (id)mediaSelectionButton;
- (double)minimumRequiredWidth;
- (id)routePickerView;
- (id)scrubInstructionsBackdropLabel;
- (id)scrubInstructionsLabel;
- (id)scrubInstructionsTimer;
- (id)scrubber;
- (id)scrubberInstructionsDoubleRowActiveConstraint;
- (void)scrubberSlowKnobMovementDetected:(id)arg1;
- (void)scrubberValueChanged:(id)arg1;
- (float)scrubberValueWhenScrubInstructionsTimerBegan;
- (void)setBackdropViewNeedsLayout:(bool)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setCustomContentTransitioningInfoPanel:(id)arg1;
- (void)setCustomItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetachedExtraContentBackdropView:(id)arg1;
- (void)setDoubleRowLayoutEnabled:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setLiveStreamingControlsIncludeScrubber:(bool)arg1;
- (void)setRemoved:(bool)arg1;
- (void)setScrubInstructionsTimer:(id)arg1;
- (void)setScrubberValueWhenScrubInstructionsTimerBegan:(float)arg1;
- (void)setShowsLiveStreamingControls:(bool)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (void)setStyleSheet:(id)arg1;
- (bool)showsLiveStreamingControls;
- (bool)showsLoadingIndicator;
- (id)singleRowViews;
- (id)skipBackButton;
- (id)skipForwardButton;
- (id)standardPlayPauseButton;
- (id)startLeftwardContentTransitionButton;
- (id)startRightwardContentTransitionButton;
- (id)styleSheet;
- (id)timeRemainingLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
