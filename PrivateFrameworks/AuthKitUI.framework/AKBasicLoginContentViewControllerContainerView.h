/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKBasicLoginContentViewControllerContainerView : UIView {
    NSArray * _activeConstraints;
    UIImage * _bannerImage;
    UIImageView * _bannerView;
    UILabel * _messageLabel;
    NSString * _messageText;
    UILabel * _titleLabel;
    NSString * _titleText;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, retain) UIImage *bannerImage;
@property (nonatomic, retain) UIImageView *bannerView;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, copy) NSString *messageText;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (void)_configureBannerImage;
- (void)_configureMessageLabel;
- (id)activeConstraints;
- (id)bannerImage;
- (id)bannerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)messageLabel;
- (id)messageText;
- (void)setActiveConstraints:(id)arg1;
- (void)setBannerImage:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
