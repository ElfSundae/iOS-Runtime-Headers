/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCompoundRequest : VNRequest {
    NSNumber * _cachedDependencyProcessingOrdinality;
    NSArray * _originalRequests;
}

@property (nonatomic, readonly, copy) NSArray *originalRequests;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;

+ (id)compoundRequestsForOriginalRequests:(id)arg1;
+ (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (id)compoundResults;
- (long long)dependencyProcessingOrdinality;
- (id)description;
- (id)initWithOriginalRequests:(id)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)originalRequests;
- (void)recordWarningsInOriginalRequests;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (id)sequencedRequestPreviousObservationsKey;
- (bool)usesCPUOnly;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
