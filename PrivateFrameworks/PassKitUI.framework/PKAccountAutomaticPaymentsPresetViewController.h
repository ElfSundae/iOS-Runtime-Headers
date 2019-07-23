/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAccountAutomaticPaymentsPresetViewController : PKSectionTableViewController {
    PKAccount * _account;
    PKAccountAutomaticPaymentsController * _controller;
    unsigned long long  _featureIdentifier;
    NSArray * _paymentPresets;
    NSIndexPath * _selectedIndexPath;
    PKTableHeaderView * _tableHeaderView;
}

- (void).cxx_destruct;
- (void)_handleNext:(id)arg1;
- (id)initWithController:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableHeaderView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
