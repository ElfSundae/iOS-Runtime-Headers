/* Generated by RuntimeBrowser.
 */

@protocol WFWorkflowControllerDelegate <NSObject>

@optional

- (void)workflowController:(WFWorkflowController *)arg1 actionDidRequestWorkflowExit:(WFAction *)arg2;
- (void)workflowController:(WFWorkflowController *)arg1 didFinishRunningWithError:(NSError *)arg2 cancelled:(bool)arg3;
- (void)workflowController:(WFWorkflowController *)arg1 didRunAction:(WFAction *)arg2;
- (bool)workflowController:(void *)arg1 handleUnsupportedEnvironmentForAction:(void *)arg2 currentState:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: WFWorkflowController *, WFAction *, WFWorkflowControllerState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*
- (bool)workflowController:(void *)arg1 handleUnsupportedUserInterfaceForAction:(void *)arg2 currentState:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: WFWorkflowController *, WFAction *, WFWorkflowControllerState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<WFActionParameterInputProvider> *)workflowController:(WFWorkflowController *)arg1 parameterInputProviderForAction:(WFAction *)arg2;
- (void)workflowController:(void *)arg1 prepareToRunAction:(void *)arg2 withInput:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: WFWorkflowController *, WFAction *, WFContentCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<WFUserInterface> *)workflowController:(WFWorkflowController *)arg1 userInterfaceForAction:(WFAction *)arg2;
- (void)workflowControllerWillRun:(WFWorkflowController *)arg1;

@end
