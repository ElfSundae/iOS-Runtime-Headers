/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinDistributor : NSObject <BBObserverDelegate, BLTBulletinDistributorSubscriberDeviceDelegate, BLTCompanionServer, NSXPCListenerDelegate> {
    BLTAttachmentHashCache * _attachmentHashCache;
    BBObserver * _bbObserver;
    BLTBulletinFetcher * _bulletinFetcher;
    NSMutableSet * _bulletinIDsWaitingOnGizmoAdd;
    NSMutableDictionary * _bulletins;
    BLTClientReplyTimeoutManager * _clientReplyTimeoutManager;
    BLTRemoteGizmoClient * _gizmoConnection;
    NSMutableSet * _lockScreenFeed;
    NSMutableSet * _noticesFeed;
    NSMutableDictionary * _pendingBulletinUpdates;
    BLTPingSubscriberManager * _pingSubscriberManager;
    BLTSectionConfiguration * _sectionConfiguration;
    BLTSettingSync * _settingSync;
    bool  _standaloneTestModeEnabled;
    NSDate * _startupTime;
    BLTUserNotificationList * _userNotificationList;
    BLTWatchKitAppList * _watchKitAppList;
}

@property (nonatomic, retain) BLTAttachmentHashCache *attachmentHashCache;
@property (nonatomic, retain) BBObserver *bbObserver;
@property (nonatomic, retain) BLTBulletinFetcher *bulletinFetcher;
@property (nonatomic, retain) NSMutableSet *bulletinIDsWaitingOnGizmoAdd;
@property (nonatomic, retain) NSMutableDictionary *bulletins;
@property (nonatomic, retain) BLTClientReplyTimeoutManager *clientReplyTimeoutManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BLTRemoteGizmoClient *gizmoConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStandaloneTestModeEnabled;
@property (nonatomic, retain) NSMutableSet *lockScreenFeed;
@property (nonatomic, retain) NSMutableSet *noticesFeed;
@property (nonatomic, retain) NSMutableDictionary *pendingBulletinUpdates;
@property (nonatomic, retain) BLTPingSubscriberManager *pingSubscriberManager;
@property (nonatomic, retain) BLTSectionConfiguration *sectionConfiguration;
@property (nonatomic, retain) BLTSettingSync *settingSync;
@property (nonatomic) bool standaloneTestModeEnabled;
@property (nonatomic, retain) NSDate *startupTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) BLTUserNotificationList *userNotificationList;
@property (nonatomic, retain) BLTWatchKitAppList *watchKitAppList;

+ (id)sharedDistributor;

