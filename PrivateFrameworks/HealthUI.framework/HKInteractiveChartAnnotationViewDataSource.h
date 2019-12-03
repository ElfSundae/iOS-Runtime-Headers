/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {
    NSArray * _annotationLabels;
    <HKCurrentValueViewDataSourceValueRangeFormatter> * _dateRangeFormatter;
    UIStackView * _dateStack;
    UILabel * _dividerDateLabel;
    NSString * _lastCombinedDateString;
    HKValueRange * _lastDateRange;
    NSString * _lastLowerDateString;
    NSString * _lastUpperDateString;
    UILabel * _lowerDateLabel;
    UIFont * _majorFont;
    HKUIMetricColors * _metricColors;
    UIFont * _minorFont;
    HKSelectedRangeFormatter * _selectedRangeFormatter;
    long long  _timeScope;
    UILabel * _upperDateLabel;
}

@property (nonatomic, retain) NSArray *annotationLabels;
@property (nonatomic, retain) <HKCurrentValueViewDataSourceValueRangeFormatter> *dateRangeFormatter;
@property (nonatomic, retain) UIStackView *dateStack;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *dividerDateLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastCombinedDateString;
@property (retain) HKValueRange *lastDateRange;
@property (nonatomic, retain) NSString *lastLowerDateString;
@property (nonatomic, retain) NSString *lastUpperDateString;
@property (nonatomic, retain) UILabel *lowerDateLabel;
@property (nonatomic, retain) UIFont *majorFont;
@property (nonatomic, retain) HKUIMetricColors *metricColors;
@property (nonatomic, retain) UIFont *minorFont;
@property (nonatomic, readonly) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (readonly) Class superclass;
@property (nonatomic) long long timeScope;
@property (nonatomic, retain) UILabel *upperDateLabel;

- (void).cxx_destruct;
- (void)_buildDateLabels;
- (bool)_isMultiSelectionDateRange;
- (void)_updateDateText;
- (id)annotationLabels;
- (id)dateRangeFormatter;
- (id)dateStack;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)dividerDateLabel;
- (id)initWithSelectedRangeFormatter:(id)arg1 metricColors:(id)arg2 dateRangeFormatter:(id)arg3;
- (id)lastCombinedDateString;
- (id)lastDateRange;
- (id)lastLowerDateString;
- (id)lastUpperDateString;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)lowerDateLabel;
- (id)majorFont;
- (id)metricColors;
- (id)minorFont;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (id)selectedRangeFormatter;
- (void)setAnnotationLabels:(id)arg1;
- (void)setDateRangeFormatter:(id)arg1;
- (void)setDateStack:(id)arg1;
- (void)setDividerDateLabel:(id)arg1;
- (void)setLastCombinedDateString:(id)arg1;
- (void)setLastDateRange:(id)arg1;
- (void)setLastLowerDateString:(id)arg1;
- (void)setLastUpperDateString:(id)arg1;
- (void)setLowerDateLabel:(id)arg1;
- (void)setMajorFont:(id)arg1;
- (void)setMetricColors:(id)arg1;
- (void)setMinorFont:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (void)setUpperDateLabel:(id)arg1;
- (bool)showSeparators;
- (long long)timeScope;
- (void)updateWithSelectionContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)upperDateLabel;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end
