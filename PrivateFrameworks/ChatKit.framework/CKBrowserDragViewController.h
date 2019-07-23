/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserDragViewController : UIViewController <CKAnimationTimerObserver, UIDynamicAnimatorDelegate, UIGestureRecognizerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorOffset;
    bool  _canPeel;
    bool  _canRotate;
    bool  _canScale;
    UIImage * _currentFrameImage;
    <CKBrowserDragViewControllerDelegate> * _delegate;
    CADisplayLink * _displayLink;
    CKAnimatedImage * _dragImage;
    NSArray * _dragImageFrames;
    UIView * _dragView;
    double  _dragViewScale;
    CALayer * _dropShadowLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dropShadowLayerStartPosition;
    CKElasticFunction * _elasticFunctionPositionX;
    CKElasticFunction * _elasticFunctionPositionY;
    CKElasticFunction * _elasticFunctionRotation;
    CKElasticFunction * _elasticFunctionScaleX;
    CKElasticFunction * _elasticFunctionScaleY;
    double  _elasticLastTime;
    double  _elasticRemainingTime;
    double  _elasticRotationAngle;
    double  _elasticScaleX;
    double  _elasticScaleY;
    UILongPressGestureRecognizer * _gestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDragStartPosition;
    double  _initialScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialSize;
    CALayer * _meshLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _meshLayerStartPosition;
    UIPanGestureRecognizer * _panGestureRecognizer;
    CALayer * _peelImageLayer;
    CALayer * _peelLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _peelLayerStartPosition;
    NSMutableDictionary * _peelMaskImageCache;
    CALayer * _peelMaskLayer;
    CALayer * _perspectiveLayer;
    bool  _pressed;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPanLocationInView;
    struct CGSize { 
        double width; 
        double height; 
    }  _rasterizedImageSize;
    double  _rotationAngle;
    bool  _scaledDown;
    CALayer * _shadowLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _shadowLayerStartPosition;
    CALayer * _shineLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _shineLayerStartPosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
}

@property (nonatomic, readonly) double absoluteScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorOffset;
@property (nonatomic) bool canPeel;
@property (nonatomic) bool canRotate;
@property (nonatomic) bool canScale;
@property (nonatomic, retain) UIImage *currentFrameImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserDragViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) CKAnimatedImage *dragImage;
@property (nonatomic, retain) NSArray *dragImageFrames;
@property (nonatomic, retain) UIView *dragView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } dragViewCenter;
@property (nonatomic, readonly) double dragViewRotation;
@property (nonatomic) double dragViewScale;
@property (nonatomic) CALayer *dropShadowLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } dropShadowLayerStartPosition;
@property (nonatomic, retain) CKElasticFunction *elasticFunctionPositionX;
@property (nonatomic, retain) CKElasticFunction *elasticFunctionPositionY;
@property (nonatomic, retain) CKElasticFunction *elasticFunctionRotation;
@property (nonatomic, retain) CKElasticFunction *elasticFunctionScaleX;
@property (nonatomic, retain) CKElasticFunction *elasticFunctionScaleY;
@property (nonatomic) double elasticLastTime;
@property (nonatomic) double elasticRemainingTime;
@property (nonatomic) double elasticRotationAngle;
@property (nonatomic) double elasticScaleX;
@property (nonatomic) double elasticScaleY;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialDragStartPosition;
@property (nonatomic) double initialScale;
@property (nonatomic) struct CGSize { double x1; double x2; } initialSize;
@property (nonatomic) CALayer *meshLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } meshLayerStartPosition;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, retain) CALayer *peelImageLayer;
@property (nonatomic) CALayer *peelLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } peelLayerStartPosition;
@property (nonatomic, retain) NSMutableDictionary *peelMaskImageCache;
@property (nonatomic, retain) CALayer *peelMaskLayer;
@property (nonatomic) CALayer *perspectiveLayer;
@property (getter=isPressed, nonatomic) bool pressed;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousPanLocationInView;
@property (nonatomic) struct CGSize { double x1; double x2; } rasterizedImageSize;
@property (nonatomic) double rotationAngle;
@property (getter=isScaledDown, nonatomic) bool scaledDown;
@property (nonatomic) CALayer *shadowLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } shadowLayerStartPosition;
@property (nonatomic) CALayer *shineLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } shineLayerStartPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (readonly) Class superclass;

+ (id)meshTransform;
+ (id)springAnimationWithKeyPath:(id)arg1 speed:(float)arg2;
+ (bool)supportsForceTouch;

