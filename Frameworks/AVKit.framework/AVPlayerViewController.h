/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerViewController : UIViewController <AVContentTransitioningDelegate, AVFullScreenViewControllerDelegate, AVPictureInPictureControllerDelegate, AVPlaybackControlsVisibilityControllerDelegate, AVTransitionControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {
    bool  __hasBegunObservation;
    long long  __numberOfTrackedUserInteractions;
    AVObservationController * __observationController;
    NSMutableDictionary * __targetVideoGravitiesForLayoutClass;
    bool  __wasInitializedWithPlayerLayerView;
    bool  _allowsPictureInPicturePlayback;
    AVAppBasedStatusBarAppearanceController * _appBasedStatusBarAppearanceController;
    bool  _canPausePlaybackWhenExitingFullScreen;
    <AVPlayerViewControllerContentTransitioning_NewsOnly> * _contentTransitioningDelegate;
    AVPlayer * _contentTransitioningPlayer;
    UIView * _customContentTransitioningInfoPanel;
    NSArray * _customControlItems;
    <AVPlayerViewControllerDelegate> * _delegate;
    struct { 
        bool playerViewControllerWillStartPictureInPicture; 
        bool playerViewControllerDidStartPictureInPicture; 
        bool playerViewController_failedToStartPictureInPictureWithError; 
        bool playerViewControllerWillStopPictureInPicture; 
        bool playerViewControllerDidStopPictureInPicture; 
        bool playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart; 
        bool playerViewController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler; 
        bool playerViewController_shouldExitFullScreenWithReason; 
        bool playerViewControllerMetricsCollectionEventOccured; 
        bool playerViewControllerWillTransitionToVisibilityOfPlaybackControlsWithAnimationCoordinator; 
    }  _delegateRespondsTo;
    bool  _entersFullScreenWhenPlaybackBegins;
    bool  _exitsFullScreenWhenPlaybackEnds;
    id /* block */  _finishPreparingForInteractiveDismissalHandler;
    bool  _hasClientSetTransitioningDelegate;
    bool  _hasClientSetVideoGravity;
    id /* block */  _interactiveDismissalCompletionHandler;
    UIPopoverPresentationController * _mediaSelectionPopoverPresentationController;
    AVPictureInPictureController * _pictureInPictureController;
    NSDictionary * _pixelBufferAttributes;
    AVPlaybackControlsController * _playbackControlsController;
    bool  _playbackControlsIncludeVolumeControls;
    bool  _playbackControlsViewControllerPictureInPictureButtonEnabled;
    AVPlaybackControlsVisibilityController * _playbackControlsVisibilityController;
    UIScreen * _playbackTargetScreen;
    AVPlayer * _player;
    AVPlayerController * _playerController;
    __AVPlayerLayerView * _playerLayerView;
    bool  _playerShouldAutoplay;
    AVPlayerView * _playerViewControllerView;
    bool  _requiresLinearPlayback;
    UIWindow * _secondScreenWindow;
    bool  _shouldUseNetworkingResourcesForLiveStreamingWhilePaused;
    bool  _showsExitFullScreenButton;
    bool  _showsPlaybackControls;
    bool  _startNextContentTransitionButtonEnabled;
    bool  _startPreviousContentTransitionButtonEnabled;
    AVTransitionController * _transitionController;
    bool  _transitionFromFullScreenOrDismissViewControllerWhenEnteringBackgroundAfterPictureInPictureStart;
    bool  _updatesNowPlayingInfoCenter;
    long long  _videoGravity;
}

