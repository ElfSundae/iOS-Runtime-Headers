/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSManeuverView : CPSInheritedBackgroundColorView {
    CPTravelEstimates * _currentTravelEstimates;
    unsigned long long  _guidanceStyle;
    CPManeuver * _representedManeuver;
    long long  _style;
}

@property (nonatomic, retain) CPTravelEstimates *currentTravelEstimates;
@property (nonatomic) unsigned long long guidanceStyle;
@property (nonatomic, readonly) CPManeuver *representedManeuver;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)accessibilityName:(id)arg1;
- (id)currentTravelEstimates;
- (unsigned long long)guidanceStyle;
- (id)initWithManeuver:(id)arg1 style:(long long)arg2;
- (id)representedManeuver;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setGuidanceStyle:(unsigned long long)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
