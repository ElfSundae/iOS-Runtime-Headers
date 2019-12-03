/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, IDSServiceDelegate> {
    HMDAccountRegistry * _accountRegistry;
    HMFTimer * _deviceHealthTimer;
    NSMapTable * _devices;
    <HMFLocking> * _lock;
    HMFNetMonitor * _netMonitor;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _reachable;
    IDSService * _service;
    bool  _started;
}

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMFTimer *deviceHealthTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFNetMonitor *netMonitor;
@property (getter=isReachable, readonly) bool reachable;
@property (nonatomic, readonly) IDSService *service;
@property (getter=isStarted, readonly) bool started;
@property (readonly) Class superclass;
@property (readonly) NSArray *unreachableDevices;

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_deviceInformationForDevice:(id)arg1;
- (void)_handleGlobalReachabilityChange;
- (void)_sendPingToDevice:(id)arg1;
- (void)_startActivelyMonitoringDevice:(id)arg1;
- (id)_startMonitoringDevice:(id)arg1;
- (void)_stopActivelyMonitoringDevice:(id)arg1;
- (id)accountRegistry;
- (void)confirmDevice:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)deviceHealthTimer;
- (id)devices;
- (id)dumpState;
- (void)handleAccountRemoved:(id)arg1;
- (void)handleAddedDeviceInformation:(id)arg1;
- (void)handleCurrentDeviceUpdate:(id)arg1;
- (void)handleDeviceRemovedFromAccount:(id)arg1;
- (void)handleRemovedDeviceInformation:(id)arg1;
- (id)init;
- (id)initWithAccountRegistry:(id)arg1;
- (bool)isReachable;
- (bool)isStarted;
- (id)netMonitor;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)notifyDeviceReachabilityChange:(bool)arg1 forDevice:(id)arg2;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)setReachable:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (void)start;
- (void)startMonitoringDevice:(id)arg1;
- (void)stopMonitoringDevice:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)unreachableDevices;

@end
