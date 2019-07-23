/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassPersonalizationViewController : UITableViewController <PKPassPersonalizationCellDelegate, PKPassPersonalizationFooterViewDelegate, PKPassPersonalizationTermsViewControllerDelegate, PKPaymentSetupViewControllerDelegate> {
    NSArray *_cellContexts;
    PKContact *_contact;
    <PKPassPersonalizationViewControllerDelegate> *_delegate;
    PKPassPersonalizationFooterView *_footerView;
    BOOL _hasScrolledToCells;
    PKPassPersonalizationHeaderView *_headerView;
    PKPass *_pass;
    unsigned int _personalizationSource;
    NSString *_personalizationToken;
    UIButton *_personalizeLaterButton;
    UIBarButtonItem *_personalizeNowButton;
    BOOL _termsAndConditionsAccepted;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPersonalizationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_configureFooterView;
- (void)_configureHeaderViewForState:(unsigned int)arg1;
- (BOOL)_contactReadyForPersonalization;
- (id)_nextCellForIndexPath:(id)arg1;
- (void)_personalizeLaterButtonPressed:(id)arg1;
- (void)_personalizeNowButtonPressed:(id)arg1;
- (void)_personalizePass;
- (void)_positionFooterView;
- (void)_presentPersonalizationErrorAlert;
- (void)_scrollToCellsIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)initWithPass:(id)arg1 personalizationToken:(id)arg2 personalizationSource:(unsigned int)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)passPersonalizationFooterViewPrivacyLinkPressed:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidAcceptTerms:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidDeclineTerms:(id)arg1;
- (void)personalizationCellDidChangeValue:(id)arg1;
- (BOOL)personalizationCellShouldBeginEditing:(id)arg1;
- (BOOL)personalizationCellShouldReturn:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
