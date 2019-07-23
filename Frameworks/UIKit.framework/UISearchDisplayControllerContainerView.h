/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchDisplayControllerContainerView : UIView {
    UIView * _behindView;
    UIView * _bottomView;
    BOOL  _collapsedTopView;
    UIView * _topView;
    NSLayoutConstraint * _topViewAttributeTopConstraint;
    NSLayoutConstraint * _topViewHeightConstraint;
}

@property (nonatomic, readonly) UIView *behindView;
@property (nonatomic, readonly) UIView *bottomView;
@property (nonatomic, readonly) UIView *topView;
@property (nonatomic, retain) NSLayoutConstraint *topViewAttributeTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *topViewHeightConstraint;

- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)adjustTopAttributeConstantByDelta:(float)arg1;
- (id)behindView;
- (id)bottomView;
- (void)collapseTopView;
- (void)configureInteractionForContainment:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 topViewHeight:(float)arg2;
- (void)setBottomViewUserInteractionEnabled:(BOOL)arg1;
- (void)setTopViewAttributeTopConstraint:(id)arg1;
- (void)setTopViewHeightConstraint:(id)arg1;
- (id)topView;
- (id)topViewAttributeTopConstraint;
- (id)topViewHeightConstraint;
- (void)updateTopAttributeConstant:(float)arg1;
- (void)updateTopViewHeight:(float)arg1;
- (void)updateTopViewHeight:(float)arg1 animateUpdate:(BOOL)arg2;

@end
