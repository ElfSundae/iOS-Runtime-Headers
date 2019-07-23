/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAutoFocusPositionSensorMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _apsMonitorQueue;
    FigCaptureDisplayLayoutMonitor * _displayLayoutMonitor;
}

+ (void)clientHasBeenBackgrounded;
+ (void)initialize;
+ (void)logStillImageAPSStatistics:(id)arg1;
+ (void)logVideoRecordingAPSStatistics:(struct BWAPSStatistics { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; }*)arg1;
+ (void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2;
+ (id)sharedInstance;

- (void)_appendApsMotionData:(id)arg1 sphereMotionData:(id)arg2 toDataString:(id)arg3;
- (void)_appendLensMotionData:(id)arg1 toDataString:(id)arg2;
- (id)_getLogFileHandle;
- (void)_logAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2;
- (void)_logStillImageAPSStatistics:(id)arg1;
- (void)_logVideoRecordingAPSStatistics:(struct BWAPSStatistics { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; }*)arg1;
- (void)_postMagneticDetectionUserNotification;
- (void)_processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2;
- (void)_reportAPSOffsetEstimatorInfoToAggd:(id)arg1 portType:(id)arg2;
- (void)_reportStillImageAPSStatisticsToAggd:(id)arg1;
- (void)_reportVideoRecordingAPSStatisticsToAggd:(struct BWAPSStatistics { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; }*)arg1;
- (void)clientHasBeenBackgrounded;
- (void)dealloc;
- (id)init;
- (void)logStillImageAPSStatistics:(id)arg1;
- (void)logVideoRecordingAPSStatistics:(struct BWAPSStatistics { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; }*)arg1;
- (void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2;

@end
