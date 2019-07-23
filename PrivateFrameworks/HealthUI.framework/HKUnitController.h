/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUnitController : NSObject {
    HKHealthStore * _healthStore;
    NSDictionary * _unitPreferencesByObjectType;
    NSMutableDictionary * _unitStrings;
}

- (void).cxx_destruct;
- (id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2;
- (id)_displayNameKey:(id)arg1 withNumber:(BOOL)arg2;
- (id)_displayNameKeyForDataUnit:(id)arg1 withNumber:(BOOL)arg2;
- (id)_displayNameKeyForUnit:(id)arg1;
- (void)_fetchHKUnitPreferencesWithAttempt:(int)arg1;
- (id)_generateDefaultHKUnitPreferences;
- (void)_initHKUnitPreferences;
- (void)_localeDidChange:(id)arg1;
- (id)_longDisplayNameForUnit:(id)arg1;
- (id)_longDisplayNameOverrideForDataUnit:(id)arg1;
- (void)_postNotificationWithChangedKeys:(id)arg1;
- (void)_refreshHKUnitPreferencesWithCompletion:(id /* block */)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_updateHKUnitPreferences:(id)arg1;
- (void)dealloc;
- (id)displayRangeForDataUnit:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)localizedDisplayNameForDataUnit:(id)arg1;
- (id)localizedDisplayNameForDataUnit:(id)arg1 value:(id)arg2;
- (id)localizedDisplayNameForUnit:(id)arg1;
- (id)localizedHealthUIStringForDataUnit:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)localizedLongDisplayNameForDataUnit:(id)arg1;
- (double)scaleFactorForYAxisLabeling:(id)arg1;
- (id)unitForDataUnit:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forDataUnit:(id)arg2;

@end
