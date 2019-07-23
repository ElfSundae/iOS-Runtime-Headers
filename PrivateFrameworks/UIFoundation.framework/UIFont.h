/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UIFont : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) float ascender;
@property (nonatomic, readonly) float capHeight;
@property (nonatomic, readonly) float descender;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) float leading;
@property (nonatomic, readonly) float lineHeight;
@property (nonatomic, readonly) NAUITextStyleDescriptor *naui_dynamicFontTextStyleDescriptor;
@property (nonatomic, readonly) float pointSize;
@property (nonatomic, readonly) UIFont *pu_fontWithMonospacedNumbers;
@property (nonatomic, readonly) NSString *rc_textStyle;
@property (nonatomic, readonly) float xHeight;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_lightSystemFontOfSize:(float)arg1;
+ (id)_opticalBoldSystemFontOfSize:(float)arg1;
+ (id)_opticalSystemFontOfSize:(float)arg1;
+ (float)_readableWidth;
+ (id)_sharedFontCache;
+ (id)_sharedZeroPointFont;
+ (id)_systemFontsOfSize:(float)arg1 traits:(int)arg2;
+ (id)_thinSystemFontOfSize:(float)arg1;
+ (id)_ultraLightSystemFontOfSize:(float)arg1;
+ (id)boldSystemFontOfSize:(float)arg1;
+ (float)buttonFontSize;
+ (id)classFallbacksForKeyedArchiver;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (id)familyNames;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)fontWithDescriptor:(id)arg1 size:(float)arg2;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)fontWithName:(id)arg1 size:(float)arg2 traits:(int)arg3;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (void)initialize;
+ (id)italicSystemFontOfSize:(float)arg1;
+ (float)labelFontSize;
+ (id)monospacedDigitSystemFontOfSize:(float)arg1 weight:(float)arg2;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (float)smallSystemFontSize;
+ (BOOL)supportsSecureCoding;
+ (id)systemFontOfSize:(float)arg1;
+ (id)systemFontOfSize:(float)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(float)arg1 weight:(float)arg2;
+ (id)systemFontOfSize:(float)arg1 weight:(float)arg2 design:(id)arg3;
+ (float)systemFontSize;
+ (id)userFontOfSize:(float)arg1;

