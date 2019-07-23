/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMBurstIdentifierProvider, CAMBurstRequest, CAMEffectFilterTypeProvider, CAMIrisRequest, CAMPossibleOriginalRequest, CAMTimelapseRequest, NSCopying, NSMutableCopying> {
    NSString * _burstIdentifier;
    <CAMStillImageCaptureRequestDelegate> * _delegate;
    struct CGSize { 
        float width; 
        float height; 
    }  _desiredPreviewSize;
    int  _effectFilterType;
    int  _flashMode;
    int  _hdrMode;
    NSString * _irisIdentifier;
    int  _irisMode;
    NSURL * _localVideoDestinationURL;
    float  _loggingVideoZoomFactor;
    unsigned int  _maximumBurstLength;
    NSString * _originalIrisIdentifier;
    NSURL * _originalLocalVideoDestinationURL;
    NSString * _originalPersistenceUUID;
    NSString * _originalVideoPersistenceUUID;
    NSString * _timelapseIdentifier;
    unsigned long long  _userInitiationTime;
    BOOL  _usesStillImageStabilization;
    NSString * _videoPersistenceUUID;
    BOOL  _wantsAudioForCapture;
    BOOL  _wantsAutoDualCameraFusion;
    BOOL  _wantsHighResolutionStills;
    BOOL  _wantsPortraitEffect;
    BOOL  _wantsSquareCrop;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } desiredPreviewSize;
@property (nonatomic, readonly) int effectFilterType;
@property (nonatomic, readonly) int flashMode;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int hdrMode;
@property (nonatomic, readonly, copy) NSString *irisIdentifier;
@property (nonatomic, readonly) int irisMode;
@property (nonatomic, readonly, copy) NSURL *localVideoDestinationURL;
@property (nonatomic, readonly) float loggingVideoZoomFactor;
@property (nonatomic, readonly) unsigned int maximumBurstLength;
@property (nonatomic, readonly, copy) NSString *originalIrisIdentifier;
@property (nonatomic, readonly, copy) NSURL *originalLocalVideoDestinationURL;
@property (nonatomic, readonly, copy) NSString *originalPersistenceUUID;
@property (nonatomic, readonly, copy) NSString *originalVideoPersistenceUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *timelapseIdentifier;
@property (nonatomic, readonly) unsigned long long userInitiationTime;
@property (nonatomic, readonly) BOOL usesStillImageStabilization;
@property (nonatomic, readonly, copy) NSString *videoPersistenceUUID;
@property (nonatomic, readonly) BOOL wantsAudioForCapture;
@property (nonatomic, readonly) BOOL wantsAutoDualCameraFusion;
@property (nonatomic, readonly) BOOL wantsHighResolutionStills;
@property (nonatomic, readonly) BOOL wantsPortraitEffect;
@property (nonatomic, readonly) BOOL wantsSquareCrop;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (id)captureRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (struct CGSize { float x1; float x2; })desiredPreviewSize;
- (int)effectFilterType;
- (int)flashMode;
- (int)hdrMode;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2;
- (id)irisIdentifier;
- (id)irisIdentifierForOriginal:(BOOL)arg1;
- (id)irisLocalVideoDestinationURLForOriginal:(BOOL)arg1;
- (int)irisMode;
- (id)irisStillImagePersistenceUUIDForOriginal:(BOOL)arg1;
- (id)irisVideoPersistenceUUIDForOriginal:(BOOL)arg1;
- (BOOL)isOriginalLocalVideoDestinationURL:(id)arg1;
- (id)localVideoDestinationURL;
- (float)loggingVideoZoomFactor;
- (unsigned int)maximumBurstLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originalIrisIdentifier;
- (id)originalLocalVideoDestinationURL;
- (id)originalPersistenceUUID;
- (id)originalVideoPersistenceUUID;
- (BOOL)shouldPersistToLivePhotoDirectory;
- (id)timelapseIdentifier;
- (unsigned long long)userInitiationTime;
- (BOOL)usesStillImageStabilization;
- (id)videoPersistenceUUID;
- (BOOL)wantsAudioForCapture;
- (BOOL)wantsAutoDualCameraFusion;
- (BOOL)wantsHighResolutionStills;
- (BOOL)wantsPortraitEffect;
- (BOOL)wantsSquareCrop;

@end
