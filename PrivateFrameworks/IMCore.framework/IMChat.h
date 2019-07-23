/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMChat : IMItemsController <IMSendProgressDelegate> {
    IMAccount *_account;
    NSArray *_attachments;
    <IMChatItemRules> *_chatItemRules;
    IMScheduledUpdater *_chatItemsUpdater;
    NSMutableDictionary *_chatProperties;
    void *_context;
    NSString *_currentLocationGUID;
    unsigned int _dbFailedCount;
    unsigned int _dbUnreadCount;
    unsigned int _didSendAFinishedMessage;
    NSString *_displayName;
    BOOL _downgradeState;
    IMScheduledUpdater *_downgradeStateUpdater;
    unsigned int _forceMMS;
    NSArray *_frequentReplies;
    NSString *_groupID;
    NSString *_guid;
    NSMutableSet *_guids;
    unsigned int _hasBeenConfigured;
    BOOL _hasHadSuccessfulQuery;
    unsigned int _hasPendingMarkRead;
    BOOL _hasRefreshedServiceForSending;
    NSString *_identifier;
    unsigned int _ignoreDowngradeStatusUpdates;
    IMMessage *_invitationForPendingParticipants;
    unsigned int _isFiltered;
    unsigned int _isFirstMessageInvitation;
    unsigned int _isRecording;
    unsigned int _isUpdatingChatItems;
    int _joinState;
    NSString *_lastAddressedHandleID;
    double _latestTypingIndicatorTimeInterval;
    NSMutableArray *_messagesPendingJoin;
    NSMutableDictionary *_participantProperties;
    NSMutableDictionary *_participantStates;
    NSArray *_participants;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    IMSendProgress *_sendProgress;
    unsigned char _style;
    IMTimingCollection *_timingCollection;
    NSString *_typingGUID;
    unsigned int _wasInvitationHandled;
}

@property (setter=_setGUIDs:, nonatomic, retain) NSMutableSet *_guids;
@property (nonatomic, readonly) BOOL _shouldRegisterChat;
@property (nonatomic, readonly) IMAccount *account;
@property (nonatomic, readonly) BOOL allRecipientsFollowingLocation;
@property (nonatomic, readonly) BOOL allRecipientsSharingLocation;
@property (nonatomic, readonly, retain) NSSet *allSiblingFMFHandles;
@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, readonly) BOOL canHaveMultipleParticipants;
@property (nonatomic, readonly) BOOL canLeaveChat;
@property (nonatomic, readonly) NSString *chatIdentifier;
@property (nonatomic, readonly, retain) IMChatRegistry *chatRegistry;
@property (nonatomic, readonly) unsigned char chatStyle;
@property (nonatomic) void*contextInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSString *displayName;
@property (nonatomic, readonly, retain) NSSet *fmfHandles;
@property (nonatomic) BOOL forceMMS;
@property (nonatomic, retain) NSArray *frequentReplies;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic) BOOL hasHadSuccessfulQuery;
@property (nonatomic, readonly) BOOL hasMoreMessagesToLoad;
@property (nonatomic, readonly) BOOL hasRecipientsFollowingLocation;
@property (nonatomic, readonly) BOOL hasRecipientsSharingLocation;
@property (nonatomic, readonly) BOOL hasSiblingRecipientsSharingLocation;
@property (nonatomic, readonly) BOOL hasUnhandledInvitation;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) IMMessage *invitationForPendingParticipants;
@property (nonatomic) BOOL isFiltered;
@property (nonatomic, readonly) int joinState;
@property (nonatomic, readonly, retain) NSString *lastAddressedHandleID;
@property (nonatomic, readonly) IMMessage *lastFinishedMessage;
@property (nonatomic, readonly, retain) NSDate *lastFinishedMessageDate;
@property (nonatomic, readonly) long long lastFinishedMessageID;
@property (nonatomic, readonly) IMMessage *lastIncomingFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingFinishedMessageWithTextContent;
@property (nonatomic, readonly) IMMessage *lastIncomingMessage;
@property (nonatomic, readonly) IMMessage *lastMessage;
@property (nonatomic) double latestTypingIndicatorTimeInterval;
@property (nonatomic, readonly) NSString *localTypingMessageGUID;
@property (nonatomic) BOOL localUserIsRecording;
@property (nonatomic) BOOL localUserIsTyping;
@property (nonatomic, readonly) unsigned int messageCount;
@property (nonatomic, readonly) unsigned int messageFailureCount;
@property (nonatomic) unsigned int numberOfMessagesToKeepLoaded;
@property (nonatomic, readonly) unsigned int overallChatStatus;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, readonly, retain) NSString *persistentID;
@property (nonatomic, retain) IMHandle *recipient;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) NSString *roomNameWithoutSuffix;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL suppressAccountRetargetingForGroupConversation;
@property (nonatomic, readonly) unsigned int unreadMessageCount;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (void)_initializeFMF;
+ (Class)chatItemRulesClass;
+ (void)setChatItemRulesClass:(Class)arg1;