- (struct __CTFont { }*)CTFont;
- (id)_alternateSystemFonts;
- (float)_ascenderDeltaForBehavior:(int)arg1;
- (struct CGFont { }*)_backingCGSFont;
- (float)_baseLineHeightForFont:(BOOL)arg1;
- (float)_bodyLeading;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (float)_defaultLineHeightForUILayout;
- (id)_familyName;
- (id)_fontScaledByScaleFactor:(float)arg1;
- (bool)_getLatin1GlyphMapping:(const unsigned short**)arg1 andAdvanceMapping:(const struct CGSize {}**)arg2;
- (BOOL)_isDefaultFace;
- (BOOL)_isHiraginoFont;
- (id)_kernOverride;
- (float)_leading;
- (float)_scaledValueForValue:(float)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_textMatrixTransformForContext:(struct CGContext { }*)arg1;
- (float)_totalAdvancementForNativeGlyphs:(const unsigned short*)arg1 count:(long)arg2;
- (struct CGSize { float x1; float x2; })advancementForGlyph:(unsigned short)arg1;
- (float)ascender;
- (id)bestMatchingFontForCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned int*)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectForFont;
- (float)capHeight;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coveredCharacterSet;
- (float)descender;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)familyNameForCSSFontFamilyValue;
- (id)fontDescriptor;
- (id)fontName;
- (id)fontWithSize:(float)arg1;
- (void)getAdvancements:(struct CGSize { float x1; float x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (void)getBoundingRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (unsigned int)getCaretPositions:(float*)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned int)arg3;
- (void)getVerticalOriginTranslations:(struct CGSize { float x1; float x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (unsigned short)glyphWithName:(id)arg1;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
- (id)initWithMarkupDescription:(id)arg1;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (BOOL)isFixedPitch;
- (BOOL)isIBTextStyleFont;
- (BOOL)isSystemFont;
- (BOOL)isVertical;
- (id)lastResortFont;
- (float)leading;
- (float)lineHeight;
- (id)markupDescription;
- (unsigned int)mostCompatibleStringEncoding;
- (unsigned int)numberOfGlyphs;
- (float)pointSize;
- (float)readableWidth;
- (unsigned int)renderingMode;
- (id)screenFontWithRenderingMode:(unsigned int)arg1;
- (void)setInContext:(struct CGContext { }*)arg1;
- (int)traits;
- (float)underlineThickness;
- (id)verticalFont;
- (float)xHeight;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)boldTimeFontOfSize:(float)arg1;
+ (id)italicTimeFontOfSize:(float)arg1;
+ (id)monospacedTimeFontOfSize:(float)arg1;
+ (id)timeFontOfSize:(float)arg1;
+ (id)timeFontWithFont:(id)arg1;
+ (id)timeFontWithName:(id)arg1 size:(float)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (BOOL)_shouldUseDefaultFont;
+ (BOOL)ab_preferredContentSizeCategoryIsAccessibilityCategory;
+ (id)ab_preferredContentSizeCategoryName;
+ (id)ab_preferredFontForTextStyle:(id)arg1;
+ (id)ab_preferredRowFontForTextStyle:(id)arg1;
+ (void)ab_setIgnoreUserFontSize:(BOOL)arg1;

- (id)ab_boldFont;
- (id)ab_italicFont;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;

- (id)_mapkit_fontByAddingFeaturesForTabularFigures;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplay;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplayUseMonospace:(BOOL)arg1;
- (float)_mapkit_lineHeight;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (struct CGPoint { float x1; float x2; })mf_baselinePointFromCaplinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_baselinePointFromOriginPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_caplinePointFromBaselinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_caplinePointFromOriginPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_originPointFromBaselinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_originPointFromCaplinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_originPointFromMidlinePoint:(struct CGPoint { float x1; float x2; })arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_defaultFontForTextStyle:(id)arg1 withSymbolicTraits:(unsigned int)arg2;
+ (id)pu_preferredFontForTextStyle:(id)arg1 withSymbolicTraits:(unsigned int)arg2 options:(unsigned int)arg3;
+ (float)pu_scaledValue:(float)arg1 usingFontOfAttributedString:(id)arg2;

- (id)pu_fontWithMonospacedNumbers;
- (float)pu_scaledValue:(float)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_ui_bulletFontForFont:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)aa_fontForLargeButton;
+ (id)aa_fontForLargerInformationLabel;
+ (id)aa_fontForPageTitle;
+ (id)aa_fontForPrimaryInformationLabel;

// Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit

+ (id)cmk_cameraFontForContentSize:(id)arg1;
+ (id)cmk_cameraFontOfSize:(float)arg1;
+ (id)cmk_cameraKerningForFont:(id)arg1;
+ (id)cmk_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)cmk_cameraModeDialFontForContentSize:(id)arg1;
+ (id)cmk_cameraMonospacedFontOfSize:(float)arg1;
+ (id)cmk_cameraPadModeDialFontForContentSize:(id)arg1;
+ (id)cmk_cameraTimerFontForContentSize:(id)arg1;
+ (float)cmk_interpolatedAdditionalFontSizeForMainScreen;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (id)cui_cameraFontForContentSize:(id)arg1;
+ (id)cui_cameraFontOfSize:(float)arg1;
+ (id)cui_cameraKerningForFont:(id)arg1;
+ (id)cui_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)cui_cameraModeDialFontForContentSize:(id)arg1;
+ (id)cui_cameraMonospacedFontOfSize:(float)arg1;
+ (id)cui_cameraPadModeDialFontForContentSize:(id)arg1;
+ (id)cui_cameraTimerFontForContentSize:(id)arg1;
+ (float)cui_interpolatedAdditionalFontSizeForMainScreen;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_emphasizedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_shortDefaultFontForTextStyle:(id)arg1;
+ (id)__ck_shortEmphasizedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_shortPreferredFontForTextStyle:(id)arg1;
+ (float)_interpolatedAdditionalFontSizeForMainScreen;
+ (id)ck_cui_cameraFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraFontOfSize:(float)arg1;
+ (id)ck_cui_cameraKerningForFont:(id)arg1;
+ (id)ck_cui_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraModeDialFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraPadModeDialFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraTimerFontForContentSize:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)_fu_sausageFontOfSize:(float)arg1 fontWeight:(float)arg2;
+ (id)_fu_sausageFontOfSize:(float)arg1 fontWeight:(float)arg2 centeredColons:(BOOL)arg3;
+ (id)fu_alternateColonsFeatureSetting;
+ (id)fu_bodyEmphasizeFont;
+ (id)fu_bodyShortFont;
+ (id)fu_boldSausageFontOfSize:(float)arg1;
+ (id)fu_fontByApplyingFeatureSettings:(id)arg1 toFont:(id)arg2;
+ (id)fu_lightSausageFontOfSize:(float)arg1;
+ (id)fu_mediumFontOfSize:(float)arg1;
+ (id)fu_mediumFontOfSize:(float)arg1 centeredColons:(BOOL)arg2;
+ (id)fu_mediumSausageFontOfSize:(float)arg1;
+ (id)fu_sausageFontOfSize:(float)arg1;
+ (id)fu_sausageFontOfSize:(float)arg1 centeredColons:(BOOL)arg2;
+ (id)fu_systemFontOfSize:(float)arg1 centeredColons:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (float)MPU_scaledValueForValue:(float)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (id)naui_ultraLightMonospacedFontOfSize:(float)arg1;

