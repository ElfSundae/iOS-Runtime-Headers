/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (nonatomic) unsigned long long possibleCalendarUnits;

+ (unsigned long long)calendarUnitFromUnitString:(id)arg1;
+ (bool)unitStringIsDurationUnit:(id)arg1;

- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (bool)parameterStateIsValid:(id)arg1;
- (unsigned long long)possibleCalendarUnits;
- (void)setPossibleCalendarUnits:(unsigned long long)arg1;

@end