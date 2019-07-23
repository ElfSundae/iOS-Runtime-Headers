/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPopoverPresentationController : UIPresentationController <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate> {
    BOOL __centersPopoverIfSourceViewNotSet;
    float __dimmingViewTopEdgeInset;
    BOOL __ignoreBarButtonItemSiblings;
    BOOL __shouldHideArrow;
    UIColor *_backgroundColor;
    BOOL _canOverlapSourceViewRect;
    UIViewController *_contentViewController;
    unsigned int _currentArrowDirection;
    SEL _didEndSelector;
    BOOL _didPresentInActiveSequence;
    UIDimmingView *_dimmingView;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    BOOL _dismissesOnRotation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _embeddedTargetRect;
    BOOL _ignoresKeyboardNotifications;
    BOOL _isArrowDirectionFixed;
    BOOL _isDismissingBecauseDimmingViewTapped;
    BOOL _isLayoutDisabled;
    UIView *_layoutConstraintView;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned int _permittedArrowDirections;
    unsigned int _popoverArrowDirection;
    int _popoverBackgroundStyle;
    Class _popoverBackgroundViewClass;
    struct CGSize { 
        float width; 
        float height; 
    } _popoverContentSize;
    struct { 
        unsigned int isPresentingModalViewController : 1; 
        unsigned int isPresentingActionSheet : 1; 
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling : 1; 
        unsigned int isInTextEffectsWindow : 1; 
        unsigned int isEmbeddingInView : 1; 
        unsigned int embeddedPresentationBounces : 1; 
    } _popoverControllerFlags;
    int _popoverControllerStyle;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _popoverLayoutMargins;
    _UIPopoverView *_popoverView;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    int _presentationDirection;
    unsigned int _presentationEdge;
    int _presentationState;
    UIView *_presentingView;
    UIPopoverPresentationController *_retainedSelf;
    BOOL _retainsSelfWhilePresented;
    _UIMirrorNinePatchView *_shadowImageView;
    BOOL _showsOrientationMarker;
    BOOL _showsPresentationArea;
    BOOL _showsTargetRect;
    unsigned int _slideTransitionCount;
    UIViewController *_slidingViewController;
    UIViewController *_splitParentController;
    id _target;
    UIBarButtonItem *_targetBarButtonItem;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _targetRectInContainerView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _targetRectInEmbeddingView;
    unsigned int _toViewAutoResizingMask;
    BOOL _useSourceViewBoundsAsSourceRect;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    unsigned int draggingChildScrollViewCount;
}

@property (getter=_centersPopoverIfSourceViewNotSet, setter=_setCentersPopoverIfSourceViewNotSet:, nonatomic) BOOL _centersPopoverIfSourceViewNotSet;
@property (setter=_setDimmingViewTopEdgeInset:, nonatomic) float _dimmingViewTopEdgeInset;
@property (setter=_setIgnoreBarButtonItemSiblings:, nonatomic) BOOL _ignoreBarButtonItemSiblings;
@property (setter=_setIgnoresKeyboardNotifications:, nonatomic) BOOL _ignoresKeyboardNotifications;
@property (getter=_shouldHideArrow, setter=_setShouldHideArrow:, nonatomic) BOOL _shouldHideArrow;
@property (nonatomic, readonly) unsigned int arrowDirection;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, retain) UIBarButtonItem *barButtonItem;
@property (nonatomic) BOOL canOverlapSourceViewRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPopoverPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDimmingView *dimmingView;
@property (nonatomic) BOOL dismissesOnRotation;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *passthroughViews;
@property (nonatomic) unsigned int permittedArrowDirections;
@property (nonatomic) unsigned int popoverArrowDirection;
@property (nonatomic, retain) Class popoverBackgroundViewClass;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } popoverLayoutMargins;
@property (nonatomic, retain) _UIPopoverLayoutInfo *preferredLayoutInfo;
@property (getter=_presentationEdge, setter=_setPresentationEdge:, nonatomic) unsigned int presentationEdge;
@property (getter=_presentingView, setter=_setPresentingView:, nonatomic) UIView *presentingView;
@property (nonatomic, retain) UIPopoverPresentationController *retainedSelf;
@property (getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:, nonatomic) BOOL retainsSelfWhilePresented;
@property (nonatomic) BOOL showsOrientationMarker;
@property (nonatomic) BOOL showsPresentationArea;
@property (nonatomic) BOOL showsTargetRect;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;

+ (BOOL)_alwaysAllowPopoverPresentations;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_defaultPopoverLayoutMarginsForPopoverControllerStyle:(int)arg1 andContentViewController:(id)arg2;
+ (BOOL)_forceAttemptsToAvoidKeyboard;
+ (Class)_popoverViewClass;
+ (void)_setAlwaysAllowPopoverPresentations:(BOOL)arg1;
+ (BOOL)_showTargetRectPref;

