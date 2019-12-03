/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDClinicalAccountSourceCell : WDClinicalLocationCell {
    HKClinicalAccount * _account;
    UIButton * _webLinkButton;
}

@property (nonatomic, readonly, copy) HKClinicalAccount *account;
@property (nonatomic, retain) UIButton *webLinkButton;

- (void).cxx_destruct;
- (void)_handleWebLinkTapped;
- (void)_setupSubviews;
- (void)_updateForContentSizeCategory:(id)arg1;
- (id)account;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setAccount:(id)arg1 dataProvider:(id)arg2;
- (void)setWebLinkButton:(id)arg1;
- (id)webLinkButton;
- (void)willDisplay;

@end
