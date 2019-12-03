/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioProvider : NSObject <CSAudioAlertProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSAudioPreprocessorDelegate, CSAudioRecorderDelegate, CSAudioServerCrashMonitorDelegate, CSAudioSessionProviding, CSAudioStreamProviding, CSTriggerInfoProviding> {
    NSString * _UUID;
    <CSAudioAlertProvidingDelegate> * _alertDelegate;
    NSUUID * _alertPlaybackFinishTimeoutToken;
    NSMutableArray * _alertPlaybackFinishWaitingCompletions;
    NSHashTable * _alertPlaybackFinishWaitingStreams;
    CSAudioPreprocessor * _audioPreprocessor;
    CSAudioRecorder * _audioRecorder;
    unsigned long long  _audioStreamHandleId;
    bool  _audioSystemRecovering;
    CSAudioCircularBuffer * _circularBuffer;
    unsigned long long  _circularBufferStartHostTime;
    unsigned long long  _circularBufferStartSampleCount;
    NSHashTable * _historicalBufferRequestStreams;
    CSAudioRecordContext * _lastAudioRecorderContext;
    NSMutableArray * _pendingStartCompletions;
    NSMutableArray * _pendingStopCompletions;
    <CSAudioProviderDelegate> * _providerDelegate;
    NSObject<OS_dispatch_queue> * _recordQueue;
    CSOSTransaction * _recordingTransaction;
    NSObject<OS_dispatch_group> * _recordingWillStartGroup;
    <CSAudioSessionProvidingDelegate> * _sessionDelegate;
    NSMutableDictionary * _startPendingOnStoppingStreamToCompletionDict;
    NSHashTable * _startPendingOnStoppingStreams;
    NSHashTable * _startPendingStreams;
    NSUUID * _startRecordingWatchDogToken;
    NSHashTable * _stopPendingStreams;
    NSUUID * _stopRecordingWatchDogToken;
    NSMutableArray * _streamHolders;
    unsigned long long  _streamState;
    NSHashTable * _streams;
    bool  _waitingForAlertFinish;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic) <CSAudioAlertProvidingDelegate> *alertDelegate;
