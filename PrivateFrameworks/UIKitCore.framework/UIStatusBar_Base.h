/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBar_Base : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver> {
    <UIViewControllerTransitionCoordinator> * __transitionCoordinator;
    int  _activeStyleOverride;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _avoidanceFrame;
    bool  _disablesRasterization;
    <UIStatusBarCarPlayDockDataProviding> * _dockDataProvider;
    NSArray * _enabledPartIdentifiers;
    bool  _foreground;
    UIColor * _foregroundColor;
    bool  _hidden;
    bool  _homeItemsDisabled;
    <UIStatusBarStateProvider> * _inProcessStateProvider;
    long long  _legibilityStyle;
    struct { bool x1[42]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 2; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; struct { bool x_36_1_1[42]; BOOL x_36_1_2[64]; BOOL x_36_1_3[64]; BOOL x_36_1_4[256]; int x_36_1_5; int x_36_1_6; int x_36_1_7; int x_36_1_8; BOOL x_36_1_9[100]; BOOL x_36_1_10[100]; BOOL x_36_1_11[100]; BOOL x_36_1_12[100]; BOOL x_36_1_13[2][100]; BOOL x_36_1_14[1024]; unsigned int x_36_1_15; unsigned int x_36_1_16; unsigned int x_36_1_17 : 1; unsigned int x_36_1_18 : 1; int x_36_1_19; int x_36_1_20; unsigned int x_36_1_21 : 1; unsigned int x_36_1_22; unsigned int x_36_1_23; int x_36_1_24; unsigned int x_36_1_25; BOOL x_36_1_26[150]; int x_36_1_27; int x_36_1_28; unsigned int x_36_1_29 : 1; unsigned int x_36_1_30 : 1; unsigned int x_36_1_31 : 1; BOOL x_36_1_32[256]; unsigned int x_36_1_33 : 1; unsigned int x_36_1_34 : 1; unsigned int x_36_1_35 : 1; unsigned int x_36_1_36 : 1; unsigned int x_36_1_37 : 2; unsigned int x_36_1_38 : 1; unsigned int x_36_1_39; unsigned int x_36_1_40 : 1; unsigned int x_36_1_41 : 1; unsigned int x_36_1_42 : 1; BOOL x_36_1_43[256]; BOOL x_36_1_44[256]; BOOL x_36_1_45[100]; unsigned int x_36_1_46 : 1; } x36; } * _localDataOverrides;
    <UIStatusBarManager> * _manager;
    long long  _mode;
    long long  _orientation;
    bool  _persistentAnimationsEnabled;
    bool  _registered;
    long long  _requestedStyle;
    bool  _serverUpdatesDisabled;
    UIStatusBarServer * _statusBarServer;
    UIStatusBarWindow * _statusBarWindow;
    <UIStatusBarStyleDelegate> * _styleDelegate;
    int  _styleOverrides;
    UIStatusBarStyleRequest * _styleRequest;
    bool  _suppressesHiddenSideEffects;
}

