/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider> {
    NSDictionary * _orderedDisplayItemPlacements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;
@property (readonly) Class superclass;

+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
+ (double)expandedBaselineOffset;
+ (id)expandedFont;
+ (double)height;
+ (struct CGSize { double x1; double x2; })intrinsicLockScreenContentSizeForOrientation:(long long)arg1;
+ (id)normalFont;
+ (id)pillFont;
+ (struct CGSize { double x1; double x2; })pillSize;
+ (double)regionSpacing;
+ (struct CGSize { double x1; double x2; })smallPillSize;
+ (id)timeFont;
+ (bool)wantsExpandedLeadingPlacements;

- (void).cxx_destruct;
- (id)_backgroundActivityDetailRemovalAnimation;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3;
- (void)itemCreated:(id)arg1;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (id)stringForCellularType:(long long)arg1 condensed:(bool)arg2;
- (id)styleAttributesForStyle:(long long)arg1;
- (void)updateDataForBackgroundActivity:(id)arg1;

@end
