/* Generated by RuntimeBrowser.
 */

@protocol EKEditItemViewControllerDelegate <NSObject>

@required

- (void)editItemViewController:(EKEditItemViewController *)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)editItemViewControllerShouldShowDetachAlert;

@optional

- (BOOL)editItemViewControllerCommit:(EKEditItemViewController *)arg1;
- (void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1;

@end
