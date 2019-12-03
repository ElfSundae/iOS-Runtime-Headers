/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCoreRESkeletonResults : NSObject <ARResultData, NSCopying> {
    NSArray * _retargetedSkeletons;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *retargetedSkeletons;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)retargetedSkeletons;
- (void)setRetargetedSkeletons:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end