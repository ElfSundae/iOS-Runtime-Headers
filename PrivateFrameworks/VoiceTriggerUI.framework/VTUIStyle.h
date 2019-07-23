/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIStyle : NSObject {
    NSString * _deviceClass;
    NSArray * _deviceImageSuffixes;
    NSArray * _deviceStringSuffixes;
    int  _enrollmentMode;
    BOOL  _isBuddy;
    BOOL  _isHeySiriAlwaysOn;
    BOOL  _isIpad;
    BOOL  _needMoreLineSpacing;
}

@property (nonatomic) int enrollmentMode;
@property (nonatomic) BOOL isBuddy;
@property (nonatomic) BOOL isHeySiriAlwaysOn;

+ (id)sharedStyle;

- (void).cxx_destruct;
- (id)VTUIDeviceSpecificString:(id)arg1;
- (void)_createImageSuffixesForDevice;
- (void)_createStringSuffixesForDevice;
- (id)_deviceImageForBaseImageName:(id)arg1;
- (id)buttonTextColor;
- (float)continueButtonBaselineOffset;
- (id)continueButtonFont;
- (void)dealloc;
- (id)deviceDoneImage;
- (id)deviceSetupImage;
- (int)enrollmentMode;
- (float)flamesHeight;
- (float)footerButtonBaselineFromFooterTop;
- (id)footerButtonFont;
- (float)footerHorizontalPadding;
- (id)footerLabelFont;
- (float)footerLabelLineHeight;
- (BOOL)footerShouldPinToImage;
- (float)footerTextBaselineFromBottom;
- (float)footerTextBaselineOffsetFromButton;
- (id)footerTextColor;
- (id)headerTitleFont;
- (float)headerTitleLinespacing;
- (float)horizontalPadding;
- (float)horizontalPaddingLandscape;
- (float)horizontalPaddingPortrait;
- (float)imageViewBottomOffsetFromFooter;
- (float)imageViewTopOffset;
- (id)init;
- (BOOL)isBuddy;
- (BOOL)isHeySiriAlwaysOn;
- (void)orientationChanged:(id)arg1;
- (float)radarBtnHorizontalPadding;
- (float)radarBtnVerticalPadding;
- (void)setEnrollmentMode:(int)arg1;
- (void)setIsBuddy:(BOOL)arg1;
- (void)setIsHeySiriAlwaysOn:(BOOL)arg1;
- (BOOL)shouldShowFooterLine;
- (float)skipButtonBaselineBottomMargin;
- (float)statusLabelMinHeight;
- (float)statusLabelVerticalOffsetFromCenter;
- (float)subtitle1BaselineOffset;
- (float)subtitle2BaselineOffset;
- (id)subtitleFont;
- (float)subtitleLineHeight;
- (float)tickMarkHorizontalSizeRatio;
- (float)titleBaselineOffsetFromTop;

@end
