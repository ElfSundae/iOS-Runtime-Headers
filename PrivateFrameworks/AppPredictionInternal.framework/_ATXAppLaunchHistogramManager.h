/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchHistogramManager : NSObject {
    NSMutableDictionary *_histograms;
}

+ (void)resetSharedInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)histogramForLaunchType:(unsigned int)arg1;
- (id)init;
- (id)pathForLaunchType:(unsigned int)arg1;

@end
