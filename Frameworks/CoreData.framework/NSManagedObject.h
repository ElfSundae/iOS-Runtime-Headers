/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObject : NSObject {
    id _cd_entity;
    unsigned long _cd_extraFlags;
    unsigned long _cd_lockingInfo;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    id _cd_observationInfo;
    id _cd_queueReference;
    id _cd_rawData;
    int _cd_rc;
    id *_cd_snapshots;
    unsigned long _cd_stateFlags;
}

@property (getter=isDeleted, nonatomic, readonly) BOOL deleted;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (getter=isFault, nonatomic, readonly) BOOL fault;
@property (nonatomic, readonly) unsigned int faultingState;
@property (nonatomic, readonly) BOOL hasChanges;
@property (nonatomic, readonly) BOOL hasPersistentChangedValues;
@property (getter=isInserted, nonatomic, readonly) BOOL inserted;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (getter=isUpdated, nonatomic, readonly) BOOL updated;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (struct { int x1; void *x2; unsigned long x3; unsigned char x4; unsigned int x5; void *x6; id x7; struct _moFactoryClassFlags { unsigned int x_8_1_1 : 1; unsigned int x_8_1_2 : 1; unsigned int x_8_1_3 : 1; unsigned int x_8_1_4 : 1; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; unsigned int x_8_1_7 : 26; } x8; }*)_PFMOClassFactoryData;
+ (id)_PFPlaceHolderSingleton;
+ (id)_PFPlaceHolderSingleton_core;
+ (void)_entityDeallocated;
+ (BOOL)_hasOverriddenAwake;
+ (void)_initializeAccessorStubs;
+ (void)_initializePrimitiveAccessorStubs;
+ (BOOL)_isGeneratedClass;
+ (BOOL)_isGeneratedClass_1;
+ (void)_release_1;
+ (id)_retain_1;
+ (char *)_transientPropertiesChangesMask__;
+ (BOOL)_useFastValidationMethod;
+ (id)alloc;
+ (unsigned int)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned int)arg3;
+ (id)allocWithEntity:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)allocWithZone_10_4:(struct _NSZone { }*)arg1;
+ (id)alloc_10_4;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned int)arg3;
+ (Class)classForEntity:(id)arg1;
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+ (void)initialize;
+ (void)release;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)retain;

