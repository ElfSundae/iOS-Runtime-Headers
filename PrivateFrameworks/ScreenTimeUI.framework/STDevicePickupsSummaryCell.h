/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDevicePickupsSummaryCell : STTableCell {
    UILabel * _averagePickupsLabel;
    NSLayoutConstraint * _bottomConstraint;
    UILabel * _firstUsedAfterPickupLabel;
    STUsageGraphView * _graphView;
    STHorizontallySegmentedView * _pickupMetricsView;
}

@property (nonatomic, readonly) UILabel *averagePickupsLabel;
@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, readonly) UILabel *firstUsedAfterPickupLabel;
@property (nonatomic, readonly) STUsageGraphView *graphView;
@property (nonatomic, readonly) STHorizontallySegmentedView *pickupMetricsView;

- (void).cxx_destruct;
- (void)_numberOfLinesDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)averagePickupsLabel;
- (id)bottomConstraint;
- (void)dealloc;
- (id)firstUsedAfterPickupLabel;
- (id)graphView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pickupMetricsView;
- (void)setBottomConstraint:(id)arg1;
- (void)setValue:(id)arg1;

@end
