/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherConditions : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _components;
    WFLocation * _location;
}

@property (nonatomic, retain) NSMutableDictionary *components;
@property (retain) WFLocation *location;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_retrieveSunrise:(id*)arg1 sunset:(id*)arg2;
- (id)allComponents;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 forComponent:(id)arg2;
- (id)valueForComponent:(id)arg1;
- (BOOL)wf_isDay;
- (BOOL)wf_isDayIfSunrise:(id)arg1 sunset:(id)arg2;

@end
