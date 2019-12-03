/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDrawerSearchResultsViewController : WFActionDrawerCompositeResultsViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerActionTableViewCellDelegate, WFActionDrawerAppsTableViewCellDelegate, WFActionDrawerSiriSuggestionsTableViewCellDelegate, WFActionDrawerStateConfigurable, WFActionDrawerStateRepresentable> {
    NSArray * _combinedActionActivitySections;
    <WFActionDrawerSearchResultsViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) NSArray *combinedActionActivitySections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFActionDrawerSearchResultsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFActionDrawerState *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2;
- (void)appsTableViewCell:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2;
- (id)combinedActionActivitySections;
- (id)delegate;
- (void)loadView;
- (bool)moveToState:(id)arg1 animated:(bool)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadViews;
- (void)setCombinedActionActivitySections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2;
- (id)state;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
