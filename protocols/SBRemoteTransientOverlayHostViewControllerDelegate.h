/* Generated by RuntimeBrowser.
 */

@protocol SBRemoteTransientOverlayHostViewControllerDelegate <NSObject>

@required

- (long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (SBUIRemoteAlertButtonAction *)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(SBRemoteTransientOverlayHostViewController *)arg1;

@end
