/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraRecordingOnboardingFlow : NSObject <HUFeatureOnboardingFlow> {
    HMHome * _home;
    UIViewController<HUConfigurationViewController> * _initialViewController;
    NAFuture * _onboardingFuture;
    bool  _shouldAbortAllOnboarding;
    bool  _shouldAbortThisOnboardingFlowGroup;
    HFUserItem * _userItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) UIViewController<HUConfigurationViewController> *initialViewController;
@property (nonatomic, retain) NAFuture *onboardingFuture;
@property (nonatomic) bool shouldAbortAllOnboarding;
@property (nonatomic) bool shouldAbortThisOnboardingFlowGroup;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFUserItem *userItem;

- (void).cxx_destruct;
- (id)_determineInitialViewController;
- (void)_setThisUserDismissedCameraOnboardingAndReminder;
- (id)description;
- (id)home;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;
- (id)initialViewController;
- (id)onboardingFuture;
- (id)processUserInput:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setInitialViewController:(id)arg1;
- (void)setOnboardingFuture:(id)arg1;
- (void)setShouldAbortAllOnboarding:(bool)arg1;
- (void)setShouldAbortThisOnboardingFlowGroup:(bool)arg1;
- (void)setUserItem:(id)arg1;
- (bool)shouldAbortAllOnboarding;
- (bool)shouldAbortThisOnboardingFlowGroup;
- (id)userItem;

@end
