/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewInAppRatingPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {
    BOOL  _constraintsPrepared;
    UIView * _dimmingView;
}

@property (nonatomic) BOOL constraintsPrepared;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)_prepareConstraintsIfNecessary;
- (void)_prepareDimmingViewIfNecessary;
- (int)adaptivePresentationStyle;
- (int)adaptivePresentationStyleForPresentationController:(id)arg1;
- (BOOL)constraintsPrepared;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (id)dimmingView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2;
- (void)presentationTransitionWillBegin;
- (void)setConstraintsPrepared:(BOOL)arg1;
- (void)setDimmingView:(id)arg1;
- (BOOL)shouldRemovePresentersView;

@end
