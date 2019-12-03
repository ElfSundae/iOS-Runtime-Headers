/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TeaCharts.framework/TeaCharts
 */

@interface TeaCharts.LineSeriesAccessibilityElement : UIAccessibilityElement {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  chartModel;
    void dataElements;
    void interactor;
    void series;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)init;
- (id)initWithAccessibilityContainer:(id)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)tc_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;
- (bool)tc_accessibilityDataSeriesIncludesTrendlineInSonification;
- (id)tc_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;
- (id)tc_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;
- (id)tc_accessibilityDataSeriesName;
- (double)tc_accessibilityDataSeriesSonificationDuration;
- (bool)tc_accessibilityDataSeriesSupportsSonification;
- (bool)tc_accessibilityDataSeriesSupportsSummarization;
- (id)tc_accessibilityDataSeriesTitleForAxis:(long long)arg1;
- (long long)tc_accessibilityDataSeriesType;
- (id)tc_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;
- (id)tc_accessibilityDataSeriesValuesForAxis:(long long)arg1;

@end
