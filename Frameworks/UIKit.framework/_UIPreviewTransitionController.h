/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition <UIForceInteractionController, UIInteractionProgressObserver, UIViewControllerAnimatedTransitioning> {
    NSMutableDictionary * _animationsByPresentationPhase;
    _UIFeedbackStatesBehavior * _feedbackBehavior;
    UIInteractionProgress * _interactionProgress;
    unsigned int  _targetPresentationPhase;
    <UIViewControllerContextTransitioning> * _transitionContext;
    NSDictionary * _viewsParticipatingInCommitTransition;
}

@property (nonatomic, retain) NSMutableDictionary *animationsByPresentationPhase;
@property (nonatomic, readonly) int completionCurve;
@property (nonatomic, readonly) float completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIFeedbackStatesBehavior *feedbackBehavior;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIInteractionProgress *interactionProgress;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int targetPresentationPhase;
@property (nonatomic) <UIViewControllerContextTransitioning> *transitionContext;
@property (nonatomic, retain) NSDictionary *viewsParticipatingInCommitTransition;
@property (nonatomic, readonly) BOOL wantsInteractiveStart;

+ (id)performCommitTransitionWithDelegate:(id)arg1 forViewController:(id)arg2 previewViewController:(id)arg3 previewInteractionController:(id)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_animateCommitTransition:(id)arg1;
- (void)_animateDismissTransition:(id)arg1;
- (void)_animatePreviewTransition:(id)arg1;
- (void)_animateRevealTransition:(id)arg1;
- (void)_completeAnimationWithPresentationPhase:(unsigned int)arg1 finished:(BOOL)arg2;
- (void)_layoutForPresentationPhase:(unsigned int)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)animationsByPresentationPhase;
- (void)cancelInteractiveTransition;
- (id)feedbackBehavior;
- (void)finishInteractiveTransition;
- (id)init;
- (id)initWithInteractionProgress:(id)arg1 targetPresentationPhase:(unsigned int)arg2;
- (id)interactionProgress;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)setAnimations:(id /* block */)arg1 completion:(id /* block */)arg2 forPresentationPhase:(unsigned int)arg3;
- (void)setAnimationsByPresentationPhase:(id)arg1;
- (void)setFeedbackBehavior:(id)arg1;
- (void)setInteractionProgress:(id)arg1;
- (void)setTargetPresentationPhase:(unsigned int)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setViewsParticipatingInCommitTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (unsigned int)targetPresentationPhase;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransition:(float)arg1;
- (id)viewsParticipatingInCommitTransition;

@end
