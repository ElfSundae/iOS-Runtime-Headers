/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATIDSService : ATMessageLinkListener <ATSocketDelegate, IDSServiceDelegate> {
    ATIDSConnectionInfo *_connectionInfo;
    NSMutableArray *_listeners;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _running;
    IDSService *_service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (int)openSocketPriorityFromATPendingChangePriority:(int)arg1;

- (void).cxx_destruct;
- (void)_cancelPendingConnectionRequests;
- (void)_connect;
- (id)_messageTypeToString:(int)arg1;
- (void)_scheduleConnectWithPriority:(int)arg1;
- (void)_scheduleReconnect;
- (void)_sendWakeup;
- (void)addListener:(id)arg1;
- (id)deviceForId:(id)arg1;
- (BOOL)hasPairedDevice;
- (id)initWithServiceName:(id)arg1;
- (id)pairedDevice;
- (void)removeListener:(id)arg1;
- (void)requestConnectionToPairedDeviceWithPriority:(int)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setPreferWifi:(BOOL)arg1;
- (void)socket:(id)arg1 hasDataAvailable:(const char *)arg2 length:(long)arg3;
- (void)socketDidClose:(id)arg1;
- (BOOL)start;
- (void)stop;

@end
