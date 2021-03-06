/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARReplayConfiguration : ARCustomTechniquesConfiguration <ARReplaySensorDelegate> {
    <ARReplayConfigurationDelegate> * _delegate;
    NSURL * _fileURL;
    <ARReplaySensorProtocol> * _replaySensor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARReplayConfigurationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (id)fileURL;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForSuperWide;
- (id)initPrivate;
- (id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 outError:(id*)arg3;
- (id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 outError:(id*)arg3 manualMode:(bool)arg4 synchronousMode:(bool)arg5;
- (id)initWithBaseConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)parentImageSensorSettings;
- (void)pause;
- (void)play;
- (void)replaySensorDidFinishReplayingData;
- (id)secondaryTechniques;
- (void)setDelegate:(id)arg1;
- (long long)worldAlignment;

@end
