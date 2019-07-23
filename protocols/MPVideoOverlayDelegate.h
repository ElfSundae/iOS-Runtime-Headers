/* Generated by RuntimeBrowser.
 */

@protocol MPVideoOverlayDelegate <NSObject>

@optional

- (void)overlay:(UIView<MPVideoOverlay> *)arg1 didBeginUserEvent:(unsigned int)arg2;
- (void)overlay:(UIView<MPVideoOverlay> *)arg1 didCancelUserEvent:(unsigned int)arg2;
- (void)overlay:(UIView<MPVideoOverlay> *)arg1 didEndUserEvent:(unsigned int)arg2;
- (double)overlay:(UIView<MPVideoOverlay> *)arg1 interpretCurrentTime:(double)arg2;
- (double)overlay:(UIView<MPVideoOverlay> *)arg1 interpretDuration:(double)arg2;
- (void)overlayDidBeginScrubbing:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayDidDismissAlternateTracksPopover:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayDidEndScrubbing:(UIView<MPVideoOverlay> *)arg1;
- (BOOL)overlayShouldAcceptSkipBackwardEvent:(UIView<MPVideoOverlay> *)arg1;
- (BOOL)overlayShouldAcceptSkipForwardEvent:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayTappedBackButton:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayTappedFullscreenButton:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayTappedPictureInPictureButton:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayTappedScaleModeButton:(UIView<MPVideoOverlay> *)arg1;

@end
