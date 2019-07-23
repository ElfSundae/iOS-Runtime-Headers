/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {
    BOOL _applyMaxIntegrationTimeOverrideWhenAvailable;
    BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
    NSDictionary *_faceDetectionConfiguration;
    int _imageControlMode;
    FigCaptureSourceFormat *_requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    BOOL _sensorHDREnabled;
    struct OpaqueFigCaptureSource { } *_source;
    NSDictionary *_sourceAttributes;
    NSString *_sourceID;
    int _sourceType;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
}

@property (nonatomic) BOOL applyMaxIntegrationTimeOverrideWhenAvailable;
@property (nonatomic) BOOL automaticallyEnablesLowLightBoostWhenAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *faceDetectionConfiguration;
@property (readonly) unsigned int hash;
@property (nonatomic) int imageControlMode;
@property (nonatomic, retain) FigCaptureSourceFormat *requiredFormat;
@property (nonatomic) float requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate;
@property (nonatomic) BOOL sensorHDREnabled;
@property (nonatomic, readonly) struct OpaqueFigCaptureSource { }*source;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic, readonly) int sourcePosition;
@property (nonatomic, readonly) int sourceType;
@property (readonly) Class superclass;
@property (nonatomic) float videoZoomFactor;
@property (nonatomic) float videoZoomRampAcceleration;

+ (void)initialize;
+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceType:(int)arg1;

- (BOOL)_isCameraSource;
- (id)_sourceAttributes;
- (int)_sourceToken;
- (id)_sourceUID;
- (BOOL)applyMaxIntegrationTimeOverrideWhenAvailable;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)faceDetectionConfiguration;
- (int)imageControlMode;
- (id)initWithSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (id)initWithSourceType:(int)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)requiredFormat;
- (float)requiredMaxFrameRate;
- (float)requiredMinFrameRate;
- (BOOL)sensorHDREnabled;
- (void)setApplyMaxIntegrationTimeOverrideWhenAvailable:(BOOL)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (void)setImageControlMode:(int)arg1;
- (void)setRequiredFormat:(id)arg1;
- (void)setRequiredMaxFrameRate:(float)arg1;
- (void)setRequiredMinFrameRate:(float)arg1;
- (void)setSensorHDREnabled:(BOOL)arg1;
- (void)setSourceID:(id)arg1;
- (void)setVideoZoomFactor:(float)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (struct OpaqueFigCaptureSource { }*)source;
- (id)sourceID;
- (int)sourcePosition;
- (int)sourceType;
- (float)videoZoomFactor;
- (float)videoZoomRampAcceleration;

@end
