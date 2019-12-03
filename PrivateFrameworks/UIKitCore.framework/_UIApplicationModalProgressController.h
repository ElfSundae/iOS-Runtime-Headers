/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIApplicationModalProgressController : NSObject {
    UIAlertController * _alertController;
    bool  _disableButtonAction;
    id /* block */  _dismissalHandler;
    double  _displayDelaySeconds;
    double  _displayStartTime;
    NSTimer * _hideTimer;
    id /* block */  _preDisplayTestBlock;
    NSProgress * _progress;
    _UIProgressView * _progressView;
    NSTimer * _showTimer;
    NSProgress * _urlProgress;
    UIWindowScene * _weakScene;
    UIWindow * _window;
}

@property (getter=_alertController, setter=_setAlertController:, nonatomic, retain) UIAlertController *alertController;
@property (getter=_dismissalHandler, setter=_setDismissalHandler:, nonatomic, copy) id /* block */ dismissalHandler;
@property (nonatomic) double displayDelaySeconds;
@property (getter=_displayStartTime, setter=_setDisplayStartTime:, nonatomic) double displayStartTime;
@property (getter=_hideTimer, setter=_setHideTimer:, nonatomic, retain) NSTimer *hideTimer;
@property (nonatomic, copy) NSString *message;
@property (getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:, nonatomic, copy) id /* block */ preDisplayTestBlock;
@property (getter=_progress, setter=_setProgress:, nonatomic, retain) NSProgress *progress;
@property (getter=_showTimer, setter=_setShowTimer:, nonatomic, retain) NSTimer *showTimer;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSProgress *urlProgress;
@property (getter=_window, setter=_setWindow:, nonatomic, retain) UIWindow *window;

+ (id)instanceForScene:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_alertController;
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(bool)arg1;
- (void)_dismissButtonAction:(id)arg1;
- (id /* block */)_dismissalHandler;
- (double)_displayStartTime;
- (void)_hideImmediatelyWasDismissedByUser:(bool)arg1;
- (id)_hideTimer;
- (void)_hideTimerAction:(id)arg1;
- (id /* block */)_preDisplaySetBlock;
- (id)_progress;
- (void)_reset;
- (void)_setAlertController:(id)arg1;
- (void)_setDismissalHandler:(id /* block */)arg1;
- (void)_setDisplayStartTime:(double)arg1;
- (void)_setHideTimer:(id)arg1;
- (void)_setPreDisplayTestBlock:(id /* block */)arg1;
- (void)_setProgress:(id)arg1;
- (void)_setShowTimer:(id)arg1;
- (void)_setWindow:(id)arg1;
- (id)_showTimer;
- (void)_showTimerAction:(id)arg1;
- (id)_window;
- (double)displayDelaySeconds;
- (void)displayForCopyingFileAtURL:(id)arg1 toURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayForDownloadingURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)displayForDownloadingURL:(id)arg1 copyToURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 preDisplayTestBlock:(id /* block */)arg5 dismissalHandler:(id /* block */)arg6;
- (void)hideAfterDelay:(double)arg1 forceCompletion:(bool)arg2 afterMinimumUptimeDismissalHandler:(id /* block */)arg3;
- (void)hideAfterMinimumUptimeWithDismissalHandler:(id /* block */)arg1;
- (id)init;
- (id)message;
- (void)reconfigureWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(id /* block */)arg5;
- (void)setDisplayDelaySeconds:(double)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrlProgress:(id)arg1;
- (id)title;
- (id)urlProgress;

@end
