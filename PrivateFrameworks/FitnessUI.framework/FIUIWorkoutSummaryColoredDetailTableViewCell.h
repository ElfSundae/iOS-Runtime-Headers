/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSummaryColoredDetailTableViewCell : UITableViewCell {
    UIView * _customAccessoryView;
    UIFont * _detailFont;
    UILabel * _detailLabel;
    NSString * _detailString;
    UIView * _lineView;
    UILabel * _noDataLabel;
    UIView * _optionalButtonView;
    BOOL  _shouldForceLTRForDetailString;
    UIFont * _suffixFont;
    NSString * _suffixString;
    UIColor * _textColor;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *customAccessoryView;
@property (nonatomic, readonly) UIView *optionalButtonView;

+ (float)rowHeightWithNoDataString:(id)arg1;

- (void).cxx_destruct;
- (void)_formatDetailLabel;
- (void)_resizeFontsIfNeededToFitWidth:(float)arg1;
- (void)_setupUI;
- (id)customAccessoryView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)optionalButtonView;
- (void)prepareForReuse;
- (void)setCustomAccessoryView:(id)arg1;
- (void)setDetailString:(id)arg1 suffixString:(id)arg2 textColor:(id)arg3 shouldForceLTRForDetailString:(BOOL)arg4;
- (void)setLineHidden:(BOOL)arg1;
- (void)setNoDataString:(id)arg1 textColor:(id)arg2;
- (void)setTitleString:(id)arg1;

@end
