/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate> {
    NSUUID *_UUID;
    float _alpha;
    HKPropertyAnimationApplier *_animationApplier;
    <HKGraphSeriesAxisScalingRule> *_axisScalingRule;
    NSMutableDictionary *_cachedCoordinateListsByBlockPath;
    NSMutableDictionary *_cachedDataBlocksByBlockPath;
    NSNumber *_closestSelectedXCoordinate;
    HKGraphSeriesDataSource *_dataSource;
    <HKSeriesDelegate> *_delegate;
    BOOL _dirty;
    UIColor *_offScreenIndicatorColor;
    float _offscreenIndicatorAlpha;
    struct { 
        struct { 
            int index; 
            int zoom; 
        } blockPath; 
        int index; 
    } _selectedPointPath;
    HKAxis *_yAxis;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) float alpha;
@property (nonatomic, retain) <HKGraphSeriesAxisScalingRule> *axisScalingRule;
@property (nonatomic, retain) HKGraphSeriesDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSeriesDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIColor *offScreenIndicatorColor;
@property (nonatomic) float offscreenIndicatorAlpha;
@property (readonly) Class superclass;
@property (nonatomic, copy) HKAxis *yAxis;

- (void).cxx_destruct;
- (id)UUID;
- (void)_cacheCoordinates:(id)arg1 forBlockPath:(struct { int x1; int x2; })arg2;
- (id)_cachedCoordinatesForBlockPath:(struct { int x1; int x2; })arg1;
- (id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(float)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4;
- (id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(int)arg3;
- (id)_coordinatesForBlockPath:(struct { int x1; int x2; })arg1 xAxis:(id)arg2;
- (id)_dataBlockForBlockPath:(struct { int x1; int x2; })arg1;
- (void)_enumeratePathIndexesInDateRange:(id)arg1 zoomLevel:(int)arg2 block:(id /* block */)arg3;
- (void)_sendInvalidateToDelegate;
- (void)_setDirty;
- (id)_valueRangeForYAxisWithXAxisRange:(id)arg1 xAxis:(id)arg2 dateZoom:(int)arg3;
- (id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 contentOffset:(struct CGPoint { float x1; float x2; })arg3 zoomScale:(float)arg4;
- (float)alpha;
- (void)autoscaleYAxisIfNecessaryWithValueRange:(id)arg1 xAxis:(id)arg2 dateZoom:(int)arg3 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)autoscaleYAxisWithValueRange:(id)arg1 xAxis:(id)arg2 dateZoom:(int)arg3 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 animated:(BOOL)arg5;
- (id)axisScalingRule;
- (id)closestSelectedXCoordinate;
- (BOOL)containsCoordinatesInChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })coordinateTransformForChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { int x1; int x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)dataSource;
- (void)dataSourceDidUpdateCache:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deselectPath;
- (float)distanceFromPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (float)distanceFromTouchPoint:(struct CGPoint { float x1; float x2; })arg1 inChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 xAxis:(id)arg3 zoomScale:(float)arg4 contentOffset:(struct CGPoint { float x1; float x2; })arg5 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg6;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (void)drawWithChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4 zoomLevelConfiguration:(id)arg5 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg6 inContext:(struct CGContext { }*)arg7 secondaryRenderContext:(id)arg8;
- (void)enumerateCoordinatesInChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 roundToViewScale:(BOOL)arg6 block:(id /* block */)arg7;
- (void)enumerateCoordinatesInChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(struct CGPoint { float x1; float x2; })arg4 xAxisTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 roundToViewScale:(BOOL)arg6 rejectPointsOutOfChartRect:(BOOL)arg7 block:(id /* block */)arg8;
- (id)init;
- (BOOL)isHighlighted;
- (id)offScreenIndicatorColor;
- (float)offscreenIndicatorAlpha;
- (void)selectPathAtPoint:(struct { struct { int x_1_1_1; int x_1_1_2; } x1; int x2; })arg1 closestXCoordinate:(id)arg2;
- (struct { struct { int x_1_1_1; int x_1_1_2; } x1; int x2; })selectedPointPath;
- (void)setAlpha:(float)arg1;
- (void)setAxisScalingRule:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOffScreenIndicatorColor:(id)arg1;
- (void)setOffscreenIndicatorAlpha:(float)arg1;
- (void)setYAxis:(id)arg1;
- (float)xAxisDistanceFromPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (float)xAxisSelectedCoordinate:(float)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)yAxis;
- (float)yAxisDifferenceToPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;

@end
