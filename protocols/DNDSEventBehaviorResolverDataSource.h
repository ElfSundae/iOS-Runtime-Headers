/* Generated by RuntimeBrowser.
 */

@protocol DNDSEventBehaviorResolverDataSource <NSObject>

@required

- (DNDState *)currentStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
- (unsigned long long)currentUILockStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
- (DNDBypassSettings *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 bypassSettingsForClientIdentifier:(NSString *)arg2;

@end
