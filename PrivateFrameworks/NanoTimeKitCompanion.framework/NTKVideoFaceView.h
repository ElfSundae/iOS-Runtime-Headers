/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVideoFaceView : NTKAVListingFaceBaseView {
    NTKDigitialUtilitarianFaceViewComplicationFactory * _faceViewComplicationFactory;
    unsigned int  _isComplicationColorApplied;
    unsigned int  _isComplicationColorGray;
    unsigned int  _isUsingDefaultListing;
    UITapGestureRecognizer * _tapToPlayGesture;
    unsigned long long  _theme;
}

- (void).cxx_destruct;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterEditing;
- (id)_complicationForegroundColor;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_defaultListing;
- (id)_detachedComplicationDisplays;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_handleTapToPlayVideoGesture:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (void)_performPreloadVideoTask;
- (id)_posterImageView;
- (id)_posterImageViewWithTheme:(unsigned long long)arg1;
- (void)_prepareForEditing;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (void)_selectDefaultListing;
- (bool)_shouldDelayBeforePlayingNextVideo;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (void)_updatePaused;
- (id)_viewForEditOption:(id)arg1;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (double)keylineStyleForComplicationSlot:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;

@end
