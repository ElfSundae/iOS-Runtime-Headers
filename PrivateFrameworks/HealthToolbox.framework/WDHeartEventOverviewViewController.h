/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDHeartEventOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver, WDUserActivityResponder> {
    <WDDataListViewControllerDataProvider> * _dataProvider;
    HKDisplayType * _displayType;
    WDProfile * _profile;
    long long  _totalSampleCount;
    long long  _visibleSampleCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;
- (id)_cellForDataSourcesAndAccess;
- (id)_cellForDescription;
- (id)_cellForFavoriteSwitch;
- (id)_cellForSampleAtIndexPath:(id)arg1;
- (id)_cellForShowAll;
- (bool)_doesActiveWatchSupportHeartRateMotionContexts;
- (id)_heartEventType;
- (bool)_isDisplayTypeFavorited;
- (id)_pushDataSourcesAndAccessController;
- (void)_pushSampleDetailViewControllerForIndexPath:(id)arg1;
- (id)_pushShowAllViewController;
- (void)_recomputeTotalSampleCount;
- (void)_reloadAllData;
- (void)_updateActivityForViewDidAppear;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
