/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipant : VCObject <VCAudioIODelegate, VCAudioIOSink, VCAudioIOSource, VCAudioPowerSpectrumSourceDelegate, VCConnectionChangedHandler, VCMediaStreamDelegate, VCRedundancyControllerDelegate, VCSecurityEventHandler> {
    bool  _audioEnabled;
    VCAudioIO * _audioIO;
    bool  _audioIOStateChangeInProgress;
    bool  _audioPaused;
    bool  _audioPausedToStart;
    float  _audioPosition;
    VCRedundancyControllerAudio * _audioRedundancyController;
    bool  _audioStateChangeInProgress;
    NSMutableArray * _audioStreams;
    AVCBasebandCongestionDetector * _basebandCongestionDetector;
    VCCallInfoBlob * _callInfoBlob;
    unsigned int  _cellularUniqueTag;
    union tagNTP { 
        unsigned long long wide; 
        struct { 
            unsigned int frac; 
            unsigned int sec; 
        } time; 
    }  _creationTime;
    id  _delegate;
    NSString * _idsDestination;
    unsigned long long  _idsParticipantID;
    bool  _isContinuity;
    bool  _isMuted;
    bool  _localOnWiFi;
    NSData * _mediaBlobCompressed;
    VCMediaNegotiator * _mediaNegotiator;
    NSData * _opaqueData;
    NSDictionary * _participantInfo;
    NSObject<OS_dispatch_queue> * _participantQueue;
    long long  _participantVideoToken;
    NSMutableSet * _pausedAudioStreams;
    NSMutableSet * _pausedVideoStreams;
    NSMutableSet * _pausingAudioStreams;
    NSMutableSet * _pausingVideoStreams;
    VCAudioPowerSpectrumSource * _powerSpectrumSource;
    int  _processId;
    unsigned int  _pullAudioSamplesCount;
    id  _reportingAgentWeak;
    NSMutableSet * _resumingAudioStreams;
    NSMutableSet * _resumingVideoStreams;
    NSMutableSet * _runningAudioStreams;
    NSMutableSet * _runningVideoStreams;
    NSString * _sessionUUID;
    struct opaqueVCAudioBufferList { } * _sourceBuffer;
    NSMutableSet * _startingAudioStreams;
    NSMutableSet * _startingVideoStreams;
    unsigned int  _state;
    AVCStatisticsCollector * _statisticsCollector;
    NSMutableSet * _stoppingAudioStreams;
    NSMutableSet * _stoppingVideoStreams;
    id  _streamDelegate;
    NSMutableDictionary * _streamMap;
    VCAudioRuleCollection * _supportedAudioRules;
    unsigned int  _transportSessionID;
    NSString * _uuid;
    bool  _videoEnabled;
    bool  _videoPaused;
    bool  _videoPausedToStart;
    VCRedundancyControllerVideo * _videoRedundancyController;
    bool  _videoStateChangeInProgress;
    NSMutableArray * _videoStreams;
    float  _volume;
}

@property (nonatomic, readonly) NSArray *allParticipantStreamInfo;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (getter=isAudioPaused, nonatomic) bool audioPaused;
@property (nonatomic, readonly) float audioPosition;
@property (nonatomic, readonly) NSArray *audioStreams;
@property (nonatomic, retain) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic) unsigned int cellularUniqueTag;
@property (nonatomic, readonly) union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; } creationTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <VCSessionParticipantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long idsParticipantID;
@property (getter=isLocalOnWiFi, nonatomic) bool localOnWiFi;
@property (nonatomic, readonly) VCMediaNegotiator *mediaNegotiator;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, readonly) NSData *opaqueData;
@property (nonatomic, readonly) long long participantVideoToken;
@property (nonatomic) struct opaqueRTCReporting { }*reportingAgent;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) <VCSessionParticipantStreamDelegate> *streamDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCAudioRuleCollection *supportedAudioRules;
@property (nonatomic, readonly) NSString *uuid;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (getter=isVideoPaused, nonatomic) bool videoPaused;
@property (nonatomic, readonly) float volume;

