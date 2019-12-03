/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageTrackingConfiguration : ARConfiguration {
    long long  _maximumNumberOfTrackedImages;
    NSSet * _trackingImages;
}

@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (nonatomic, copy) NSSet *trackingImages;

+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfTrackedImages;
- (void)setMaximumNumberOfTrackedImages:(long long)arg1;
- (void)setTrackingImages:(id)arg1;
- (id)trackingImages;

@end
