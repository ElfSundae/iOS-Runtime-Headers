/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAnnotationChartPoint : NSObject <HKChartPoint> {
    NSDate * _date;
    long long  _pointType;
    NSNumber * _value;
}

@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long pointType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *value;

- (void).cxx_destruct;
- (id)allYValues;
- (id)date;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 pointType:(long long)arg2;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (long long)pointType;
- (id)userInfo;
- (id)value;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
