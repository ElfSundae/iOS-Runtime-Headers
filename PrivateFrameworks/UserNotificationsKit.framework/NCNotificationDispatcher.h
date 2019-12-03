/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationDispatcher : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate> {
    NCNotificationAlertQueue * _alertQueue;
    <NCAlertingController> * _alertingController;
    <NCNotificationDispatcherDelegate> * _delegate;
    NCNotificationDestinationsRegistry * _destinationsRegistry;
    NCLayoutLoopDetector * _layoutDetector;
    NCNotificationStore * _notificationStore;
    NSMutableDictionary * _sectionSettings;
    NSHashTable * _sourceDelegates;
}

@property (nonatomic, retain) NCNotificationAlertQueue *alertQueue;
@property (nonatomic, retain) <NCAlertingController> *alertingController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationDispatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDestinationsRegistry *destinationsRegistry;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCLayoutLoopDetector *layoutDetector;
@property (nonatomic, retain) NCNotificationStore *notificationStore;
@property (nonatomic, retain) NSMutableDictionary *sectionSettings;
@property (nonatomic, retain) NSHashTable *sourceDelegates;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearUnsafeNotification:(id)arg1;
- (void)_didPostNotificationRequest:(id)arg1;
- (void)_didRemoveNotificationRequest:(id)arg1;
- (bool)_isRegisteredDestination:(id)arg1;
- (void)_performOperationForRequestDestinations:(id)arg1 block:(id /* block */)arg2;
- (void)_registerAlertDestination:(id)arg1;
- (void)_registerDestination:(id)arg1;
- (bool)_shouldPostNotificationRequest:(id)arg1;
- (void)_willPostNotificationRequest:(id)arg1;
- (void)addDispatcherSourceDelegate:(id)arg1;
- (id)alertQueue;
- (id)alertingController;
- (id)delegate;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(id /* block */)arg2;
- (void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(bool)arg4 withParameters:(id)arg5 completion:(id /* block */)arg6;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setAllowsNotifications:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setDeliverQuietly:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(bool)arg3;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
- (id)destinationsRegistry;
- (id)init;
- (id)initWithAlertingController:(id)arg1;
- (id)layoutDetector;
- (void)modifyNotificationWithRequest:(id)arg1;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)notificationStore;
- (void)postNotificationWithRequest:(id)arg1;
- (void)registerDestination:(id)arg1;
- (void)removeDispatcherSourceDelegate:(id)arg1;
- (void)removeNotificationSectionWithIdentifier:(id)arg1;
- (id)sectionSettings;
- (void)setAlertQueue:(id)arg1;
- (void)setAlertingController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(bool)arg2;
- (void)setDestinationsRegistry:(id)arg1;
- (void)setLayoutDetector:(id)arg1;
- (void)setNotificationStore:(id)arg1;
- (void)setSectionSettings:(id)arg1;
- (void)setSourceDelegates:(id)arg1;
- (id)sourceDelegates;
- (void)unregisterDestination:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationWithRequest:(id)arg1;

@end
