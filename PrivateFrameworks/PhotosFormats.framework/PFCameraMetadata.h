/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFCameraMetadata : NSObject {
    NSString * _captureFolderPath;
    VNSceneObservation * _compressedScenePrintObservation;
    NSArray * _detectedCatBodies;
    NSArray * _detectedDogBodies;
    NSArray * _detectedHumanBodies;
    NSArray * _detectedHumanFaces;
    NSArray * _detectedSalientObjects;
    float  _horizonLineAngleInDegrees;
    bool  _horizonLinePresent;
    VNImageAestheticsObservation * _imageAestheticsObservation;
    VNObservation * _imageCorrectionNeedObservation;
    NSArray * _junkImageClassificationObservations;
    VNSaliencyImageObservation * _saliencyObservation;
    VNSceneObservation * _scenePrintObservation;
    unsigned long long  _stitchConfidence;
}

@property (nonatomic, readonly) NSString *captureFolderPath;
@property (nonatomic, readonly) VNSceneObservation *compressedScenePrintObservation;
@property (nonatomic, readonly) NSArray *detectedCatBodies;
@property (nonatomic, readonly) NSArray *detectedDogBodies;
@property (nonatomic, readonly) NSArray *detectedHumanBodies;
@property (nonatomic, readonly) NSArray *detectedHumanFaces;
@property (nonatomic, readonly) NSArray *detectedSalientObjects;
@property (nonatomic, readonly) float horizonLineAngleInDegrees;
@property (nonatomic, readonly) bool horizonLinePresent;
@property (nonatomic, readonly) VNImageAestheticsObservation *imageAestheticsObservation;
@property (nonatomic, readonly) VNObservation *imageCorrectionNeedObservation;
@property (nonatomic, readonly) NSArray *junkImageClassificationObservations;
@property (nonatomic, readonly) VNSaliencyImageObservation *saliencyObservation;
@property (nonatomic, readonly) VNSceneObservation *scenePrintObservation;
@property (nonatomic, readonly) unsigned long long stitchConfidence;

- (void).cxx_destruct;
- (id)captureFolderPath;
- (id)compressedScenePrintObservation;
- (id)detectedCatBodies;
- (id)detectedDogBodies;
- (id)detectedHumanBodies;
- (id)detectedHumanFaces;
- (id)detectedSalientObjects;
- (float)horizonLineAngleInDegrees;
- (bool)horizonLinePresent;
- (id)imageAestheticsObservation;
- (id)imageCorrectionNeedObservation;
- (id)initWithJunkImageClassificationObservations:(id)arg1 imageAestheticsObservation:(id)arg2 saliencyObservation:(id)arg3 scenePrintObservation:(id)arg4 compressedScenePrintObservation:(id)arg5 imageCorrectionNeedObservation:(id)arg6 detectedObjectsInfoHumanFaces:(id)arg7 detectedObjectsInfoHumanBodies:(id)arg8 detectedObjectsInfoCatBodies:(id)arg9 detectedObjectsInfoDogBodies:(id)arg10 detectedObjectsSalientObjects:(id)arg11 stitchConfidence:(unsigned long long)arg12 horizonLinePresent:(bool)arg13 horizonLineAngleInDegrees:(float)arg14 captureFolderPath:(id)arg15;
- (id)initWithSpatialOverCapturePrivateClientMetadata:(id)arg1;
- (id)junkImageClassificationObservations;
- (id)saliencyObservation;
- (id)scenePrintObservation;
- (unsigned long long)stitchConfidence;

@end