- (id)_allProperties__;
- (int)_batch_release__;
- (id)_calculateDiffsBetweenOrderedSet:(id)arg1 andOrderedSet:(id)arg2;
- (void)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id*)arg2;
- (id)_changedTransientProperties__;
- (id)_changedValuesForCurrentEvent;
- (void)_clearAllChanges__;
- (void)_clearPendingChanges__;
- (void)_clearRawPropertiesWithHint:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_clearUnprocessedChanges__;
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned int)arg1 newValue:(id)arg2;
- (BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2;
- (id)_descriptionValues;
- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;
- (void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(unsigned int)arg3;
- (id)_faultHandler__;
- (id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2;
- (id)_generateErrorWithCode:(int)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5;
- (id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (void)_genericUpdateFromSnapshot:(id)arg1;
- (id)_genericValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (BOOL)_hasAnyObservers__;
- (BOOL)_hasPendingChanges;
- (BOOL)_hasRetainedStoreResources__;
- (BOOL)_hasUnprocessedChanges__;
- (id)_implicitObservationInfo;
- (void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(unsigned int)arg3;
- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;
- (BOOL)_isDeallocating;
- (BOOL)_isKindOfEntity:(id)arg1;
- (BOOL)_isPendingDeletion__;
- (BOOL)_isPendingInsertion__;
- (BOOL)_isPendingUpdate__;
- (BOOL)_isSuppressingChangeNotifications__;
- (BOOL)_isSuppressingKVO__;
- (BOOL)_isUnprocessedDeletion__;
- (BOOL)_isUnprocessedInsertion__;
- (BOOL)_isUnprocessedUpdate__;
- (BOOL)_isValidRelationshipDestination__;
- (id)_lastSnapshot__;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(unsigned int)arg3 onSet:(id)arg4;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4;
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;
- (id)_newChangedValuesForRefresh__;
- (id)_newCommittedSnapshotValues;
- (id)_newNestedSaveChangedValuesForParent:(id)arg1;
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;
- (id)_newPropertiesForRetainedTypes:(unsigned int*)arg1 andCopiedTypes:(unsigned int*)arg2 preserveFaults:(BOOL)arg3;
- (id)_newSetFromSet:(id)arg1 byApplyingDiffs:(id)arg2;
- (id)_newSnapshotForUndo__;
- (void)_nilOutReservedCurrentEventSnapshot__;
- (id)_orderKeysForRelationshipWithName__:(id)arg1;
- (id)_originalSnapshot__;
- (id)_persistentProperties__;
- (void)_prepropagateDeleteForMerge;
- (void)_propagateDelete;
- (void)_propagateDelete:(unsigned int)arg1;
- (id)_referenceQueue__;
- (id)_reservedCurrentEventSnapshot;
- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long)arg3 flags:(long)arg4;
- (void)_setHasRetainedStoreResources__:(BOOL)arg1;
- (void)_setLastSnapshot__:(id)arg1;
- (void)_setObjectID__:(id)arg1;
- (void)_setOriginalSnapshot__:(id)arg1;
- (void)_setPendingDeletion__:(BOOL)arg1;
- (void)_setPendingInsertion__:(BOOL)arg1;
- (void)_setPendingUpdate__:(BOOL)arg1;
- (void)_setSuppressingChangeNotifications__:(BOOL)arg1;
- (void)_setSuppressingKVO__:(BOOL)arg1;
- (void)_setUnprocessedDeletion__:(BOOL)arg1;
- (void)_setUnprocessedInsertion__:(BOOL)arg1;
- (void)_setUnprocessedUpdate__:(BOOL)arg1;
- (void)_setVersionReference__:(unsigned int)arg1;
- (unsigned int)_stateFlags;
- (id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2;
- (id)_transientProperties__;
- (BOOL)_tryRetain;
- (void)_updateFromRefreshSnapshot:(id)arg1 includingTransients:(BOOL)arg2;
- (void)_updateFromSnapshot:(id)arg1;
- (void)_updateFromUndoSnapshot:(id)arg1;
- (BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 error:(id*)arg3;
- (void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4;
- (BOOL)_validateForSave:(id*)arg1;
- (BOOL)_validatePropertiesWithError:(id*)arg1;
- (BOOL)_validateValue:(id*)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(unsigned int)arg4 error:(id*)arg5;
- (unsigned int)_versionReference__;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (id)changedValues;
- (id)changedValuesForCurrentEvent;
- (id)committedValuesForKeys:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didAccessValueForKey:(id)arg1;
- (void)didChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)didFireFault;
- (void)didRefresh:(BOOL)arg1;
- (void)didSave;
- (void)didTurnIntoFault;
- (void)diffOrderedSets:(id)arg1 :(id)arg2 :(id*)arg3 :(id*)arg4 :(id*)arg5 :(id*)arg6 :(id*)arg7;
- (id)entity;
- (unsigned int)faultingState;
- (void)finalize;
- (BOOL)hasChanges;
- (BOOL)hasFaultForRelationshipNamed:(id)arg1;
- (BOOL)hasPersistentChangedValues;
- (unsigned int)hash;
- (BOOL)implementsSelector:(SEL)arg1;
- (id)init;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (BOOL)isDeleted;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFault;
- (BOOL)isInserted;
- (BOOL)isUpdated;
- (id)managedObjectContext;
- (int (*)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)objectID;
- (id)objectIDsForRelationshipNamed:(id)arg1;
- (void*)observationInfo;
- (void)prepareForDeletion;
- (id)primitiveValueForKey:(id)arg1;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (BOOL)validateForDelete:(id*)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)wasForgotten;
- (void)willAccessValueForKey:(id)arg1;
- (void)willChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)willFireFault;
- (void)willRefresh:(BOOL)arg1;
- (void)willSave;
- (void)willTurnIntoFault;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)_obsoleteAttributes;
- (id)_removeObsoleteKeysFromDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValuesWithObject:(id)arg1;
- (BOOL)validateRequiredAttributesForObject:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition

+ (BOOL)isTracked;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)objectFromObjectID:(id)arg1 context:(id)arg2;

- (void)postNotificationOnMainThreadWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)uri;

@end
