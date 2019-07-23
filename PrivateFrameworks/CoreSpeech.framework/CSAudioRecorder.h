/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioRecorder : NSObject <AVVoiceControllerPlaybackDelegate, AVVoiceControllerRecordDelegate, CSAudioDecoderDelegate, CSAudioFileReaderDelegate, CSBeepCancellerDelegate> {
    unsigned long long  _audioFilePathIndex;
    CSAudioFileReader * _audioFileReader;
    CSBeepCanceller * _beepCanceller;
    CSAudioZeroCounter * _continuousZeroCounter;
    struct OpaqueAudioConverter { } * _deinterleaver;
    <CSAudioRecorderDelegate> * _delegate;
    struct AudioBufferList { 
        unsigned int mNumberBuffers; 
        struct AudioBuffer { 
            unsigned int mNumberChannels; 
            unsigned int mDataByteSize; 
            void *mData; 
        } mBuffers[1]; 
    }  _interleavedABL;
    NSDictionary * _latestContext;
    bool  _needSampleRateConversion;
    unsigned long long  _numSamplesProcessed;
    CSAudioDecoder * _opusDecoder;
    struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; } * _pNonInterleavedABL;
    CSAudioPowerMeter * _powerMeter;
    CSOSTransaction * _recordingTransaction;
    CSRemoteRecordClient * _remoteRecordClient;
    CSAudioSampleRateConverter * _sampleRateConverter;
    bool  _shouldUsePowerMeter;
    bool  _shouldUseRemoteRecord;
    AVVoiceController * _voiceController;
    unsigned long long  _vtEndInSampleCount;
    bool  _waitingForDidStart;
    CSAudioZeroFilter * _zeroFilter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAudioRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool duckOthersOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_audioRecorderDidStartRecordingSuccessfully:(bool)arg1 error:(id)arg2;
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1;
- (id)_beepCanceller;
- (void)_createAudioPowerMeterIfNeeded;
- (void)_createDeInterleaverIfNeeded;
- (void)_createSampleRateConverterIfNeeded;
- (id)_deinterleaveBufferIfNeeded:(id)arg1;
- (void)_destroyVoiceController;
- (void)_holdAudioRecordingTransaction;
- (bool)_needResetAudioInjectionIndex:(id)arg1;
- (void)_processAudioChain:(id)arg1 remoteVAD:(id)arg2 atTime:(unsigned long long)arg3;
- (void)_processAudioChainWithZeroFiltering:(id)arg1 atTime:(unsigned long long)arg2;
- (float)_recordingSampleRate;
- (void)_releaseAudioRecordingTransaction;
- (void)_resetZeroFilter;
- (id)_samplingRateConvertIfNeeded:(id)arg1;
- (bool)_shouldInjectAudio;
- (bool)_shouldRunZeroFilter;
- (bool)_shouldUseRemoteBuiltInMic:(id)arg1;
- (bool)_shouldUseRemoteRecordForContext:(id)arg1;
- (bool)_startRecordingForAudioInjection;
- (void)_updatePowerMeter:(id)arg1;
- (id)_voiceControllerWithContext:(id)arg1 error:(id*)arg2;
- (unsigned long long)alertStartTime;
- (void)audioDecoderDidDecodePackets:(id)arg1 buffer:(id)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4;
- (void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (void)audioFileReaderDidStartRecording:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;
- (void)configureAlertBehavior:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)duckOthersOption;
- (void)enableMiniDucking:(bool)arg1;
- (double)getRecordBufferDuration;
- (id)initWithContext:(id)arg1 error:(id*)arg2;
- (bool)isNarrowBand;
- (bool)isRecording;
- (id)metrics;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (bool)playAlertSoundForType:(long long)arg1;
- (bool)playRecordStartingAlertAndResetEndpointer;
- (id)playbackRoute;
- (bool)prepareListenWithSettings:(id)arg1 error:(id*)arg2;
- (bool)prepareRecordWithSettings:(id)arg1 error:(id*)arg2;
- (void)prewarmAudioSession;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (id)recordSettings;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (bool)releaseAudioSessionForListening:(id*)arg1;
- (bool)releaseAudioSessionForListening:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (bool)setCurrentContext:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDuckOthersOption:(bool)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (bool)setRecordBufferDuration:(double)arg1;
- (bool)setRecordMode:(long long)arg1 error:(id*)arg2;
- (void)setSynchronousCallbackEnabled:(bool)arg1;
- (bool)startListening:(id*)arg1;
- (bool)startListeningWithSettings:(id)arg1 error:(id*)arg2;
- (bool)startRecording;
- (bool)startRecording:(id*)arg1;
- (bool)startRecordingWithSettings:(id)arg1 error:(id*)arg2;
- (void)stopRecording;
- (void)updateMeters;
- (void)voiceControllerBeginRecordInterruption:(id)arg1;
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(bool)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerEndRecordInterruption:(id)arg1;
- (void)voiceControllerMediaServicesWereLost:(id)arg1;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(bool)arg2;
- (id)voiceTriggerInfo;
- (void)willDestroy;

@end
