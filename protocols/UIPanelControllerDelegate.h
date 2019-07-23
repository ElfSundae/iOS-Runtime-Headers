/* Generated by RuntimeBrowser.
 */

@protocol UIPanelControllerDelegate <NSObject>

@optional

- (void)panelController:(UIPanelController *)arg1 adjustLeadingViewController:(UIViewController *)arg2 forKeyboardInfo:(NSDictionary *)arg3;
- (void)panelController:(UIPanelController *)arg1 animateTransitionToStateRequest:(UISlidingBarStateRequest *)arg2 predictedEndState:(UISlidingBarState *)arg3 predictedDuration:(double)arg4;
- (bool)panelController:(UIPanelController *)arg1 collapseOntoPrimaryViewController:(UIViewController *)arg2;
- (void)panelController:(UIPanelController *)arg1 collapsePrimaryViewController:(UIViewController *)arg2 withFallbackSecondaryViewController:(UIViewController *)arg3 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg4;
- (void)panelController:(UIPanelController *)arg1 didChangeToState:(UISlidingBarState *)arg2;
- (void)panelController:(UIPanelController *)arg1 didEndAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2;
- (UIViewController *)panelController:(UIPanelController *)arg1 separateSecondaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (void)panelController:(UIPanelController *)arg1 willBeginAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2 predictedEndState:(UISlidingBarState *)arg3 predictedDuration:(double)arg4;
- (void)panelController:(UIPanelController *)arg1 willChangeToState:(UISlidingBarState *)arg2;
- (id /* block */)panelControllerWillUpdate:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSArray *, void*, id, SEL, UIPanelController *
- (UIViewController *)primaryViewControllerForCollapsingPanelController:(UIPanelController *)arg1;
- (UIViewController *)primaryViewControllerForExpandingPanelController:(UIPanelController *)arg1;

@end
