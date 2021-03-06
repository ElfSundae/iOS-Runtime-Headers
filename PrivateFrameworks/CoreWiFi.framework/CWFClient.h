/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFClient : NSObject <CWFXPCEventProxyDelegate> {
    NSXPCConnection * _XPCConnection;
    long long  _XPCServiceType;
    bool  _activated;
    SFAuthorization * _authorization;
    bool  _invalidated;
    NSMutableDictionary * _mutableActivityMap;
    NSMutableDictionary * _mutableEventCallbackMap;
    NSMutableSet * _mutableEventIDs;
    NSObject<OS_dispatch_queue> * _mutex;
}

@property (nonatomic, readonly) NSXPCConnection *XPCConnection;
@property (readonly) long long XPCServiceType;
@property bool activated;
@property (copy) SFAuthorization *authorization;
@property bool invalidated;
@property (copy) id /* block */ invalidationHandler;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (id)DNSServerAddresses;
- (id)IPv4Addresses;
- (id)IPv4InterfaceName;
- (id)IPv4RouterAddress;
- (id)IPv4ServiceID;
- (id)IPv4ServiceName;
- (id)IPv6Addresses;
- (id)IPv6InterfaceName;
- (id)IPv6RouterAddress;
- (id)IPv6ServiceID;
- (id)IPv6ServiceName;
- (id)XPCConnection;
- (long long)XPCServiceType;
- (void)activate;
- (bool)activated;
- (id)activities;
- (bool)addKnownNetworkProfile:(id)arg1 error:(id*)arg2;
- (id)authorization;
- (bool)beginActivity:(id)arg1 error:(id*)arg2;
- (bool)cancelRequestWithUUID:(id)arg1 error:(id*)arg2;
- (void)clearAllEventHandlers;
- (void)dealloc;
- (id)deviceUUID;
- (void)endActivityWithUUID:(id)arg1;
- (void)endAllActivities;
- (id)eventIDs;
- (id)init;
- (id)initWithXPCServiceType:(long long)arg1;
- (id)interfaceNames;
- (id)interfaceWithName:(id)arg1;
- (void)invalidate;
- (bool)invalidated;
- (id /* block */)invalidationHandler;
- (id)knownNetworkProfileMatchingNetworkProfile:(id)arg1;
- (id)knownNetworkProfileMatchingScanResult:(id)arg1;
- (id)knownNetworkProfilesWithProperties:(id)arg1;
- (id)mainInterface;
- (void)performActivity:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)proxy:(id)arg1 receivedEvent:(id)arg2;
- (unsigned int)reachabilityFlags;
- (bool)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 error:(id*)arg3;
- (void)setActivated:(bool)arg1;
- (void)setAuthorization:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1 matching:(id)arg2;
- (void)setInvalidated:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTargetQueue:(id)arg1;
- (bool)setThermalIndex:(long long)arg1 error:(id*)arg2;
- (bool)startMonitoringEvent:(id)arg1 error:(id*)arg2;
- (void)stopMonitoringAllEvents;
- (void)stopMonitoringEvent:(id)arg1;
- (id)systemActivities;
- (id)systemEventIDs;
- (id)targetQueue;
- (long long)thermalIndex;
- (bool)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 error:(id*)arg3;
- (id)virtualInterfaceNames;

@end
