/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKFaceTimeMultiwayConversationViewController : UIViewController <AVCEffectsDelegate, CFXCameraViewControllerDelegate, CFXEffectBrowserContentPresenterDelegate, CNKFaceTimeCameraViewControllerDelegate, CNKFaceTimeInCallControlsDragControllerDelegate, CNKFaceTimeInCallControlsViewControllerDelegate> {
    void avcEffects;
    void conversationController;
    void delegate;
    void deviceOrientation;
    void effectsCaptureInfo;
    void effectsEnabled;
    void effectsLayoutController;
    void hideInactiveParticipantsTimer;
    void inCallControlsDismissTimer;
    void isPipped;
    void mostActiveParticipantsController;
    void shouldInitializeEffects;
    void viewContent;
}

@property (nonatomic, readonly) TUCall *call;
@property (nonatomic) <CNKFaceTimeMultiwayConversationViewControllerDelegate> *delegate;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) bool effectsEnabled;
@property (nonatomic, retain) NSTimer *inCallControlsDismissTimer;
@property (nonatomic, readonly) UIViewController *pipViewController;
@property (nonatomic, readonly) bool wantsApplicationDismissalStyle;

- (void).cxx_destruct;
- (id)accessibilityConstraintController;
- (id)call;
- (void)cameraViewController:(id)arg1 didChangeEffectsState:(long long)arg2;
- (void)cameraViewController:(id)arg1 didRenderFrame:(id)arg2;
- (void)cameraViewControllerPresentationRectWasDoubleTapped:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)dealloc;
- (id)delegate;
- (long long)deviceOrientation;
- (void)didCaptureVideoFrame:(id)arg1;
- (void)didSelectApp:(id)arg1;
- (void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;
- (bool)effectsEnabled;
- (struct CGSize { double x1; double x2; })expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1;
- (id)inCallControlsDismissTimer;
- (void)inCallControlsDragController:(id)arg1 didEndDragAt:(long long)arg2;
- (void)inCallControlsDragController:(id)arg1 didStartDragTo:(long long)arg2;
- (void)inCallControlsDragController:(id)arg1 willStartDragFrom:(long long)arg2;
- (long long)inCallControlsDragControllerShortestState:(id)arg1;
- (void)inCallControlsViewController:(id)arg1 didTap:(long long)arg2;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithActiveCall:(id)arg1 stagingAreaViewController:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)muteVideo;
- (void)openMessagesConversation;
- (id)pipViewController;
- (bool)prefersHomeIndicatorAutoHidden;
- (void)restartAutoHideInCallControlsDrawerTimer;
- (void)serverDidTimeout:(id)arg1;
- (void)setControllerIsPipped:(bool)arg1;
- (void)setControlsState:(long long)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setEffectsEnabled:(bool)arg1;
- (void)setInCallControlsDismissTimer:(id)arg1;
- (bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;
- (void)toggleAudioMute;
- (void)toggleVideoMute;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsApplicationDismissalStyle;

@end
