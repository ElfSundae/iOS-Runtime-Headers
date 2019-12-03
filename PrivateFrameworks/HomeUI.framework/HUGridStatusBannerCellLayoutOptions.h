/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridStatusBannerCellLayoutOptions : HUGridCellLayoutOptions {
    double  _cellHeight;
    UIFont * _continueLabelFont;
    UIFont * _descriptionFont;
    double  _horizontalItemSpacing;
    double  _iconHeight;
    double  _iconTopInset;
    double  _iconTrailingInset;
    double  _iconWidth;
    double  _leadingInset;
    unsigned long long  _maxNumberOfDescriptionLines;
    unsigned long long  _maxNumberOfTitleLines;
    double  _titleInterLineSpacing;
    double  _titleTopInset;
    double  _trailingInset;
    double  _verticalLabelSpacing;
    double  _verticalSpacingForLineView;
    double  _verticalSpacingForLipElements;
}

@property (nonatomic) double cellHeight;
@property (nonatomic, retain) UIFont *continueLabelFont;
@property (nonatomic, retain) UIFont *descriptionFont;
@property (nonatomic) double horizontalItemSpacing;
@property (nonatomic) double iconHeight;
@property (nonatomic) double iconTopInset;
@property (nonatomic) double iconTrailingInset;
@property (nonatomic) double iconWidth;
@property (nonatomic) double leadingInset;
@property (nonatomic) unsigned long long maxNumberOfDescriptionLines;
@property (nonatomic) unsigned long long maxNumberOfTitleLines;
@property (nonatomic) double titleInterLineSpacing;
@property (nonatomic) double titleTopInset;
@property (nonatomic) double trailingInset;
@property (nonatomic) double verticalLabelSpacing;
@property (nonatomic) double verticalSpacingForLineView;
@property (nonatomic) double verticalSpacingForLipElements;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (void).cxx_destruct;
- (double)cellHeight;
- (id)continueLabelFont;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionFont;
- (double)horizontalItemSpacing;
- (double)iconHeight;
- (double)iconTopInset;
- (double)iconTrailingInset;
- (double)iconWidth;
- (double)leadingInset;
- (unsigned long long)maxNumberOfDescriptionLines;
- (unsigned long long)maxNumberOfTitleLines;
- (void)setCellHeight:(double)arg1;
- (void)setContinueLabelFont:(id)arg1;
- (void)setDescriptionFont:(id)arg1;
- (void)setHorizontalItemSpacing:(double)arg1;
- (void)setIconHeight:(double)arg1;
- (void)setIconTopInset:(double)arg1;
- (void)setIconTrailingInset:(double)arg1;
- (void)setIconWidth:(double)arg1;
- (void)setLeadingInset:(double)arg1;
- (void)setMaxNumberOfDescriptionLines:(unsigned long long)arg1;
- (void)setMaxNumberOfTitleLines:(unsigned long long)arg1;
- (void)setTitleInterLineSpacing:(double)arg1;
- (void)setTitleTopInset:(double)arg1;
- (void)setTrailingInset:(double)arg1;
- (void)setVerticalLabelSpacing:(double)arg1;
- (void)setVerticalSpacingForLineView:(double)arg1;
- (void)setVerticalSpacingForLipElements:(double)arg1;
- (double)statusBannerCellHeightForWidth:(double)arg1 havingTitleAndDescription:(id)arg2 forContentSizeCategory:(id)arg3;
- (double)titleInterLineSpacing;
- (double)titleTopInset;
- (double)trailingInset;
- (double)verticalLabelSpacing;
- (double)verticalSpacingForLineView;
- (double)verticalSpacingForLipElements;

@end
