/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDUserContextService : NSObject <NSXPCListenerDelegate, _CDXPCEventPublisherDelegate> {
    NSMutableSet * _clients;
    NSMutableDictionary * _firedRegistrationInfos;
    NSMutableSet * _firedRegistrations;
    NSXPCListener * _listener;
    _CDXPCEventPublisher * _mdcsEventPublisher;
    NSMutableDictionary * _mdcsEventSubscribersByToken;
    _CDXPCEventPublisher * _notificationEventPublisher;
    NSMutableDictionary * _notificationEventSubscribersByClientIdentifier;
    NSMutableDictionary * _notificationEventSubscribersByToken;
    NSMutableSet * _openRegistrations;
    <_CDContextPersisting> * _persistence;
    NSMutableDictionary * _remoteDevicesByDeviceID;
    bool  _remoteDevicesHaveBeenActivated;
    _CDInMemoryUserContext * _userContext;
}

@property (nonatomic, retain) NSMutableSet *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *firedRegistrationInfos;
@property (nonatomic, retain) NSMutableSet *firedRegistrations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) _CDXPCEventPublisher *mdcsEventPublisher;
@property (nonatomic, retain) NSMutableDictionary *mdcsEventSubscribersByToken;
@property (nonatomic, retain) _CDXPCEventPublisher *notificationEventPublisher;
@property (nonatomic, retain) NSMutableDictionary *notificationEventSubscribersByClientIdentifier;
@property (nonatomic, retain) NSMutableDictionary *notificationEventSubscribersByToken;
@property (nonatomic, retain) NSMutableSet *openRegistrations;
@property (nonatomic, retain) <_CDContextPersisting> *persistence;
@property (nonatomic, readonly) NSMutableDictionary *remoteDevicesByDeviceID;
@property (nonatomic) bool remoteDevicesHaveBeenActivated;
@property (readonly) Class superclass;
@property (nonatomic, retain) _CDInMemoryUserContext *userContext;

+ (id)sharedInstanceWithPersistence:(id)arg1;
+ (id)sharedInstanceWithSharedMemoryStore:(id)arg1;

- (void).cxx_destruct;
- (void)addOpenRegistration:(id)arg1;
- (void)addProxyWithSourceDeviceUUID:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (void)clientWasInterrupted:(id)arg1;
- (id)clients;
- (void)deleteSavedData;
- (void)fetchProxySourceDeviceUUIDFromSubscriber:(id)arg1;
- (id)firedRegistrationInfos;
- (id)firedRegistrations;
- (void)informClientOfFiredRegistration:(id)arg1 info:(id)arg2;
- (id)initWithListener:(id)arg1 withPersistence:(id)arg2 withStorage:(id)arg3 withStore:(id)arg4;
- (id)initWithListener:(id)arg1 withStorage:(id)arg2 withStore:(id)arg3;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)mdcsEventPublisher;
- (id)mdcsEventSubscribersByToken;
- (id)notificationEventPublisher;
- (id)notificationEventSubscribersByClientIdentifier;
- (id)notificationEventSubscribersByToken;
- (id)obtainFiredRegistrationMatchingRegistration:(id)arg1 info:(id*)arg2;
- (id)openRegistrations;
- (id)persistence;
- (id)proxySourceDeviceUUIDForUserID:(unsigned int)arg1;
- (void)regenerateState;
- (id)remoteDevicesByDeviceID;
- (bool)remoteDevicesHaveBeenActivated;
- (void)removeOpenRegistration:(id)arg1;
- (void)removeSubscriberWithToken:(unsigned long long)arg1 streamName:(id)arg2;
- (void)removeTokenForUserID:(unsigned int)arg1;
- (void)requestActivateDevicesFromAllSubscribersWithHandler:(id /* block */)arg1;
- (void)requestActivateDevicesFromSubscriber:(id)arg1 withHandler:(id /* block */)arg2;
- (void)sendEvent:(id)arg1 toClient:(id)arg2 handler:(id /* block */)arg3;
- (void)sendEvent:(id)arg1 toClient:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)sendEvent:(id)arg1 toProxy:(id)arg2 handler:(id /* block */)arg3;
- (void)sendEvent:(id)arg1 toProxy:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)setClients:(id)arg1;
- (void)setFiredRegistrationInfos:(id)arg1;
- (void)setFiredRegistrations:(id)arg1;
- (void)setListener:(id)arg1;
- (bool)setMappingObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (void)setMdcsEventPublisher:(id)arg1;
- (void)setMdcsEventSubscribersByToken:(id)arg1;
- (void)setNotificationEventPublisher:(id)arg1;
- (void)setNotificationEventSubscribersByClientIdentifier:(id)arg1;
- (void)setNotificationEventSubscribersByToken:(id)arg1;
- (void)setOpenRegistrations:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setProxySourceDeviceUUID:(id)arg1 forUserID:(unsigned int)arg2;
- (void)setRemoteDevicesHaveBeenActivated:(bool)arg1;
- (void)setToken:(unsigned long long)arg1 forUserID:(unsigned int)arg2;
- (void)setUserContext:(id)arg1;
- (void)start;
- (id)subscriberForSourceDeviceUUID:(id)arg1;
- (id)subscribersForClientIdentifier:(id)arg1;
- (unsigned long long)tokenForSourceDeviceUUID:(id)arg1;
- (id)userContext;

@end
