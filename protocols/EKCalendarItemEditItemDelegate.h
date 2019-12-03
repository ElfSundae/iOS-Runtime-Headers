/* Generated by RuntimeBrowser.
 */

@protocol EKCalendarItemEditItemDelegate <NSObject>

@required

- (NSString *)defaultAlertTitleForEditItem:(EKCalendarItemEditItem *)arg1;

@optional

- (UITableViewCell *)cellWithReuseIdentifier:(NSString *)arg1 forEditItem:(EKCalendarItemEditItem *)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 didEndDatePickingAnimated:(bool)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 didSaveFromDetailViewController:(bool)arg2;
- (void)editItem:(void *)arg1 performActionsOnCellAtSubitem:(void *)arg2 actions:(void *)arg3; // needs 3 arg types, found 8: EKCalendarItemEditItem *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UITableViewCell *, void*
- (void)editItem:(EKCalendarItemEditItem *)arg1 textViewShouldReturn:(UIView *)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsDoneButtonDisabled:(bool)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsKeyboardPinned:(bool)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsRowInsertions:(NSIndexSet *)arg2 rowDeletions:(NSIndexSet *)arg3;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsRowInsertions:(NSIndexSet *)arg2 rowDeletions:(NSIndexSet *)arg3 rowReloads:(NSIndexSet *)arg4;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsRowReload:(NSIndexPath *)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 wantsRowsScrolledToVisible:(NSIndexSet *)arg2;
- (void)editItem:(EKCalendarItemEditItem *)arg1 willBeginDatePickingWithDate:(NSDate *)arg2 action:(SEL)arg3 animated:(bool)arg4 forSubitem:(unsigned long long)arg5;
- (void)editItemDidEndEditing:(EKCalendarItemEditItem *)arg1;
- (void)editItemDidStartEditing:(EKCalendarItemEditItem *)arg1;
- (void)editItemRequiresHeightChange:(EKCalendarItemEditItem *)arg1;
- (void)editItemRequiresPopoverSizeUpdate:(EKCalendarItemEditItem *)arg1;
- (void)editItemTextChanged:(EKCalendarItemEditItem *)arg1;
- (void)editItemVisibilityChanged:(EKCalendarItemEditItem *)arg1;
- (void)editItemWantsFooterTitlesToReload:(EKCalendarItemEditItem *)arg1;
- (void)editItemWantsInjectableViewControllerToBeShown:(EKCalendarItemEditItem *)arg1;
- (long long)rowNumberForEditItem:(EKCalendarItemEditItem *)arg1;
- (UIViewController *)viewControllerForEditItem:(EKCalendarItemEditItem *)arg1;

@end
