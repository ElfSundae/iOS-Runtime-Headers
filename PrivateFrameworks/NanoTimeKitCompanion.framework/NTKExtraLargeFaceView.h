/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKExtraLargeFaceView : NTKFaceView {
    NTKFaceColorScheme * _colorScheme;
    UIView * _complicationEditingTimeOverlayView;
    bool  _complicationIsVisible;
    double  _currentFaceOffsetY;
    double  _currentFaceViewScale;
    unsigned long long  _faceColor;
    bool  _isEditing;
    NTKExtraLargeTimeView * _largeTimeLabel;
    NTKDigitalTimeLabel * _smallTimeLabel;
    NTKDigitalTimeLabelStyle * _smallTimeLabelStyle;
    bool  _snapshotContentViewsLoaded;
    UITapGestureRecognizer * _timeTravelExitRecognizer;
    UIView * _timeTravelExitView;
    UILabel * _timeTravelLabel;
    NTKDigitalTimeLabelStyle * _timeTravelStyle;
    bool  _viewsOffsetForStatusBar;
    UIView * _zoomingIconCircleView;
    UIView * _zoomingIconTimeView;
}

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (bool)_canStartTimeScrubbing;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (id)_complicationView;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureLargeTimeLabelColors;
- (void)_configureSmallTimeLabelColors;
- (void)_createTimeViews;
- (void)_handleTimeTravelTapGesture:(id)arg1;
- (void)_initLargeTimeLabelIfNecessary;
- (void)_initSmallTimeLabelIfNecessary;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_noteComplicationVisibilityChanged;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_prepareForStatusChange:(bool)arg1;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_removeTimeViews;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (double)_smallTimeAlphaForEditMode:(long long)arg1;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (double)_statusBarOffsetForComplication;
- (double)_statusBarOffsetForComplicationBackground;
- (double)_statusBarOffsetForSmallTime;
- (bool)_supportsTimeScrubbing;
- (id)_timeTravelStyle;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationVisibility;
- (double)_verticalPaddingForStatusBar;
- (bool)_wantsTimeTravelStatusModule;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end