@property (nonatomic) <UIViewControllerTransitionCoordinator> *_transitionCoordinator;
@property (nonatomic) int activeStyleOverride;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avoidanceFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setDisablesRasterization:, nonatomic) bool disablesRasterization;
@property (nonatomic) <UIStatusBarCarPlayDockDataProviding> *dockDataProvider;
@property (nonatomic, copy) NSArray *enabledPartIdentifiers;
@property (nonatomic) bool foreground;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (nonatomic) bool homeItemsDisabled;
@property (nonatomic, retain) <UIStatusBarStateProvider> *inProcessStateProvider;
@property (nonatomic) long long legibilityStyle;
@property (nonatomic, readonly) struct { bool x1[42]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 2; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; struct { bool x_36_1_1[42]; BOOL x_36_1_2[64]; BOOL x_36_1_3[64]; BOOL x_36_1_4[256]; int x_36_1_5; int x_36_1_6; int x_36_1_7; int x_36_1_8; BOOL x_36_1_9[100]; BOOL x_36_1_10[100]; BOOL x_36_1_11[100]; BOOL x_36_1_12[100]; BOOL x_36_1_13[2][100]; BOOL x_36_1_14[1024]; unsigned int x_36_1_15; unsigned int x_36_1_16; unsigned int x_36_1_17 : 1; unsigned int x_36_1_18 : 1; int x_36_1_19; int x_36_1_20; unsigned int x_36_1_21 : 1; unsigned int x_36_1_22; unsigned int x_36_1_23; int x_36_1_24; unsigned int x_36_1_25; BOOL x_36_1_26[150]; int x_36_1_27; int x_36_1_28; unsigned int x_36_1_29 : 1; unsigned int x_36_1_30 : 1; unsigned int x_36_1_31 : 1; BOOL x_36_1_32[256]; unsigned int x_36_1_33 : 1; unsigned int x_36_1_34 : 1; unsigned int x_36_1_35 : 1; unsigned int x_36_1_36 : 1; unsigned int x_36_1_37 : 2; unsigned int x_36_1_38 : 1; unsigned int x_36_1_39; unsigned int x_36_1_40 : 1; unsigned int x_36_1_41 : 1; unsigned int x_36_1_42 : 1; BOOL x_36_1_43[256]; BOOL x_36_1_44[256]; BOOL x_36_1_45[100]; unsigned int x_36_1_46 : 1; } x36; }*localDataOverrides;
@property (nonatomic) <UIStatusBarManager> *manager;
@property (nonatomic) long long mode;
@property (nonatomic) long long orientation;
@property (nonatomic) bool persistentAnimationsEnabled;
@property (nonatomic) bool registered;
@property (getter=_requestStyle, setter=_setRequestedStyle:, nonatomic) long long requestedStyle;
@property (nonatomic) bool serverUpdatesDisabled;
@property (nonatomic, retain) UIStatusBarServer *statusBarServer;
@property (nonatomic, readonly) UIStatusBarWindow *statusBarWindow;
@property (nonatomic) <UIStatusBarStyleDelegate> *styleDelegate;
@property (nonatomic, readonly) int styleOverrides;
@property (nonatomic, copy) UIStatusBarStyleRequest *styleRequest;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesHiddenSideEffects;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2;
+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 activeStyleOverride:(int*)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInSceneReferenceSpaceForStyle:(long long)arg1 orientation:(long long)arg2 inSceneWithReferenceSize:(struct CGSize { double x1; double x2; })arg3;
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(bool)arg3;
+ (Class)_implementationClass;
+ (void)_setImplementationClass:(Class)arg1;
+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1;
+ (double)heightForStyle:(long long)arg1 orientation:(long long)arg2;