- (void).cxx_destruct;
- (void)_addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(bool)arg6 completion:(id /* block */)arg7;
- (void)_attachAttachment:(id)arg1 attachmentType:(long long)arg2 toBulletin:(id)arg3;
- (id)_bulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (bool)_enqueuBulletinUpdate:(unsigned long long)arg1 bulletin:(id)arg2 feed:(unsigned long long)arg3;
- (void)_handleAddBulletin:(id)arg1 feed:(unsigned long long)arg2 shouldPlayLightsAndSirens:(bool)arg3 performedWithSuccess:(bool)arg4 sendAttemptTime:(id)arg5 connectionStatus:(unsigned long long)arg6 isGizmoReady:(bool)arg7 shouldSendReplyIfNeeded:(bool)arg8 replyToken:(id)arg9;
- (void)_handleDidPlayLightsAndSirens:(bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 finalReply:(bool)arg4 replyToken:(id)arg5;
- (void)_handleDidPlayLightsAndSirens:(bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 fromGizmo:(bool)arg6 finalReply:(bool)arg7 replyToken:(id)arg8;
- (void)_handleInitialSyncStateCompleteChanged:(id)arg1;
- (void)_handleSyncStateChanged:(id)arg1;
- (unsigned long long)_nanoPresentableFeedFromPhoneFeed:(unsigned long long)arg1;
- (void)_notifyGizmoOfBulletin:(id)arg1 forFeed:(unsigned long long)arg2 updateType:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 shouldSendReplyIfNeeded:(bool)arg5 attachment:(id)arg6 attachmentType:(long long)arg7 isCriticalBulletin:(bool)arg8 replyToken:(id)arg9;
- (void)_notifyGizmoOfCancelBulletin:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 withBulletinDate:(id)arg4;
- (id)_obsoletionDateRelativeToNow;
- (void)_performModifyBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)_performPendingBulletinUpdatesForBulletinID:(id)arg1;
- (void)_performRemoveBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)_performSync;
- (void)_pingSubscriberWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)_postWillSendBulletinToGizmoNotificationForBulletin:(id)arg1;
- (void)_reloadBulletinsWithCompletion:(id /* block */)arg1;
- (void)_rememberBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)_removeTranscodedAttachmentIfNeededForBulletin:(id)arg1;
- (id)_replyTokenForSectionID:(id)arg1 publisherMatchID:(id)arg2;
- (void)_sendCurrentBulletinIdentifiers;
- (void)_sendCurrentBulletinList;
- (void)_sendPBBulletin:(id)arg1 forBulletin:(id)arg2 feed:(unsigned long long)arg3 updateType:(unsigned long long)arg4 playLightsAndSirens:(bool)arg5 shouldSendReplyIfNeeded:(bool)arg6 completion:(id /* block */)arg7;
- (void)_setupBBObserver;
- (void)_startBulletinListening;
- (bool)_willNanoPresent:(unsigned long long)arg1;
- (bool)_willNanoPresent:(unsigned long long)arg1 forBulletin:(id)arg2 feed:(unsigned long long)arg3;
- (id)attachmentHashCache;
- (id)bbObserver;
- (id)bulletinFetcher;
- (id)bulletinIDsWaitingOnGizmoAdd;
- (id)bulletins;
- (void)clearSectionInfoSentCache;
- (id)clientReplyTimeoutManager;
- (void)dealloc;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 completion:(id /* block */)arg4;
- (id)gizmoConnection;
- (void)handleAction:(id)arg1;
- (void)handleDidPlayLightsAndSirens:(bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 replyToken:(id)arg6;
- (id)init;
- (bool)isStandaloneTestModeEnabled;
- (id)lockScreenFeed;
- (id)noticesFeed;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 attachment:(id)arg5 attachmentType:(long long)arg6 alwaysSend:(bool)arg7 withReply:(id /* block */)arg8;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 withReply:(id /* block */)arg5;
- (void)observer:(id)arg1 composedImageFromThumbnailData:(id)arg2 forAttachment:(id)arg3 bulletin:(id)arg4 completionHandler:(id /* block */)arg5;
- (struct CGSize { double x1; double x2; })observer:(id)arg1 composedImageSizeForAttachment:(id)arg2 bulletin:(id)arg3 thumbnailSize:(struct CGSize { double x1; double x2; })arg4;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 prepareAttachment:(id)arg2 beforeDeliveringBulletin:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachment:(id)arg2 bulletin:(id)arg3;
- (bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (bool)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
- (id)originalSettings;
- (id)overriddenSettings;
- (id)pendingBulletinUpdates;
- (id)pingSubscriberManager;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)removeSectionID:(id)arg1;
- (id)sectionConfiguration;
- (void)sendAllSectionInfoWithSpool:(bool)arg1 completion:(id /* block */)arg2;
- (void)sendBulletinSummary:(id)arg1;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)setAttachmentHashCache:(id)arg1;
- (void)setBbObserver:(id)arg1;
- (void)setBulletinFetcher:(id)arg1;
- (void)setBulletinIDsWaitingOnGizmoAdd:(id)arg1;
- (void)setBulletins:(id)arg1;
- (void)setClientReplyTimeoutManager:(id)arg1;
- (void)setGizmoConnection:(id)arg1;
- (void)setLockScreenFeed:(id)arg1;
- (void)setNoticesFeed:(id)arg1;
- (void)setPendingBulletinUpdates:(id)arg1;
- (void)setPingSubscriberManager:(id)arg1;
- (void)setReplyBlock:(id /* block */)arg1 forSection:(id)arg2 bulletin:(id)arg3 publicationDate:(id)arg4 replyToken:(id)arg5;
- (void)setSectionConfiguration:(id)arg1;
- (void)setSettingSync:(id)arg1;
- (void)setStandaloneTestModeEnabled:(bool)arg1;
- (void)setStartupTime:(id)arg1;
- (void)setUserNotificationList:(id)arg1;
- (void)setWatchKitAppList:(id)arg1;
- (id)settingOverrides;
- (id)settingSync;
- (bool)shouldSuppressLightsAndSirensNow;
- (void)spoolSectionInfoWithCompletion:(id /* block */)arg1;
- (bool)standaloneTestModeEnabled;
- (id)startupTime;
- (id)userNotificationList;
- (id)watchKitAppList;
- (void)willSendLightsAndSirensWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 inPhoneSection:(id)arg3 systemApp:(bool)arg4 completion:(id /* block */)arg5;

@end
