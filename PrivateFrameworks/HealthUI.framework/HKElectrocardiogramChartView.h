/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKElectrocardiogramChartView : UIView {
    bool  _allowsScrolling;
    bool  _edgeMaskEnabled;
    HKElectrocardiogramGridView * _gridView;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    HKElectrocardiogram * _sample;
    UIView * _waveformContainerView;
    HKElectrocardiogramWaveformView * _waveformView;
}

@property (nonatomic) bool allowsScrolling;
@property (nonatomic, readonly) double controlSignalDuration;
@property (getter=isDisplayingControlSignal, nonatomic) bool displayControlSignal;
@property (getter=isEdgeMaskEnabled, nonatomic) bool edgeMaskEnabled;
@property (nonatomic, readonly) NSArray *gridOptions;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } gridSize;
@property (nonatomic, retain) HKElectrocardiogramGridView *gridView;
@property (nonatomic) struct CGSize { double x1; double x2; } lastSize;
@property (nonatomic, retain) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (nonatomic, readonly) double pointsPerMillivolt;
@property (nonatomic, readonly) double pointsPerSecond;
@property (nonatomic, retain) HKElectrocardiogram *sample;
@property (nonatomic, retain) UIView *waveformContainerView;
@property (nonatomic, retain) HKElectrocardiogramWaveformView *waveformView;

+ (id)defaultGridOptions;
+ (id)printedGridOptions;

- (void).cxx_destruct;
- (void)_setUpUI;
- (void)_updateChartForSizeChange;
- (bool)allowsScrolling;
- (double)controlSignalDuration;
- (void)displayElectrocardiogram:(id)arg1 allowsScrolling:(bool)arg2;
- (id)gridOptions;
- (struct CGSize { double x1; double x2; })gridSize;
- (id)gridView;
- (id)initWithGridSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithGridSize:(struct CGSize { double x1; double x2; })arg1 gridOptions:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDisplayingControlSignal;
- (bool)isEdgeMaskEnabled;
- (struct CGSize { double x1; double x2; })lastSize;
- (void)layoutSubviews;
- (id)lineColor;
- (double)lineWidth;
- (double)pointsPerMillivolt;
- (double)pointsPerSecond;
- (id)sample;
- (void)setAllowsScrolling:(bool)arg1;
- (void)setDisplayControlSignal:(bool)arg1;
- (void)setEdgeMaskEnabled:(bool)arg1;
- (void)setGridView:(id)arg1;
- (void)setLastSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setSample:(id)arg1;
- (void)setWaveformContainerView:(id)arg1;
- (void)setWaveformPath:(id)arg1;
- (void)setWaveformPaths:(id)arg1;
- (void)setWaveformView:(id)arg1;
- (id)waveformContainerView;
- (id)waveformView;

@end
