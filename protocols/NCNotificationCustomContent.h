/* Generated by RuntimeBrowser.
 */

@protocol NCNotificationCustomContent <NSObject>

@required

- (BOOL)allowManualDismiss;
- (unsigned int)customContentLocation;
- (BOOL)defaultContentHidden;
- (<NCNotificationCustomContentDelegate> *)delegate;
- (BOOL)didReceiveNotificationRequest:(NCNotificationRequest *)arg1;
- (BOOL)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2;
- (BOOL)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2 withUserInfo:(NSDictionary *)arg3;
- (void)setDelegate:(id <NCNotificationCustomContentDelegate>)arg1;
- (NSString *)title;

@optional

- (NSString *)contentExtensionIdentifier;
- (void)loadAudioAccessoryView;
- (void)loadExtension;
- (void)playAudioMessage;
- (NCNotificationAction *)presentationSourceAction;
- (void)setPresentationSourceAction:(NCNotificationAction *)arg1;

@end
