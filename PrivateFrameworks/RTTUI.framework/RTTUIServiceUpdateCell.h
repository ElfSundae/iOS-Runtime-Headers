/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

@interface RTTUIServiceUpdateCell : UITableViewCell {
    <RTTUIServiceCellDelegate> * _delegate;
    UITextView * _subtitleView;
    UITextView * _titleView;
}

@property (nonatomic) <RTTUIServiceCellDelegate> *delegate;

+ (double)heightForWidth:(double)arg1 withDelegate:(id)arg2;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)adjustTextViewSize;
- (id)delegate;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (id)serviceMessage;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)updateLayout;

@end