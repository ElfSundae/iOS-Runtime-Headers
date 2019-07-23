/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCameraRollController : NSObject <PLCameraPreviewWellImageChangeObserver, PUBrowsingViewModelChangeObserver, PUOneUpPresentationHelperAssetDisplayDelegate, PUOneUpPresentationHelperDelegate, PXPhotosDataSourceChangeObserver, UIInteractionProgressObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private> {
    BOOL  __allowUpdating;
    BOOL  __didSetupMechanismsForStoppingCaptureSession;
    BOOL  __didStopCaptureSession;
    NSObject<OS_dispatch_source> * __memoryWarningSource;
    BOOL  __oneUpFullyPresented;
    PUOneUpPresentationHelper * __oneUpPresentationHelper;
    BOOL  __oneUpVisible;
    PUPhotoKitDataSourceManager * __photoKitDataSourceManager;
    PXPhotosDataSource * __photosDataSource;
    NSMutableSet * __sessionAssetUUIDs;
    PXPhotosDataSource * __stagedDataSource;
    BOOL  __transientAssetsAreValid;
    CAMTransientDataSource * __transientDataSource;
    CAMTransientImageManager * __transientImageManager;
    BOOL  __updateIsScheduled;
    <CAMCameraRollControllerImageWellDelegate> * _imageWellDelegate;
    <CAMCameraRollControllerPresentationDelegate> * _presentationDelegate;
    struct { 
        BOOL respondsToSourceAssetRect; 
        BOOL respondsToShouldHideSourceAsset; 
        BOOL respondsToPreviewGestureDidBecomeAvailable; 
        BOOL respondsToPreviewSourceRect; 
        BOOL respondsToImageForReveal; 
        BOOL respondsToRevealWillBegin; 
        BOOL respondsToRevealDidEnd; 
    }  _presentationDelegateFlags;
    UIGestureRecognizer * _previewGestureRecognizer;
    <CAMCameraRollControllerSessionDelegate> * _sessionDelegate;
    unsigned short  _sessionIdentifier;
    BOOL  _shouldPauseAudioSessionUpdatesForCapture;
}

