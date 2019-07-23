/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMBlueprintConfiguration : NSManagedObject <RMSyncableSubObject, RMUniquelySerializableManagedObject>

@property (nonatomic, retain) RMBlueprint *blueprint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSData *payloadPlist;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;

- (void)delete;
- (id)dictionaryRepresentation;
- (id)syncableRootObject;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
