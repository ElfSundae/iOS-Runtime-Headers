/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIProgressiveBlurPresentationController : UIPresentationController {
    int  _blurStyle;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) int blurStyle;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(BOOL)arg2;
- (void)_configureSubviews;
- (int)blurStyle;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (void)setBlurStyle:(int)arg1;
- (id)visualEffectView;

@end
