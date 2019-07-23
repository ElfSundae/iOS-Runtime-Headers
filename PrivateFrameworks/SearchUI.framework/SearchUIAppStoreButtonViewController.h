/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController {
    BOOL  _appIsInstalled;
    SKUIItemOfferButton * _appStoreButton;
}

@property BOOL appIsInstalled;
@property (retain) SKUIItemOfferButton *appStoreButton;

+ (BOOL)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (BOOL)appIsInstalled;
- (id)appStoreButton;
- (void)buttonPressed;
- (void)setAppIsInstalled:(BOOL)arg1;
- (void)setAppStoreButton:(id)arg1;
- (id)setupViewWithStyle:(unsigned int)arg1;
- (void)updateWithResult:(id)arg1;

@end
