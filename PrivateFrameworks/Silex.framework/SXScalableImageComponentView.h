/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXScalableImageComponentView : SXMediaComponentView <SXDragManagerDataSource, SXFullscreenCanvasShowable, SXFullscreenCaptionDataSource, SXImageViewDelegate> {
    SXMediaViewEvent * _activeViewEvent;
    <SXFullscreenCanvasControllerFactory> * _canvasControllerFactory;
    SXDragManager * _dragManager;
    SXFullscreenCanvasController * _fullScreenCanvasController;
    UIView * _gestureView;
    SXImageResource * _imageResource;
    SXImageView * _imageView;
    <SXImageViewFactory> * _imageViewFactory;
    <SXMediaSharingPolicyProvider> * _mediaSharingPolicyProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousContentFrame;
}

@property (nonatomic, retain) SXMediaViewEvent *activeViewEvent;
@property (nonatomic, readonly) <SXFullscreenCanvasControllerFactory> *canvasControllerFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXDragManager *dragManager;
@property (nonatomic, retain) SXFullscreenCanvasController *fullScreenCanvasController;
@property (nonatomic) UIView *gestureView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageResource *imageResource;
@property (nonatomic, readonly) SXImageView *imageView;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (nonatomic, readonly) <SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousContentFrame;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeViewEvent;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (id)canvasControllerFactory;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
- (id)contentSizeCategoryForCaption:(id)arg1;
- (void)createMediaViewEvent;
- (id)description;
- (void)discardContents;
- (id)dragManager;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)finishMediaViewEvent;
- (id)fullScreenCanvasController;
- (id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;
- (bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint { double x1; double x2; })arg2 inShowable:(id)arg3;
- (bool)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (bool)gestureShouldBegin:(id)arg1;
- (id)gestureView;
- (id)imageResource;
- (id)imageView;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (id)imageViewFactory;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8 mediaSharingPolicyProvider:(id)arg9;
- (void)layoutImageView;
- (void)loadComponent:(id)arg1;
- (id)mediaSharingPolicyProvider;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousContentFrame;
- (void)renderContents;
- (bool)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;
- (void)setActiveViewEvent:(id)arg1;
- (void)setDragManager:(id)arg1;
- (void)setFullScreenCanvasController:(id)arg1;
- (void)setGestureView:(id)arg1;
- (void)setImageResource:(id)arg1;
- (void)setPreviousContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)submitEvents;
- (id)textResizerForCaption:(id)arg1;
- (id)textRulesForCaption:(id)arg1;
- (id)textStyleForIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (id)viewForDragManager:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;

@end
