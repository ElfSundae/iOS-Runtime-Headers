/* Generated by RuntimeBrowser.
 */

@protocol SXVASTAnalyticsEventInfoFactory <NSObject>

@required

- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfo;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfoWithMetadata:(id <SXVideoMetadataProviding>)arg1;
- (ADMediaAnalyticsProgressEventInfo *)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id <SXVideoMetadataProviding>)arg2;

@end
