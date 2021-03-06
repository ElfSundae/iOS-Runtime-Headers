/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDClinicalProviderDetailsViewController : HKTableViewController <WDUserActivityResponder> {
    NSArray * _connectedGateways;
    long long  _fetchesInFlight;
    HRProfile * _profile;
    HKClinicalProvider * _provider;
    HKClinicalProviderSearchResult * _searchResult;
    NSArray * _sections;
    HRWDSpinnerView * _spinnerView;
    NSArray * _unconnectedGateways;
}

@property (nonatomic, retain) NSArray *connectedGateways;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long fetchesInFlight;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HRProfile *profile;
@property (nonatomic, retain) HKClinicalProvider *provider;
@property (nonatomic, retain) HKClinicalProviderSearchResult *searchResult;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) HRWDSpinnerView *spinnerView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *unconnectedGateways;

+ (id)providerCache;

- (void).cxx_destruct;
- (void)_computeSections;
- (void)_fetchDetailsForSearchResult:(id)arg1;
- (id)_gatewayAtIndexPath:(id)arg1;
- (void)_handleTapForActivateGateway:(id)arg1;
- (id)_initWithProfile:(id)arg1;
- (id)_orderGatewaysForDisplay:(id)arg1;
- (void)_postAWDMetricForStartingSafariSession;
- (void)_presentError:(id)arg1;
- (void)_presentUnavailableAlertForGatewayTitle:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)connectedGateways;
- (long long)fetchesInFlight;
- (id)initWithProfile:(id)arg1 provider:(id)arg2;
- (id)initWithProfile:(id)arg1 searchResult:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (id)provider;
- (void)removeSpinnerIfNecessary;
- (id)searchResult;
- (id)sections;
- (void)setConnectedGateways:(id)arg1;
- (void)setFetchesInFlight:(long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSpinnerView:(id)arg1;
- (void)setUnconnectedGateways:(id)arg1;
- (id)spinnerView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)unconnectedGateways;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
