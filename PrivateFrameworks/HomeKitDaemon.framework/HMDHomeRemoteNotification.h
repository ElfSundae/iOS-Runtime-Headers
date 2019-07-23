/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeRemoteNotification : NSObject <HMFLogging> {
    NSString * _accessoryUUID;
    NSString * _characteristicInstanceID;
    NSString * _serviceInstanceID;
    NSString * _updateIdentifier;
}

@property (nonatomic, readonly) NSString *accessoryUUID;
@property (nonatomic, readonly) NSString *characteristicInstanceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *serviceInstanceID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *updateIdentifier;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)characteristicInstanceID;
- (id)description;
- (id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 updateIdentifier:(id)arg4;
- (id)logIdentifier;
- (BOOL)matchesAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3;
- (BOOL)matchesCharacterisitic:(id)arg1;
- (id)serviceInstanceID;
- (id)updateIdentifier;

@end
