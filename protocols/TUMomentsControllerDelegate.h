/* Generated by RuntimeBrowser.
 */

@protocol TUMomentsControllerDelegate <NSObject>

@optional

- (void)momentsController:(TUMomentsController *)arg1 didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg2;
- (void)momentsController:(TUMomentsController *)arg1 didUpdateCapabilities:(TUMomentsCapabilities *)arg2 forProvider:(TUMomentsProvider *)arg3;
- (void)momentsController:(TUMomentsController *)arg1 didUpdateCapabilities:(TUMomentsCapabilities *)arg2 forProvider:(TUMomentsProvider *)arg3;
- (void)momentsController:(TUMomentsController *)arg1 willCaptureRemoteRequestFromIdentifier:(NSString *)arg2;

@end
