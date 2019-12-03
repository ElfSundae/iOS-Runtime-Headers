/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIStyle : NSObject {
    long long  _audioProductID;
    bool  _bluetoothDeviceSupportsHeySiri;
    UIFontMetrics * _bodyMetricsForScaling;
    NSString * _deviceClass;
    NSArray * _deviceImageDoneSuffixes;
    NSArray * _deviceImageIntroSuffixes;
    NSArray * _deviceStringSuffixes;
    long long  _enrollmentMode;
    bool  _isBuddyOrFollowUp;
    bool  _isFloatingWithReducedWidth;
    bool  _isHeySiriAlwaysOn;
    bool  _isIpad;
    bool  _isLargeIpad;
    MGWrapper * _mgWrapper;
    bool  _needMoreLineSpacing;
    bool  _supportSideButtonActivation;
    bool  _supportsSideButtonActivation;
}

@property (nonatomic) long long audioProductID;
@property (nonatomic) bool bluetoothDeviceSupportsHeySiri;
@property (nonatomic) long long enrollmentMode;
@property (nonatomic) bool isBuddyOrFollowUp;
@property (nonatomic) bool isFloatingWithReducedWidth;
@property (nonatomic) bool isHeySiriAlwaysOn;
@property (nonatomic) bool supportSideButtonActivation;

+ (id)sharedStyle;

