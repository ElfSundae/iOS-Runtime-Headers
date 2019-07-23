/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WACurrentForecast : NSObject <NSCopying> {
    unsigned int  _UVIndex;
    int  _conditionCode;
    float  _dewPoint;
    WFTemperature * _feelsLike;
    float  _humidity;
    unsigned int  _observationTime;
    float  _precipitationPast24Hours;
    float  _pressure;
    unsigned int  _pressureRising;
    WFTemperature * _temperature;
    float  _visibility;
    float  _windDirection;
    float  _windSpeed;
}

@property (nonatomic) unsigned int UVIndex;
@property (nonatomic) int conditionCode;
@property (nonatomic) float dewPoint;
@property (nonatomic, retain) WFTemperature *feelsLike;
@property (nonatomic) float humidity;
@property (nonatomic) unsigned int observationTime;
@property (nonatomic) float precipitationPast24Hours;
@property (nonatomic) float pressure;
@property (nonatomic) unsigned int pressureRising;
@property (nonatomic, retain) WFTemperature *temperature;
@property (nonatomic) float visibility;
@property (nonatomic) float windDirection;
@property (nonatomic) float windSpeed;

+ (id)currentForecastForLocation:(id)arg1 conditions:(id)arg2;

- (void).cxx_destruct;
- (unsigned int)UVIndex;
- (int)conditionCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)dewPoint;
- (id)feelsLike;
- (float)humidity;
- (unsigned int)observationTime;
- (float)precipitationPast24Hours;
- (float)pressure;
- (unsigned int)pressureRising;
- (void)setConditionCode:(int)arg1;
- (void)setDewPoint:(float)arg1;
- (void)setFeelsLike:(id)arg1;
- (void)setHumidity:(float)arg1;
- (void)setObservationTime:(unsigned int)arg1;
- (void)setPrecipitationPast24Hours:(float)arg1;
- (void)setPressure:(float)arg1;
- (void)setPressureRising:(unsigned int)arg1;
- (void)setTemperature:(id)arg1;
- (void)setUVIndex:(unsigned int)arg1;
- (void)setVisibility:(float)arg1;
- (void)setWindDirection:(float)arg1;
- (void)setWindSpeed:(float)arg1;
- (id)temperature;
- (float)visibility;
- (float)windDirection;
- (float)windSpeed;

@end
