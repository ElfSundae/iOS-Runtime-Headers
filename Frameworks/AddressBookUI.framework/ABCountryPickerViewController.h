/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCountryPickerViewController : ABPickerViewController <UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _allCountries;
    UILocalizedIndexedCollation * _collation;
    NSArray * _filteredCountries;
    NSDictionary * _indexToSections;
    UISearchBar * _searchBar;
    UISearchDisplayController * _searchController;
    NSArray * _sectionIndexTitles;
    NSArray * _sections;
    NSString * _selectedCountryCode;
    NSIndexPath * _selectedIndexPath;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *selectedCountryCode;
@property (readonly) Class superclass;

- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (void)_setSelectedCountryCode:(id)arg1 atPath:(id)arg2;
- (float)ab_heightToFitForViewInPopoverView;
- (void)configureSections;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadCountryCodes;
- (void)scrollToSearchFieldAnimated:(BOOL)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)selectedCountryCode;
- (void)setSelectedCountryCode:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
