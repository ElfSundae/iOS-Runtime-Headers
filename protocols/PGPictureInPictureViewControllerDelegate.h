/* Generated by RuntimeBrowser.
 */

@protocol PGPictureInPictureViewControllerDelegate <NSObject>

@optional

- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 updateHostedWindowSize:(struct CGSize { float x1; float x2; })arg2 animationType:(int)arg3 initialSpringVelocity:(float)arg4;
- (void)pictureInPictureViewControllerActionButtonTapped:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerCancelButtonTapped:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerStopButtonTapped:(PGPictureInPictureViewController *)arg1;

@end
