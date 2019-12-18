/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
 */

@interface NewsArticles.InterstitialAdvertisementViewController : UIViewController <ADInterstitialAdDelegate> {
    void advertisementModel;
    void eventHandler;
    void hasPresentedInterstitial;
    void identifier;
    void interstitialAdvertisementView;
    void styler;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (bool)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(bool)arg2;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
