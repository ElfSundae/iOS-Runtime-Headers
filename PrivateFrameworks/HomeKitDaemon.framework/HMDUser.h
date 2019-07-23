/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUser : HMFObject <HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    HMDAssistantAccessControl * _assistantAccessControl;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _displayName;
    HMDHome * _home;
    HAPPairingIdentity * _pairingIdentity;
    HMUserPresenceAuthorization * _presenceAuthStatus;
    unsigned long long  _privilege;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableArray * _relayAccessTokens;
    NSString * _relayIdentifier;
    bool  _remoteAccessAllowed;
    bool  _remoteGateway;
    NSString * _userID;
    NSUUID * _uuid;
}

@property (readonly, copy) HMDAccount *account;
@property (retain) HMDAssistantAccessControl *assistantAccessControl;
@property (readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (getter=isCurrentUser, nonatomic, readonly) bool currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *encodingRemoteDisplayName;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) bool isAdministrator;
@property (nonatomic, readonly) bool isOwner;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HAPPairingIdentity *pairingIdentity;
@property (nonatomic, copy) HMUserPresenceAuthorization *presenceAuthStatus;
@property (nonatomic) unsigned long long privilege;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, copy) NSString *relayIdentifier;
@property (getter=isRemoteAccessAllowed, nonatomic) bool remoteAccessAllowed;
@property (getter=isRemoteGateway, nonatomic) bool remoteGateway;
@property (readonly) bool requiresMakoSupport;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, copy) NSUUID *uuid;
@property (getter=isValid, readonly) bool valid;

+ (id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4;
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3;
+ (id)destinationWithUserID:(id)arg1;
+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;
+ (id)userWithDictionary:(id)arg1 forHomeIdentifier:(id)arg2;
+ (id)userWithName:(id)arg1 userID:(id)arg2 uuid:(id)arg3 forHomeIdentifier:(id)arg4 publicKey:(id)arg5 homeManager:(id)arg6;

- (void).cxx_destruct;
- (unsigned long long)_compatiblePrivilege;
- (void)_fixupRelayAccessTokens;
- (void)_handleAssistantAccessControlUpdate:(id)arg1;
- (void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)account;
- (void)addRelayAccessToken:(id)arg1;
- (void)addRelayAccessToken:(id)arg1 accessory:(id)arg2;
- (id)assistantAccessControl;
- (id)av_authorizedPeer;
- (id)backingStoreObjects:(long long)arg1;
- (id)clientQueue;
- (void)configureWithHome:(id)arg1;
- (bool)containsRelayAccessToken:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)dictionaryEncoding;
- (id)displayName;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (void)handleAssistantAccessControlUpdate:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1;
- (id)initWithUserID:(id)arg1 displayName:(id)arg2 forHomeIdentifier:(id)arg3 uuid:(id)arg4 pairingIdentity:(id)arg5 privilege:(unsigned long long)arg6;
- (id)initWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4 privilege:(unsigned long long)arg5;
- (bool)isAdministrator;
- (bool)isCurrentUser;
- (bool)isCurrentUserAndOwner;
- (bool)isEqual:(id)arg1;
- (bool)isOwner;
- (bool)isRemoteAccessAllowed;
- (bool)isRemoteGateway;
- (bool)isValid;
- (id)logIdentifier;
- (bool)mergeFromUser:(id)arg1 dataVersion:(long long)arg2;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)migrateAfterCloudMerge:(id /* block */)arg1;
- (void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)pairingIdentity;
- (id)pairingUsername;
- (id)presenceAuthStatus;
- (unsigned long long)privilege;
- (id)propertyQueue;
- (id)publicKey;
- (bool)refreshDisplayName;
- (void)registerForMessages;
- (id)relayAccessTokenForAccessory:(id)arg1;
- (id)relayAccessTokens;
- (id)relayIdentifier;
- (void)removeAccessoriesFromAssistantAccessControlList:(id)arg1;
- (void)removeRelayAccessToken:(id)arg1;
- (void)removeRelayAccessTokenForAccessory:(id)arg1;
- (bool)requiresMakoSupport;
- (id)residentCopy;
- (void)setAssistantAccessControl:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPairingIdentity:(id)arg1;
- (void)setPresenceAuthStatus:(id)arg1;
- (void)setPrivilege:(unsigned long long)arg1;
- (void)setRelayIdentifier:(id)arg1;
- (void)setRemoteAccessAllowed:(bool)arg1;
- (void)setRemoteGateway:(bool)arg1;
- (void)setUserID:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (bool)updateAdministrator:(bool)arg1;
- (void)updateRelayAccessTokens:(id)arg1;
- (bool)updateRemoteAccessAllowed:(bool)arg1;
- (id)userCopy;
- (id)userID;
- (id)uuid;

@end
