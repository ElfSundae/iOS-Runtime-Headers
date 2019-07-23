/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartModelEnumerator : NSObject {
    TSCH3DChartType * mChartType;
    struct ValueEnumerator { 
        bool mForward; 
        unsigned long long mIndex; 
        unsigned long long mMax; 
        double mValue; 
    }  mCoordinate;
    TSCHChartAxis * mCoordinateAxis;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__value_; 
        } __end_cap_; 
    }  mCoordinateValues;
    double  mIntercept;
    TSCHChartModel * mModel;
    unsigned long long  mNumberOfValues;
    struct ValueEnumerator { 
        bool mForward; 
        unsigned long long mIndex; 
        unsigned long long mMax; 
        double mValue; 
    }  mSeries;
    NSArray * mSeriesList;
    TSCHChartSeriesType * mSeriesType;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__value_; 
        } __end_cap_; 
    }  mSeriesValues;
    double  mUnitSpaceIntercept;
    TSCHChartAxis * mValueAxis;
}

@property (nonatomic, readonly) TSCH3DChartType *chartType;
@property (nonatomic, readonly) TSCHChartInfo *info;
@property (nonatomic, readonly) TSCHChartModel *model;
@property (nonatomic, readonly) TSCHChartSeries *series;
@property (nonatomic, readonly) TSCHChartSeriesType *seriesType;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size;

+ (id)enumeratorWithModel:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)axisSpaceValue;
- (id)chartType;
- (unsigned long long)countSeries;
- (void)dealloc;
- (id)elementEnumerator;
- (unsigned long long)elementIndex;
- (double)groupValue;
- (unsigned long long)index;
- (id)info;
- (id)initWithModel:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3;
- (double)intercept;
- (bool)isStackedPercentageThatRoundsDownToZero;
- (bool)isValid;
- (bool)isValidNonZero;
- (id)model;
- (id)nextElement;
- (id)nextElement:(unsigned long long)arg1;
- (id)nextSeries;
- (id)nextSeries:(unsigned long long)arg1;
- (unsigned long long)numberOfSeries;
- (id)p_resetCoordinateEnumeration;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })position;
- (void)resetForReverseSeriesEnumeration:(bool)arg1;
- (id)reverseSeriesEnumerator;
- (id)series;
- (id)seriesEnumerator;
- (id)seriesFill;
- (id)seriesFillOrStrokeColor;
- (id)seriesName;
- (id)seriesType;
- (bool)showSeriesName;
- (bool)showValueLabels;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (bool)skipZeroValues;
- (double)unitSpaceIntercept;
- (double)unitSpaceValue;
- (double)unitSpaceValueForAxisValue:(double)arg1;
- (void)updateAxes;
- (void)updateValue;
- (unsigned int)valueLabelPositionForAxisValue:(double)arg1;
- (id)valueString;
- (id)valueStringForLabelResources:(id)arg1;

@end