@property (nonatomic) bool _hasBegunObservation;
@property (setter=_setNumberOfTrackedUserInteractions:, nonatomic) long long _numberOfTrackedUserInteractions;
@property (nonatomic, readonly) AVObservationController *_observationController;
@property (nonatomic, readonly) NSMutableDictionary *_targetVideoGravitiesForLayoutClass;
@property (setter=_setWasInitializedWithPlayerLayerView:, nonatomic) bool _wasInitializedWithPlayerLayerView;
@property (nonatomic, readonly) long long activeContentTransitionType;
@property (nonatomic) bool allowsEnteringFullScreen;
@property (nonatomic) bool allowsPictureInPicturePlayback;
@property (nonatomic) bool canHideInteractiveContentOverlayView;
@property (nonatomic) bool canHidePlaybackControls;
@property (nonatomic) bool canPausePlaybackWhenExitingFullScreen;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (getter=isContentTransitionInteractive, nonatomic, readonly) bool contentTransitionInteractive;
@property (nonatomic) <AVPlayerViewControllerContentTransitioning_NewsOnly> *contentTransitioningDelegate;
@property (nonatomic, readonly) UIView *contentTransitioningOverlayView;
@property (nonatomic, readonly) AVPlayer *contentTransitioningPlayer;
@property (nonatomic, retain) AVPlayer *contentTransitioningPlayer;
@property (nonatomic, readonly) AVPlayerViewControllerContentView *contentView;
@property (nonatomic, retain) UIView *customContentTransitioningInfoPanel;
@property (nonatomic, copy) NSArray *customControlItems;
@property (nonatomic, readonly) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPlayerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool entersFullScreenWhenPlaybackBegins;
@property (nonatomic) bool entersFullScreenWhenTapped;
@property (nonatomic) bool exitsFullScreenWhenPlaybackEnds;
@property (nonatomic, copy) id /* block */ finishPreparingForInteractiveDismissalHandler;
@property (nonatomic, readonly) UIViewController *fullScreenViewController;
@property (nonatomic, readonly) AVFullScreenViewController *fullScreenViewController;
@property (nonatomic, readonly) bool hasActiveTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *iAdPrerollView;
@property (nonatomic, readonly) UIView *interactiveContentOverlayView;
@property (nonatomic, copy) id /* block */ interactiveDismissalCompletionHandler;
@property (getter=isPictureInPictureActive, nonatomic, readonly) bool pictureInPictureActive;
@property (getter=isPictureInPicturePossible, nonatomic, readonly) bool pictureInPicturePossible;
@property (getter=isPictureInPictureSuspended, nonatomic, readonly) bool pictureInPictureSuspended;
@property (nonatomic, readonly) bool pictureInPictureWasStartedWhenEnteringBackground;
@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, copy) id /* block */ playButtonHandlerForLazyPlayerLoading;
@property (nonatomic) bool playbackControlsIncludeDisplayModeControls;
@property (nonatomic) bool playbackControlsIncludeTransportControls;
@property (nonatomic) bool playbackControlsIncludeVolumeControls;
@property (nonatomic, readonly) AVPlaybackControlsVisibilityController *playbackControlsVisibilityController;
@property (nonatomic, retain) UIScreen *playbackTargetScreen;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) long long preferredUnobscuredArea;
@property (getter=isPresentedFullScreen, nonatomic, readonly) bool presentedFullScreen;
@property (getter=isPresentingFullScreenFromInline, nonatomic, readonly) bool presentingFullScreenFromInline;
@property (getter=isReadyForDisplay, nonatomic, readonly) bool readyForDisplay;
@property (nonatomic) bool requiresLinearPlayback;
@property (nonatomic, retain) UIWindow *secondScreenWindow;
@property (nonatomic) bool shouldUseNetworkingResourcesForLiveStreamingWhilePaused;
@property (nonatomic) bool showsExitFullScreenButton;
@property (nonatomic) bool showsMinimalPlaybackControlsWhenEmbeddedInline;
@property (nonatomic) bool showsPlaybackControls;
@property (getter=isStartNextContentTransitionButtonEnabled, nonatomic) bool startNextContentTransitionButtonEnabled;
@property (getter=isStartPreviousContentTransitionButtonEnabled, nonatomic) bool startPreviousContentTransitionButtonEnabled;
@property (readonly) Class superclass;
@property (nonatomic) bool updatesNowPlayingInfoCenter;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoBounds;
@property (nonatomic, copy) NSString *videoGravity;
@property (nonatomic, readonly) UIViewController *viewControllerForFullScreenPresentation;
@property (nonatomic) bool volumeControlsCanShowSlider;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;
+ (id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+ (id)keyPathsForValuesAffectingPixelBufferAttributes;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingVideoGravity;

- (void).cxx_destruct;
- (void)_addObservers;
- (void)_beginTrackingUserInteraction;
- (bool)_canEnterFullScreen;
- (void)_contentViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)_endTrackingUserInteraction;
- (void)_handleDoubleDoubleTapGesture:(id)arg1;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_handleExitFullScreenKeyCommand:(id)arg1;
- (void)_handleFastForwardKeyPressedCommand:(id)arg1;
- (void)_handleFastForwardKeyReleasedCommand:(id)arg1;
- (void)_handleGoToBeginningKeyCommand:(id)arg1;
- (void)_handlePlayPauseKeyCommand:(id)arg1;
- (void)_handleRewindKeyPressedCommand:(id)arg1;
- (void)_handleRewindKeyReleasedCommand:(id)arg1;
- (void)_handleShowNextFrameKeyCommand:(id)arg1;
- (void)_handleShowPreviousFrameKeyCommand:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)_handleSkipAhead15SecondsKeyCommand:(id)arg1;
- (void)_handleSkipBack15SecondsKeyCommand:(id)arg1;
- (void)_handleUserInteractionObservationRecognizer:(id)arg1;
- (void)_handleVolumeDownKeyPressedCommand:(id)arg1;
- (void)_handleVolumeDownKeyReleasedCommand:(id)arg1;
- (void)_handleVolumeUpKeyPressedCommand:(id)arg1;
- (void)_handleVolumeUpKeyReleasedCommand:(id)arg1;
- (bool)_hasBegunObservation;
- (bool)_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
- (bool)_isAudioOnlyContent;
- (bool)_isDescendantOfRootViewController;
- (bool)_isTrackingUserInteraction;
- (bool)_isTrackingUserInteractionWithInteractiveView;
- (bool)_isTransitioningToOrFromFullScreen;
- (bool)_isUnsupportedContent;
- (void)_mediaSelectionDoneButtonTapped:(id)arg1;
- (bool)_modalPresentationStyleIsFullScreen;
- (void)_notifyDelegateOfMetricsCollectionEvent:(long long)arg1;
- (long long)_numberOfTrackedUserInteractions;
- (id)_observationController;
- (void)_setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:(bool)arg1;
- (void)_setNumberOfTrackedUserInteractions:(long long)arg1;
- (void)_setPlayerLayerView:(id)arg1;
- (void)_setWasInitializedWithPlayerLayerView:(bool)arg1;
- (id)_targetVideoGravitiesForLayoutClass;
- (void)_togglePictureInPicture;
- (id)_transitionController;
- (id)_transitionControllerIfLoaded;
- (long long)_transitionDirectionForContentTransitionType:(long long)arg1;
- (void)_transitionFromFullScreenAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_transitionFromFullScreenWithReason:(long long)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_transitionToFullScreenAnimated:(bool)arg1 interactive:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateAudioOnlyIndicatorView;
- (void)_updateExternalPlaybackIndicatorView;
- (void)_updatePlaybackControlsController;
- (void)_updatePlayerLayerViewAndContentOverlayView;
- (void)_updatePlayerLayerViewAndContentOverlayViewExcludingScreen:(id)arg1;
- (void)_updateUnsupportedContentIndicatorView;
- (bool)_wasInitializedWithPlayerLayerView;
- (long long)activeContentTransitionType;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (bool)allowsEnteringFullScreen;
- (bool)allowsPictureInPicturePlayback;
- (bool)canBecomeFirstResponder;
- (bool)canHideInteractiveContentOverlayView;
- (bool)canHidePlaybackControls;
- (bool)canPausePlaybackWhenExitingFullScreen;
- (id)contentOverlayView;
- (long long)contentTransitionTypeForTransitionDirection:(long long)arg1;
- (id)contentTransitioningDelegate;
- (bool)contentTransitioningEnabled:(id)arg1;
- (id)contentTransitioningOverlayView;
- (id)contentTransitioningPlayer;
- (id)contentTransitioningPlayerContentViewForTransition:(id)arg1;
- (bool)contentTransitioningView:(id)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
- (void)contentTransitioningViewDidChangeTransitionStatus:(id)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;
- (bool)contentTransitioningViewShouldBeginDragging:(id)arg1 locationInView:(struct CGPoint { double x1; double x2; })arg2;
- (id)contentView;
- (id)customContentTransitioningInfoPanel;
- (id)customControlItems;
- (id)customControlsView;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enterAutoplayPhase;
- (void)enterFullScreenAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)entersFullScreenWhenPlaybackBegins;
- (bool)entersFullScreenWhenTapped;
- (void)exitAutoplayPhase;
- (void)exitFullScreenAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)exitsFullScreenWhenPlaybackEnds;
- (id /* block */)finishPreparingForInteractiveDismissalHandler;
- (void)flashAutoplayControls;
- (void)flashPlaybackControlsWithDuration:(double)arg1;
- (void)fullScreenButtonTapped:(id)arg1;
- (id)fullScreenViewController;
- (void)fullScreenViewController:(id)arg1 viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg2 coordinator:(id)arg3;
- (void)fullScreenViewControllerNeedsAppBasedStatusBarAppearanceUpdate:(id)arg1;
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)arg1;
- (void)fullScreenViewControllerWillEndFullScreenPresentation:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasActiveTransition;
- (id)iAdPrerollView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlayerLayerView:(id)arg1;
- (id)interactiveContentOverlayView;
- (id /* block */)interactiveDismissalCompletionHandler;
- (bool)isContentTransitionInteractive;
- (bool)isPictureInPictureActive;
- (bool)isPictureInPicturePossible;
- (bool)isPictureInPictureSuspended;
- (bool)isPresentedFullScreen;
- (bool)isPresentingFullScreenFromInline;
- (bool)isReadyForDisplay;
- (bool)isStartNextContentTransitionButtonEnabled;
- (bool)isStartPreviousContentTransitionButtonEnabled;
- (id)keyCommandResponderForFullScreenViewController:(id)arg1;
- (id)keyCommands;
- (void)loadView;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (bool)modalPresentationCapturesStatusBarAppearance;
- (void)pictureInPictureButtonTapped:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (bool)pictureInPictureWasStartedWhenEnteringBackground;
- (id)pixelBufferAttributes;
- (id /* block */)playButtonHandlerForLazyPlayerLoading;
- (id)playbackControlsController;
- (bool)playbackControlsIncludeDisplayModeControls;
- (bool)playbackControlsIncludeTransportControls;
- (bool)playbackControlsIncludeVolumeControls;
- (bool)playbackControlsIncludeVolumeControlsControls;
- (id)playbackControlsVisibilityController;
- (void)playbackControlsVisibilityController:(id)arg1 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg2 appearingViews:(id)arg3 disappearingViews:(id)arg4;
- (void)playbackControlsVisibilityController:(id)arg1 updateStatusBarAppearanceUsingAnimator:(id)arg2;
- (id)playbackTargetScreen;
- (id)player;
- (id)playerController;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusStyleForFullScreenViewController:(id)arg1;
- (long long)preferredUnobscuredArea;
- (long long)preferredWhitePointAdaptivityStyle;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (bool)prefersStatusBarHiddenForFullScreenViewController:(id)arg1;
- (void)prepareForFinishingInteractiveTransition:(id /* block */)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (bool)requiresLinearPlayback;
- (id)secondScreenWindow;
- (void)setAllowsEnteringFullScreen:(bool)arg1;
- (void)setAllowsPictureInPicturePlayback:(bool)arg1;
- (void)setCanHideInteractiveContentOverlayView:(bool)arg1;
- (void)setCanHidePlaybackControls:(bool)arg1;
- (void)setCanPausePlaybackWhenExitingFullScreen:(bool)arg1;
- (void)setContentTransitioningDelegate:(id)arg1;
- (void)setContentTransitioningPlayer:(id)arg1;
- (void)setCustomContentTransitioningInfoPanel:(id)arg1;
- (void)setCustomControlItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntersFullScreenWhenPlaybackBegins:(bool)arg1;
- (void)setEntersFullScreenWhenTapped:(bool)arg1;
- (void)setExitsFullScreenWhenPlaybackEnds:(bool)arg1;
- (void)setFinishPreparingForInteractiveDismissalHandler:(id /* block */)arg1;
- (void)setInteractiveDismissalCompletionHandler:(id /* block */)arg1;
- (void)setPixelBufferAttributes:(id)arg1;
- (void)setPlayButtonHandlerForLazyPlayerLoading:(id /* block */)arg1;
- (void)setPlaybackControlsIncludeDisplayModeControls:(bool)arg1;
- (void)setPlaybackControlsIncludeTransportControls:(bool)arg1;
- (void)setPlaybackControlsIncludeVolumeControls:(bool)arg1;
- (void)setPlaybackTargetScreen:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPreferredUnobscuredArea:(long long)arg1;
- (void)setRequiresLinearPlayback:(bool)arg1;
- (void)setSecondScreenWindow:(id)arg1;
- (void)setShouldUseNetworkingResourcesForLiveStreamingWhilePaused:(bool)arg1;
- (void)setShowsExitFullScreenButton:(bool)arg1;
- (void)setShowsMinimalPlaybackControlsWhenEmbeddedInline:(bool)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (void)setStartNextContentTransitionButtonEnabled:(bool)arg1;
- (void)setStartPreviousContentTransitionButtonEnabled:(bool)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setUpdatesNowPlayingInfoCenter:(bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2;
- (void)setVideoGravityForTransitioningContent:(id)arg1;
- (void)setView:(id)arg1;
- (void)setVolumeControlsCanShowSlider:(bool)arg1;
- (void)set_hasBegunObservation:(bool)arg1;
- (bool)shouldUseNetworkingResourcesForLiveStreamingWhilePaused;
- (void)showFullScreenPresentationFromView:(id)arg1 completion:(id /* block */)arg2;
- (bool)showsExitFullScreenButton;
- (bool)showsMinimalPlaybackControlsWhenEmbeddedInline;
- (bool)showsPlaybackControls;
- (void)startContentTransition:(long long)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)toggleMuted:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (bool)transitionController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)transitionController:(id)arg1 prepareForFinishingInteractiveTransition:(id /* block */)arg2;
- (id)transitionController:(id)arg1 targetViewForDismissingViewController:(id)arg2;
- (void)transitionController:(id)arg1 transitionWillComplete:(bool)arg2;
- (void)transitionController:(id)arg1 willBeginDismissingViewController:(id)arg2;
- (void)transitionController:(id)arg1 willBeginPresentingViewController:(id)arg2;
- (id)transitionControllerBackgroundColorForInteractivelyTransitioningPresentedViewController:(id)arg1;
- (void)transitionControllerBeginInteractiveDismissalTransition:(id)arg1;
- (void)transitionControllerBeginInteractivePresentationTransition:(id)arg1;
- (bool)transitionControllerCanBeginInteractiveDismissalTransition:(id)arg1;
- (bool)transitionControllerCanBeginInteractivePresentationTransition:(id)arg1;
- (bool)transitionControllerCanCreateVideoOnlyWindow:(id)arg1;
- (id)transitionControllerContentSourceViewController:(id)arg1;
- (void)updateStartLeftRightContentTransitionButtonsEnabled;
- (bool)updatesNowPlayingInfoCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;
- (id)videoGravity;
- (void)videoGravityButtonTapped:(id)arg1;
- (id)viewControllerForFullScreenPresentation;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewForFullScreenViewController:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)volumeControlsCanShowSlider;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (void)preparePrerollAds;

- (void)cancelPreroll;
- (void)playPrerollAdWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (bool)siriui_shouldHideStatusBar;
- (bool)siriui_shouldRotateToLandscape;

@end
