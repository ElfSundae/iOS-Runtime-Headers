/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSSIMSetupFlow : NSObject <TSSIMSetupFlowDelegate> {
    <TSSIMSetupDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)initActivationCodeRequireSetup:(bool)arg1;
+ (id)initWithActivationCodeOnlyFlow;
+ (id)initWithAppName:(id)arg1 requireSetup:(bool)arg2;
+ (id)initWithSetupFlowWithIccid:(id)arg1 showAddPlan:(bool)arg2;
+ (void)needsToRun:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (void)navigateToNextPaneFrom:(id)arg1 navigationController:(id)arg2;
- (id)nextViewControllerFrom:(id)arg1;
- (void)receivedResponse;
- (void)setDelegate:(id)arg1;
- (void)userDidTapCancel;
- (void)viewControllerDidComplete:(id)arg1;
- (void)waitForResponse:(id)arg1;

@end
