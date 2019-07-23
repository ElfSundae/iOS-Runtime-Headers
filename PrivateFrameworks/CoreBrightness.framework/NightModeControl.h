/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface NightModeControl : NSObject {
    struct BLRAggdInfo { 
        float manualModeTime; 
        float sunModeTime; 
        float scheduleModeTime; 
        int turnOnForNowCount; 
        int turnOffForNowCount; 
        int turnOnUntilTomorrowCount; 
        int turnOffUntilTomorrowCount; 
        double _aggdModeChangeTimestamp; 
    } _aggdKeysInfo;
    NSObject<OS_dispatch_source> *_aggdUpdateTimer;
    int _algoState;
    struct { 
        struct { 
            int hour; 
            int minute; 
        } fromTime; 
        struct { 
            int hour; 
            int minute; 
        } toTime; 
    } _backupSchedule;
    id /* block */ _callbackBlock;
    BOOL _checkInactivity;
    int _currentScheduledTransitionType;
    NSString *_currentSunriseKey;
    NSString *_currentSunsetKey;
    struct __CFTimeZone { } *_currentTimeZone;
    struct __Display { } *_display;
    BOOL _displayOff;
    double _displayOffTimestamp;
    struct __CFUserNotification { } *_enableNotification;
    struct NMFactorState { 
        double rampStartTime; 
        float factor; 
        float target; 
        float start; 
        float rampLength; 
    } _factorState;
    float _inactivityTimeout;
    BOOL _isDaylight;
    NSString *_isDaylightKey;
    int _logLevel;
    float _maxFactor;
    float _minFactor;
    NSString *_nextSunriseKey;
    NSString *_nextSunsetKey;
    NSObject<OS_dispatch_source> *_nextTransitionTimer;
    BOOL _notificationInProgress;
    int _notifyUserAboutScheduleCounter;
    double _offTransitionTimeAbsoluteUnrestricted;
    double _offTransitionTimeAbsoluteUnrestrictedPrev;
    NSString *_previousSunriseKey;
    NSString *_previousSunsetKey;
    NSMutableDictionary *_properties;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _revertToSunriseSunset;
    struct { 
        BOOL active; 
        BOOL enabled; 
        BOOL sunSchedulePermitted; 
        int mode; 
        struct { 
            struct { 
                int hour; 
                int minute; 
            } fromTime; 
            struct { 
                int hour; 
                int minute; 
            } toTime; 
        } schedule; 
        unsigned long disableFlags; 
    } _status;
    BOOL _statusUpdated;
    double _sunriseAbsolute;
    double _sunrisePreviousAbsolute;
    NSDictionary *_sunriseSunsetInfo;
    int _sunriseSunsetInfoQueryTimeout;
    SunriseSunsetProvider *_sunriseSunsetProvider;
    double _sunsetAbsolute;
    double _sunsetPreviousAbsolute;
    float _transitionLength;
    float _transitionLengthActual;
    float _transitionRate;
    NSObject<OS_dispatch_source> *_transitionTimer;
    BOOL _transitionTimesValid;
    float _transitionsTimesCoeff;
    double _untilNexTransitionTimestamp;
}

- (void)aggdKeysUpdate;
- (void)cancelAggdPeriodicUpdate;
- (void)cancelSchedule;
- (void)cancelTransition;
- (void)clockChanged;
- (id)copyDictionaryFromStatus:(struct { BOOL x1; BOOL x2; BOOL x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long x6; }*)arg1;
- (id)copyLowPowerModeState;
- (id)copyStatusDictionaryFromPrefs;
- (void)dealloc;
- (void)displayAlertInteractive:(BOOL)arg1;
- (void)enableBlueLightReduction:(BOOL)arg1 withOption:(int)arg2;
- (id)getPropertyForKey:(id)arg1;
- (id)initWithDisplay:(struct __Display { }*)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (void)initiateFullMaxTransition;
- (void)initiateFullMinTransition;
- (void)initiateRestrictedMaxTransition;
- (void)initiateTransitionTo:(float)arg1 andRampLength:(float)arg2;
- (BOOL)parseStatusDictionary:(id)arg1 intoStruct:(struct { BOOL x1; BOOL x2; BOOL x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long x6; }*)arg2 shouldUpdatePrefs:(BOOL*)arg3;
- (void)reevaluateCurrentState;
- (void)reevaluateCurrentStateWithFactorFadeOption:(float)arg1;
- (void)retrieveSunriseSunsetTimesFromBackup:(double)arg1;
- (void)saveStatusToPrefs:(id)arg1;
- (void)scheduleAggdKeysUpdate;
- (void)scheduleNextTransition:(double)arg1 withType:(int)arg2;
- (void)setAlgoState:(int)arg1;
- (void)setMode:(int)arg1;
- (void)setNightModeFactor:(float)arg1;
- (void)setNightModeFactor:(float)arg1 withFadePeriod:(float)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setSchedule:(id)arg1;
- (void)setSunPermitted:(BOOL)arg1;
- (void)tearDownAllTimers;
- (void)timeZoneChanged;
- (void)transitionTimerHandler;
- (void)updateLowPowerModeState:(id)arg1;
- (void)updateOptionTimestamp:(double)arg1;
- (void)updateStatusDictionaryWithValue:(id)arg1 forKey:(id)arg2;
- (void)updateSunriseSunsetBackup;
- (void)updateSunriseSunsetInfo:(id)arg1;
- (void)updateTransitionTimes:(double)arg1;
- (BOOL)updateTransitionTimesFromSchedule:(double)arg1;
- (BOOL)updateTransitionTimesFromSunriseSunset:(double)arg1;

@end
