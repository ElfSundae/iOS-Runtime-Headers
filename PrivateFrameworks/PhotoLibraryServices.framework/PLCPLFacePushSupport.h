/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLFacePushSupport : NSObject {
    id /* block */  _lazyAdjustmentFingerprint;
    <PLSyncContext> * _syncContext;
}

+ (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 withLazyAdjustmentFingerprint:(id /* block */)arg3 inPhotoLibrary:(id)arg4;
+ (void)markPushedFaceMatchingRef:(id)arg1 inAsset:(id)arg2;

- (id)_cplFaceRefsFromFaces:(id)arg1;
- (int)_faceAlgorithmVersionFromAsset:(id)arg1;
- (BOOL)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1;
- (id)_facesAdjustmentsFingerprintFromAsset:(id)arg1;
- (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2;
- (id)cplFaceAnalysisRefFromAsset:(id)arg1;
- (id)cplFaceRefFromFace:(id)arg1;
- (id)cplFaceRefsFromFace:(id)arg1;
- (void)dealloc;
- (id)initWithLazyAdjustmentFingerprint:(id /* block */)arg1 syncContext:(id)arg2;
- (BOOL)isFaceSyncable:(id)arg1;
- (BOOL)isRepresentativeFace:(id)arg1;
- (id)rejectedPersonIdentifiersForFace:(id)arg1;

@end
