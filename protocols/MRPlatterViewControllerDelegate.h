/* Generated by RuntimeBrowser.
 */

@protocol MRPlatterViewControllerDelegate <NSObject>

@optional

- (void)dismissPlatterViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: MRPlatterViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)platterViewController:(MRPlatterViewController *)arg1 didPickRoute:(MPAVRoute *)arg2;
- (void)platterViewController:(MRPlatterViewController *)arg1 didReceiveInteractionEvent:(id)arg2;
- (void)platterViewController:(MRPlatterViewController *)arg1 didToggleRoutingPicker:(bool)arg2;
- (void)platterViewController:(MRPlatterViewController *)arg1 homeGestureDismisalAllowedDidChange:(bool)arg2;
- (UIView *)platterViewController:(MRPlatterViewController *)arg1 presentingViewForPresentedViewController:(UIViewController *)arg2;
- (void)platterViewController:(MRPlatterViewController *)arg1 shouldDisplayPlatterDidChange:(bool)arg2;
- (void)platterViewController:(MRPlatterViewController *)arg1 willToggleRoutingPicker:(bool)arg2;
- (bool)shouldPresentUsingViewServicePlatterViewController:(MRPlatterViewController *)arg1;

@end