- (void)__clearReadMessageCache;
- (void)_accountControllerUpdated:(id)arg1;
- (BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)_accountLoggedOut:(id)arg1;
- (void)_addParticipants:(id)arg1 withState:(unsigned int)arg2;
- (void)_calculateDowngradeState;
- (void)_calculateDowngradeStateTimerFired;
- (BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (void)_clearCachedIdentifier;
- (void)_clearDowngradeMarkers;
- (void)_clearUnreadCount;
- (void)_configureLocationShareItem:(id)arg1;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_delayedInvalidateDowngradeState;
- (void)_endTiming;
- (id)_guids;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_handleIncomingCommand:(id)arg1;
- (BOOL)_handleIncomingItem:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (BOOL)_hasCommunicatedOnService:(id)arg1;
- (id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7 isFiltered:(BOOL)arg8 hasHadSuccessfulQuery:(BOOL)arg9;
- (id)_initWithItems:(id)arg1;
- (void)_initialize;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned int)arg5;
- (void)_invalidateDowngradeState;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)_invitePendingParticipants;
- (BOOL)_isDuplicate:(id)arg1;
- (void)_itemsDidChange:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (id)_pendingParticipants;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(id /* block */)arg3;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(BOOL)arg3;
- (id)_previousAccountForService:(id)arg1;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5 isFiltered:(BOOL)arg6 hasHadSuccessfulQuery:(BOOL)arg7;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)_replaceStaleChatItems;
- (BOOL)_sanityCheckAccounts;
- (void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1;
- (void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3;
- (void)_setAccount:(id)arg1;
- (void)_setAccount:(id)arg1 locally:(BOOL)arg2;
- (void)_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1;
- (void)_setAttachments:(id)arg1;
- (void)_setChatProperties:(id)arg1;
- (void)_setDBFailedCount:(unsigned int)arg1;
- (void)_setDBUnreadCount:(unsigned int)arg1;
- (void)_setDisplayName:(id)arg1;
- (void)_setGUIDs:(id)arg1;
- (void)_setJoinState:(int)arg1;
- (void)_setJoinState:(int)arg1 quietly:(BOOL)arg2;
- (void)_setLocalUserIsTyping:(BOOL)arg1 recording:(BOOL)arg2 suppliedGUID:(id)arg3;
- (void)_setParticipantState:(unsigned int)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3;
- (void)_setParticipantState:(unsigned int)arg1 forHandles:(id)arg2 quietly:(BOOL)arg3;
- (void)_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (void)_setTimerForReadMessageCache;
- (void)_setupObservation;
- (BOOL)_shouldAnnouncePeopleJoin;
- (BOOL)_shouldRegisterChat;
- (BOOL)_shouldSendCancelTypingIndicator;
- (void)_showErrorMessage:(id)arg1;
- (void)_startTiming:(id)arg1;
- (void)_targetToService:(id)arg1 newComposition:(BOOL)arg2;
- (id)_timingCollection;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_updateChatItems;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id /* block */)arg2;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id /* block */)arg2 shouldPost:(BOOL)arg3;
- (void)_updateDisplayName:(id)arg1;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (void)_updateLocationShareItemsForSender:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)acceptInvitation;
- (id)account;
- (void)addPendingParticipants:(id)arg1;
- (id)allChatProperties;
- (id)allPropertiesOfParticipant:(id)arg1;
- (BOOL)allRecipientsFollowingLocation;
- (BOOL)allRecipientsSharingLocation;
- (id)allSiblingFMFHandles;
- (id)attachments;
- (BOOL)authorizedToSendCurrentLocationMessage;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (BOOL)canAddParticipant:(id)arg1;
- (BOOL)canAddParticipants:(id)arg1;
- (BOOL)canHaveMultipleParticipants;
- (BOOL)canLeaveChat;
- (BOOL)canSendCurrentLocationMessage;
- (BOOL)canSendMessage:(id)arg1;
- (BOOL)canSendTransfer:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (id)chatIdentifier;
- (id)chatItems;
- (id)chatItemsForItems:(id)arg1;
- (id)chatRegistry;
- (unsigned char)chatStyle;
- (void)clear;
- (void*)contextInfo;
- (void)dealloc;
- (void)declineInvitation;
- (BOOL)deleteAllHistory;
- (void)deleteChatItems:(id)arg1;
- (void)deleteTransfers:(id)arg1;
- (id)description;
- (void)didUnregisterFromRegistry:(id)arg1;
- (id)displayName;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (id)fmfHandles;
- (BOOL)forceMMS;
- (id)frequentReplies;
- (id)groupID;
- (id)guid;
- (BOOL)hasHadSuccessfulQuery;
- (BOOL)hasMoreMessagesToLoad;
- (BOOL)hasRecipientsFollowingLocation;
- (BOOL)hasRecipientsSharingLocation;
- (BOOL)hasSentMessageWithGUID:(id)arg1;
- (BOOL)hasSiblingRecipientsSharingLocation;
- (BOOL)hasUnhandledInvitation;
- (id)init;
- (id)invitationForPendingParticipants;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (BOOL)isDowngraded;
- (BOOL)isFiltered;
- (void)join;
- (int)joinState;
- (id)lastAddressedHandleID;
- (id)lastFinishedMessage;
- (id)lastFinishedMessageDate;
- (long long)lastFinishedMessageID;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingFinishedMessageWithTextContent;
- (id)lastIncomingMessage;
- (id)lastMessage;
- (id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(int)arg1;
- (double)latestTypingIndicatorTimeInterval;
- (void)leave;
- (void)loadAttachments:(id /* block */)arg1;
- (id)loadFrequentRepliesLimit:(unsigned int)arg1 loadImmediately:(BOOL)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2 loadImmediately:(BOOL)arg3;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned int)arg3 loadImmediately:(BOOL)arg4;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned int)arg2;
- (id)loadUnreadMessagesWithLimit:(unsigned int)arg1 fallbackToMessagesUpToGUID:(id)arg2;
- (id)localTypingMessageGUID;
- (BOOL)localUserIsRecording;
- (BOOL)localUserIsTyping;
- (void)markAllLocationShareItemsAsUnactionable;
- (void)markAllMessagesAsRead;
- (void)markAsSpam;
- (void)markChatItemAsPlayed:(id)arg1;
- (void)markChatItemAsSaved:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)markMessagesAsRead:(id)arg1;
- (unsigned int)messageCount;
- (unsigned int)messageFailureCount;
- (id)messageForGUID:(id)arg1;
- (unsigned int)numberOfMessagesToKeepLoaded;
- (unsigned int)overallChatStatus;
- (id)participants;
- (id)participantsWithState:(unsigned int)arg1;
- (id)persistentID;
- (id)recipient;
- (void)refreshServiceForSending;
- (void)remove;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (id)roomName;
- (id)roomNameWithoutSuffix;
- (void)sendCurrentLocationMessage;
- (BOOL)sendDowngradeNotificationTo:(id)arg1;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendProgress:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned int)arg4 totalCount:(unsigned int)arg5 finished:(BOOL)arg6;
- (id)sendProgressDelegate;
- (void)setContextInfo:(void*)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setForceMMS:(BOOL)arg1;
- (void)setFrequentReplies:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHasHadSuccessfulQuery:(BOOL)arg1;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (void)setIsFiltered:(BOOL)arg1;
- (void)setLatestTypingIndicatorTimeInterval:(double)arg1;
- (void)setLocalUserIsRecording:(BOOL)arg1;
- (void)setLocalUserIsTyping:(BOOL)arg1;
- (void)setNumberOfMessagesToKeepLoaded:(unsigned int)arg1;
- (void)setRecipient:(id)arg1;
- (void)setRecipient:(id)arg1 locally:(BOOL)arg2;
- (void)setRoomName:(id)arg1;
- (void)setSendProgressDelegate:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (void)shareLocationUntilDate:(id)arg1;
- (void)startTrackingParticipantLocations;
- (unsigned int)stateForParticipant:(id)arg1;
- (void)stopSharingLocation;
- (void)stopTrackingParticipantLocations;
- (BOOL)suppressAccountRetargetingForGroupConversation;
- (id)testChatItems;
- (unsigned int)unreadMessageCount;
- (void)updateChatItemsIfNeeded;
- (void)updateIsFiltered:(BOOL)arg1;
- (void)updateMessage:(id)arg1;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (id)valueForChatProperty:(id)arg1;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (BOOL)__ck_isMuted;
- (id)__ck_muteUntilDate;
- (void)__ck_saveWatermark;
- (void)__ck_setMuteUntilDate:(id)arg1;
- (void)__ck_updateWatermarkToMessageID:(long long)arg1 date:(id)arg2;
- (id)__ck_watermarkDate;
- (long long)__ck_watermarkMessageID;

@end
