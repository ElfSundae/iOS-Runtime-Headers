/* Generated by RuntimeBrowser.
 */

@protocol SBSwitcherLiveContentOverlay <NSObject>

@required

- (UIView *)contentOverlayView;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (long long)rasterizationStyle;
- (void)setHomeGrabberHidden:(bool)arg1 animated:(bool)arg2;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(bool)arg2;
- (void)setStatusBarHidden:(void *)arg1 nubViewHidden:(void *)arg2 animator:(void *)arg3; // needs 3 arg types, found 19: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, bool, bool, void*, void*
- (void)setUsesBrightSceneViewBackgroundMaterial:(bool)arg1;

@optional

- (void)noteNeedsLayoutUpdateFor180DegreeRotation;

@end
