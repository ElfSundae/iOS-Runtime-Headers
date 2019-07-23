/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryProfile : NSObject <HMDBulletinIdentifiers, HMFDumpState, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    HMDAccessory * _accessory;
    NSArray * _exposedServices;
    NSArray * _filteredServices;
    NSString * _logID;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *exposedServices;
@property (nonatomic, readonly) NSArray *filteredServices;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_encodeWithCoder:(id)arg1;
- (id)accessory;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)exposedServices;
- (id)filteredServices;
- (id)initWithAccessory:(id)arg1 uuid:(id)arg2 filteredServices:(id)arg3 exposedServices:(id)arg4 msgDispatcher:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)logID;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)registerForMessages;
- (void)setMsgDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
