/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUserNotificationTopicServiceListModule : HFItemModule {
    HMHome * _home;
    HFUserNotificationServiceTopic * _topic;
    struct HFTransformItemProvider { Class x1; } * _transformCameraItemProvider;
    struct HFTransformItemProvider { Class x1; } * _transformServiceItemProvider;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFUserNotificationServiceTopic *topic;
@property (nonatomic, readonly) HFTransformItemProvider *transformCameraItemProvider;
@property (nonatomic, readonly) HFTransformItemProvider *transformServiceItemProvider;

+ (id)_createTransformItemForItem:(id)arg1 notificationSettingsProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 topic:(id)arg3;
- (id)itemProviders;
- (id)serviceLikeItemForItem:(id)arg1;
- (id)topic;
- (struct HFTransformItemProvider { Class x1; }*)transformCameraItemProvider;
- (struct HFTransformItemProvider { Class x1; }*)transformServiceItemProvider;

@end
