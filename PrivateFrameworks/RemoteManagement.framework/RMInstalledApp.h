/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMInstalledApp : RMUniquedManagedObject <RMUniquelySerializableManagedObject>

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) RMUserDeviceState *userDeviceState;

+ (id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)createOrReturnInstalledAppWithBundleIdentifier:(id)arg1 userDeviceState:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)delete;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
