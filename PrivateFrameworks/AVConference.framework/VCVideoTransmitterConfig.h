/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoTransmitterConfig : NSObject {
    long long  _codecType;
    NSMutableDictionary * _customFeatureListStrings;
    unsigned long long  _customHeight;
    unsigned long long  _customWidth;
    unsigned long long  _cvoExtensionID;
    bool  _enableCVO;
    int  _encodingMode;
    unsigned long long  _framerate;
    unsigned long long  _keyFrameInterval;
    int  _mode;
    unsigned int  _pixelFormat;
    unsigned long long  _recommendedMTU;
    struct opaqueRTCReporting { } * _reportingAgent;
    int  _reportingParentID;
    AVCStatisticsCollector * _statisticsCollector;
    struct tagVCVideoTransmitterStreamConfig { struct tagHANDLE {} *x1; } * _streamConfigs;
    int  _streamCount;
    int  _tilesPerFrame;
    unsigned long long  _txMaxBitrate;
    unsigned long long  _txMinBitrate;
    bool  _useRateControl;
    int  _videoPayload;
    _Atomic unsigned char * _videoPriorityPointer;
    long long  _videoResolution;
    int  _videoSource;
}

@property (nonatomic) long long codecType;
@property (nonatomic, readonly) NSDictionary *customFeatureListStrings;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) bool enableCVO;
@property (nonatomic) int encodingMode;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) int mode;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic) struct opaqueRTCReporting { }*reportingAgent;
@property (nonatomic) int reportingParentID;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic, readonly) struct tagVCVideoTransmitterStreamConfig { struct tagHANDLE {} *x1; }*streamConfigs;
@property (nonatomic) int streamCount;
@property (nonatomic) int tilesPerFrame;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) bool useRateControl;
@property (nonatomic) int videoPayload;
@property (nonatomic) _Atomic unsigned char*videoPriorityPointer;
@property (nonatomic) long long videoResolution;
@property (nonatomic) int videoSource;

- (void)addCustomFeatureListString:(id)arg1 payload:(int)arg2;
- (long long)codecType;
- (id)customFeatureListStrings;
- (unsigned long long)customHeight;
- (unsigned long long)customWidth;
- (unsigned long long)cvoExtensionID;
- (void)dealloc;
- (id)description;
- (bool)enableCVO;
- (int)encodingMode;
- (unsigned long long)framerate;
- (id)init;
- (unsigned long long)keyFrameInterval;
- (int)mode;
- (unsigned int)pixelFormat;
- (unsigned long long)recommendedMTU;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (int)reportingParentID;
- (void)setCodecType:(long long)arg1;
- (void)setCustomHeight:(unsigned long long)arg1;
- (void)setCustomWidth:(unsigned long long)arg1;
- (void)setCvoExtensionID:(unsigned long long)arg1;
- (void)setEnableCVO:(bool)arg1;
- (void)setEncodingMode:(int)arg1;
- (void)setFramerate:(unsigned long long)arg1;
- (void)setKeyFrameInterval:(unsigned long long)arg1;
- (void)setMode:(int)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setRecommendedMTU:(unsigned long long)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)setReportingParentID:(int)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setStreamCount:(int)arg1;
- (void)setTilesPerFrame:(int)arg1;
- (void)setTxMaxBitrate:(unsigned long long)arg1;
- (void)setTxMinBitrate:(unsigned long long)arg1;
- (void)setUseRateControl:(bool)arg1;
- (void)setVideoPayload:(int)arg1;
- (void)setVideoPriorityPointer:(void *)arg1; // needs 1 arg types, found 2: _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**, unsigned char
- (void)setVideoResolution:(long long)arg1;
- (void)setVideoSource:(int)arg1;
- (id)statisticsCollector;
- (struct tagVCVideoTransmitterStreamConfig { struct tagHANDLE {} *x1; }*)streamConfigs;
- (int)streamCount;
- (int)tilesPerFrame;
- (unsigned long long)txMaxBitrate;
- (unsigned long long)txMinBitrate;
- (bool)useRateControl;
- (int)videoPayload;
- (_Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**)videoPriorityPointer:(SEL)arg1;
- (long long)videoResolution;
- (int)videoSource;

@end
