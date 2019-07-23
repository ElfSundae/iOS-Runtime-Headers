/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTermsAndConditionsView : UIView {
    SUSubtitledButton * _button;
    SUClientInterface * _clientInterface;
    <SUTermsAndConditionsViewDelegate> * _delegate;
    BOOL  _hideAccountButton;
    float  _rightMargin;
    int  _style;
    SULinkControl * _termsAndConditionsControl;
}

@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (nonatomic) <SUTermsAndConditionsViewDelegate> *delegate;
@property (nonatomic) BOOL hideAccountButton;
@property (nonatomic) float rightMargin;
@property (nonatomic) int style;

- (void)_accountsChangedNotification:(id)arg1;
- (id)_button;
- (void)_buttonAction:(id)arg1;
- (float)_buttonHeightForStyle:(int)arg1;
- (void)_clearButtonSelection:(id)arg1;
- (void)_destroyButton;
- (int)_linkStyleForStyle:(int)arg1;
- (void)_termsAndConditionsAction:(id)arg1;
- (id)_termsAndConditionsControl;
- (void)_updateButton;
- (id)clientInterface;
- (void)dealloc;
- (id)delegate;
- (BOOL)hideAccountButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)rightMargin;
- (void)setClientInterface:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHideAccountButton:(BOOL)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setStyle:(int)arg1;
- (void)sizeToFit;
- (int)style;

@end