@property (nonatomic, retain) NSUUID *alertPlaybackFinishTimeoutToken;
@property (nonatomic, retain) NSMutableArray *alertPlaybackFinishWaitingCompletions;
@property (nonatomic, retain) NSHashTable *alertPlaybackFinishWaitingStreams;
@property (nonatomic, retain) CSAudioPreprocessor *audioPreprocessor;
@property (nonatomic, retain) CSAudioRecorder *audioRecorder;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (nonatomic) bool audioSystemRecovering;
@property (nonatomic, retain) CSAudioCircularBuffer *circularBuffer;
@property (nonatomic) unsigned long long circularBufferStartHostTime;
@property (nonatomic) unsigned long long circularBufferStartSampleCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *historicalBufferRequestStreams;
@property (nonatomic, retain) CSAudioRecordContext *lastAudioRecorderContext;
@property (nonatomic, retain) NSMutableArray *pendingStartCompletions;
@property (nonatomic, retain) NSMutableArray *pendingStopCompletions;
@property (nonatomic) <CSAudioProviderDelegate> *providerDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recordQueue;
@property (nonatomic, retain) CSOSTransaction *recordingTransaction;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *recordingWillStartGroup;
@property (nonatomic) <CSAudioSessionProvidingDelegate> *sessionDelegate;
@property (nonatomic, retain) NSMutableDictionary *startPendingOnStoppingStreamToCompletionDict;
@property (nonatomic, retain) NSHashTable *startPendingOnStoppingStreams;
@property (nonatomic, retain) NSHashTable *startPendingStreams;
@property (nonatomic, retain) NSUUID *startRecordingWatchDogToken;
@property (nonatomic, retain) NSHashTable *stopPendingStreams;
@property (nonatomic, retain) NSUUID *stopRecordingWatchDogToken;
@property (nonatomic, retain) NSMutableArray *streamHolders;
@property (nonatomic) unsigned long long streamState;
@property (nonatomic, retain) NSHashTable *streams;
@property (readonly) Class superclass;
@property (nonatomic) bool waitingForAlertFinish;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (id)UUID;
- (bool)_activateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (id)_audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)_audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id*)arg3;
- (void)_clearDidStartRecordingDelegateWatchDog;
- (void)_clearDidStopRecordingDelegateWatchDog;
- (void)_createCircularBufferIfNeeded;
- (bool)_deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_didPlayStartAlertSoundForSiri:(id)arg1 audioStream:(id)arg2;
- (void)_didReceiveFinishStartAlertPlaybackAt:(unsigned long long)arg1;
- (void)_fetchHistoricalAudioAndForwardToStream:(id)arg1 remoteVAD:(id)arg2;
- (void)_forwardAudioChunk:(id)arg1 remoteVAD:(id)arg2 atTime:(unsigned long long)arg3 toStream:(id)arg4;
- (void)_handleAudioSystemFailure;
- (void)_handleDidStartAudioStreamWithResult:(bool)arg1 error:(id)arg2;
- (void)_handleDidStopAudioStreamWithReason:(long long)arg1;
- (void)_holdRecordingTransactionIfNeeded;
- (bool)_isVoiceTriggerInfoAvailableLocally:(id)arg1;
- (void)_postEpilogueAudioStream;
- (void)_preEpilogueAudioStream;
- (void)_prepareAudioStream:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (bool)_prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (void)_processAudioBuffer:(id)arg1 remoteVAD:(id)arg2 atTime:(unsigned long long)arg3;
- (void)_processAudioBufferForWatch:(id)arg1 remoteVAD:(id)arg2 atTime:(unsigned long long)arg3;
- (void)_releaseRecordingTransactionIfNeeded;
- (void)_resetCircularBufferStartTime;
- (void)_saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
- (void)_schduleDidStartRecordingDelegateWatchDogWithToken:(id)arg1;
- (void)_scheduleAlertFinishTimeout:(double)arg1;
- (void)_scheduleDidStartRecordingDelegateWatchDog;
- (void)_scheduleDidStopRecordingDelegateWatchDog;
- (void)_scheduleDidStopRecordingDelegateWatchDog:(id)arg1;
- (bool)_shouldHandleStartPendingOnStopping:(unsigned long long)arg1 withStopReason:(long long)arg2;
- (bool)_shouldStopRecording;
- (void)_startAudioStream:(id)arg1 option:(id)arg2 completion:(id /* block */)arg3;
- (void)_stopAudioStream:(id)arg1 option:(id)arg2 completion:(id /* block */)arg3;
- (id)_streamStateName:(unsigned long long)arg1;
- (void)_tearDownCircularBufferIfNeeded;
- (bool)activateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (id)alertDelegate;
- (id)alertPlaybackFinishTimeoutToken;
- (id)alertPlaybackFinishWaitingCompletions;
- (id)alertPlaybackFinishWaitingStreams;
- (unsigned long long)alertStartTime;
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)audioChunkToEndFrom:(unsigned long long)arg1;
- (id)audioMetric;
- (id)audioPreprocessor;
- (void)audioPreprocessor:(id)arg1 hasAvailableBuffer:(id)arg2 atTime:(unsigned long long)arg3;
- (id)audioRecorder;
- (void)audioRecorder:(id)arg1 didSetAudioSessionActive:(bool)arg2;
- (void)audioRecorder:(id)arg1 willSetAudioSessionActive:(bool)arg2;
- (void)audioRecorderBeginRecordInterruption:(id)arg1;
- (void)audioRecorderBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;
- (void)audioRecorderBuiltInAudioStreamInvalidated:(id)arg1 error:(id)arg2;
- (void)audioRecorderDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;
- (void)audioRecorderDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(bool)arg3 error:(id)arg4;
- (void)audioRecorderDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorderEndRecordInterruption:(id)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderStreamHandleIdInvalidated:(unsigned long long)arg1;
- (void)audioRecorderWillBeDestroyed:(id)arg1;
- (unsigned long long)audioStreamHandleId;
- (void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(id /* block */)arg3;
- (id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id*)arg3;
- (bool)audioSystemRecovering;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (void)cancelAudioStreamHold:(id)arg1;
- (id)circularBuffer;
- (unsigned long long)circularBufferStartHostTime;
- (unsigned long long)circularBufferStartSampleCount;
- (void)configureAlertBehavior:(id)arg1;
- (bool)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2;
- (bool)duckOthersOption;
- (void)enableMiniDucking:(bool)arg1;
- (id)historicalBufferRequestStreams;
- (id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;
- (id)initWithAudioStreamHandleId:(unsigned long long)arg1 audioRecorder:(id)arg2;
- (bool)isNarrowBand;
- (bool)isRecording;
- (id)lastAudioRecorderContext;
- (void)notifyProviderContextChanged;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (id)pendingStartCompletions;
- (id)pendingStopCompletions;
- (bool)playAlertSoundForType:(long long)arg1;
- (bool)playRecordStartingAlertAndResetEndpointer;
- (id)playbackRoute;
- (void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (bool)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (bool)prewarmAudioSessionWithError:(id*)arg1;
- (id)providerDelegate;
- (id)recordDeviceInfo;
- (id)recordQueue;
- (id)recordRoute;
- (id)recordSettings;
- (id)recordingTransaction;
- (id)recordingWillStartGroup;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;
- (id)sessionDelegate;
- (void)setAlertDelegate:(id)arg1;
- (void)setAlertPlaybackFinishTimeoutToken:(id)arg1;
- (void)setAlertPlaybackFinishWaitingCompletions:(id)arg1;
- (void)setAlertPlaybackFinishWaitingStreams:(id)arg1;
- (bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)setAudioAlertDelegate:(id)arg1;
- (void)setAudioPreprocessor:(id)arg1;
- (void)setAudioProviderDelegate:(id)arg1;
- (void)setAudioRecorder:(id)arg1;
- (void)setAudioSessionDelegate:(id)arg1;
- (void)setAudioStreamHandleId:(unsigned long long)arg1;
- (void)setAudioSystemRecovering:(bool)arg1;
- (void)setCircularBuffer:(id)arg1;
- (void)setCircularBufferStartHostTime:(unsigned long long)arg1;
- (void)setCircularBufferStartSampleCount:(unsigned long long)arg1;
- (bool)setCurrentContext:(id)arg1 error:(id*)arg2;
- (void)setDuckOthersOption:(bool)arg1;
- (void)setHistoricalBufferRequestStreams:(id)arg1;
- (void)setLastAudioRecorderContext:(id)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)setPendingStartCompletions:(id)arg1;
- (void)setPendingStopCompletions:(id)arg1;
- (void)setProviderDelegate:(id)arg1;
- (void)setRecordQueue:(id)arg1;
- (void)setRecordingTransaction:(id)arg1;
- (void)setRecordingWillStartGroup:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setStartPendingOnStoppingStreamToCompletionDict:(id)arg1;
- (void)setStartPendingOnStoppingStreams:(id)arg1;
- (void)setStartPendingStreams:(id)arg1;
- (void)setStartRecordingWatchDogToken:(id)arg1;
- (void)setStopPendingStreams:(id)arg1;
- (void)setStopRecordingWatchDogToken:(id)arg1;
- (void)setStreamHolders:(id)arg1;
- (void)setStreamState:(unsigned long long)arg1;
- (void)setStreams:(id)arg1;
- (void)setWaitingForAlertFinish:(bool)arg1;
- (void)start;
- (void)startAudioStream:(id)arg1 option:(id)arg2 completion:(id /* block */)arg3;
- (id)startPendingOnStoppingStreamToCompletionDict;
- (id)startPendingOnStoppingStreams;
- (id)startPendingStreams;
- (id)startRecordingWatchDogToken;
- (void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(id /* block */)arg3;
- (id)stopPendingStreams;
- (id)stopRecordingWatchDogToken;
- (id)streamHolders;
- (unsigned long long)streamState;
- (id)streams;
- (void)triggerInfoForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)updateMeters;
- (bool)waitingForAlertFinish;

@end
