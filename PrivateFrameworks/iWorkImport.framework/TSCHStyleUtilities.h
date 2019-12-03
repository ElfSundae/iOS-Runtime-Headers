/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleUtilities : NSObject

+ (bool)allSeriesInList:(id)arg1 haveExplosionValue:(double)arg2;
+ (id)availableStrokes;
+ (double)bendedCalloutLineLabelExplosionValueFromPre2_4ExplosionValue:(double)arg1 chartModel:(id)arg2 bodySize:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGSize { double x1; double x2; })bodySizeWithMinimumWedgeExplosionWithChartModel:(id)arg1 bodySize:(struct CGSize { double x1; double x2; })arg2;
+ (void)breakUpFontName:(id)arg1 isBold:(bool*)arg2 isItalic:(bool*)arg3;
+ (float)centeredDonutLabelExplosionPercentageWithInnerRadius:(double)arg1;
+ (id)chartsNullShadowToDefaultDisabledShadow:(id)arg1;
+ (void)convertToSimpleTSDFillsInProperties:(id)arg1 inMap:(id)arg2 context:(id)arg3;
+ (float)defaultCalloutLineThickness;
+ (float)defaultDonutLabelExplosionPercentage;
+ (float)defaultInnerRadiusPercentage;
+ (float)defaultInnerRadiusPercentageForIconRendering;
+ (float)defaultPieLabelExplosionPercentage;
+ (id)defaultShadow;
+ (id)fillForSeries:(id)arg1 chartType:(id)arg2;
+ (id)fullyPopulatedStyleFromStyle:(id)arg1 context:(id)arg2;
+ (id)fullyPopulatedStylesFromArray:(id)arg1 context:(id)arg2 styleClass:(Class)arg3;
+ (bool)hasNoFill:(id)arg1;
+ (bool)hasShadow:(id)arg1;
+ (bool)isNullFill:(id)arg1;
+ (bool)labelExplosionIsCenteredInWedgeWithInnerRadius:(double)arg1 labelExplosion:(double)arg2;
+ (id)lineEndForSegmentIndex:(long long)arg1;
+ (id)nullFill;
+ (id)nullShadow;
+ (void)p_adjustTrendlineSaturation:(double*)arg1 brightness:(double*)arg2;
+ (double)p_bendedCalloutLineLabelExplosionValueFromPre2_4ExplosionValue:(double)arg1 chartRadius:(double)arg2;
+ (bool)p_hasShadow:(id)arg1;
+ (double)p_pre2_4BendedCalloutLineLabelExplosionValueFromExplosionValue:(double)arg1 chartRadius:(double)arg2;
+ (id)p_referenceColorForObject:(id)arg1;
+ (double)pieFamilyLabelExplosionMaximumPercentage;
+ (double)pieFamilyLabelExplosionMinimumPercentage;
+ (double)pre2_4BendedCalloutLineLabelExplosionValueFromExplosionValue:(double)arg1 chartModel:(id)arg2 bodySize:(struct CGSize { double x1; double x2; })arg3;
+ (float)pre2_4DefaultPieLabelExplosionPercentageForCalloutLineCalculation;
+ (double)propertyAngleForUISliderAngle:(double)arg1;
+ (unsigned long long)segmentIndexForLineEnd:(id)arg1;
+ (id)shadowToChartsNullShadow:(id)arg1;
+ (bool)shouldAnchorLabelsForSeries:(id)arg1 innerRadius:(double)arg2 calloutLineType:(long long)arg3 defaultLabelExplosion:(double)arg4;
+ (id)stylesheetOfStyles:(id)arg1 nilAllowed:(bool)arg2;
+ (id)trendlineColorFromCGColor:(struct CGColor { }*)arg1;
+ (id)tupleToUpdate2_3ExplosionFromValue:(id)arg1 chartInfo:(id)arg2 forStyleOwner:(id)arg3;
+ (double)uiSliderAngleForPropertyAngle:(double)arg1;
+ (double)uiSliderAngleMax;
+ (double)uiSliderAngleMin;
+ (id)uiStringForLabelFormatType:(int)arg1;
+ (id)uiStringForLabelFormatType:(int)arg1 useShortString:(bool)arg2;
+ (void)updateParagraphStylePropertyMapsForMutationLookup:(id)arg1 mutationDictionary:(id)arg2 styleOwner:(id)arg3 indexProperty:(int)arg4 paragraphStyleProperty:(int)arg5 value:(id)arg6;
+ (void)updateStyleState:(id)arg1 forMutationsPerStyleOwner:(id)arg2;
+ (void)updateStyleState:(id)arg1 forPropertyMutationTuples:(id)arg2;
+ (void)upgradeAlignmentInParagraphStyles:(id)arg1 willModifyBlock:(id /* block */)arg2;
+ (bool)upgradeShadowProperties:(id)arg1 inMap:(id)arg2;
+ (id)upgradedShadowPropertyForParagraphStyle:(id)arg1;
+ (bool)upgradedShadowPropertyFromShadow:(id)arg1 outUpgraded:(id*)arg2;
+ (bool)useOutsideParagraphStyleIndexForSeries:(id)arg1 chartType:(id)arg2 layout:(id)arg3;

@end
