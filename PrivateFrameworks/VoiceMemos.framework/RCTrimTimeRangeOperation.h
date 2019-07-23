/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCTrimTimeRangeOperation : NSOperation {
    BOOL _canSimulateTrimmingProgress;
    id /* block */ _progressUpdateBlock;
    float _simulatedProgress;
    struct { 
        double beginTime; 
        double endTime; 
    } _timeRange;
    BOOL _trimMode;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) double exportedDuration;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) BOOL progressShouldContinueUpdating;
@property (nonatomic, copy) id /* block */ progressUpdateBlock;
@property (nonatomic, readonly) BOOL success;
@property (nonatomic, readonly) struct { double x1; double x2; } timeRange;
@property (nonatomic, readonly) BOOL trimMode;

- (void).cxx_destruct;
- (void)_postFinalProgressUpdateNotification;
- (float)_progress;
- (id)initWithTimeRange:(struct { double x1; double x2; })arg1 trimMode:(int)arg2;
- (void)main;
- (double)progress;
- (BOOL)progressShouldContinueUpdating;
- (id /* block */)progressUpdateBlock;
- (void)setCanSimulateTrimmingProgress:(BOOL)arg1;
- (void)setProgressUpdateBlock:(id /* block */)arg1;
- (void)simulateTrimmingProgress;
- (void)start;
- (struct { double x1; double x2; })timeRange;
- (BOOL)trimMode;
- (void)updateExportSessionProgressWithInterval:(double)arg1;

@end