- (void).cxx_destruct;
- (bool)_canShowInOrientation:(long long)arg1;
- (void)_clearOverrideHeight;
- (void)_didEnterBackground:(id)arg1;
- (void)_evaluateServerRegistration;
- (void)_getStyle:(long long*)arg1 andActiveOverride:(int*)arg2 forRequestedStyle:(long long)arg3;
- (double)_hiddenAlphaForHideAnimationParameters:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_hiddenTransformForHideAnimationParameters:(id)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2 wantsServer:(bool)arg3 inProcessStateProvider:(id)arg4;
- (bool)_isTransparent;
- (void)_noteStyleOverridesChangedLocally;
- (void)_performAnimations:(id /* block */)arg1 withParameters:(id)arg2 completion:(id /* block */)arg3;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(id /* block */)arg1;
- (bool)_rectIntersectsTimeItem:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_requestStyle;
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(bool)arg4;
- (void)_setDisablesRasterization:(bool)arg1;
- (void)_setHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)_setOverrideHeight:(double)arg1;
- (void)_setRequestedStyle:(long long)arg1;
- (bool)_shouldSeekHigherPriorityTouchTarget;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (void)_styleOverridesDidChange:(id)arg1;
- (id)_transitionCoordinator;
- (bool)_usesModernBar;
- (void)_willEnterForeground:(id)arg1;
- (id)actionForPartWithIdentifier:(id)arg1;
- (int)activeStyleOverride;
- (id)activeTintColor;
- (double)alphaForPartWithIdentifier:(id)arg1;
- (void)animateUnlock;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avoidanceFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentFrame;
- (double)currentHeight;
- (long long)currentStyle;
- (void)dealloc;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (void)didMoveToSuperview;
- (bool)disablesRasterization;
- (id)dockDataProvider;
- (id)enabledPartIdentifiers;
- (void)forceUpdate:(bool)arg1;
- (void)forceUpdateData:(bool)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateStyleOverrides:(bool)arg1;
- (void)forceUpdateToData:(const struct { bool x1[42]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; double x50; unsigned int x51 : 1; unsigned int x52 : 1; BOOL x53[100]; BOOL x54[100]; }*)arg1 animated:(bool)arg2;
- (bool)foreground;
- (id)foregroundColor;
- (void)forgetEitherSideHistory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPartWithIdentifier:(id)arg1;
- (double)heightForOrientation:(long long)arg1;
- (bool)hidden;
- (bool)homeItemsDisabled;
- (id)inProcessStateProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2 inProcessStateProvider:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDoubleHeight;
- (bool)isHidden;
- (bool)isTranslucent;
- (void)jiggleLockIcon;
- (long long)legibilityStyle;
- (struct { bool x1[42]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 2; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; struct { bool x_36_1_1[42]; BOOL x_36_1_2[64]; BOOL x_36_1_3[64]; BOOL x_36_1_4[256]; int x_36_1_5; int x_36_1_6; int x_36_1_7; int x_36_1_8; BOOL x_36_1_9[100]; BOOL x_36_1_10[100]; BOOL x_36_1_11[100]; BOOL x_36_1_12[100]; BOOL x_36_1_13[2][100]; BOOL x_36_1_14[1024]; unsigned int x_36_1_15; unsigned int x_36_1_16; unsigned int x_36_1_17 : 1; unsigned int x_36_1_18 : 1; int x_36_1_19; int x_36_1_20; unsigned int x_36_1_21 : 1; unsigned int x_36_1_22; unsigned int x_36_1_23; int x_36_1_24; unsigned int x_36_1_25; BOOL x_36_1_26[150]; int x_36_1_27; int x_36_1_28; unsigned int x_36_1_29 : 1; unsigned int x_36_1_30 : 1; unsigned int x_36_1_31 : 1; BOOL x_36_1_32[256]; unsigned int x_36_1_33 : 1; unsigned int x_36_1_34 : 1; unsigned int x_36_1_35 : 1; unsigned int x_36_1_36 : 1; unsigned int x_36_1_37 : 2; unsigned int x_36_1_38 : 1; unsigned int x_36_1_39; unsigned int x_36_1_40 : 1; unsigned int x_36_1_41 : 1; unsigned int x_36_1_42 : 1; BOOL x_36_1_43[256]; BOOL x_36_1_44[256]; BOOL x_36_1_45[100]; unsigned int x_36_1_46 : 1; } x36; }*)localDataOverrides;
- (id)manager;
- (long long)mode;
- (struct UIOffset { double x1; double x2; })offsetForPartWithIdentifier:(id)arg1;
- (long long)orientation;
- (bool)persistentAnimationsEnabled;
- (bool)registered;
- (void)requestStyle:(long long)arg1;
- (void)requestStyle:(long long)arg1 animated:(bool)arg2;
- (void)requestStyle:(long long)arg1 animated:(bool)arg2 forced:(bool)arg3;
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(bool)arg3;
- (void)requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(bool)arg4;
- (bool)serverUpdatesDisabled;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (void)setActiveStyleOverride:(int)arg1;
- (void)setAlpha:(double)arg1;
- (void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDockDataProvider:(id)arg1;
- (void)setEnabledCenterItems:(id)arg1 duration:(double)arg2;
- (void)setEnabledPartIdentifiers:(id)arg1;
- (void)setForeground:(bool)arg1;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)setHomeItemsDisabled:(bool)arg1;
- (void)setInProcessStateProvider:(id)arg1;
- (void)setLegibilityStyle:(long long)arg1;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setLocalDataOverrides:(struct { bool x1[42]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 2; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; struct { bool x_36_1_1[42]; BOOL x_36_1_2[64]; BOOL x_36_1_3[64]; BOOL x_36_1_4[256]; int x_36_1_5; int x_36_1_6; int x_36_1_7; int x_36_1_8; BOOL x_36_1_9[100]; BOOL x_36_1_10[100]; BOOL x_36_1_11[100]; BOOL x_36_1_12[100]; BOOL x_36_1_13[2][100]; BOOL x_36_1_14[1024]; unsigned int x_36_1_15; unsigned int x_36_1_16; unsigned int x_36_1_17 : 1; unsigned int x_36_1_18 : 1; int x_36_1_19; int x_36_1_20; unsigned int x_36_1_21 : 1; unsigned int x_36_1_22; unsigned int x_36_1_23; int x_36_1_24; unsigned int x_36_1_25; BOOL x_36_1_26[150]; int x_36_1_27; int x_36_1_28; unsigned int x_36_1_29 : 1; unsigned int x_36_1_30 : 1; unsigned int x_36_1_31 : 1; BOOL x_36_1_32[256]; unsigned int x_36_1_33 : 1; unsigned int x_36_1_34 : 1; unsigned int x_36_1_35 : 1; unsigned int x_36_1_36 : 1; unsigned int x_36_1_37 : 2; unsigned int x_36_1_38 : 1; unsigned int x_36_1_39; unsigned int x_36_1_40 : 1; unsigned int x_36_1_41 : 1; unsigned int x_36_1_42 : 1; BOOL x_36_1_43[256]; BOOL x_36_1_44[256]; BOOL x_36_1_45[100]; unsigned int x_36_1_46 : 1; } x36; }*)arg1;
- (void)setManager:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setOffset:(struct UIOffset { double x1; double x2; })arg1 forPartWithIdentifier:(id)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setPersistentAnimationsEnabled:(bool)arg1;
- (void)setRegistered:(bool)arg1;
- (void)setServerUpdatesDisabled:(bool)arg1;
- (void)setShowsOnlyCenterItems:(bool)arg1;
- (void)setStatusBarServer:(id)arg1;
- (void)setStyleDelegate:(id)arg1;
- (void)setStyleRequest:(id)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)setSuppressesHiddenSideEffects:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)set_transitionCoordinator:(id)arg1;
- (bool)showsContentsOnScreen;
- (id)statusBarServer;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const struct { bool x1[42]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; double x50; unsigned int x51 : 1; unsigned int x52 : 1; BOOL x53[100]; BOOL x54[100]; }*)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const struct { bool x1[42]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; double x50; unsigned int x51 : 1; unsigned int x52 : 1; BOOL x53[100]; BOOL x54[100]; }*)arg2 withActions:(int)arg3;
- (id)statusBarWindow;
- (id)styleDelegate;
- (long long)styleForRequestedStyle:(long long)arg1;
- (int)styleOverrides;
- (id)styleRequest;
- (bool)suppressesHiddenSideEffects;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (bool)sb_getLocalDataOverrides:(struct { bool x1[42]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 2; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; struct { bool x_36_1_1[42]; BOOL x_36_1_2[64]; BOOL x_36_1_3[64]; BOOL x_36_1_4[256]; int x_36_1_5; int x_36_1_6; int x_36_1_7; int x_36_1_8; BOOL x_36_1_9[100]; BOOL x_36_1_10[100]; BOOL x_36_1_11[100]; BOOL x_36_1_12[100]; BOOL x_36_1_13[2][100]; BOOL x_36_1_14[1024]; unsigned int x_36_1_15; unsigned int x_36_1_16; unsigned int x_36_1_17 : 1; unsigned int x_36_1_18 : 1; int x_36_1_19; int x_36_1_20; unsigned int x_36_1_21 : 1; unsigned int x_36_1_22; unsigned int x_36_1_23; int x_36_1_24; unsigned int x_36_1_25; BOOL x_36_1_26[150]; int x_36_1_27; int x_36_1_28; unsigned int x_36_1_29 : 1; unsigned int x_36_1_30 : 1; unsigned int x_36_1_31 : 1; BOOL x_36_1_32[256]; unsigned int x_36_1_33 : 1; unsigned int x_36_1_34 : 1; unsigned int x_36_1_35 : 1; unsigned int x_36_1_36 : 1; unsigned int x_36_1_37 : 2; unsigned int x_36_1_38 : 1; unsigned int x_36_1_39; unsigned int x_36_1_40 : 1; unsigned int x_36_1_41 : 1; unsigned int x_36_1_42 : 1; BOOL x_36_1_43[256]; BOOL x_36_1_44[256]; BOOL x_36_1_45[100]; unsigned int x_36_1_46 : 1; } x36; }*)arg1;
- (void)sb_setEnabledStatusBarPartIdentifiersForStatusBarParts:(long long)arg1;
- (void)sb_setLocalDataOverrides:(struct { bool x1[42]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 2; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; struct { bool x_36_1_1[42]; BOOL x_36_1_2[64]; BOOL x_36_1_3[64]; BOOL x_36_1_4[256]; int x_36_1_5; int x_36_1_6; int x_36_1_7; int x_36_1_8; BOOL x_36_1_9[100]; BOOL x_36_1_10[100]; BOOL x_36_1_11[100]; BOOL x_36_1_12[100]; BOOL x_36_1_13[2][100]; BOOL x_36_1_14[1024]; unsigned int x_36_1_15; unsigned int x_36_1_16; unsigned int x_36_1_17 : 1; unsigned int x_36_1_18 : 1; int x_36_1_19; int x_36_1_20; unsigned int x_36_1_21 : 1; unsigned int x_36_1_22; unsigned int x_36_1_23; int x_36_1_24; unsigned int x_36_1_25; BOOL x_36_1_26[150]; int x_36_1_27; int x_36_1_28; unsigned int x_36_1_29 : 1; unsigned int x_36_1_30 : 1; unsigned int x_36_1_31 : 1; BOOL x_36_1_32[256]; unsigned int x_36_1_33 : 1; unsigned int x_36_1_34 : 1; unsigned int x_36_1_35 : 1; unsigned int x_36_1_36 : 1; unsigned int x_36_1_37 : 2; unsigned int x_36_1_38 : 1; unsigned int x_36_1_39; unsigned int x_36_1_40 : 1; unsigned int x_36_1_41 : 1; unsigned int x_36_1_42 : 1; BOOL x_36_1_43[256]; BOOL x_36_1_44[256]; BOOL x_36_1_45[100]; unsigned int x_36_1_46 : 1; } x36; }*)arg1;
- (void)sb_setOverrideBreadcrumbTitle:(id)arg1 secondaryTitle:(id)arg2;
- (void)sb_setSnapshotOverridesWithTimeEnabled:(bool)arg1 overriddenDate:(id)arg2;

@end
