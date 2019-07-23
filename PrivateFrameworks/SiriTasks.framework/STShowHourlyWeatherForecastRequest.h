/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STShowHourlyWeatherForecastRequest : AFSiriRequest {
    STCity *_city;
    STWeatherAttributes *_currentAttributes;
    int _forecastType;
    NSArray *_hourlyAttributes;
    int _startHour;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCurrentAttributes:(id)arg1 hourlyAttributes:(id)arg2 city:(id)arg3 startHour:(int)arg4 forecastType:(int)arg5;
- (id)city;
- (id)createResponse;
- (id)currentAttributes;
- (void)encodeWithCoder:(id)arg1;
- (int)forecastType;
- (id)hourlyAttributes;
- (id)initWithCoder:(id)arg1;
- (int)startHour;

@end
