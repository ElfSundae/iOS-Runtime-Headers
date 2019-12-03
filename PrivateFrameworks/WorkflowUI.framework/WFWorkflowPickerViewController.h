/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFWorkflowPickerViewController : UITableViewController <UISearchResultsUpdating> {
    <WFWorkflowPickerViewControllerDelegate> * _delegate;
    NSArray * _filteredVariables;
    NSArray * _filteredWorkflows;
    WFVariable * _selectedVariable;
    NSString * _selectedWorkflowName;
    <WFVariableProvider> * _variableProvider;
    NSArray * _variables;
    NSArray * _workflowNames;
    NSArray * _workflows;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFWorkflowPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *filteredVariables;
@property (nonatomic, retain) NSArray *filteredWorkflows;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFVariable *selectedVariable;
@property (nonatomic, copy) NSString *selectedWorkflowName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <WFVariableProvider> *variableProvider;
@property (nonatomic, retain) NSArray *variables;
@property (nonatomic, readonly, copy) NSArray *workflowNames;
@property (nonatomic, retain) NSArray *workflows;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)filteredVariables;
- (id)filteredWorkflows;
- (id)initWithWorkflowNames:(id)arg1 variableProvider:(id)arg2 allowedVariableTypes:(id)arg3;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadSearchResults;
- (id)selectedVariable;
- (id)selectedWorkflowName;
- (void)setDelegate:(id)arg1;
- (void)setFilteredVariables:(id)arg1;
- (void)setFilteredWorkflows:(id)arg1;
- (void)setSelectedVariable:(id)arg1;
- (void)setSelectedWorkflowName:(id)arg1;
- (void)setVariables:(id)arg1;
- (void)setWorkflows:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)variableProvider;
- (id)variables;
- (id)workflowIconForWorkflow:(id)arg1;
- (id)workflowNames;
- (id)workflows;

@end
