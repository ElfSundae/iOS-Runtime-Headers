/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMDaemonListener : NSObject {
    NSMutableDictionary * _contexts;
    NSMutableArray * _deferredChatMessages;
    NSMutableArray * _handlers;
    bool  _hasPendingProcessChange;
    bool  _hidingDisconnect;
    bool  _holdingChatMessages;
    NSDate * _myIdleSince;
    NSString * _myNowPlayingString;
    NSData * _myPicture;
    unsigned long long  _myStatus;
    NSString * _myStatusMessage;
    NSMutableDictionary * _persistentProperties;
    bool  _postedSetupComplete;
    NSMutableDictionary * _properties;
    NSProtocolChecker * _protocol;
    NSMutableDictionary * _services;
    bool  _setupComplete;
    unsigned long long  _vcCapabilities;
}

@property (nonatomic, readonly) NSMutableDictionary *_contexts;
@property (setter=_setHidingDisconnect:, nonatomic) bool _hidingDisconnect;
@property (nonatomic, readonly) NSArray *allServices;
@property (nonatomic, readonly) NSArray *handlers;
@property (nonatomic, readonly) bool hasPostedSetupComplete;
@property (nonatomic, readonly) bool isHoldingChatMessages;
@property (nonatomic, readonly) bool isSetupComplete;
@property (nonatomic, readonly) unsigned int myIdleTime;
@property (nonatomic, readonly) unsigned long long myStatus;
@property (nonatomic, readonly) NSString *myStatusMessage;
@property (nonatomic, readonly) NSDictionary *persistentProperties;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) bool shouldHoldChatMessages;
@property (nonatomic, readonly) unsigned long long vcCapabilities;

- (void).cxx_destruct;
- (void)_cacheValue:(id)arg1 forPersistentProperty:(id)arg2;
- (void)_cacheValue:(id)arg1 forProperty:(id)arg2;
- (id)_contexts;
- (void)_deferNotification:(id)arg1;
- (void)_deferredSetup:(id)arg1;
- (bool)_hidingDisconnect;
- (void)_noteDisconnected;
- (void)_processDeferredInvitationDictionary:(id)arg1;
- (void)_processMyStatusChanged;
- (void)_reallyProcessMyStatusChanged;
- (void)_setHidingDisconnect:(bool)arg1;
- (void)_setStamp:(id)arg1 forContext:(id)arg2;
- (id)_stampForContext:(id)arg1;
- (void)account:(id)arg1 allowListChanged:(id)arg2;
- (void)account:(id)arg1 blockIdleStatusChanged:(bool)arg2;
- (void)account:(id)arg1 blockListChanged:(id)arg2;
- (void)account:(id)arg1 blockingModeChanged:(unsigned int)arg2;
- (void)account:(id)arg1 buddyInfo:(id)arg2 commandDelivered:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 buddyInfo:(id)arg2 commandReceived:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4;
- (void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3;
- (void)account:(id)arg1 buddyPropertiesChanged:(id)arg2;
- (void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesReceived:(id)arg5;
- (void)account:(id)arg1 defaults:(id)arg2 blockList:(id)arg3 allowList:(id)arg4 blockingMode:(unsigned int)arg5 blockIdleStatus:(bool)arg6 status:(id)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned int)arg9 loginStatusMessage:(id)arg10;
- (void)account:(id)arg1 defaultsChanged:(id)arg2;
- (void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3;
- (void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3;
- (void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5;
- (void)account:(id)arg1 postedError:(id)arg2;
- (void)account:(id)arg1 status:(id)arg2 capabilities:(unsigned long long)arg3 serviceLoginStatus:(unsigned int)arg4 loginStatusMessage:(id)arg5;
- (void)account:(id)arg1 statusChanged:(id)arg2;
- (void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (void)accountRemoved:(id)arg1;
- (void)activeAccountsChanged:(id)arg1 forService:(id)arg2;
- (void)addHandler:(id)arg1;
- (id)allServices;
- (void)databaseChatSpamUpdated:(id)arg1;
- (void)databaseFull;
- (void)databaseNoLongerFull;
- (void)databaseUpdated:(id)arg1;
- (void)defaultsChanged:(id)arg1 forService:(id)arg2;
- (void)didAttemptToDisableAllDevicesResult:(bool)arg1;
- (void)didAttemptToDisableiCloudBackups:(long long)arg1 error:(id)arg2;
- (void)didAttemptToSetEnabledTo:(bool)arg1 result:(bool)arg2;
- (void)didFetchCloudKitSyncDebuggingInfo:(id)arg1;
- (void)didFetchSyncStateStats:(id)arg1;
- (void)didPerformAdditionalStorageRequiredCheckWithSuccess:(bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;
- (void)displayPinCodeForAccount:(id)arg1 pinCode:(id)arg2 deviceName:(id)arg3 deviceType:(id)arg4 phoneNumber:(id)arg5;
- (void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)fileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2;
- (void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)fileTransferHighQualityDownloadFailed:(id)arg1;
- (void)fileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)handlers;
- (bool)hasPostedSetupComplete;
- (void)holdChatMessages;
- (id)init;
- (bool)isHoldingChatMessages;
- (bool)isSetupComplete;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)myIdleTime;
- (unsigned long long)myStatus;
- (id)myStatusMessage;
- (id)persistentProperties;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)pinCodeAlertCompleted:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3 phoneNumber:(id)arg4 responseFromDevice:(bool)arg5 wasCancelled:(bool)arg6;
- (id)properties;
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)qosClassWhileServicingRequestsResponse:(unsigned int)arg1 identifier:(id)arg2;
- (void)receivedUrgentRequestForMessages:(id)arg1;
- (void)releaseHeldChatMessages;
- (void)removeHandler:(id)arg1;
- (void)returnMOCEnabledState:(unsigned long long)arg1;
- (void)service:(id)arg1 properties:(id)arg2 defaults:(id)arg3 defaultAccountSettings:(id)arg4 allAccounts:(id)arg5 activeAccounts:(id)arg6;
- (id)serviceWithName:(id)arg1;
- (void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3;
- (void)setupComplete:(bool)arg1 info:(id)arg2;
- (bool)shouldHoldChatMessages;
- (void)standaloneFileTransferRegistered:(id)arg1;
- (void)updateCloudKitState;
- (void)updateCloudKitStateWithDictionary:(id)arg1;
- (id)valueOfPersistentProperty:(id)arg1;
- (id)valueOfProperty:(id)arg1;
- (unsigned long long)vcCapabilities;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;

@end
