/* Generated by RuntimeBrowser.
 */

@protocol VCSessionDownlinkBandwidthAllocatorClient

@required

- (unsigned short)activeDownlinkAudioStreamID;
- (unsigned short)activeDownlinkVideoStreamID;
- (unsigned int)actualNetworkBitrateAudio;
- (unsigned int)actualNetworkBitrateVideo;
- (bool)isVideoSuspended;
- (bool)isVisible;
- (NSArray *)mediaEntries;
- (NSNumber *)optedInAudioStreamID;
- (unsigned int)optedInNetworkBitrateAudio;
- (unsigned int)optedInNetworkBitrateVideo;
- (NSNumber *)optedInVideoStreamID;
- (unsigned int)prominenceIndex;
- (void)setVideoSuspended:(bool)arg1;
- (NSString *)uuid;
- (unsigned char)videoQuality;
- (unsigned int)visibilityIndex;

@end
