/* Generated by RuntimeBrowser.
 */

@protocol PGGraphDataModelEnrichmentHealthRecording <NSObject>

@required

- (void)recordCurrentProcessingDate:(NSDate *)arg1 lastProcessingDate:(NSDate *)arg2 graphHealthRecorder:(id <PGGraphHealthRecording>)arg3;
- (void)recordProcessingWasCancelledWithGraphHealthRecorder:(id <PGGraphHealthRecording>)arg1;

@end