- (id)naui_dynamicFontTextStyleDescriptor;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (struct UIFont { Class x1; }*)attachmentBrowserTitleFont;
+ (id)contentSizeCategories;
+ (float)fontSizeForHeaderImport;
+ (float)fontSizeForSubheaderImport;
+ (float)lineHeightForAttachmentTitleText:(int)arg1;
+ (struct UIFont { Class x1; }*)listViewTitleFont;
+ (id)preferredFontForAttachmentText:(int)arg1;
+ (id)preferredFontForBodyText;
+ (struct UIFont { Class x1; }*)preferredFontForBodyTextWithContentSizeCategory:(id)arg1;
+ (id)preferredFontForDateText;
+ (id)preferredFontForFixedWidthText;
+ (id)preferredFontForHeadingText;
+ (struct UIFont { Class x1; }*)preferredFontForHeadingTextWithContentSizeCategory:(id)arg1;
+ (id)preferredFontForSubheadingText;
+ (id)preferredFontForTitleText;
+ (struct UIFont { Class x1; }*)preferredFontForTitleTextWithContentSizeCategory:(id)arg1;
+ (float)preferredFontSizeWithBaseSize:(float)arg1 withContentSizeCategory:(id)arg2 minSize:(float)arg3 maxSize:(float)arg4;
+ (struct UIFont { Class x1; }*)preferredSystemFontWithBaseSize:(float)arg1 withContentSizeCategory:(id)arg2 minSize:(float)arg3;
+ (float)spacingForAttachmentTitleText:(int)arg1;
+ (int)stepsBetweenContentSizeCategory:(id)arg1 andCategory:(id)arg2;

- (id)fontWithTabularNumbers;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_dynamicBodyFont;
+ (id)siriui_dynamicHeaderFont;
+ (id)siriui_headerFont;
+ (id)siriui_largeHeaderFontWithSize:(float)arg1;
+ (id)siriui_lightWeightBodySizeFont;
+ (id)siriui_lightWeightBodySubtextSizeFont;
+ (id)siriui_lightWeightFontWithSize:(float)arg1;
+ (id)siriui_mediumWeightBodySizeFont;
+ (id)siriui_mediumWeightBodySubtextSizeFont;
+ (id)siriui_mediumWeightFontWithSize:(float)arg1;
+ (id)siriui_ratingFont;
+ (id)siriui_serverUtteranceFont;
+ (id)siriui_subtitleFont;
+ (id)siriui_thinWeightBodySizeFont;
+ (id)siriui_thinWeightBodySubtextSizeFont;
+ (id)siriui_thinWeightFontWithSize:(float)arg1;
+ (id)siriui_userUtteranceFont;

// Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI

+ (id)spui_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 options:(unsigned int)arg3;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rcs_ultraLightMonospacedFontOfSize:(float)arg1;

- (id)rc_textStyle;

@end
