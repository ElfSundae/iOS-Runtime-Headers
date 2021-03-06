/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDashBoardSpotlightPresenter : NSObject <CSSpotlightPresenting, SBFLegibilitySettingsProviderDelegate, SPUIRemoteSearchViewDelegate> {
    CSCoverSheetViewController * _coverSheetViewController;
    <SBFLegibilitySettingsProvider> * _spotlightLegibilitySettingsProvider;
    SBDashBoardSpotlightViewController * _spotlightViewController;
    CSPageViewController * _todayPageViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) CSPageViewController *todayPageViewController;

- (void).cxx_destruct;
- (id)createSpotlightLegiblitySettingsProvider;
- (void)dismissSearchView;
- (void)dismissSpotlight;
- (void)dismissSpotlightWithCompletion:(id /* block */)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;
- (void)launchSpotlightForSourceViewController:(id)arg1 interactive:(bool)arg2;
- (void)launchSpotlightForSourceViewController:(id)arg1 interactive:(bool)arg2 completion:(id /* block */)arg3;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)setTodayPageViewController:(id)arg1;
- (id)todayPageViewController;

@end
