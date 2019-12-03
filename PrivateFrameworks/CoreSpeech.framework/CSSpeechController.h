/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeechController : NSObject <CSAudioAlertProvidingDelegate, CSAudioConverterDelegate, CSAudioSessionControllerDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSContinuousVoiceTriggerDelegate, CSSmartSiriVolumeControllerDelegate, CSSpIdSpeakerRecognizerDelegate, CSSpeechManagerDelegate, CSVoiceTriggerAssetHandlerDelegate, CSXPCClientDelegate> {
    unsigned long long  _activeChannel;
    <CSAudioAlertProviding> * _alertProvider;
    NSObject<OS_dispatch_queue> * _audibleFeedbackQueue;
    CSAudioConverter * _audioConverter;
    CSPlainAudioFileWriter * _audioFileWriter;
    <CSAudioMeterProviding> * _audioMeterProvider;
    <CSAudioMetricProviding> * _audioMetricProvider;
    CSAudioRecordContext * _audioRecordContext;
    double  _audioSessionActivationDelay;
    CSAudioStream * _audioStream;
    <CSBargeInModeProviding> * _bargeInModeProvider;
    CSXPCClient * _bargeInModeXPCClient;
    float  _cachedAvgPower;
    float  _cachedPeakPower;
    NSObject<OS_dispatch_queue> * _contextResetQueue;
    CSContinuousVoiceTrigger * _continuousVoiceTrigger;
    CSAudioZeroCounter * _continuousZeroCounter;
    <CSSpeechControllerDelegate> * _delegate;
    bool  _didDeliverLastBuffer;
    CSAudioSampleRateConverter * _downsampler;
    CSEndpointerProxy * _endpointerProxy;
    bool  _isActivated;
    bool  _isAlarmPlaying;
    bool  _isMediaPlaying;
    bool  _isNarrowBand;
    bool  _isOpus;
    bool  _isRemoteVADAvailableStream;
    bool  _isSoundPlaying;
    bool  _isTimerPlaying;
    CSLanguageDetector * _languageDetector;
    <CSLanguageDetectorDelegate> * _languageDetectorDelegate;
    NSDictionary * _lastRTSTriggerInfo;
    NSDictionary * _lastVoiceTriggerInfo;
    bool  _myriadPreventingTwoShotFeedback;
    CSAudioConverter * _narrowBandOpusConverter;
    bool  _needsPostGain;
    CSAudioConverter * _opusAudioConverter;
    id /* block */  _pendingAudioSessionActivationCompletion;
    NSUUID * _pendingAudioSessionActivationToken;
    CSAudioPowerMeter * _powerMeter;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _requestedRecordSettings;
    CSSelectiveChannelAudioFileWriter * _serverLoggingWriter;
    <CSAudioSessionProviding> * _sessionProvider;
    bool  _shouldUseLanguageDetectorForCurrentRequest;
    CSSpeakerIdRecognizerFactory * _spIdFactory;
    <CSSpIdSpeakerRecognizer> * _spIdRecognizer;
    NSDictionary * _spIdUserScores;
    <CSSpeakerIdentificationDelegate> * _speakerIdDelegate;
    CSSpeechEndHostTimeEstimator * _speechEndHostTimeEstimator;
    <CSAudioStreamProviding> * _streamProvider;
    NSObject<OS_dispatch_group> * _twoShotAudibleFeedbackDecisionGroup;
    bool  _twoShotNotificationEnabled;
    CSUserVoiceProfileStore * _voiceProfileStore;
    CSSpIdImplicitTraining * _voiceTriggerImplicitTraining;
    CSSmartSiriVolumeController * _volumeController;
    CSXPCClient * _xpcClient;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, retain) <CSAudioAlertProviding> *alertProvider;
