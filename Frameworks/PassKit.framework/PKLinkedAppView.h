/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationDelegate> {
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_appName;
    UILabel *_appPublisher;
    UIImageView *_iconView;
    PKLinkedApplication *_linkedApplication;
    UILabel *_loadingLabel;
    UIColor *_mainLabelColor;
    UILabel *_price;
    UIColor *_subTextLabelColor;
    PKLinkedAppUserRatingView *_userRatingView;
    UIButton *_viewButton;
}

@property (nonatomic, copy) NSURL *appLaunchURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PKLinkedApplication *linkedApplication;
@property (nonatomic) UIColor *mainLabelColor;
@property (nonatomic, copy) NSArray *storeIDs;
@property (nonatomic) UIColor *subTextLabelColor;
@property (readonly) Class superclass;

- (void)_buttonPressed:(id)arg1;
- (void)_cleanupViews;
- (void)_layoutLoadingView;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (id)appLaunchURL;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)linkedApplication;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (id)mainLabelColor;
- (void)reloadApplicationStateIfNecessary;
- (void)setAppLaunchURL:(id)arg1;
- (void)setApplicationIcon:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (id)storeIDs;
- (id)subTextLabelColor;

@end
