/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBMainDisplaySceneLayoutStatusBarView : UIView <PTSettingsKeyObserver, SBDeviceApplicationSceneStatusBarStateObserver, UIStatusBarStyleDelegate_SpringBoardOnly> {
    struct { 
        unsigned int styleDelegateWants_statusBar_styleForRequestedStyle_overrides : 1; 
        unsigned int styleDelegateWants_statusBar_willAnimateFromHeight_toHeight_duration_animation : 1; 
        unsigned int styleDelegateWants_statusBar_didAnimateFromHeight_toHeight_animation : 1; 
        unsigned int styleDelegateWants_statusBarSystemNavigationAction : 1; 
        unsigned int styleDelegateWants_statusBar_didTriggerButtonType_withAction : 1; 
        unsigned int styleDelegateWants_statusBar_didTriggerButtonType_withAction_context : 1; 
        unsigned int styleDelegateWants_statusBar_effectiveStyleOverridesForRequestedStyle_overrides : 1; 
        unsigned int styleDelegateWants_overriddenRequestedStyleFromStyle : 1; 
        unsigned int dataSourceWants_statusBarPartsForSceneWithIdentifier : 1; 
        unsigned int dataSourceWants_currentlyValidStatusBarPartIdentifiers : 1; 
        unsigned int dataSourceWants_statusBarDescriberAtPoint_inView_pointInSceneLayoutSpace : 1; 
        unsigned int dataSourceWants_frameForSceneIdentifier_inView : 1; 
        unsigned int dataSourceWants_statusBarAvoidanceFrame : 1; 
    }  _conformanceFlags;
    <SBMainDisplaySceneLayoutStatusBarViewDataSource> * _dataSource;
    UIColor * _debugBackgroundColor;
    bool  _debugBackgroundColorEnabled;
    bool  _debugOffsetEnabled;
    unsigned long long  _debugOffsetIndex;
    NSMutableDictionary * _hitTestLayers;
    SBMedusaSettings * _medusaSettings;
    NSMutableDictionary * _partIdentifiersCustomStyles;
    NSMutableDictionary * _partIdentifiersDefaultStyles;
    <UIStatusBarStyleDelegate_SpringBoardOnly> * _realStyleDelegate;
    UIStatusBar * _statusBar;
    SBDeviceApplicationSceneHandle * _statusBarBreadcrumbSceneHandle;
    SBOrientationTransformWrapperView * _statusBarContainerView;
    bool  _statusBarLaidOutForClassic;
    NSMutableSet * _statusBarRequiringReasons;
    _UIStatusBar * _statusBarUnderlyingViewAccessor;
    UIView * _statusBarWrapperView;
}

@property (nonatomic) long long containerOrientation;
@property (nonatomic) <SBMainDisplaySceneLayoutStatusBarViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UIStatusBarStyleDelegate_SpringBoardOnly> *realStyleDelegate;
@property (getter=isRequiringStatusBar, nonatomic, readonly) bool requiringStatusBar;
@property (getter=isStatusBarEffectivelyHidden, nonatomic, readonly) bool statusBarEffectivelyHidden;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addStatusBarIfNeeded;
- (bool)_allowChangingIndividualStatusBarParts;
- (void)_animateHidden:(bool)arg1 withAnimation:(long long)arg2 transitionHandler:(id /* block */)arg3 applyHandler:(id /* block */)arg4;
- (id)_anyAppViewControllerOwningInterfaceOrientation;
- (void)_applyStatusBarAlpha:(double)arg1 toSceneWithIdentifier:(id)arg2;
- (void)_applyStatusBarAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toSceneWithIdentifier:(id)arg2;
- (void)_applyStatusBarHidden:(bool)arg1 withAnimation:(long long)arg2 toSceneWithIdentifier:(id)arg3;
- (void)_applyStatusBarStyle:(long long)arg1 toPartIdentifier:(id)arg2 ofSceneWithIdentifier:(id)arg3;
- (void)_applyStatusBarStyle:(long long)arg1 toSceneWithIdentifier:(id)arg2;
- (void)_applyStatusBarStyleOverridesToSuppress:(int)arg1 toSceneWithIdentifier:(id)arg2;
- (id)_currentlyValidStatusBarPartIdentifiers;
- (id)_defaultStatusBarStyleRequest;
- (int)_effectiveStatusBarStyleOverridesToSuppress;
- (long long)_effectiveStyleForPartIdentifier:(id)arg1;
- (void)_enumerateValidStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg1 withBlock:(id /* block */)arg2;
- (double)_hiddenAlphaForAnimation:(long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_hiddenTransformForAnimation:(long long)arg1;
- (void)_layoutStatusBarForOrientation:(long long)arg1;
- (id)_sceneHandleForClassicApplicationIfAny;
- (id)_sceneHandleForPrimaryApplicationIfAny;
- (void)_setDebugBackgroundColor:(id)arg1;
- (void)_setDebugOffsetIndex:(unsigned long long)arg1;
- (void)_setupDebugging;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusBarAvoidanceFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusBarFrameForOrientation:(long long)arg1;
- (bool)_statusBarNeedsSpecialLayoutForClassic;
- (void)_statusBarScrollToTop:(id)arg1;
- (void)_statusBarShowDebug:(id)arg1;
- (void)_statusBarTapped:(id)arg1 type:(long long)arg2;
- (void)_tearDownStatusBar;
- (void)_updateDebugBackgroundColor;
- (void)_updateDebugOffset;
- (void)_updateHitTestLayers;
- (id)_validStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg1;
- (id)allValidStatusBarPartIdentifiers;
- (void)applyStatusBarStylesForDescriber:(id)arg1;
- (void)beginRequiringStatusBarForReason:(id)arg1;
- (long long)containerOrientation;
- (id)createStatusBarWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 interfaceOrientation:(long long)arg2 reason:(id)arg3;
- (id)dataSource;
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg1;
- (void)endRequiringStatusBarForReason:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRequiringStatusBar;
- (bool)isStatusBarEffectivelyHidden;
- (void)layoutStatusBarForSpringBoardRotationToOrientation:(long long)arg1;
- (long long)overriddenRequestedStyleFromStyle:(long long)arg1;
- (id)realStyleDelegate;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAvoidanceFrameTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(bool)arg2 withAnimation:(long long)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3;
- (void)setContainerOrientation:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setRealStyleDelegate:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4;
- (int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
- (id)statusBarStyleRequestForStatusBarPart:(id)arg1;
- (id)statusBarSystemNavigationAction:(id)arg1;
- (void)updateBreadcrumbActionIfNecessary;
- (void)updateStatusBarOrientationForLegacyApp;

@end
