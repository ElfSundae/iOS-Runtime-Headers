/* Generated by RuntimeBrowser.
 */

@protocol _UNNotificationExtensionHostDelegate <NSObject>

@required

- (void)notificationHost:(_UNNotificationExtensionHostViewController *)arg1 extensionDidCompleteResponse:(UNNotificationResponse *)arg2 withOption:(unsigned long long)arg3;
- (void)notificationHostExtension:(_UNNotificationExtensionHostViewController *)arg1 setTitle:(NSString *)arg2;
- (void)notificationHostExtension:(_UNNotificationExtensionHostViewController *)arg1 setUserNotificationActions:(NSArray *)arg2;
- (void)notificationHostExtensionDidUpdateControls:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtensionMediaPlayingDidPause:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtensionMediaPlayingDidStart:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtensionRequestsDefaultAction:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtensionRequestsDismiss:(_UNNotificationExtensionHostViewController *)arg1;

@end
