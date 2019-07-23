/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition <CAAnimationDelegate> {
    BOOL  _disableMeshOptimization;
    NSArray * _endKeysOrdered;
    NSArray * _keyInfos;
    float  _previousProgress;
    NSArray * _startGeometries;
    NSArray * _startKeysOrdered;
    NSArray * _transitionKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableMeshOptimization;
@property (nonatomic, retain) NSArray *endKeysOrdered;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *keyInfos;
@property (nonatomic) float previousProgress;
@property (nonatomic, retain) NSArray *startGeometries;
@property (nonatomic, retain) NSArray *startKeysOrdered;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *transitionKeys;

- (void)_runOpacityAnimation;
- (void)_runTransformAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)commitTransitionRebuild;
- (void)dealloc;
- (BOOL)disableMeshOptimization;
- (id)endKeysOrdered;
- (void)gatherTransitionKeys;
- (id)keyInfos;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyRectForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 normalizedSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)meshTransformForKeyplane:(id)arg1 forward:(BOOL)arg2 initial:(BOOL)arg3;
- (double)nonInteractiveDuration;
- (float)previousProgress;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)runNonInteractivelyWithCompletion:(id /* block */)arg1;
- (void)setDisableMeshOptimization:(BOOL)arg1;
- (void)setEndKeysOrdered:(id)arg1;
- (void)setKeyInfos:(id)arg1;
- (void)setPreviousProgress:(float)arg1;
- (void)setStartGeometries:(id)arg1;
- (void)setStartKeysOrdered:(id)arg1;
- (void)setTransitionKeys:(id)arg1;
- (id)startGeometries;
- (id)startKeysOrdered;
- (id)transitionKeys;
- (void)updateWithProgress:(float)arg1;

@end
