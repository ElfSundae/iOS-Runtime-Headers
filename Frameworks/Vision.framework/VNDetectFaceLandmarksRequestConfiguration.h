/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration {
    NSNumber * _cascadeStepCount;
    bool  _performBlinkDetection;
    bool  _refineLeftEyeRegion;
    bool  _refineMouthRegion;
    bool  _refineRightEyeRegion;
}

@property (nonatomic, retain) NSNumber *cascadeStepCount;
@property (nonatomic) bool performBlinkDetection;
@property (nonatomic) bool refineLeftEyeRegion;
@property (nonatomic) bool refineMouthRegion;
@property (nonatomic) bool refineRightEyeRegion;

- (void).cxx_destruct;
- (id)cascadeStepCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (bool)performBlinkDetection;
- (bool)refineLeftEyeRegion;
- (bool)refineMouthRegion;
- (bool)refineRightEyeRegion;
- (void)setCascadeStepCount:(id)arg1;
- (void)setPerformBlinkDetection:(bool)arg1;
- (void)setRefineLeftEyeRegion:(bool)arg1;
- (void)setRefineMouthRegion:(bool)arg1;
- (void)setRefineRightEyeRegion:(bool)arg1;

@end
