/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

@interface MXAppLaunchMetric : MXMetric {
    MXHistogram * _histogrammedApplicationResumeTime;
    MXHistogram * _histogrammedTimeToFirstDraw;
}

@property (readonly) MXHistogram *histogrammedApplicationResumeTime;
@property (readonly) MXHistogram *histogrammedTimeToFirstDraw;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)histogrammedApplicationResumeTime;
- (id)histogrammedTimeToFirstDraw;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2;
- (id)toDictionary;

@end