@property (nonatomic, retain) CSPlainAudioFileWriter *audioFileWriter;
@property (nonatomic, retain) <CSAudioMeterProviding> *audioMeterProvider;
@property (nonatomic, retain) <CSAudioMetricProviding> *audioMetricProvider;
@property (nonatomic, retain) CSAudioRecordContext *audioRecordContext;
@property (nonatomic) double audioSessionActivationDelay;
@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic, retain) <CSBargeInModeProviding> *bargeInModeProvider;
@property (nonatomic, retain) CSXPCClient *bargeInModeXPCClient;
@property (nonatomic) float cachedAvgPower;
@property (nonatomic) float cachedPeakPower;
@property (nonatomic, retain) CSContinuousVoiceTrigger *continuousVoiceTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSpeechControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDeliverLastBuffer;
@property (nonatomic) bool duckOthersOption;
@property (nonatomic, readonly) <CSEndpointAnalyzer> *endpointAnalyzer;
@property (nonatomic, retain) CSEndpointerProxy *endpointerProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActivated;
@property (nonatomic) bool isAlarmPlaying;
@property (nonatomic) bool isMediaPlaying;
@property (nonatomic) bool isNarrowBand;
@property (nonatomic) bool isOpus;
@property (nonatomic) bool isRemoteVADAvailableStream;
@property (nonatomic) bool isSoundPlaying;
@property (nonatomic) bool isTimerPlaying;
@property (nonatomic, retain) CSLanguageDetector *languageDetector;
@property (nonatomic) <CSLanguageDetectorDelegate> *languageDetectorDelegate;
@property (nonatomic) bool myriadPreventingTwoShotFeedback;
@property (nonatomic) bool needsPostGain;
@property (nonatomic, copy) id /* block */ pendingAudioSessionActivationCompletion;
@property (nonatomic, retain) NSUUID *pendingAudioSessionActivationToken;
@property (nonatomic, retain) CSAudioPowerMeter *powerMeter;
@property (nonatomic, retain) CSSelectiveChannelAudioFileWriter *serverLoggingWriter;
@property (nonatomic, retain) <CSAudioSessionProviding> *sessionProvider;
@property (nonatomic) bool shouldUseLanguageDetectorForCurrentRequest;
@property (nonatomic, retain) CSSpeakerIdRecognizerFactory *spIdFactory;
@property (nonatomic, retain) <CSSpIdSpeakerRecognizer> *spIdRecognizer;
@property (nonatomic, retain) NSDictionary *spIdUserScores;
@property (nonatomic) <CSSpeakerIdentificationDelegate> *speakerIdDelegate;
@property (nonatomic, retain) CSSpeechEndHostTimeEstimator *speechEndHostTimeEstimator;
@property (nonatomic, retain) <CSAudioStreamProviding> *streamProvider;
@property (readonly) Class superclass;
@property (nonatomic) bool twoShotNotificationEnabled;
@property (nonatomic, retain) CSUserVoiceProfileStore *voiceProfileStore;
@property (nonatomic, retain) CSSpIdImplicitTraining *voiceTriggerImplicitTraining;
@property (nonatomic, retain) CSSmartSiriVolumeController *volumeController;
@property (nonatomic, retain) CSXPCClient *xpcClient;

