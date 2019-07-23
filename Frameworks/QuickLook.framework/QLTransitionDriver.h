/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLTransitionDriver : NSObject {
    UIView * _destinationView;
    float  _duration;
    <QLDismissGestureTracking> * _gestureTracker;
    float  _hostNavigationOffset;
    BOOL  _presenting;
    UIView * _sourceView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sourceViewFrame;
    float  _topNavigationOffset;
    UIView * _transitionContainer;
    QLItem * _transitionPreviewItem;
    struct CGSize { 
        float width; 
        float height; 
    }  _transitionPreviewSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _uncroppedFrame;
}

@property (retain) UIView *destinationView;
@property float duration;
@property (retain) <QLDismissGestureTracking> *gestureTracker;
@property float hostNavigationOffset;
@property BOOL presenting;
@property (retain) UIView *sourceView;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sourceViewFrame;
@property float topNavigationOffset;
@property (retain) UIView *transitionContainer;
@property (retain) QLItem *transitionPreviewItem;
@property struct CGSize { float x1; float x2; } transitionPreviewSize;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } uncroppedFrame;

- (void).cxx_destruct;
- (void)animateFinishTransition;
- (void)animateTransition;
- (id)destinationView;
- (float)duration;
- (id)gestureTracker;
- (float)hostNavigationOffset;
- (BOOL)presenting;
- (void)setDestinationView:(id)arg1;
- (void)setDuration:(float)arg1;
- (void)setGestureTracker:(id)arg1;
- (void)setHostNavigationOffset:(float)arg1;
- (void)setPresenting:(BOOL)arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTopNavigationOffset:(float)arg1;
- (void)setTransitionContainer:(id)arg1;
- (void)setTransitionPreviewItem:(id)arg1;
- (void)setTransitionPreviewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setUncroppedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)sourceView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sourceViewFrame;
- (void)tearDown;
- (float)topNavigationOffset;
- (id)transitionContainer;
- (id)transitionPreviewItem;
- (struct CGSize { float x1; float x2; })transitionPreviewSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })uncroppedFrame;

@end
