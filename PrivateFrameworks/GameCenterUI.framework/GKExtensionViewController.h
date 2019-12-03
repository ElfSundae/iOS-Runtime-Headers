/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKExtensionViewController : UINavigationController <GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface, GKExtensionHostProtocol, GKExtensionProtocol> {
    bool  _adjustTopConstraint;
    bool  _alwaysShowDoneButton;
    UIViewController * _contentViewController;
    NSLayoutConstraint * _effectBottomConstraint;
    NSLayoutConstraint * _effectTopConstraint;
    UIVisualEffectView * _effectView;
    GKGame * _game;
    bool  _hasInitialData;
    int  _hostPID;
    double  _statusBarHeight;
}

@property (nonatomic) bool adjustTopConstraint;
@property (nonatomic) bool alwaysShowDoneButton;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *effectBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *effectTopConstraint;
@property (nonatomic) UIVisualEffectView *effectView;
@property (nonatomic, retain) GKGame *game;
@property (nonatomic) bool hasInitialData;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hostPID;
@property (nonatomic) double statusBarHeight;
@property (readonly) Class superclass;

- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (bool)_useBackdropViewForWindowBackground;
- (void)addDoneButtonToViewController:(id)arg1;
- (bool)adjustTopConstraint;
- (bool)alwaysShowDoneButton;
- (id)blurEffectForTraitCollection:(id)arg1;
- (void)clientDidCancel;
- (void)clientDidFinish;
- (void)clientWillTerminate;
- (void)configureContentViewController;
- (void)constructContentViewController;
- (id)contentViewController;
- (void)dealloc;
- (void)didBecomeActive:(id)arg1;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (void)donePressed:(id)arg1;
- (id)effectBottomConstraint;
- (id)effectTopConstraint;
- (id)effectView;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (void)finish;
- (id)game;
- (bool)hasInitialData;
- (id)hostObjectProxy;
- (int)hostPID;
- (id)initWithCoder:(id)arg1;
- (void)messageFromClient:(id)arg1;
- (void)messageFromExtension:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)sendMessageToClient:(id)arg1;
- (void)setAdjustTopConstraint:(bool)arg1;
- (void)setAlwaysShowDoneButton:(bool)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setEffectBottomConstraint:(id)arg1;
- (void)setEffectTopConstraint:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setHasInitialData:(bool)arg1;
- (void)setHostPID:(int)arg1;
- (void)setInitialState:(id)arg1 withReply:(id /* block */)arg2;
- (void)setStatusBarHeight:(double)arg1;
- (void)setToDarkBackground;
- (void)setToLightBackground;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (double)statusBarHeight;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willResignActive:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