+ (bool)isSmartSiriVolumeAvailable;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSXPCClient:(id)arg1 didDisconnect:(bool)arg2;
- (bool)_activateAudioSession:(id*)arg1 forRetry:(bool)arg2;
- (bool)_activateAudioSessionWithDelay:(double)arg1 error:(id*)arg2;
- (bool)_canPlayPhaticDuringMediaPlayback;
- (void)_cancelPendingAudioSessionActivateForReason:(id)arg1;
- (id)_contextToString:(id)arg1;
- (void)_createAudioPowerMeterIfNeeded;
- (bool)_createAudioProviderFromXPCWithContext:(id)arg1;
- (void)_createBargeInModeProviderFromXPCIfNeeded;
- (void)_createLanguageDetectorIfNeeded;
- (long long)_currentAudioRecorderSampleRate;
- (void)_deviceAudioLoggingWithFileWriter:(id)arg1;
- (void)_didStopForReason:(long long)arg1;
- (void)_enableBargeInMode:(bool)arg1;
- (bool)_fetchAudioProviderWithContext:(id)arg1;
- (id)_fetchFallbackAudioSessionReleaseProviding;
- (bool)_fetchLastTriggerInfo;
- (id)_getSpeechIdentifier;
- (void)_initializeAlarmState;
- (void)_initializeMediaPlayingState;
- (void)_initializeTimerState;
- (bool)_isDelayedDuckingSupportedContext;
- (id)_languageDetectorOptionFromSettings:(id)arg1;
- (void)_performPendingAudioSessionActivateForReason:(id)arg1;
- (unsigned long long)_phaticPlaybackReason;
- (void)_scheduleActivateAudioSessionWithDelay:(double)arg1 forReason:(id)arg2 validator:(id /* block */)arg3 completion:(id /* block */)arg4;
- (float)_scheduledPhaticDelay;
- (void)_setSoundPlayingState;
- (bool)_setupAudioConverter:(bool)arg1 isNarrowBand:(bool)arg2;
- (void)_setupDownsamplerIfNeeded;
- (void)_setupSpeakerId;
- (bool)_shouldFetchRaiseToSpeakInfo;
- (bool)_shouldFetchVoiceTriggerInfo;
- (bool)_shouldResetContextAtPrepare;
- (bool)_shouldSchedulePhaticAtStartRecording;
- (bool)_shouldSetStartSampleCount;
- (bool)_shouldSetStartSampleCountForRTS;
- (bool)_shouldUseLanguageDetector:(id)arg1;
- (void)_startPhaticDecision;
- (void)_tearDownBargeInModeProviderIfNeeded;
- (void)_teardownAudioProviderIfNeeded;
- (unsigned long long)activeChannel;
- (id)alertProvider;
- (unsigned long long)alertStartTime;
- (void)audioAlertProvidingDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;
- (void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4;
- (id)audioFileWriter;
- (id)audioMeterProvider;
- (id)audioMetricProvider;
- (id)audioRecordContext;
- (double)audioSessionActivationDelay;
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
- (void)audioSessionProvider:(id)arg1 didChangeContext:(bool)arg2;
- (void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(bool)arg2;
- (void)audioSessionProvider:(id)arg1 providerInvalidated:(bool)arg2;
- (void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(bool)arg2;
- (void)audioSessionProviderBeginInterruption:(id)arg1;
- (void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;
- (void)audioSessionProviderEndInterruption:(id)arg1;
- (id)audioStream;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)averagePowerForOutputReference;
- (id)bargeInModeProvider;
- (id)bargeInModeXPCClient;
- (void)beginWaitingForMyriad;
- (float)cachedAvgPower;
- (float)cachedPeakPower;
- (void)cancelCurrentLanguageDetectorRequest;
- (id)continuousVoiceTrigger;
- (void)continuousVoiceTrigger:(id)arg1 detectedSilenceAfterVoiceTriggerAt:(double)arg2;
- (void)continuousVoiceTrigger:(id)arg1 detectedVoiceTriggerResult:(id)arg2;
- (id)delegate;
- (bool)didDeliverLastBuffer;
- (bool)duckOthersOption;
- (void)endWaitingForMyriadWithDecision:(unsigned long long)arg1;
- (id)endpointAnalyzer;
- (id)endpointerModelVersion;
- (id)endpointerProxy;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })getLPCMAudioStreamBasicDescription;
- (double)getRecordBufferDuration;
- (float)getSmartSiriVolume;
- (id)init;
- (bool)initializeRecordSessionWithContext:(id)arg1;
- (bool)isActivated;
- (bool)isAlarmPlaying;
- (bool)isBuiltInVoiceTriggered;
- (bool)isHearstVoiceTriggered;
- (bool)isJarvisVoiceTriggered;
- (bool)isMediaPlaying;
- (bool)isNarrowBand;
- (bool)isOpus;
- (bool)isRTSTriggered;
- (bool)isRecording;
- (bool)isRemoteVADAvailableStream;
- (bool)isSmartSiriVolumeAvailable;
- (bool)isSoundPlaying;
- (bool)isTimerPlaying;
- (void)keywordDetectorDidDetectKeyword;
- (id)languageDetector;
- (id)languageDetectorDelegate;
- (void)languageDetectorSetMostRecentRecognitionLanguage:(id)arg1;
- (double)lastEndOfVoiceActivityTime;
- (id)metrics;
- (bool)myriadPreventingTwoShotFeedback;
- (bool)needsPostGain;
- (unsigned long long)outputReferenceChannel;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForOutputReference;
- (id /* block */)pendingAudioSessionActivationCompletion;
- (id)pendingAudioSessionActivationToken;
- (bool)playAlertSoundForType:(long long)arg1;
- (bool)playRecordStartingAlertAndResetEndpointer;
- (id)playbackRoute;
- (id)powerMeter;
- (void)preheat;
- (bool)prepareRecordWithSettings:(id)arg1 error:(id*)arg2;
- (void)prewarmAudioSession;
- (void)processServerEndpointFeatures:(id)arg1;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (id)recordSettings;
- (void)releaseAudioSession;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (void)reset;
- (void)resetAudioSession;
- (void)resetEndpointer;
- (id)serverLoggingWriter;
- (id)sessionProvider;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setAlertProvider:(id)arg1;
- (bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)setAudioFileWriter:(id)arg1;
- (void)setAudioMeterProvider:(id)arg1;
- (void)setAudioMetricProvider:(id)arg1;
- (void)setAudioRecordContext:(id)arg1;
- (void)setAudioSessionActivationDelay:(double)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setBargeInModeProvider:(id)arg1;
- (void)setBargeInModeXPCClient:(id)arg1;
- (void)setCachedAvgPower:(float)arg1;
- (void)setCachedPeakPower:(float)arg1;
- (void)setContinuousVoiceTrigger:(id)arg1;
- (bool)setCurrentContext:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDidDeliverLastBuffer:(bool)arg1;
- (void)setDuckOthersOption:(bool)arg1;
- (void)setEndpointAnalyzerDelegate:(id)arg1;
- (void)setEndpointerProxy:(id)arg1;
- (void)setIsActivated:(bool)arg1;
- (void)setIsAlarmPlaying:(bool)arg1;
- (void)setIsMediaPlaying:(bool)arg1;
- (void)setIsNarrowBand:(bool)arg1;
- (void)setIsOpus:(bool)arg1;
- (void)setIsRemoteVADAvailableStream:(bool)arg1;
- (void)setIsSoundPlaying:(bool)arg1;
- (void)setIsTimerPlaying:(bool)arg1;
- (void)setLanguageDetector:(id)arg1;
- (void)setLanguageDetectorDelegate:(id)arg1;
- (void)setLanguageDetectorInteractionID:(id)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)setMyriadPreventingTwoShotFeedback:(bool)arg1;
- (void)setNeedsPostGain:(bool)arg1;
- (void)setPendingAudioSessionActivationCompletion:(id /* block */)arg1;
- (void)setPendingAudioSessionActivationToken:(id)arg1;
- (void)setPowerMeter:(id)arg1;
- (bool)setRecordBufferDuration:(double)arg1;
- (void)setServerLoggingWriter:(id)arg1;
- (void)setSessionProvider:(id)arg1;
- (void)setShouldUseLanguageDetectorForCurrentRequest:(bool)arg1;
- (void)setSpIdFactory:(id)arg1;
- (void)setSpIdRecognizer:(id)arg1;
- (void)setSpIdUserScores:(id)arg1;
- (void)setSpeakerIdDelegate:(id)arg1;
- (void)setSpeechEndHostTimeEstimator:(id)arg1;
- (void)setStreamProvider:(id)arg1;
- (void)setSynchronousCallbackEnabled:(bool)arg1;
- (void)setTwoShotNotificationEnabled:(bool)arg1;
- (void)setVoiceProfileStore:(id)arg1;
- (void)setVoiceTriggerImplicitTraining:(id)arg1;
- (void)setVolumeController:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(id /* block */)arg2;
- (bool)shouldUseLanguageDetectorForCurrentRequest;
- (void)smartSiriVolumeControllerDetectedSystemVolumeChange:(id)arg1 withVolume:(float)arg2 forReason:(unsigned long long)arg3;
- (id)spIdFactory;
- (id)spIdRecognizer;
- (id)spIdUserScores;
- (id)speakerIdDelegate;
- (void)speakerRecognizer:(id)arg1 hasSpeakerIdInfo:(id)arg2;
- (void)speakerRecognizerFinishedProcessing:(id)arg1 withFinalSpeakerIdInfo:(id)arg2;
- (id)speechEndHostTimeEstimator;
- (void)startController;
- (bool)startRecording:(id*)arg1;
- (bool)startRecordingWithSettings:(id)arg1 error:(id*)arg2;
- (void)stopEndpointer;
- (void)stopRecording;
- (void)stopRecordingWithOptions:(id)arg1;
- (id)streamProvider;
- (bool)twoShotNotificationEnabled;
- (void)updateEndpointerDelayedTrigger:(bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)updateMeters;
- (id)voiceProfileStore;
- (void)voiceTriggerAssetHandler:(id)arg1 didChangeCachedAsset:(id)arg2;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (id)voiceTriggerImplicitTraining;
- (id)voiceTriggerInfo;
- (id)volumeController;
- (id)xpcClient;

@end
