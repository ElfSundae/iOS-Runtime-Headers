/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

- (void)_applyPrototypeSettings;
- (long long)backdropBlurType;
- (double)contentViewScale;
- (void)didMoveToParentModifier:(id)arg1;
- (long long)finalActionForGestureEvent:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fullSizeSnapshotsRange;
- (id)handleGestureEvent:(id)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (long long)wallpaperStyle;

@end