- (id)allParticipantStreamInfo;
- (bool)allPausingStreamsPaused;
- (bool)allResumingStreamsResumed;
- (bool)allStartingStreamsStarted;
- (bool)allStoppingStreamsStopped;
- (void)applyVideoEnabledSetting:(bool)arg1;
- (float)audioPosition;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;
- (id)audioStreams;
- (id)basebandCongestionDetector;
- (void)callDelegateWithBlock:(id /* block */)arg1;
- (void)callStreamDelegateWithBlock:(id /* block */)arg1;
- (unsigned int)cellularUniqueTag;
- (void)collectAudioChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1;
- (void)collectVideoChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1;
- (void)completeStreamSetup:(id)arg1;
- (bool)configureAudioIOWithContinuity:(bool)arg1;
- (bool)configureWithIsContinuity:(bool)arg1;
- (void)createRedundancyControllers;
- (union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })creationTime;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)dispatchedSetAudioEnabled:(bool)arg1;
- (void)dispatchedSetAudioPaused:(bool)arg1;
- (void)dispatchedSetVideoEnabled:(bool)arg1;
- (void)dispatchedSetVideoPaused:(bool)arg1;
- (void)dispatchedStart;
- (void)dispatchedStop;
- (void)dispatchedStream:(id)arg1 didPause:(bool)arg2 error:(id)arg3;
- (void)dispatchedStream:(id)arg1 didResume:(bool)arg2 error:(id)arg3;
- (void)dispatchedStream:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)dispatchedStreamDidStop:(id)arg1;
- (id)generateEncryptionKey;
- (id)getAudioDumpName;
- (void)handleActiveConnectionChange:(id)arg1;
- (bool)handleEncryptionInfoChange:(id)arg1;
- (unsigned long long)idsParticipantID;
- (id)initWithIDSDestination:(id)arg1 delegate:(id)arg2 processId:(int)arg3 sessionUUID:(id)arg4;
- (bool)isAnyStreamRunningOrPaused;
- (bool)isAudioEnabled;
- (bool)isAudioPaused;
- (bool)isAudioStream:(id)arg1;
- (bool)isLocalOnWiFi;
- (bool)isMuted;
- (bool)isVideoEnabled;
- (bool)isVideoPaused;
- (bool)isVideoStream:(id)arg1;
- (id)mediaNegotiator;
- (id)opaqueData;
- (char *)participantStateToString:(unsigned int)arg1;
- (long long)participantVideoToken;
- (void)pauseAudioStreams;
- (void)pauseVideoStreams;
- (void)processPausedStream:(id)arg1 didPause:(bool)arg2;
- (void)processResumedStream:(id)arg1 didResume:(bool)arg2;
- (void)processStartedStream:(id)arg1 didStart:(bool)arg2;
- (void)processStoppedStream:(id)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (void)resetDecryptionTimeout;
- (void)resumeAudioStreams;
- (void)resumeVideoStreams;
- (void)sendAudioPowerSpectrumSourceRegistration:(bool)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioPaused:(bool)arg1;
- (bool)setAudioPosition:(float)arg1;
- (void)setBasebandCongestionDetector:(id)arg1;
- (void)setCellularUniqueTag:(unsigned int)arg1;
- (void)setLocalOnWiFi:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (bool)setState:(unsigned int)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setStreamDelegate:(id)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)setVideoPaused:(bool)arg1;
- (bool)setVolume:(float)arg1;
- (void)setupNetworkAddressesForMediaConfig:(id)arg1;
- (bool)shouldStartAudioIO;
- (void)start;
- (void)startAudioDump;
- (void)startAudioIO;
- (void)startAudioStreams;
- (void)startVideoStreams;
- (id)statisticsCollector;
- (void)stop;
- (void)stopAudioDump;
- (void)stopAudioIOCompletion;
- (void)stopAudioStreams;
- (void)stopAudioStreamsCompletion;
- (void)stopVideoStreams;
- (id)streamDelegate;
- (id)streamsToString;
- (id)supportedAudioRules;
- (void)tearDown;
- (bool)updateConfigurationWithIsContinuity:(bool)arg1;
- (void)updateVideoPaused:(bool)arg1;
- (id)uuid;
- (void)vcMediaStream:(id)arg1 didPauseStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didResumeStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didStartStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcMediaStreamDidStop:(id)arg1;
- (float)volume;

@end
