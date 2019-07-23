/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {
    UIImageView *_alertView;
    UIImageView *_arrowView;
    NSMutableArray *_constraints;
    NSString *_label;
    UILabel *_labelView;
    PKPaymentAuthorizationLayout *_layout;
    UIView *_separatorView;
    NSString *_value;
    NSMutableArray *_valueViews;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *value;

- (void)_createSubviews;
- (id)_createValueView;
- (id)_itemCellLabelAttributedStringWithString:(id)arg1 color:(id)arg2;
- (id)addValue:(id)arg1 isPlaceholder:(BOOL)arg2;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)prepareForReuse;
- (void)setLabel:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValue:(id)arg1 isPlaceholder:(BOOL)arg2;
- (void)updateConstraints;
- (id)value;

@end
