/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotationEventHandler : NSObject {
    AKAnnotation *_annotation;
    BOOL _draggingHorizontalOnly;
    BOOL _draggingVerticalOnly;
    struct CGPoint { 
        float x; 
        float y; 
    } _initialCenter;
    struct CGPoint { 
        float x; 
        float y; 
    } _initialDraggedPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _initialOtherPoint;
    unsigned int _initiallyDraggedArea;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastPositionInModel;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastPositionInWindow;
    AKPageController *_pageController;
}

@property (retain) AKAnnotation *annotation;
@property BOOL draggingHorizontalOnly;
@property BOOL draggingVerticalOnly;
@property struct CGPoint { float x1; float x2; } initialCenter;
@property struct CGPoint { float x1; float x2; } initialDraggedPoint;
@property struct CGPoint { float x1; float x2; } initialOtherPoint;
@property unsigned int initiallyDraggedArea;
@property struct CGPoint { float x1; float x2; } lastPositionInModel;
@property struct CGPoint { float x1; float x2; } lastPositionInWindow;
@property AKPageController *pageController;

+ (Class)_handlerClassForPlatformForAnnotation:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationRectangleForDraggingBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 withOriginalCenter:(struct CGPoint { float x1; float x2; })arg4;
+ (id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg1 withPageController:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;
- (BOOL)alwaysLockAspectRatio;
- (id)annotation;
- (BOOL)canLockAspectRatio;
- (BOOL)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)draggingHorizontalOnly;
- (BOOL)draggingVerticalOnly;
- (BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)getInitialDraggedPoint:(struct CGPoint { float x1; float x2; }*)arg1 otherPoint:(struct CGPoint { float x1; float x2; }*)arg2 center:(struct CGPoint { float x1; float x2; }*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (struct CGPoint { float x1; float x2; })initialCenter;
- (struct CGPoint { float x1; float x2; })initialDraggedPoint;
- (struct CGPoint { float x1; float x2; })initialOtherPoint;
- (unsigned int)initiallyDraggedArea;
- (struct CGPoint { float x1; float x2; })lastPositionInModel;
- (struct CGPoint { float x1; float x2; })lastPositionInWindow;
- (BOOL)lockAspectRatioByDefault;
- (struct CGPoint { float x1; float x2; })modelPointFromPointInWindow:(struct CGPoint { float x1; float x2; })arg1;
- (float)naturalAspectRatioForAnnotation;
- (struct CGSize { float x1; float x2; })naturalSizeForAnnotation;
- (id)pageController;
- (void)setAnnotation:(id)arg1;
- (void)setDraggingHorizontalOnly:(BOOL)arg1;
- (void)setDraggingVerticalOnly:(BOOL)arg1;
- (void)setInitialCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInitialDraggedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInitialOtherPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInitiallyDraggedArea:(unsigned int)arg1;
- (void)setLastPositionInModel:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLastPositionInWindow:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPageController:(id)arg1;
- (void)setupDraggingConstraints;
- (void)updateModelWithCurrentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;

@end
