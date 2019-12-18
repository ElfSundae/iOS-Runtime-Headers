/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.MoreVideosViewController : UIViewController <TSBlueprintInspectable, TSTabBarSplitViewAutoObserver, TSVideoGroupViewControllerType, TUDeselectable, TUKeyCommandTraversable, TUPluggable> {
    void blueprintViewController;
    void config;
    void eventHandler;
    void feedViewExposureID;
    void gradientView;
    void groupRankProvider;
    void headlineModelFactory;
    void isBeingUsedAsPlugin;
    void pluggableDelegate;
    void routableDelegate;
    void sharingActivityProviderFactory;
    void styler;
}

@property (nonatomic, copy) NSString *feedViewExposureID;
@property (nonatomic) <TSGroupRankProvider> *groupRankProvider;
@property (nonatomic) bool isBeingUsedAsPlugin;
@property (nonatomic) <TUPluggableDelegate> *pluggableDelegate;
@property (nonatomic) <TSVideoGroupViewControllerDelegate> *routableDelegate;

- (void).cxx_destruct;
- (id)cellForHeadline:(id)arg1;
- (void)deselect;
- (id)feedViewExposureID;
- (id)groupRankProvider;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initializeWithCompletion:(id /* block */)arg1;
- (bool)isBeingUsedAsPlugin;
- (id)pluggableDelegate;
- (void)relayoutWithCompletion:(id /* block */)arg1;
- (id)routableDelegate;
- (void)setFeedViewExposureID:(id)arg1;
- (void)setGroupRankProvider:(id)arg1;
- (void)setIsBeingUsedAsPlugin:(bool)arg1;
- (void)setPluggableDelegate:(id)arg1;
- (void)setRoutableDelegate:(id)arg1;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
