/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerSettings : ISSettings {
    BOOL _allowCrossfadeContent;
    BOOL _allowFrameBlending;
    BOOL _allowPlayerReuse;
    BOOL _allowVideoPreRoll;
    float _audioRampDuration;
    double _crossfadeDuration;
    float _crossfadeTargetBlur;
    float _forceScrubMaximumInteractiveRate;
    float _forceScrubMaximumPressure;
    float _forceScrubMinRateChange;
    float _forceScrubMinimumPressure;
    float _forceScrubMinimumRate;
    float _forceScrubRewindFactor;
    float _forceScrubSettleRateAddition;
    double _forceTouchTimeoutInterval;
    float _forceTouchTimeoutMinimumProgress;
    double _maxPreCrossfadeDuration;
    double _nonForcePreCrossfadeDuration;
    BOOL _shouldPauseOnSettle;
    BOOL _useDedicatedQueues;
    BOOL _variableIntro;
}

@property (nonatomic) BOOL allowCrossfadeContent;
@property (nonatomic) BOOL allowFrameBlending;
@property (nonatomic) BOOL allowPlayerReuse;
@property (nonatomic) BOOL allowVideoPreRoll;
@property (nonatomic) float audioRampDuration;
@property (nonatomic) double crossfadeDuration;
@property (nonatomic) float crossfadeTargetBlur;
@property (nonatomic) float forceScrubMaximumInteractiveRate;
@property (nonatomic) float forceScrubMaximumPressure;
@property (nonatomic) float forceScrubMinRateChange;
@property (nonatomic) float forceScrubMinimumPressure;
@property (nonatomic) float forceScrubMinimumRate;
@property (nonatomic) float forceScrubRewindFactor;
@property (nonatomic) float forceScrubSettleRateAddition;
@property (nonatomic) double forceTouchTimeoutInterval;
@property (nonatomic) float forceTouchTimeoutMinimumProgress;
@property (nonatomic) double maxPreCrossfadeDuration;
@property (nonatomic) double nonForcePreCrossfadeDuration;
@property (nonatomic) BOOL shouldPauseOnSettle;
@property (nonatomic) BOOL useDedicatedQueues;
@property (nonatomic) BOOL variableIntro;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (BOOL)allowCrossfadeContent;
- (BOOL)allowFrameBlending;
- (BOOL)allowPlayerReuse;
- (BOOL)allowVideoPreRoll;
- (float)audioRampDuration;
- (double)crossfadeDuration;
- (float)crossfadeTargetBlur;
- (float)forceScrubMaximumInteractiveRate;
- (float)forceScrubMaximumPressure;
- (float)forceScrubMinRateChange;
- (float)forceScrubMinimumPressure;
- (float)forceScrubMinimumRate;
- (float)forceScrubRewindFactor;
- (float)forceScrubSettleRateAddition;
- (double)forceTouchTimeoutInterval;
- (float)forceTouchTimeoutMinimumProgress;
- (double)maxPreCrossfadeDuration;
- (double)nonForcePreCrossfadeDuration;
- (void)setAllowCrossfadeContent:(BOOL)arg1;
- (void)setAllowFrameBlending:(BOOL)arg1;
- (void)setAllowPlayerReuse:(BOOL)arg1;
- (void)setAllowVideoPreRoll:(BOOL)arg1;
- (void)setAudioRampDuration:(float)arg1;
- (void)setCrossfadeDuration:(double)arg1;
- (void)setCrossfadeTargetBlur:(float)arg1;
- (void)setDefaultValues;
- (void)setForceScrubMaximumInteractiveRate:(float)arg1;
- (void)setForceScrubMaximumPressure:(float)arg1;
- (void)setForceScrubMinRateChange:(float)arg1;
- (void)setForceScrubMinimumPressure:(float)arg1;
- (void)setForceScrubMinimumRate:(float)arg1;
- (void)setForceScrubRewindFactor:(float)arg1;
- (void)setForceScrubSettleRateAddition:(float)arg1;
- (void)setForceTouchTimeoutInterval:(double)arg1;
- (void)setForceTouchTimeoutMinimumProgress:(float)arg1;
- (void)setMaxPreCrossfadeDuration:(double)arg1;
- (void)setNonForcePreCrossfadeDuration:(double)arg1;
- (void)setShouldPauseOnSettle:(BOOL)arg1;
- (void)setUseDedicatedQueues:(BOOL)arg1;
- (void)setVariableIntro:(BOOL)arg1;
- (BOOL)shouldPauseOnSettle;
- (BOOL)useDedicatedQueues;
- (BOOL)variableIntro;

@end
