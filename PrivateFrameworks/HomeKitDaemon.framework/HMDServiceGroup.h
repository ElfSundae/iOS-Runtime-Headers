/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDServiceGroup : NSObject <HMMessageReceiver, NSSecureCoding> {
    HMDHome *_home;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSMutableArray *_services;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleAddServiceRequest:(id)arg1;
- (void)_handleRemoveServiceRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_registerForMessages;
- (id)assistantUniqueIdentifier;
- (void)configure:(id)arg1 queue:(id)arg2;
- (BOOL)containsAccessoryWithUUID:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupServicesForReplacementAccessory:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (void)removeService:(id)arg1;
- (void)removeServicesForAccessory:(id)arg1;
- (id)services;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)url;
- (id)uuid;
- (id)workQueue;

@end
