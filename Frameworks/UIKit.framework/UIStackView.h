/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStackView : UIView {
    _UIAlignedLayoutArrangement * _alignmentArrangement;
    BOOL  _didRequestTallestBaselineViewForFirst;
    BOOL  _didRequestTallestBaselineViewForLast;
    _UIOrderedLayoutArrangement * _distributionArrangement;
    BOOL  _layoutMarginsRelativeArrangement;
    NSMutableArray * _mutableLayoutArrangements;
    BOOL  _viewForFirstBaselineLayoutDidChange;
    BOOL  _viewForLastBaselineLayoutDidChange;
}

@property (nonatomic) int _mk_axis;
@property (nonatomic) int alignment;
@property (nonatomic, readonly, copy) NSArray *arrangedSubviews;
@property (nonatomic) int axis;
@property (getter=isBaselineRelativeArrangement, nonatomic) BOOL baselineRelativeArrangement;
@property (nonatomic) int distribution;
@property (getter=isLayoutMarginsRelativeArrangement, nonatomic) BOOL layoutMarginsRelativeArrangement;
@property (nonatomic) float spacing;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_baselineViewForFirst:(BOOL)arg1;
- (float)_calculatedIntrinsicHeight;
- (void)_commonStackViewInitializationWithArrangedSubviews:(id)arg1;
- (BOOL)_hasLayoutArrangements;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (id)_mutableLayoutArrangements;
- (float)_proportionalFillLengthForOrderedArrangement:(id)arg1 relevantParentAxis:(int)arg2;
- (BOOL)_recordBaselineLoweringInfo;
- (BOOL)_shouldRequestTallestBaselineViewForFirst:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(BOOL*)arg4;
- (void)_vendedBaselineViewDidMoveForFirst:(BOOL)arg1;
- (void)_vendedBaselineViewParametersDidChange;
- (void)addArrangedSubview:(id)arg1;
- (int)alignment;
- (id)arrangedSubviews;
- (int)axis;
- (void)dealloc;
- (int)distribution;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isBaselineRelativeArrangement;
- (BOOL)isLayoutMarginsRelativeArrangement;
- (void)removeArrangedSubview:(id)arg1;
- (void)setAlignment:(int)arg1;
- (void)setArrangedSubviews:(id)arg1;
- (void)setAxis:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaselineRelativeArrangement:(BOOL)arg1;
- (void)setDistribution:(int)arg1;
- (void)setLayoutMarginsRelativeArrangement:(BOOL)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setSpacing:(float)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (float)spacing;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (int)_mk_axis;
- (void)set_mk_axis:(int)arg1;

@end
