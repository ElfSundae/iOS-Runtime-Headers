/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSCuratedViewModel : VSViewModel <VSLogoImageViewModel> {
    BOOL  _beginValidationButtonEnabled;
    NSString * _beginValidationButtonTitle;
    NSString * _footerText;
    NSString * _identityProviderDisplayName;
    UIImage * _logo;
    NSString * _logoAccessibilityLabel;
    NSItemProvider * _logoProvider;
    NSString * _message;
    NSString * _notice;
    BOOL  _showDeleteAccountButton;
    BOOL  _showFooter;
}

@property (getter=isBeginValidationButtonEnabled, nonatomic) BOOL beginValidationButtonEnabled;
@property (nonatomic, copy) NSString *beginValidationButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footerText;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identityProviderDisplayName;
@property (nonatomic, retain) UIImage *logo;
@property (nonatomic, copy) NSString *logoAccessibilityLabel;
@property (nonatomic, retain) NSItemProvider *logoProvider;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *notice;
@property (nonatomic) BOOL showDeleteAccountButton;
@property (nonatomic) BOOL showFooter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)beginValidationButtonTitle;
- (id)footerText;
- (id)identityProviderDisplayName;
- (BOOL)isBeginValidationButtonEnabled;
- (id)logo;
- (id)logoAccessibilityLabel;
- (id)logoProvider;
- (id)message;
- (id)notice;
- (void)setBeginValidationButtonEnabled:(BOOL)arg1;
- (void)setBeginValidationButtonTitle:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setIdentityProviderDisplayName:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoAccessibilityLabel:(id)arg1;
- (void)setLogoProvider:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNotice:(id)arg1;
- (void)setShowDeleteAccountButton:(BOOL)arg1;
- (void)setShowFooter:(BOOL)arg1;
- (BOOL)showDeleteAccountButton;
- (BOOL)showFooter;

@end
