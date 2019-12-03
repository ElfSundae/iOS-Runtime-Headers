/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDSourcesViewController : WDHealthTableViewController <WDUserActivityResponder> {
    HKSourceListDataSource * _dataSource;
    NSString * _restorationSourceBundleIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *restorationSourceBundleIdentifier;
@property (readonly) Class superclass;

+ (id)tableViewSectionClasses;

- (void).cxx_destruct;
- (void)_updateActivityForViewDidAppear;
- (void)applicationWillEnterForeground;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)initWithProfile:(id)arg1 usingInsetStyling:(bool)arg2;
- (void)pushViewController:(id)arg1;
- (id)restorationSourceBundleIdentifier;
- (void)setRestorationSourceBundleIdentifier:(id)arg1;
- (id)uniqueUserActivityType;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
