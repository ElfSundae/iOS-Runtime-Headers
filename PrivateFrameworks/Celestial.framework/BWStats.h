/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStats : NSObject {
    double  _max;
    double  _min;
    long long  _numberOfSamples;
    double  _sumX;
    double  _sumXX;
}

@property (nonatomic, readonly) double average;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) long long numberOfSamples;
@property (nonatomic, readonly) double standardDeviation;

- (void)addDataPoint:(double)arg1;
- (double)average;
- (id)debugDescription;
- (id)description;
- (id)init;
- (double)max;
- (double)min;
- (long long)numberOfSamples;
- (double)standardDeviation;

@end
