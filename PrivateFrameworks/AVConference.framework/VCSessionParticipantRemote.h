/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipantRemote : VCSessionParticipant <VCSessionDownlinkBandwidthAllocatorClient> {
    unsigned short  _activeDownlinkAudioStreamID;
    unsigned short  _activeDownlinkVideoStreamID;
    bool  _haveReportedPerfTimers;
    bool  _isProcessingVideoOptIn;
    bool  _isRedundancyRequested;
    bool  _isRemoteMediaStalled;
    bool  _isVideoDegraded;
    unsigned char  _lastVideoPriority;
    double  _lastVideoQualityNotificationUpdate;
    VCSessionBandwidthAllocationTable * _mediaTable;
    NSNumber * _optedInAudioStreamID;
    NSNumber * _optedInVideoStreamID;
    TimingCollection * _perfTimers;
    unsigned int  _prominenceIndex;
    struct _VCSessionParticipantProminenceInfo { 
        bool isAudioActive; 
        unsigned int audioActiveProbabilityThreshold; 
        unsigned int audioInactiveProbabilityThreshold; 
        unsigned int audioActiveAccumulationThreshold; 
        unsigned int audioInactiveAccumulationThreshold; 
        unsigned int audioActiveCount; 
        unsigned int lastProminence; 
        unsigned int refreshCounter; 
    }  _prominenceInfo;
    bool  _remoteVideoEnabled;
    bool  _remoteVideoPaused;
    VCSessionBandwidthAllocationTable * _repairMediaTable;
    unsigned char  _videoQuality;
    VCVideoQualityInfo * _videoQualityInfo;
    bool  _videoSuspended;
    unsigned int  _visibilityIndex;
}

@property (readonly) unsigned short activeDownlinkAudioStreamID;
@property (readonly) unsigned short activeDownlinkVideoStreamID;
@property (readonly) unsigned int actualNetworkBitrateAudio;
@property (readonly) unsigned int actualNetworkBitrateVideo;
@property (nonatomic, readonly) VCSessionParticipantMediaStreamInfo *audioStreamInfo;
@property (nonatomic, readonly) bool isVideoExpected;
@property (readonly) bool isVisible;
@property (readonly) NSArray *mediaEntries;
@property (nonatomic, retain) NSNumber *optedInAudioStreamID;
@property (readonly) unsigned int optedInNetworkBitrateAudio;
@property (readonly) unsigned int optedInNetworkBitrateVideo;
@property (nonatomic, retain) NSNumber *optedInVideoStreamID;
@property (nonatomic) unsigned int prominenceIndex;
@property (getter=isRemoteVideoEnabled, nonatomic) bool remoteVideoEnabled;
@property (getter=isRemoteVideoPaused, nonatomic) bool remoteVideoPaused;
@property (readonly) NSString *uuid;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic, readonly) VCSessionParticipantMediaStreamInfo *videoStreamInfo;
@property (getter=isVideoSuspended, nonatomic) bool videoSuspended;
@property (nonatomic) unsigned int visibilityIndex;

+ (bool)isDeviceLargeScreen;
+ (unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(bool)arg1;
+ (unsigned int)maxVideoNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(bool)arg2 isRedundancyRequested:(bool)arg3;

- (unsigned short)activeDownlinkAudioStreamID;
- (unsigned short)activeDownlinkVideoStreamID;
- (unsigned int)actualNetworkBitrateAudio;
- (unsigned int)actualNetworkBitrateVideo;
- (id)audioStreamInfo;
- (void)collectAudioChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1;
- (void)collectVideoChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1;
- (void)dealloc;
- (void)debounceAudioPriority:(unsigned char)arg1;
- (id)entryForStreamID:(id)arg1;
- (id)initWithIDSDestination:(id)arg1 idsParticipantID:(unsigned long long)arg2 mediaNegotiator:(id)arg3 opaqueData:(id)arg4 delegate:(id)arg5 processId:(int)arg6 transportSessionID:(unsigned int)arg7 sessionUUID:(id)arg8 config:(id)arg9;
- (bool)isAudioActive;
- (bool)isRemoteVideoEnabled;
- (bool)isRemoteVideoPaused;
- (bool)isVideoActive;
- (bool)isVideoExpected;
- (bool)isVideoSuspended;
- (bool)isVisible;
- (id)mediaEntries;
- (void)negotiateAudioRules:(id)arg1;
- (id)newAudioStreamConfigurationWithMultiwayAudioNegotiationResult:(id)arg1;
- (id)newVideoStreamConfigurationWithNegotiationVideoResult:(id)arg1;
- (void)notifyChangeInActiveMediaBitrate:(bool)arg1;
- (id)optedInAudioStreamID;
- (unsigned int)optedInNetworkBitrateAudio;
- (unsigned int)optedInNetworkBitrateVideo;
- (id)optedInVideoStreamID;
- (bool)processParticipantInfo;
- (unsigned int)prominenceIndex;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)receivedMediaPacketAtTime:(double)arg1 isDecryptable:(bool)arg2;
- (id)recommendedStreamIDsForSelectedMediaEntries:(id)arg1 forceSeamlessTransition:(bool)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)reportParticipantsPerfTimingsOnce;
- (void)setActiveStreamIDs:(id)arg1;
- (void)setActualBitrateForOptedInStreamID:(id)arg1 withActiveStreamID:(id)arg2 isVideo:(bool)arg3;
- (void)setAudioPaused:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOptedInAudioStreamID:(id)arg1;
- (void)setOptedInVideoStreamID:(id)arg1;
- (void)setProminenceIndex:(unsigned int)arg1;
- (void)setRemoteVideoEnabled:(bool)arg1;
- (void)setRemoteVideoPaused:(bool)arg1;
- (void)setShouldEnableFaceZoom:(bool)arg1;
- (void)setVideoDegraded:(bool)arg1;
- (void)setVideoPaused:(bool)arg1;
- (void)setVideoQuality:(unsigned char)arg1;
- (void)setVideoSuspended:(bool)arg1;
- (void)setVisibilityIndex:(unsigned int)arg1;
- (bool)setupAudioStreamConfiguration:(id)arg1 audioRules:(id)arg2;
- (bool)setupAudioStreamFromMediaBlobWithIDSDestination:(id)arg1;
- (bool)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg1 entryType:(unsigned char)arg2;
- (id)setupStreamRTP:(id)arg1;
- (bool)setupVideoStreamFromMediaBlobWithIDSDestination:(id)arg1;
- (void)updateAudioPriority:(unsigned char)arg1;
- (void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg1;
- (void)updateProminenceDefaults;
- (void)updateShouldEnableFaceZoom;
- (void)updateVideoPriority:(unsigned char)arg1;
- (void)updateVideoQualityNotification;
- (void)vcMediaStream:(id)arg1 didReceiveFirstVideoFrameWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)vcMediaStream:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcMediaStream:(id)arg1 didSwitchToAudioStreamWithID:(unsigned short)arg2;
- (void)vcMediaStream:(id)arg1 priorityDidChange:(unsigned char)arg2;
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(bool)arg2;
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (unsigned char)videoQuality;
- (id)videoStreamInfo;
- (unsigned int)visibilityIndex;

@end
