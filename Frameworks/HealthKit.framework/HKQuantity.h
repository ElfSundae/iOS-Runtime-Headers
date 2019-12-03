/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantity : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    HKUnit * _unit;
    double  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=_unit, nonatomic, readonly) HKUnit *unit;
@property (getter=_value, nonatomic, readonly) double value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_quantityWithBeatsPerMinute:(double)arg1;
+ (id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_beatsPerMinute;
- (id)_foundationMeasurement;
- (id)_initWithUnit:(id)arg1 doubleValue:(double)arg2;
- (bool)_isZero;
- (id)_quantityByAddingQuantity:(id)arg1;
- (id)_unit;
- (double)_value;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValueForUnit:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)hk_isGreaterThanQuantity:(id)arg1;
- (bool)hk_isLessThanQuantity:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCompatibleWithUnit:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (double)wf_normalizedDoubleValueForUnit:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (double)fiui_doubleValueByDividingByQuantity:(id)arg1;
- (bool)fiui_isNonzero;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_quantityWithDegreesCelsius:(double)arg1;
+ (id)hkmc_quantityWithDegreesFahrenheit:(double)arg1;

- (double)hkmc_degreesCelsius;
- (double)hkmc_degreesFahrenheit;

@end
