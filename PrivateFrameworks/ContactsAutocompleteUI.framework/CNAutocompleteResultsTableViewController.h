/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

@interface CNAutocompleteResultsTableViewController : UITableViewController <CNComposeRecipientTableViewCellDelegate> {
    bool  _deferTableViewUpdates;
    <CNAutocompleteResultsTableViewControllerDelegate> * _delegate;
    NSMutableSet * _expandedIdentifiers;
    bool  _hasPerformedRecipientExpansion;
    bool  _inDisambiguationMode;
    bool  _isDeviceLocked;
    NSArray * _recipients;
    NSMutableArray * _searchResults;
    NSMutableArray * _serverSearchResults;
    NSMutableArray * _suggestedSearchResults;
    _CNAutocompleteResultsTableViewModel * _tableViewModel;
    bool  _tableViewNeedsReload;
    double  _trailingButtonMidlineInsetFromLayoutMargin;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeferringTableViewUpdates, nonatomic) bool deferTableViewUpdates;
@property (nonatomic) <CNAutocompleteResultsTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *expandedIdentifiers;
@property (nonatomic) bool hasPerformedRecipientExpansion;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inDisambiguationMode;
@property (nonatomic) bool isDeviceLocked;
@property (nonatomic, copy) NSArray *recipients;
@property (readonly) Class superclass;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;

+ (void)dispatchMainIfNecessary:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_combinedResults;
- (bool)_deviceIsLockedWithPassword;
- (id)_flattenedIndexPaths;
- (id)_indexPathForRecipient:(id)arg1;
- (id)_recipientAtIndexPath:(id)arg1;
- (void)_selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (double)_tableViewHeaderHeight;
- (id)_unifiedRecipientForRecipientAtIndexPath:(id)arg1;
- (void)_updateTableViewModelAnimated:(bool)arg1;
- (bool)confirmSelectedRecipient;
- (id)delegate;
- (void)didTapDisambiguationChevronForCell:(id)arg1;
- (void)didTapInfoButtonForCell:(id)arg1;
- (id)expandedIdentifiers;
- (bool)hasPerformedRecipientExpansion;
- (bool)inDisambiguationMode;
- (id)initWithStyle:(long long)arg1;
- (void)invalidateAddressTintColors;
- (void)invalidatePreferredRecipients;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (bool)isDeferringTableViewUpdates;
- (bool)isDeviceLocked;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)recipientIsDisambiguationRecipient:(id)arg1;
- (bool)recipientIsExpanded:(id)arg1;
- (bool)recipientIsExpandedChild:(id)arg1;
- (bool)recipientIsExpandedParent:(id)arg1;
- (id)recipients;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)setDeferTableViewUpdates:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandedIdentifiers:(id)arg1;
- (void)setHasPerformedRecipientExpansion:(bool)arg1;
- (void)setInDisambiguationMode:(bool)arg1;
- (void)setIsDeviceLocked:(bool)arg1;
- (void)setRecipients:(id)arg1;
- (void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1;
- (bool)shouldShowCheckmarkForRecipient:(id)arg1 preferredRecipient:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)trailingButtonMidlineInsetFromLayoutMargin;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unificationIdentifierForRecipient:(id)arg1;
- (void)updateBackgroundAndSeparatorsForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateLabelColorForCell:(id)arg1;
- (bool)updatePreferredRecipientForCell:(id)arg1 isInvalidation:(bool)arg2;
- (void)updateRecipients:(id)arg1 disambiguatingRecipient:(id)arg2;
- (void)viewLayoutMarginsDidChange;

@end