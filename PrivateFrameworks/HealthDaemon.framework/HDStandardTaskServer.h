/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStandardTaskServer : NSObject <HDTaskServer, HKUnitTestingTaskServerInterface> {
    HDXPCClient * _client;
    <HDTaskServerDelegate> * _delegate;
    HDProfile * _profile;
    NSUUID * _taskUUID;
}

@property (nonatomic, readonly) HDXPCClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDTaskServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *taskUUID;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)client;
- (void)connectionInvalidated;
- (id)delegate;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)profile;
- (id)remoteInterface;
- (void)remote_unitTesting_createTaskServerNoOpWithCompletion:(id /* block */)arg1;
- (id)taskUUID;

@end
