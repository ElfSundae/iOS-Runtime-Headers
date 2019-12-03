/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSEndpointerProxy : NSObject <CSEndpointAnalyzer, CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate> {
    <CSEndpointAnalyzerImpl> * _activeEndpointer;
    <CSEndpointAnalyzerDelegate> * _endpointerDelegate;
    <CSEndpointAnalyzerImpl> * _hybridEndpointer;
    <CSEndpointAnalyzerImpl> * _nnvadEndpointer;
    bool  _recordingDidStop;
}

@property (nonatomic) <CSEndpointAnalyzerImpl> *activeEndpointer;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double bypassSamples;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endWaitTime;
@property (nonatomic) long long endpointMode;
@property (nonatomic) long long endpointStyle;
@property (nonatomic) <CSEndpointAnalyzerDelegate> *endpointerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CSEndpointAnalyzerImpl> *hybridEndpointer;
@property (nonatomic) double interspeechWaitTime;
@property (nonatomic, readonly) double lastEndOfVoiceActivityTime;
@property (nonatomic, readonly) double lastStartOfVoiceActivityTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (nonatomic, retain) <CSEndpointAnalyzerImpl> *nnvadEndpointer;
@property (nonatomic) bool recordingDidStop;
@property (nonatomic) bool saveSamplesSeenInReset;
@property (nonatomic) double startWaitTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupNNVADEndpointer;
- (id)activeEndpointer;
- (double)automaticEndpointingSuspensionEndTime;
- (double)delay;
- (double)elapsedTimeWithNoSpeech;
- (unsigned long long)endPointAnalyzerType;
- (double)endWaitTime;
- (long long)endpointMode;
- (long long)endpointStyle;
- (void)endpointer:(id)arg1 detectedTwoShotAtTime:(double)arg2;
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;
- (id)endpointerDelegate;
- (id)endpointerModelVersion;
- (id)hybridEndpointer;
- (id)init;
- (double)interspeechWaitTime;
- (double)lastEndOfVoiceActivityTime;
- (double)lastStartOfVoiceActivityTime;
- (double)minimumDurationForEndpointer;
- (id)nnvadEndpointer;
- (void)preheat;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (void)processServerEndpointFeatures:(id)arg1;
- (bool)recordingDidStop;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)reset;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;
- (bool)saveSamplesSeenInReset;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setActiveEndpointer:(id)arg1;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
- (void)setDelay:(double)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(long long)arg1;
- (void)setEndpointStyle:(long long)arg1;
- (void)setEndpointerDelegate:(id)arg1;
- (void)setHybridEndpointer:(id)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setMinimumDurationForEndpointer:(double)arg1;
- (void)setNnvadEndpointer:(id)arg1;
- (void)setRecordingDidStop:(bool)arg1;
- (void)setSaveSamplesSeenInReset:(bool)arg1;
- (void)setStartWaitTime:(double)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(id /* block */)arg2;
- (double)startWaitTime;
- (void)stopEndpointer;
- (double)trailingSilenceDurationAtEndpoint;
- (void)updateEndpointerDelayedTrigger:(bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;

@end
