/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {
    HKSleepChartPointUserInfo * _sleepChartPointUserInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKSleepChartPointUserInfo *sleepChartPointUserInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dateGroupWithDate:(id)arg1 orientation:(long long)arg2;
- (id)_dateRowWithDate:(id)arg1;
- (id)_titleBodyGroupWithTitle:(id)arg1 body:(id)arg2 orientation:(long long)arg3;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (void)setSleepChartPointUserInfo:(id)arg1;
- (bool)showSeparators;
- (id)sleepChartPointUserInfo;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end
