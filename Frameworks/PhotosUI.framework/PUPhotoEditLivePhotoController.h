/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditLivePhotoController : NSObject <PUViewModelChangeObserver> {
    PHLivePhoto * __lastRenderedLivePhoto;
    PLPhotoEditModel * __lastRenderedPhotoEditModel;
    BOOL  __needsUpdateRenderedLivePhoto;
    NSURL * __renderURL;
    PUVideoEditRenderer * __videoRenderer;
    PHLivePhoto * _baseLivePhoto;
    <PUPhotoEditLivePhotoControllerDelegate> * _delegate;
    struct { 
        BOOL respondsToRenderedLivePhotoDidChange; 
        BOOL respondsToRenderingProgressDidChange; 
        BOOL respondsToIsRenderingDidChange; 
        BOOL respondsToShouldRender; 
    }  _delegateFlags;
    id  _notificationObserver;
    PLPhotoEditRenderer * _photoEditRenderer;
    NSObject<OS_dispatch_queue> * _renderQueue;
    PHLivePhoto * _renderedLivePhoto;
    BOOL  _rendering;
    float  _renderingProgress;
}

@property (setter=_setLastRenderedLivePhoto:, nonatomic, retain) PHLivePhoto *_lastRenderedLivePhoto;
@property (setter=_setLastRenderedPhotoEditModel:, nonatomic, copy) PLPhotoEditModel *_lastRenderedPhotoEditModel;
@property (setter=_setNeedsUpdateRenderedLivePhoto:, nonatomic) BOOL _needsUpdateRenderedLivePhoto;
@property (setter=_setRenderURL:, nonatomic, retain) NSURL *_renderURL;
@property (setter=_setVideoRenderer:, nonatomic, retain) PUVideoEditRenderer *_videoRenderer;
@property (nonatomic, readonly) PHLivePhoto *baseLivePhoto;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoEditLivePhotoControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PLPhotoEditRenderer *photoEditRenderer;
@property (setter=_setRenderedLivePhoto:, nonatomic, retain) PHLivePhoto *renderedLivePhoto;
@property (getter=isRendering, setter=_setRendering:, nonatomic) BOOL rendering;
@property (setter=_setRenderingProgress:, nonatomic) float renderingProgress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleRenderCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 photoEditModel:(id)arg3;
- (void)_invalidateRenderedLivePhoto;
- (id)_lastRenderedLivePhoto;
- (id)_lastRenderedPhotoEditModel;
- (BOOL)_needsUpdateRenderedLivePhoto;
- (void)_photoEditModelDidChange:(id)arg1;
- (id)_renderURL;
- (void)_setLastRenderedLivePhoto:(id)arg1;
- (void)_setLastRenderedPhotoEditModel:(id)arg1;
- (void)_setNeedsUpdateRenderedLivePhoto:(BOOL)arg1;
- (void)_setRenderURL:(id)arg1;
- (void)_setRenderedLivePhoto:(id)arg1;
- (void)_setRendering:(BOOL)arg1;
- (void)_setRenderingProgress:(float)arg1;
- (void)_setVideoRenderer:(id)arg1;
- (void)_updateRenderedLivePhotoIfNeeded;
- (id)_videoRenderer;
- (id)baseLivePhoto;
- (void)dealloc;
- (id)delegate;
- (id)initWithBaseLivePhoto:(id)arg1 editRenderer:(id)arg2;
- (BOOL)isRendering;
- (id)photoEditRenderer;
- (void)renderIfNeeded;
- (id)renderedLivePhoto;
- (float)renderingProgress;
- (void)setDelegate:(id)arg1;

@end
