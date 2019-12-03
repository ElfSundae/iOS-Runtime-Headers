/* Generated by RuntimeBrowser.
 */

@protocol NCNotificationListViewDataSource <NSObject>

@required

- (double)notificationListView:(NCNotificationListView *)arg1 heightForItemAtIndex:(unsigned long long)arg2;
- (UIView *)notificationListView:(NCNotificationListView *)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (bool)notificationListViewIsGroup:(NCNotificationListView *)arg1;
- (unsigned long long)notificationListViewNumberOfItems:(NCNotificationListView *)arg1;

@optional

- (UIView *)footerViewForNotificationList:(NCNotificationListView *)arg1;
- (double)footerViewHeightForNotificationList:(NCNotificationListView *)arg1;
- (UIView *)headerViewForNotificationList:(NCNotificationListView *)arg1;
- (double)headerViewHeightForNotificationList:(NCNotificationListView *)arg1;
- (void)recycleView:(UIView *)arg1;

@end
