/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextEffectsWindowHosted : UITextEffectsWindow

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)_isConstrainedByScreenJail;
- (bool)_isFullscreen;
- (bool)_isTextEffectsWindowHosting;
- (bool)_isTextEffectsWindowNotificationOwner;
- (bool)_isWindowServerHostingManaged;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (void)_sceneBoundsDidChange;
- (bool)_usesWindowServerHitTesting;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actualSceneBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actualSceneBoundsForLandscape:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;

@end
