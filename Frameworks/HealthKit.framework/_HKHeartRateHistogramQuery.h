/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKHeartRateHistogramQuery : HKQuery <HKHeartRateHistogramQueryClientInterface> {
    NSDate * _anchorDate;
    id /* block */  _completionHandler;
    long long  _contextStyle;
    NSDate * _endDate;
    HKQuantity * _histogramAnchor;
    HKQuantity * _histogramBucketSize;
    NSDateComponents * _intervalComponents;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *anchorDate;
@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) long long contextStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKQuantity *histogramAnchor;
@property (nonatomic, readonly) HKQuantity *histogramBucketSize;
@property (nonatomic, readonly) NSDateComponents *intervalComponents;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (id)anchorDate;
- (void)client_deliverHistogramCollection:(id)arg1 forQuery:(id)arg2;
- (id /* block */)completionHandler;
- (long long)contextStyle;
- (id)endDate;
- (id)histogramAnchor;
- (id)histogramBucketSize;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 contextStyle:(long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5 histogramAnchor:(id)arg6 histogramBucketSize:(id)arg7 completionHandler:(id /* block */)arg8;
- (id)intervalComponents;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)startDate;

@end
