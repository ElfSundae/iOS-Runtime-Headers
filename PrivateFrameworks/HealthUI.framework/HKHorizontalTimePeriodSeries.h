/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHorizontalTimePeriodSeries : HKGraphSeries <HKAxisLabelDataSource> {
    NSArray * _cachedAxisLabels;
    NSArray * _enumerationValueOrdering;
    UIColor * _fillColor;
    double  _lineSpacingPercentage;
    double  _lineWidth;
    UIImage * _selectedPointMarkerImage;
    double  _topInsetPercentage;
    NSDictionary * _valueLabels;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enumerationValueOrdering;
@property (nonatomic, retain) UIColor *fillColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lineSpacingPercentage;
@property (nonatomic) double lineWidth;
@property (nonatomic, retain) UIImage *selectedPointMarkerImage;
@property (readonly) Class superclass;
@property (nonatomic) double topInsetPercentage;
@property (nonatomic, retain) NSDictionary *valueLabels;

- (void).cxx_destruct;
- (id)_generateAxisLabels;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)enumerationValueOrdering;
- (id)fillColor;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (double)lineSpacingPercentage;
- (double)lineWidth;
- (struct CGPoint { double x1; double x2; })renderPositionForLabel:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 constantOffset:(double)arg5 isHorizontal:(bool)arg6 optionalOffset:(struct CGPoint { double x1; double x2; })arg7;
- (id)selectedPointMarkerImage;
- (void)setEnumerationValueOrdering:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLineSpacingPercentage:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setSelectedPointMarkerImage:(id)arg1;
- (void)setTopInsetPercentage:(double)arg1;
- (void)setValueLabels:(id)arg1;
- (void)setYAxis:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (double)topInsetPercentage;
- (id)valueLabels;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yCoordinateForLevel:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
