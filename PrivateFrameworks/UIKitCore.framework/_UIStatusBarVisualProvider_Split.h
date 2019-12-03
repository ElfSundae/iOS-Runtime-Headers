/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_Split : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider> {
    NSTimer * _airplaneModeIgnoreChangesTimer;
    _UIStatusBarDisplayItemPlacement * _batteryChargingPlacement;
    NSTimer * _batteryExpansionTimer;
    UILayoutGuide * _cutoutLayoutGuide;
    _UIStatusBarDisplayItemPlacement * _dualServiceNamePlacement;
    NSLayoutConstraint * _expandedLeadingLowerTopConstraint;
    NSLayoutConstraint * _expandedTrailingBottomConstraint;
    NSLayoutConstraint * _leadingBottomConstraint;
    _UIStatusBarDisplayItemPlacementGroup * _lowerWifiGroup;
    UILayoutGuide * _mainRegionsLayoutGuide;
    NSDictionary * _orderedDisplayItemPlacements;
    _UIStatusBarDisplayItemPlacement * _serviceNamePlacement;
    NSTimer * _systemUpdatesTimer;
}

@property (nonatomic, retain) NSTimer *airplaneModeIgnoreChangesTimer;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *batteryChargingPlacement;
@property (nonatomic, retain) NSTimer *batteryExpansionTimer;
@property (nonatomic, retain) UILayoutGuide *cutoutLayoutGuide;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *dualServiceNamePlacement;
@property (nonatomic, retain) NSLayoutConstraint *expandedLeadingLowerTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *expandedTrailingBottomConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *leadingBottomConstraint;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup;
@property (nonatomic, retain) UILayoutGuide *mainRegionsLayoutGuide;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *serviceNamePlacement;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *systemUpdatesTimer;

+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsFromCenteringEdgeInset:(double)arg1 trailing:(bool)arg2;
+ (double)baseIconScale;
+ (double)baselineBottomInset;
+ (double)bottomLeadingTopOffset;
+ (double)bottomLeadingWidth;
+ (double)condensedPointSizeForCellularType:(long long)arg1 defaultPointSize:(double)arg2 baselineOffset:(double*)arg3;
+ (double)cornerRadius;
+ (id)emphasizedFont;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
+ (id)expandedFont;
+ (double)height;
+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;
+ (double)leadingCenteringEdgeInset;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })leadingEdgeInsets;
+ (double)leadingItemSpacing;
+ (double)leadingPillInset;
+ (double)leadingPillSpacing;
+ (double)leadingSmallPillSpacing;
+ (double)lowerExpandedBaselineOffset;
+ (id)normalFont;
+ (double)notchBottomCornerRadius;
+ (struct CGSize { double x1; double x2; })notchSize;
+ (double)notchTopCornerRadius;
+ (double)pillCenteringEdgeInset;
+ (id)pillFont;
+ (struct CGSize { double x1; double x2; })pillSize;
+ (id)pillSmallFont;
+ (double)referenceScale;
+ (double)referenceWidth;
+ (id)smallFont;
+ (struct CGSize { double x1; double x2; })smallPillSize;
+ (double)trailingCenteringEdgeInset;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })trailingEdgeInsets;
+ (Class)visualProviderSubclassForScreen:(id)arg1;

- (void).cxx_destruct;
- (id)_additionAnimationForBatteryCharging;
- (void)_collapseBattery;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_collapseChargingBoltTransformForDisplayItem:(id)arg1;
- (void)_disableSystemUpdates;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_expandedChargingBoltTransformForDisplayItem:(id)arg1;
- (id)_removalAnimationForBatteryCharging;
- (void)_resetBattery;
- (bool)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg1;
- (void)_stopBatteryCollapseTimer;
- (id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)_updateDataForBatteryCharging:(id)arg1;
- (void)_updateDataForSystemUpdates:(id)arg1;
- (void)_updateExpandedTrailingRegion;
- (void)_updateLowerRegionsWithData:(id)arg1;
- (void)_updateSystemNavigationWithData:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)airplaneModeIgnoreChangesTimer;
- (double)airplaneObstacleFadeOutDuration;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2;
- (id)animationForAirplaneMode;
- (id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2;
- (id)batteryChargingPlacement;
- (id)batteryExpansionTimer;
- (bool)canFixupDisplayItemAttributes;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3;
- (id)cutoutLayoutGuide;
- (void)dataUpdated:(id)arg1;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (id)dualServiceNamePlacement;
- (id)expandedLeadingLowerTopConstraint;
- (id)expandedTrailingBottomConstraint;
- (void)itemCreated:(id)arg1;
- (id)leadingBottomConstraint;
- (id)lowerWifiGroup;
- (id)mainRegionsLayoutGuide;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)serviceNamePlacement;
- (void)setAirplaneModeIgnoreChangesTimer:(id)arg1;
- (void)setBatteryChargingPlacement:(id)arg1;
- (void)setBatteryExpansionTimer:(id)arg1;
- (void)setCutoutLayoutGuide:(id)arg1;
- (void)setDualServiceNamePlacement:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedLeadingLowerTopConstraint:(id)arg1;
- (void)setExpandedTrailingBottomConstraint:(id)arg1;
- (void)setLeadingBottomConstraint:(id)arg1;
- (void)setLowerWifiGroup:(id)arg1;
- (void)setMainRegionsLayoutGuide:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (void)setServiceNamePlacement:(id)arg1;
- (void)setSystemUpdatesTimer:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (void)statusBarRegionsUpdated;
- (id)stringForCellularType:(long long)arg1 condensed:(bool)arg2;
- (id)styleAttributesForStyle:(long long)arg1;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (id)systemUpdatesTimer;
- (void)updateDataForService:(id)arg1;
- (void)updateDataForSystemNavigation:(id)arg1;
- (id)willUpdateWithData:(id)arg1;

@end
