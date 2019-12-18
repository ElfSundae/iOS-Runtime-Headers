/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewPlatterPresentationController : UIPresentationController <UIGestureRecognizerDelegate, _UIContextMenuActionsListViewDelegate, _UIPreviewPlatterPanControllerDelegate> {
    NSArray * _accessoryViews;
    UIPanGestureRecognizer * _actionScrubbingHandoffGestureRecognizer;
    _UIContextMenuActionsListView * _actionsView;
    UIVisualEffectView * _backgroundEffectView;
    _UIPreviewPlatterView * _contentPlatterView;
    _UIContextMenuLayoutArbiterOutput * _currentLayout;
    _UIContextMenuStyle * _currentStyle;
    UITapGestureRecognizer * _dismissalTapGestureRecognizer;
    _UIFulfilledContextMenuConfiguration * _displayedConfiguration;
    bool  _isAnimatingPresentation;
    _UIContextMenuLayoutArbiter * _layoutArbiter;
    UITapGestureRecognizer * _platterActionTapGestureRecognizer;
    UIView * _platterContainerView;
    struct CGSize { 
        double width; 
        double height; 
    }  _platterContentSize;
    bool  _platterContentSizeDidChange;
    _UIPreviewPlatterPanController * _platterPanController;
    UIView * _platterTransitionView;
    UITargetedPreview * _sourcePreview;
}

@property (nonatomic, readonly) NSArray *accessoryViews;
@property (nonatomic, retain) UIPanGestureRecognizer *actionScrubbingHandoffGestureRecognizer;
@property (nonatomic, readonly) _UIContextMenuActionsListView *actionsView;
@property (nonatomic, readonly) UIVisualEffectView *backgroundEffectView;
@property (nonatomic, readonly) _UIPreviewPlatterView *contentPlatterView;
@property (nonatomic, readonly) _UIContextMenuLayoutArbiterOutput *currentLayout;
@property (nonatomic, copy) _UIContextMenuStyle *currentStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPreviewPlatterPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITapGestureRecognizer *dismissalTapGestureRecognizer;
@property (nonatomic, retain) _UIFulfilledContextMenuConfiguration *displayedConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimatingPresentation;
@property (nonatomic, retain) _UIContextMenuLayoutArbiter *layoutArbiter;
@property (nonatomic, retain) UITapGestureRecognizer *platterActionTapGestureRecognizer;
@property (nonatomic, readonly) UIView *platterContainerView;
@property (nonatomic) struct CGSize { double x1; double x2; } platterContentSize;
@property (nonatomic) bool platterContentSizeDidChange;
@property (nonatomic, retain) _UIPreviewPlatterPanController *platterPanController;
@property (nonatomic, readonly) UIView *platterTransitionView;
@property (nonatomic, retain) UITargetedPreview *sourcePreview;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionsOnlyViewControllerForSourcePreview:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2;
- (void)_createActionsViewIfNecessary;
- (void)_handleActionHandoffGesture:(id)arg1;
- (void)_handleDismissalTapGesture:(id)arg1;
- (void)_handlePlatterActionTapGesture:(id)arg1;
- (void)_preDismissalTasks;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldOccludeDuringPresentation;
- (bool)_shouldPreserveFirstResponder;
- (bool)_shouldRestoreFirstResponder;
- (void)_testing_dismissByTappingOutside;
- (void)_testing_tapAnAction;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_updateActionsViewReversesOrderForAttachment:(unsigned long long)arg1;
- (void)_updateLayoutAndAttachment:(bool)arg1;
- (void)_updatePlatterAndActionViewLayoutForce:(bool)arg1 updateAttachment:(bool)arg2;
- (void)_updatePlatterContainerViewTraitCollection;
- (void)_updatePlatterContentSizeWithPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updatePresentedViewFrame;
- (id)accessoryViews;
- (id)actionScrubbingHandoffGestureRecognizer;
- (id)actionsView;
- (id)backgroundEffectView;
- (id)contentPlatterView;
- (id)currentLayout;
- (id)currentStyle;
- (id)dismissalTapGestureRecognizer;
- (void)dismissalTransitionWillBegin;
- (id)displayedConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 configuration:(id)arg2 sourcePreview:(id)arg3 style:(id)arg4;
- (bool)isAnimatingPresentation;
- (id)layoutArbiter;
- (id)platterActionTapGestureRecognizer;
- (id)platterContainerView;
- (struct CGSize { double x1; double x2; })platterContentSize;
- (bool)platterContentSizeDidChange;
- (id)platterPanController;
- (void)platterPanControllerDidSwipeDown:(id)arg1;
- (void)platterPanControllerDidTearOff:(id)arg1;
- (void)platterPanInteractionBegan:(id)arg1;
- (void)platterPanInteractionEnded:(id)arg1;
- (id)platterTransitionView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)previewActionsView:(id)arg1 didSelectAction:(id)arg2;
- (void)setActionScrubbingHandoffGestureRecognizer:(id)arg1;
- (void)setCurrentStyle:(id)arg1;
- (void)setDismissalTapGestureRecognizer:(id)arg1;
- (void)setDisplayedConfiguration:(id)arg1;
- (void)setDisplayedMenu:(id)arg1 withAnimationStyle:(unsigned long long)arg2;
- (void)setIsAnimatingPresentation:(bool)arg1;
- (void)setLayoutArbiter:(id)arg1;
- (void)setPlatterActionTapGestureRecognizer:(id)arg1;
- (void)setPlatterContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlatterContentSizeDidChange:(bool)arg1;
- (void)setPlatterPanController:(id)arg1;
- (void)setSourcePreview:(id)arg1;
- (id)sourcePreview;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)tearOffForDraggingWithDragContainerView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
