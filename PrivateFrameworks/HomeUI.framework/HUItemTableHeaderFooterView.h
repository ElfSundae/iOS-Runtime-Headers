/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView {
    NSLayoutConstraint * _bottomSpacingConstraint;
    NSArray * _constraints;
    BOOL  _includeBottomSpacing;
    UILabel * _messageLabel;
}

@property (nonatomic, copy) NSAttributedString *attributedMessage;
@property (nonatomic, retain) NSLayoutConstraint *bottomSpacingConstraint;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) BOOL includeBottomSpacing;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic) unsigned int numberOfLines;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (float)_bottomSpacing;
- (id)attributedMessage;
- (id)bottomSpacingConstraint;
- (id)constraints;
- (BOOL)includeBottomSpacing;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)message;
- (id)messageLabel;
- (unsigned int)numberOfLines;
- (void)setAttributedMessage:(id)arg1;
- (void)setBottomSpacingConstraint:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setIncludeBottomSpacing:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setNumberOfLines:(unsigned int)arg1;
- (void)updateConstraints;

@end