- (void).cxx_destruct;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2;
- (BOOL)_alwaysAdaptToFullscreenForTraitCollection:(id)arg1;
- (BOOL)_attemptsToAvoidKeyboard;
- (id)_backgroundView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_baseContentInsets;
- (struct CGPoint { float x1; float x2; })_centerPointForScale:(float)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 anchor:(struct CGPoint { float x1; float x2; })arg3;
- (BOOL)_centersPopoverIfSourceViewNotSet;
- (void)_commonPresentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4;
- (id /* block */)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)arg1;
- (void)_containedViewControllerModalStateChanged;
- (struct CGSize { float x1; float x2; })_currentPopoverContentSize;
- (Class)_defaultChromeViewClass;
- (int)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (id)_dimmingView;
- (float)_dimmingViewTopEdgeInset;
- (void)_dismissPopoverAnimated:(BOOL)arg1 stateOnly:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (float)_dismissalAnimationDuration;
- (BOOL)_embedsInView;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (BOOL)_forcesPreferredAnimationControllers;
- (BOOL)_ignoreBarButtonItemSiblings;
- (BOOL)_ignoresKeyboardNotifications;
- (void)_incrementSlideTransitionCount:(BOOL)arg1;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
- (void)_invalidateLayoutInfo;
- (BOOL)_isDismissing;
- (BOOL)_isPresenting;
- (BOOL)_isShimmingPopoverControllerPresentation;
- (void)_keyboardStateChanged:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (id)_managingSplitViewController;
- (BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (id)_passthroughViews;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (int)_popoverBackgroundStyle;
- (BOOL)_popoverBackgroundViewWantsDefaultContentAppearance;
- (int)_popoverControllerStyle;
- (id)_popoverHostingWindow;
- (BOOL)_popoverIsDismissingBecauseDimmingViewWasTapped;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (void)_postludeForDismissal;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (float)_presentationAnimationDuration;
- (unsigned int)_presentationEdge;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (int)_presentationState;
- (id)_presentationView;
- (id)_presentingView;
- (void)_resetSlideTransitionCount;
- (BOOL)_retainsSelfWhilePresented;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_sendDelegateWillRepositionToRect;
- (void)_setCentersPopoverIfSourceViewNotSet:(BOOL)arg1;
- (void)_setContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(int)arg2 animated:(BOOL)arg3;
- (void)_setDimmingViewTopEdgeInset:(float)arg1;
- (void)_setGesturesEnabled:(BOOL)arg1;
- (void)_setIgnoreBarButtonItemSiblings:(BOOL)arg1;
- (void)_setIgnoresKeyboardNotifications:(BOOL)arg1;
- (void)_setManagingSplitViewController:(id)arg1;
- (void)_setPopoverBackgroundStyle:(int)arg1;
- (void)_setPopoverFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2 coordinator:(id)arg3;
- (void)_setPopoverView:(id)arg1;
- (void)_setPresentationEdge:(unsigned int)arg1;
- (void)_setPresentationState:(int)arg1;
- (void)_setPresentingView:(id)arg1;
- (void)_setRetainsSelfWhilePresented:(BOOL)arg1;
- (void)_setShouldHideArrow:(BOOL)arg1;
- (void)_setSplitParentController:(id)arg1;
- (BOOL)_shouldChangeStatusBarViewController;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldHideArrow;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldOccludeDuringPresentation;
- (unsigned int)_slideTransitionCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sourceRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sourceRectInContainerView;
- (id)_sourceView;
- (id)_splitParentController;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForScrollViewNotifications;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_stopWatchingForNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_transitionFromDidEnd;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)_updateShadowFrame;
- (unsigned int)arrowDirection;
- (id)backgroundColor;
- (BOOL)canOverlapSourceViewRect;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (BOOL)dismissesOnRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)init;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (BOOL)isPopoverVisible;
- (BOOL)isPresentingOrDismissing;
- (id)passthroughViews;
- (unsigned int)permittedArrowDirections;
- (unsigned int)popoverArrowDirection;
- (Class)popoverBackgroundViewClass;
- (struct CGSize { float x1; float x2; })popoverContentSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })popoverLayoutMargins;
- (id)popoverView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredLayoutInfo;
- (int)presentationStyle;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (id)retainedSelf;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanOverlapSourceViewRect:(BOOL)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setDismissesOnRotation:(BOOL)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPermittedArrowDirections:(unsigned int)arg1;
- (void)setPopoverArrowDirection:(unsigned int)arg1;
- (void)setPopoverBackgroundViewClass:(Class)arg1;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setPopoverLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPreferredLayoutInfo:(id)arg1;
- (void)setRetainedSelf:(id)arg1;
- (void)setShowsOrientationMarker:(BOOL)arg1;
- (void)setShowsPresentationArea:(BOOL)arg1;
- (void)setShowsTargetRect:(BOOL)arg1;
- (void)set_ignoreBarButtonItemSiblings:(BOOL)arg1;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (BOOL)showsOrientationMarker;
- (BOOL)showsPresentationArea;
- (BOOL)showsTargetRect;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
