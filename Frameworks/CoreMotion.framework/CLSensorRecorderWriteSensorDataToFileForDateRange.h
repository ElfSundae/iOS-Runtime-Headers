/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLSensorRecorderWriteSensorDataToFileForDateRange : NSObject <NSSecureCoding> {
    int  _dataType;
    double  _endTime;
    double  _startTime;
}

@property int dataType;
@property double endTime;
@property double startTime;

+ (BOOL)supportsSecureCoding;

- (int)dataType;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)initWithCoder:(id)arg1;
- (void)setDataType:(int)arg1;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
