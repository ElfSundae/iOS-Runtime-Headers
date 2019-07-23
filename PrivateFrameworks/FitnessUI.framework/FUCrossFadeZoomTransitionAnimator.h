/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUCrossFadeZoomTransitionAnimator : NSObject <FUViewControllerAnimatedTransitioning> {
    id /* block */  _animationCompletionBlock;
    id  _context;
    UIView * _largeView;
    UIView * _smallView;
    BOOL  _transitionCompleted;
    BOOL  _zoomingUp;
}

@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *largeView;
@property (nonatomic, retain) UIView *smallView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL zoomingUp;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)completeTransitionImmediately;
- (id)context;
- (id)largeView;
- (void)setContext:(id)arg1;
- (void)setLargeView:(id)arg1;
- (void)setSmallView:(id)arg1;
- (void)setZoomingUp:(BOOL)arg1;
- (id)smallView;
- (double)transitionDuration:(id)arg1;
- (BOOL)zoomingUp;

@end
