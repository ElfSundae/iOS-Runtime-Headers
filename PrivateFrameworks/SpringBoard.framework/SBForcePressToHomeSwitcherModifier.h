/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBForcePressToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    double  _initalPanThreshold;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> * _multitaskingModifier;
    SBAppLayout * _selectedAppLayout;
    long long  _startingEnvironmentMode;
}

- (void).cxx_destruct;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cardCornerRadiiForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 initialPanThreshold:(double)arg4 multitaskingModifier:(id)arg5;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (long long)wallpaperStyle;

@end