- (void).cxx_destruct;
- (id)VTUIDeviceSpecificAudioHintFileName:(id)arg1;
- (id)VTUIDeviceSpecificString:(id)arg1;
- (void)_createImageSuffixesForDevice;
- (void)_createStringSuffixesForDevice;
- (id)_deviceImageForBaseImageName:(id)arg1;
- (id)_headerTitleFont;
- (long long)audioProductID;
- (bool)bluetoothDeviceSupportsHeySiri;
- (double)bottomOfContinueToNotNowFirstBaseline;
- (id)buttonTextColor;
- (double)continueButtonFromBottom;
- (double)continueButtonPaddingTop;
- (double)continueButtonTopOffset;
- (void)dealloc;
- (id)deviceSetupImage;
- (id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;
- (long long)enrollmentMode;
- (double)finishEnrollmentFromBottom;
- (double)flamesHeight;
- (double)flamesViewHeightLandscape;
- (double)flamesViewHeightPortrait;
- (id)footerButtonFont;
- (double)footerButtonMaximumWidth;
- (id)footerFont;
- (double)footerHorizontalPadding;
- (id)footerLabelFont;
- (double)footerSkipButtonBaselineFromBottom;
- (double)footerTextBaselineFromTop;
- (double)footerTextBottomPadding;
- (id)footerTextColor;
- (double)headerTitleLinespacing;
- (double)horizontalPadding;
- (double)horizontalPaddingLandscape;
- (double)horizontalPaddingPortrait;
- (double)horizontalTextPadding;
- (double)imageViewTopOffsetLandscape;
- (double)imageViewTopOffsetPortrait;
- (id)init;
- (id)instructionLabelFont;
- (bool)isBuddyOrFollowUp;
- (bool)isFloatingWithReducedWidth;
- (bool)isGreenTeaCapableDevice;
- (bool)isHeySiriAlwaysOn;
- (bool)isSmallestOnboardingDeviceInBuddy;
- (double)laterButtonBaselinePadding;
- (double)minimumImageViewHeight;
- (void)orientationChanged:(id)arg1;
- (double)paddingFromTop;
- (id)paneBackgroundColor;
- (double)paneVideoFrameHeight;
- (id)primaryButtonFont;
- (double)primaryButtonHeight;
- (double)primaryButtonHorizontalInset;
- (double)proxAboutLinkFirstBaselineFromTop;
- (double)proxAboutLinkHeight;
- (id)proxCancelFont;
- (double)proxContainerCornerRadius;
- (double)proxContainerHorizontalVerticalPadding;
- (double)proxFlamesViewCenterYOffset;
- (double)proxFlamesViewHeight;
- (id)proxFooterFont;
- (id)proxHSDescription:(id)arg1;
- (id)proxHeaderColor;
- (id)proxHeaderFont;
- (double)proxLeading;
- (double)proxLeadingLandscape;
- (double)proxPaddingFootnoteButton;
- (double)proxPaddingFromBottom;
- (double)proxPaddingFromTop;
- (double)proxPaddingImageSubtitle;
- (double)proxPaddingImageSubtitleFromTop;
- (double)proxPaddingIntroSubtitleButton;
- (double)proxPaddingIntroSubtitleLandscape;
- (double)proxPaddingIntroTitleImage;
- (double)proxPaddingSkipButtonPageLabel;
- (double)proxPaddingTitleImage;
- (double)proxPaddingTryAgainSubtitle;
- (double)proxPageFirstBaselineBottom;
- (id)proxPageFont;
- (id)proxPageLabelColor;
- (id)proxPrimaryButtonColor;
- (id)proxPrimaryButtonFont;
- (double)proxPrimaryButtonHeight;
- (double)proxSettingsLabelBottomMargin;
- (double)proxSiriLogoHeightWidth;
- (double)proxSiriLogoHeightWidthSmall;
- (double)proxSkipButtonBaselineBottomMargin;
- (double)proxStatusLabelMaxHeight;
- (id)proxSubtitleFont;
- (double)proxTitleFirstBaselineFromTop;
- (double)proxTitleTrailingLandscape;
- (double)proxTrailing;
- (double)proxTrailingLandscape;
- (double)proxTrainingDismissButtonHorizontalPadding;
- (double)proxTrainingDismissButtonPhoneLandscapeHorizontalPadding;
- (double)proxTrainingDismissButtonVerticalPaddingBottom;
- (double)proxTrainingDismissButtonVerticalPaddingTop;
- (double)proxTrainingDismissButtonWidthOrHeight;
- (double)proxTrainingInstructionLabelHoriztonalOffset;
- (id)proxTryAgainTitleColor;
- (double)proxViewHeight;
- (double)proxViewHeightPhoneLandscape;
- (double)proxViewLanguageOptionsHeight;
- (double)proxViewLanguageOptionsHeightPhoneLandscape;
- (double)proxViewMaxWidth;
- (double)proxViewMaxWidthPhoneLandscape;
- (double)radarBtnHorizontalPadding;
- (double)radarBtnVerticalPadding;
- (id)secondaryButtonFont;
- (void)setAudioProductID:(long long)arg1;
- (void)setBluetoothDeviceSupportsHeySiri:(bool)arg1;
- (void)setEnrollmentMode:(long long)arg1;
- (void)setIsBuddyOrFollowUp:(bool)arg1;
- (void)setIsFloatingWithReducedWidth:(bool)arg1;
- (void)setIsHeySiriAlwaysOn:(bool)arg1;
- (void)setSupportSideButtonActivation:(bool)arg1;
- (double)skipButtonBaselineBottomMarginLandscape;
- (double)skipButtonBaselineBottomMarginPortrait;
- (double)smallestDeviceFrameHeight;
- (id)smallestDeviceOnboardingAsset;
- (double)statusLabelMinHeight;
- (double)statusLabelVerticalOffsetFromCenter;
- (double)subtitle1BaselineOffset;
- (double)subtitle2BaselineOffset;
- (id)subtitleFont;
- (bool)supportSideButtonActivation;
- (bool)supportsSideButtonActivation;
- (double)textOverlayLabelWidth;
- (double)textOverlayOffsetFromTop;
- (double)tickMarkHorizontalSizeRatio;
- (double)titleBaselineOffsetFromTop;
- (id)turnOnSiriContinueButtonFont;
- (double)turnOnSiriContinueButtonHeight;
- (double)turnOnSiriContinueButtonWidth;
- (double)turnOnSiriFooterOffset;
- (double)turnOnSiriHorizontalPaddingLandscape;
- (double)turnOnSiriHorizontalPaddingPortrait;
- (double)turnOnSiriImageOffsetFromTopLandscape;
- (double)turnOnSiriImageOffsetFromTopPortrait;
- (double)turnOnSiriImageViewTopOffset;
- (double)turnOnSiriSubtitle1BaselineOffset;
- (double)turnOnSiriSubtitle2BaselineOffset;
- (id)videoPlaceholderImage;

@end
