/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIDSMessageDispatcher : HMMessageDispatcher {
    NSMutableDictionary *_activeClientSecureSessions;
    NSMutableDictionary *_activeServerSecureSessions;
    HMDAdminEnforcementMessageFilter *_adminMsgFilter;
    NSMutableDictionary *_currentHomeConfigurations;
    HMDHomeManager *_homeManager;
    HMDIdentityRegistry *_identityRegistry;
    HMDIDSMessageTransport *_idsProxyTransport;
    HMDMessageFilterChain *_msgFilterChain;
    HMMessageDispatcher *_notificationDispatcher;
    HMDNotificationRelay *_notificationRelay;
    HMMessageDispatcher *_recvDispatcher;
    NSMutableDictionary *_remoteGateways;
    HMDSecureSessionNotifications *_sessionNotifications;
}

@property (getter=isAccountActive, nonatomic, readonly) BOOL accountActive;
@property (nonatomic, retain) NSMutableDictionary *activeClientSecureSessions;
@property (nonatomic, retain) NSMutableDictionary *activeServerSecureSessions;
@property (nonatomic, retain) HMDAdminEnforcementMessageFilter *adminMsgFilter;
@property (nonatomic, retain) NSMutableDictionary *currentHomeConfigurations;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) HMDIdentityRegistry *identityRegistry;
@property (nonatomic) HMDIDSMessageTransport *idsProxyTransport;
@property (nonatomic, retain) HMDMessageFilterChain *msgFilterChain;
@property (nonatomic, retain) HMMessageDispatcher *notificationDispatcher;
@property (nonatomic, retain) HMDNotificationRelay *notificationRelay;
@property (nonatomic, readonly) NSArray *pairedWatchDevices;
@property (nonatomic, readonly) NSArray *reachableCompanionDevices;
@property (nonatomic, readonly) NSArray *reachableWatchDevices;
@property (nonatomic, retain) HMMessageDispatcher *recvDispatcher;
@property (nonatomic, retain) NSMutableDictionary *remoteGateways;
@property (nonatomic, readonly) NSArray *residentDevices;
@property (nonatomic, retain) HMDSecureSessionNotifications *sessionNotifications;
@property (nonatomic, readonly) NSArray *transientDevices;

+ (BOOL)isWhitelistedLocalMessage:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_checkAuthorizationForMessage:(id)arg1 errorReason:(id*)arg2;
- (BOOL)_checkTransportProtocol;
- (void)_handleElectDeviceForIDSSession:(id)arg1;
- (void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)_handleInternalIDSMessage:(id)arg1 fromID:(id)arg2;
- (void)_handleSecureClientMessage:(id)arg1 fromID:(id)arg2;
- (void)_handleSecureServerMessage:(id)arg1 fromID:(id)arg2;
- (BOOL)_haveAllCapabilities:(id)arg1;
- (id)_pairedCompanionDevices;
- (id)_pairedWatchDevices;
- (id)_reachableCompanionDevices;
- (id)_reachableWatchDevices;
- (void)_sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)_sendSecureMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)_setRemoteAccessPeer:(id)arg1 forHome:(id)arg2 sendNotification:(BOOL)arg3;
- (BOOL)_watchCompanionCommunication:(id)arg1;
- (id)activeClientSecureSessions;
- (id)activeServerSecureSessions;
- (id)adminMsgFilter;
- (void)configureHomeManager:(id)arg1;
- (void)configureNotificationDispatcher:(id)arg1;
- (id)currentHomeConfigurations;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)disableRemoteSessionForAddresses:(id)arg1;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (id)homeManager;
- (id)identityRegistry;
- (id)idsProxyTransport;
- (id)initWithIDSTransport:(id)arg1 idsProxyTransport:(id)arg2 messageFilterChain:(id)arg3 identityRegistry:(id)arg4 notificationRelayDispatcher:(id)arg5;
- (BOOL)isAccountActive;
- (id)msgFilterChain;
- (id)notificationDispatcher;
- (id)notificationRelay;
- (id)pairedCompanionDevices;
- (id)pairedWatchDevices;
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;
- (id)reachableCompanionDevices;
- (id)reachableWatchDevices;
- (id)recvDispatcher;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHomeWithUUID:(id)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id /* block */)arg3;
- (id)remoteGateways;
- (void)removeHome:(id)arg1;
- (id)residentDevices;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(id /* block */)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(id /* block */)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (id)sessionNotifications;
- (void)setActiveClientSecureSessions:(id)arg1;
- (void)setActiveServerSecureSessions:(id)arg1;
- (void)setAdminMsgFilter:(id)arg1;
- (void)setCurrentHomeConfigurations:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setIdentityRegistry:(id)arg1;
- (void)setIdsProxyTransport:(id)arg1;
- (void)setMsgFilterChain:(id)arg1;
- (void)setNotificationDispatcher:(id)arg1;
- (void)setNotificationRelay:(id)arg1;
- (void)setRecvDispatcher:(id)arg1;
- (void)setRemoteAccessPeer:(id)arg1 forHome:(id)arg2;
- (void)setRemoteGateways:(id)arg1;
- (void)setSessionNotifications:(id)arg1;
- (id)transientDevices;
- (void)updateHome:(id)arg1 configurationVersion:(int)arg2;
- (void)updateLocalAdministratorName;

@end
