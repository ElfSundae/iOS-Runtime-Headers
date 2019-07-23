/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPlatterMenuPanningTransformer : NSObject {
    int _axisLock;
    <_UIPlatterMenuPanningTransformerDelegate> *_delegate;
    double _lastAxisLockTime;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastDirectionChangeTouchPosition;
    struct CGVector { 
        float dx; 
        float dy; 
    } _lastOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastTouchPosition;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastTransformedPoint;
    float _minimumXVelocityForAxisLock;
    int _overrideLockAxis;
    NSDate *_panBeginTime;
    struct CGPoint { 
        float x; 
        float y; 
    } _panBeginTouchPosition;
    NSDate *_timeForLastDirectionalChange;
    struct CGPoint { 
        float x; 
        float y; 
    } _transitionZonePosition;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _transitionZoneRect;
    struct CGSize { 
        float width; 
        float height; 
    } _transitionZoneSize;
    _UIPlatterPanningVelocityIntegrator *_velocityIntegrator;
}

@property (nonatomic) int axisLock;
@property (nonatomic) <_UIPlatterMenuPanningTransformerDelegate> *delegate;
@property (nonatomic) double lastAxisLockTime;
@property (nonatomic) struct CGPoint { float x1; float x2; } lastDirectionChangeTouchPosition;
@property (nonatomic) struct CGVector { float x1; float x2; } lastOffset;
@property (nonatomic) struct CGPoint { float x1; float x2; } lastTouchPosition;
@property (nonatomic) struct CGPoint { float x1; float x2; } lastTransformedPoint;
@property (nonatomic) float minimumXVelocityForAxisLock;
@property (nonatomic, readonly) struct CGVector { float x1; float x2; } offset;
@property (nonatomic) int overrideLockAxis;
@property (nonatomic, retain) NSDate *panBeginTime;
@property (nonatomic) struct CGPoint { float x1; float x2; } panBeginTouchPosition;
@property (nonatomic, retain) NSDate *timeForLastDirectionalChange;
@property (nonatomic) struct CGPoint { float x1; float x2; } transitionZonePosition;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } transitionZoneRect;
@property (nonatomic) struct CGSize { float x1; float x2; } transitionZoneSize;
@property (nonatomic, readonly) struct CGVector { float x1; float x2; } velocity;
@property (nonatomic, retain) _UIPlatterPanningVelocityIntegrator *velocityIntegrator;

+ (id)transformerWithAxisTransitionZonePosition:(struct CGPoint { float x1; float x2; })arg1 axisTransitionZoneSize:(struct CGSize { float x1; float x2; })arg2;

- (void).cxx_destruct;
- (void)_enterYLockedState;
- (int)axisLock;
- (id)delegate;
- (void)didBeginPanningWithTouchPosition:(struct CGPoint { float x1; float x2; })arg1 currentTransformedPosition:(struct CGPoint { float x1; float x2; })arg2;
- (void)didEndPanningWithTouchPosition:(struct CGPoint { float x1; float x2; })arg1 currentTransformedPosition:(struct CGPoint { float x1; float x2; })arg2;
- (void)didPanWithTouchPosition:(struct CGPoint { float x1; float x2; })arg1 currentTransformedPosition:(struct CGPoint { float x1; float x2; })arg2;
- (id)initWithAxisTransitionZonePosition:(struct CGPoint { float x1; float x2; })arg1 axisTransitionZoneSize:(struct CGSize { float x1; float x2; })arg2;
- (double)lastAxisLockTime;
- (struct CGPoint { float x1; float x2; })lastDirectionChangeTouchPosition;
- (struct CGVector { float x1; float x2; })lastOffset;
- (struct CGPoint { float x1; float x2; })lastTouchPosition;
- (struct CGPoint { float x1; float x2; })lastTransformedPoint;
- (void)lockIntoYAxis;
- (float)minimumXVelocityForAxisLock;
- (struct CGVector { float x1; float x2; })offset;
- (int)overrideLockAxis;
- (id)panBeginTime;
- (struct CGPoint { float x1; float x2; })panBeginTouchPosition;
- (void)setAxisLock:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastAxisLockTime:(double)arg1;
- (void)setLastDirectionChangeTouchPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLastOffset:(struct CGVector { float x1; float x2; })arg1;
- (void)setLastTouchPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLastTransformedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMinimumXVelocityForAxisLock:(float)arg1;
- (void)setOverrideLockAxis:(int)arg1;
- (void)setPanBeginTime:(id)arg1;
- (void)setPanBeginTouchPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTimeForLastDirectionalChange:(id)arg1;
- (void)setTransitionZonePosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransitionZoneRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTransitionZoneSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setVelocityIntegrator:(id)arg1;
- (id)timeForLastDirectionalChange;
- (double)timeIntervalSinceLastDirectionChange;
- (struct CGPoint { float x1; float x2; })transitionZonePosition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transitionZoneRect;
- (struct CGSize { float x1; float x2; })transitionZoneSize;
- (struct CGVector { float x1; float x2; })velocity;
- (id)velocityIntegrator;

@end