- (void).cxx_destruct;
- (void)_attachElasticEffectsForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_detachElasticEffects;
- (void)_displayLinkCallback:(id)arg1;
- (bool)_orbScalingEnabled;
- (void)_updateElasticEffectsForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (double)absoluteScale;
- (struct CGPoint { double x1; double x2; })anchorOffset;
- (void)animateBackToSourceCompletionBlock:(id /* block */)arg1;
- (void)animatePeelWithCompletion:(id /* block */)arg1;
- (void)animatePlacementAtPoint:(struct CGPoint { double x1; double x2; })arg1 completionBlock:(id /* block */)arg2;
- (void)animateScaleDown;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applyTransforms;
- (bool)canPeel;
- (bool)canRotate;
- (bool)canScale;
- (void)commitDrag;
- (id)currentFrameImage;
- (void)dealloc;
- (id)delegate;
- (id)displayLink;
- (id)dragImage;
- (id)dragImageFrames;
- (id)dragView;
- (struct CGPoint { double x1; double x2; })dragViewCenter;
- (double)dragViewRotation;
- (double)dragViewScale;
- (id)dropShadowLayer;
- (struct CGPoint { double x1; double x2; })dropShadowLayerStartPosition;
- (id)elasticFunctionPositionX;
- (id)elasticFunctionPositionY;
- (id)elasticFunctionRotation;
- (id)elasticFunctionScaleX;
- (id)elasticFunctionScaleY;
- (double)elasticLastTime;
- (double)elasticRemainingTime;
- (double)elasticRotationAngle;
- (double)elasticScaleX;
- (double)elasticScaleY;
- (void)gestureRecognized:(id)arg1;
- (id)gestureRecognizer;
- (id)initWithDragImage:(id)arg1 inSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withSourcePoint:(struct CGPoint { double x1; double x2; })arg3 withGestureRecognizer:(id)arg4;
- (struct CGPoint { double x1; double x2; })initialDragStartPosition;
- (double)initialScale;
- (struct CGSize { double x1; double x2; })initialSize;
- (bool)isPressed;
- (bool)isScaledDown;
- (void)manuallyInitializeDragAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)manuallyUpdateDragPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)meshLayer;
- (struct CGPoint { double x1; double x2; })meshLayerStartPosition;
- (void)panGestureRecognized:(id)arg1;
- (id)panGestureRecognizer;
- (id)peelImageLayer;
- (id)peelLayer;
- (struct CGPoint { double x1; double x2; })peelLayerStartPosition;
- (id)peelMaskImageCache;
- (id)peelMaskImageFromImage:(id)arg1;
- (id)peelMaskLayer;
- (id)perspectiveLayer;
- (struct CGPoint { double x1; double x2; })previousPanLocationInView;
- (struct CGSize { double x1; double x2; })rasterizedImageSize;
- (void)reversePeelAnimationToPoint:(struct CGPoint { double x1; double x2; })arg1 forPlacement:(bool)arg2 completionBlock:(id /* block */)arg3;
- (double)rotationAngle;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCanPeel:(bool)arg1;
- (void)setCanRotate:(bool)arg1;
- (void)setCanScale:(bool)arg1;
- (void)setCurrentFrameImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setDragImage:(id)arg1;
- (void)setDragImageFrames:(id)arg1;
- (void)setDragView:(id)arg1;
- (void)setDragViewScale:(double)arg1;
- (void)setDropShadowLayer:(id)arg1;
- (void)setDropShadowLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setElasticFunctionPositionX:(id)arg1;
- (void)setElasticFunctionPositionY:(id)arg1;
- (void)setElasticFunctionRotation:(id)arg1;
- (void)setElasticFunctionScaleX:(id)arg1;
- (void)setElasticFunctionScaleY:(id)arg1;
- (void)setElasticLastTime:(double)arg1;
- (void)setElasticRemainingTime:(double)arg1;
- (void)setElasticRotationAngle:(double)arg1;
- (void)setElasticScaleX:(double)arg1;
- (void)setElasticScaleY:(double)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setInitialDragStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialScale:(double)arg1;
- (void)setInitialSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMeshLayer:(id)arg1;
- (void)setMeshLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setPeelImageLayer:(id)arg1;
- (void)setPeelLayer:(id)arg1;
- (void)setPeelLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPeelMaskImageCache:(id)arg1;
- (void)setPeelMaskLayer:(id)arg1;
- (void)setPerspectiveLayer:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setPreviousPanLocationInView:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRasterizedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setScaledDown:(bool)arg1;
- (void)setShadowLayer:(id)arg1;
- (void)setShadowLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShineLayer:(id)arg1;
- (void)setShineLayerStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUpPeelLayers;
- (id)shadowLayer;
- (struct CGPoint { double x1; double x2; })shadowLayerStartPosition;
- (id)shineLayer;
- (struct CGPoint { double x1; double x2; })shineLayerStartPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (void)updateAnimationTimerObserving;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