@property (setter=_setAllowUpdating:, nonatomic) BOOL _allowUpdating;
@property (setter=_setDidSetupMechanismsForStoppingCaptureSession:, nonatomic) BOOL _didSetupMechanismsForStoppingCaptureSession;
@property (setter=_setDidStopCaptureSession:, nonatomic) BOOL _didStopCaptureSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *_memoryWarningSource;
@property (getter=_isOneUpFullyPresented, setter=_setOneUpFullyPresented:, nonatomic) BOOL _oneUpFullyPresented;
@property (nonatomic, readonly) PUOneUpPresentationHelper *_oneUpPresentationHelper;
@property (getter=_isOneUpVisible, setter=_setOneUpVisible:, nonatomic) BOOL _oneUpVisible;
@property (nonatomic, readonly) PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
@property (setter=_setPhotosDataSource:, nonatomic, retain) PXPhotosDataSource *_photosDataSource;
@property (nonatomic, readonly) NSMutableSet *_sessionAssetUUIDs;
@property (setter=_setStagedDataSource:, nonatomic, retain) PXPhotosDataSource *_stagedDataSource;
@property (setter=_setTransientAssetsAreValid:, nonatomic) BOOL _transientAssetsAreValid;
@property (nonatomic, readonly) CAMTransientDataSource *_transientDataSource;
@property (nonatomic, readonly) CAMTransientImageManager *_transientImageManager;
@property (setter=_setUpdateIsScheduled:, nonatomic) BOOL _updateIsScheduled;
@property (nonatomic, readonly) BOOL canPresentCameraRollViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <CAMCameraRollControllerImageWellDelegate> *imageWellDelegate;
@property (nonatomic) <CAMCameraRollControllerPresentationDelegate> *presentationDelegate;
@property (setter=_setPreviewGestureRecognizer:, nonatomic, retain) UIGestureRecognizer *previewGestureRecognizer;
@property (nonatomic) <CAMCameraRollControllerSessionDelegate> *sessionDelegate;
@property (setter=_setSessionIdentifier:, nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) BOOL shouldPauseAudioSessionUpdatesForCapture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_allowUpdating;
- (void)_cancelDelayedStopCaptureSession;
- (BOOL)_didSetupMechanismsForStoppingCaptureSession;
- (BOOL)_didStopCaptureSession;
- (void)_ensureCameraRollViewController;
- (void)_invalidateTransientAssets;
- (BOOL)_isOneUpFullyPresented;
- (BOOL)_isOneUpVisible;
- (id)_memoryWarningSource;
- (id)_oneUpPresentationHelper;
- (void)_performPreload;
- (id)_photoKitDataSourceManager;
- (id)_photosDataSource;
- (void)_registerBrowsingViewModelChangeObserver;
- (void)_scheduleStopCaptureSessionAfterDelay:(double)arg1;
- (void)_scheduleUpdateIfOneUpIsActive;
- (id)_sessionAssetUUIDs;
- (void)_setAllowUpdating:(BOOL)arg1;
- (void)_setDidSetupMechanismsForStoppingCaptureSession:(BOOL)arg1;
- (void)_setDidStopCaptureSession:(BOOL)arg1;
- (void)_setOneUpFullyPresented:(BOOL)arg1;
- (void)_setOneUpVisible:(BOOL)arg1;
- (void)_setPhotosDataSource:(id)arg1;
- (void)_setPreviewGestureRecognizer:(id)arg1;
- (void)_setSessionIdentifier:(unsigned short)arg1;
- (void)_setStagedDataSource:(id)arg1;
- (void)_setTransientAssetsAreValid:(BOOL)arg1;
- (void)_setUpdateIsScheduled:(BOOL)arg1;
- (void)_setupMechanismsForStoppingCaptureSessionIfNecessary;
- (void)_setupMemoryWarningNotificationsIfNecessary;
- (BOOL)_shouldStopCaptureSessionForIrisPlayerOfAssetViewModel:(id)arg1;
- (BOOL)_shouldStopCaptureSessionForVideoPlayerOfAssetViewModel:(id)arg1;
- (id)_stagedDataSource;
- (void)_startNewSession;
- (void)_stopCaptureSessionIfNecessary;
- (void)_stopCaptureSessionIfNecessaryForViewModel:(id)arg1 didChange:(id)arg2;
- (void)_stopCaptureSessionIfNecessaryForViewModelCurrentState;
- (void)_stopCaptureSessionIfNecessaryFromTimeout;
- (void)_tearDownMemoryWarningNotifications;
- (void)_teardownMechanismsForStoppingCaptureSession;
- (BOOL)_transientAssetsAreValid;
- (id)_transientDataSource;
- (id)_transientImageManager;
- (void)_unregisterBrowsingViewModelChangeObserver;
- (void)_update;
- (BOOL)_updateIsScheduled;
- (void)_updateTransientDataSourceIfNeeded;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (BOOL)canPresentCameraRollViewController;
- (void)dealloc;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)didPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2;
- (BOOL)dismissCameraRollViewControllerForced:(BOOL)arg1 animated:(BOOL)arg2;
- (void)handlePresentingPanGestureRecognizer:(id)arg1;
- (id)imageWellDelegate;
- (id)init;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (BOOL)isCameraRollViewControllerPresented;
- (BOOL)isCaptureSessionCurrent:(unsigned short)arg1;
- (void)oneUpPresentationHelper:(id)arg1 previewScrubberDidBecomeAvailable:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg3 contentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (int)oneUpPresentationHelperPreferredBarStyle:(id)arg1;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (id)persistedThumbnailImage;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)ppt_preload;
- (void)preload;
- (void)presentCameraRollViewControllerAnimated:(BOOL)arg1 interactive:(BOOL)arg2;
- (id)presentationDelegate;
- (void)presentingViewControllerViewDidAppear:(BOOL)arg1;
- (void)presentingViewControllerViewDidDisappear:(BOOL)arg1;
- (void)presentingViewControllerViewWillAppear:(BOOL)arg1;
- (void)presentingViewControllerViewWillDisappear:(BOOL)arg1;
- (id)previewGestureRecognizer;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint { float x1; float x2; })arg1 inSourceView:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)processPendingBursts;
- (void)processTransientAssetUpdate:(id)arg1 preventingInsertion:(BOOL)arg2;
- (void)processTransientPairedVideoUpdate:(id)arg1 filterType:(int)arg2;
- (void)resetNavigation;
- (id)sessionDelegate;
- (unsigned short)sessionIdentifier;
- (void)setImageWellDelegate:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setShouldPauseAudioSessionUpdatesForCapture:(BOOL)arg1;
- (BOOL)shouldPauseAudioSessionUpdatesForCapture;
- (BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(id)arg3;

@end
