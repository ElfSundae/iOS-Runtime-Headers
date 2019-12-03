/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMAccount : NSObject <REMExternalSyncMetadataProviding, REMObjectIDProviding> {
    REMAccountCapabilities * _capabilities;
    bool  _markedForRemoval;
    REMAccountStorage * _storage;
    REMStore * _store;
}

@property (nonatomic, retain) REMAccountCapabilities *capabilities;
@property (nonatomic, readonly) bool daAllowsCalendarAddDeleteModify;
@property (nonatomic, readonly) NSString *daConstraintsDescriptionPath;
@property (nonatomic, readonly) NSString *daPushKey;
@property (nonatomic, readonly) bool daSupportsPhoneNumbers;
@property (nonatomic, readonly) bool daSupportsSharedCalendars;
@property (nonatomic, readonly) NSString *daSyncToken;
@property (nonatomic, readonly) bool daWasMigrated;
@property (nonatomic, readonly) bool didChooseToMigrate;
@property (nonatomic, readonly) bool didFinishMigration;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, readonly) NSString *externalModificationTag;
@property (nonatomic, readonly) REMAccountGroupContext *groupContext;
@property (nonatomic, readonly) bool inactive;
@property (nonatomic, readonly) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (nonatomic, readonly) NSOrderedSet *listIDsOrdering;
@property (nonatomic, readonly) NSSet *listIDsToUndelete;
@property (nonatomic, readonly) bool listsDADisplayOrderChanged;
@property (nonatomic) bool markedForRemoval;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, readonly, copy) REMAccountStorage *storage;
@property (nonatomic, retain) REMStore *store;
@property (nonatomic, readonly) bool supportsSharingLists;
@property (nonatomic, readonly) long long type;

+ (id)_accountTypeMaskWithBitMask:(long long)arg1;
+ (id)cdEntityName;
+ (id)localAccountID;
+ (id)localInternalAccountID;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (bool)canCopyReminderLosslesslyToAccount:(id)arg1;
- (id)capabilities;
- (bool)daSupportsPhoneNumbers;
- (id)debugDescription;
- (id)description;
- (id)externalIdentifierForMarkedForDeletionObject;
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchListsIncludingSpecialContainersWithError:(id*)arg1;
- (id)fetchListsWithError:(id*)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)groupContext;
- (unsigned long long)hash;
- (id)initWithStore:(id)arg1 storage:(id)arg2;
- (bool)isConsideredEmptyWithResultPtr:(bool*)arg1 withError:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)listIDsOrdering;
- (bool)markedForRemoval;
- (id)remObjectID;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setMarkedForRemoval:(bool)arg1;
- (void)setStore:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)storage;
- (id)store;
- (bool)supportsSharingLists;
- (id)valueForUndefinedKey:(id)arg1;

@end
