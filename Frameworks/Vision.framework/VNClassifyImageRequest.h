/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNClassifyImageRequest : VNImageBasedRequest

@property (nonatomic, readonly, copy) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (nonatomic) unsigned long long maximumLeafObservations;

+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)_applicableDetectorAndOptions:(id*)arg1 error:(id*)arg2;
- (void)_setCustomHierarchy:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)customHierarchy;
- (bool)defineCustomHierarchy:(id)arg1 error:(id*)arg2;
- (id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id*)arg2;
- (id)description;
- (unsigned long long)imageCropAndScaleOption;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (unsigned long long)maximumHierarchicalObservations;
- (unsigned long long)maximumLeafObservations;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (id /* block */)resultsSortingComparator;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (void)setMaximumHierarchicalObservations:(unsigned long long)arg1;
- (void)setMaximumLeafObservations:(unsigned long long)arg1;
- (void)setRevision:(unsigned long long)arg1;
- (id)supportedImageSizeSet;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
