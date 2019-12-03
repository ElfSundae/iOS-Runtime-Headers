/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDAudiogramOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, SKStoreProductViewControllerDelegate, WDAppSwooshTableViewCellDelegate, WDUserActivityResponder> {
    HKAudiogramChartViewController * _audiogramChartViewController;
    HKDisplayType * _displayType;
    WDProfile * _profile;
    NSArray * _sectionToRows;
}

@property (nonatomic, readonly) HKAudiogramChartViewController *audiogramChartViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WDProfile *profile;
@property (nonatomic, retain) NSArray *sectionToRows;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addToFavoritesCell;
- (id)_audiogramChartCell;
- (id)_descriptionCell;
- (void)_displayAppWithStoreID:(id)arg1;
- (bool)_isDisplayTypeFavorited;
- (void)_pushShowAllDataViewController;
- (void)_pushSourcesAndAccessViewController;
- (void)_queryForAudiogramChartSamples;
- (void)_rebuildSections;
- (id)_recommendedAppsCell;
- (long long)_rowTypeForIndexPath:(id)arg1;
- (bool)_sectionNumber:(long long)arg1 containsRowType:(long long)arg2;
- (bool)_shouldShowAppsRow;
- (id)_showAllDataCell;
- (id)_sourcesAndAccessCell;
- (void)_updateActivityForViewDidAppear;
- (void)_updateAudiogramSamples:(id)arg1 error:(id)arg2;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2;
- (id)audiogramChartViewController;
- (id)displayType;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)profile;
- (id)sectionToRows;
- (void)setSectionToRows:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
