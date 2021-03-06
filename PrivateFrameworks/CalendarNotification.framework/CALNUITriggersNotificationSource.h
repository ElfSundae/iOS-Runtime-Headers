/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNUITriggersNotificationSource : NSObject <CALNNotificationSource> {
    CALNCalendarResourceChangedNotificationSource * _calendarResourceChangedNotificationSource;
    CALNEventCanceledNotificationSource * _eventCanceledNotificationSource;
    CALNEventInvitationNotificationSource * _eventInvitationNotificationSource;
    CALNEventInvitationResponseNotificationSource * _eventInvitationResponseNotificationSource;
    <EKEventStoreProvider> * _eventStoreProvider;
    <CALNNotificationManager> * _notificationManager;
    CALNSharedCalendarInvitationNotificationSource * _sharedCalendarInvitationNotificationSource;
    CALNSharedCalendarInvitationResponseNotificationSource * _sharedCalendarInvitationResponseNotificationSource;
    CALNTriggeredEventNotificationSource * _triggeredEventNotificationSource;
}

@property (nonatomic, readonly) CALNCalendarResourceChangedNotificationSource *calendarResourceChangedNotificationSource;
@property (nonatomic, readonly) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CALNEventCanceledNotificationSource *eventCanceledNotificationSource;
@property (nonatomic, readonly) CALNEventInvitationNotificationSource *eventInvitationNotificationSource;
@property (nonatomic, readonly) CALNEventInvitationResponseNotificationSource *eventInvitationResponseNotificationSource;
@property (nonatomic, readonly) <EKEventStoreProvider> *eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationManager;
@property (nonatomic, readonly) CALNSharedCalendarInvitationNotificationSource *sharedCalendarInvitationNotificationSource;
@property (nonatomic, readonly) CALNSharedCalendarInvitationResponseNotificationSource *sharedCalendarInvitationResponseNotificationSource;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CALNTriggeredEventNotificationSource *triggeredEventNotificationSource;

+ (id)_launchURL;

- (void).cxx_destruct;
- (id)_fakeAttendeeRepliedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeAttendeeRepliedNotificationInfoWithDictionary:(id)arg1;
- (id)_fakeCalendarResourceChangedNotificationInfoWithDictionary:(id)arg1 sourceClientIdentifier:(id)arg2 notificationType:(long long)arg3 resourceChangeType:(unsigned int)arg4;
- (id)_fakeEventCanceledNotificationInfoWithDictionary:(id)arg1;
- (id)_fakeEventInvitationNotificationContentWithDictionary:(id)arg1;
- (id)_fakeInvitationNotificationInfoWithDictionary:(id)arg1 type:(long long)arg2 sourceClientIdentifier:(id)arg3;
- (id)_fakeInvitationNotificationWithDictionary:(id)arg1 type:(long long)arg2;
- (id)_fakeInviteCanceledNotificationContentWithDictionary:(id)arg1;
- (id)_fakeInviteModifiedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeNextEventNotificationContentWithSourceClientIdentifier:(id)arg1;
- (id)_fakeNextEventNotificationInfoNextEvent:(id*)arg1;
- (id)_fakeSharedCalendarEventAddedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarEventDeletedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarEventUpdatedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarInvitationNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarInvitationNotificationInfoWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarInviteReplyNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarInviteReplyNotificationInfoWithDictionary:(id)arg1;
- (id)_fakeTriggeredEventNotificationContentWithSourceClientIdentifier:(id)arg1;
- (id)calendarResourceChangedNotificationSource;
- (id)categories;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (id)eventCanceledNotificationSource;
- (id)eventInvitationNotificationSource;
- (id)eventInvitationResponseNotificationSource;
- (id)eventStoreProvider;
- (id)initWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 triggeredEventNotificationSource:(id)arg3 eventInvitationNotificationSource:(id)arg4 eventInvitationResponseNotificationSource:(id)arg5 eventCanceledNotificationSource:(id)arg6 sharedCalendarInvitationNotificationSource:(id)arg7 sharedCalendarInvitationResponseNotificationSource:(id)arg8 calendarResourceChangedNotificationSource:(id)arg9;
- (id)notificationManager;
- (void)refreshNotifications:(id)arg1;
- (id)sharedCalendarInvitationNotificationSource;
- (id)sharedCalendarInvitationResponseNotificationSource;
- (id)sourceIdentifier;
- (id)triggeredEventNotificationSource;

@end
