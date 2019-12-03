/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteContext : NSObject <ICLegacyContext> {
    AccountUtilities * _accountUtilities;
    bool  _hasPriorityInSaveConflicts;
    bool  _inMigrator;
    bool  _indexInBatches;
    bool  _isMainContext;
    NoteAccountObject * _localAccount;
    NoteStoreObject * _localStore;
    bool  _logChanges;
    NSManagedObjectContext * _managedObjectContext;
    ICManagedObjectContextUpdater * _mocUpdater;
    NSNumber * _nextId;
    NSManagedObjectContext * _nextIdContext;
    CPExclusiveLock * _nextIdLock;
    NSMutableDictionary * _notePropertyObjectsRealized;
    unsigned long long  _notificationCount;
    CPExclusiveLock * _objectCreationLock;
    bool  _usePrivateQueue;
}

@property (nonatomic, retain) AccountUtilities *accountUtilities;
@property (nonatomic) bool isMainContext;
@property (nonatomic, readonly, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) ICManagedObjectContextUpdater *mocUpdater;
@property (nonatomic) bool usePrivateQueue;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (id)allVisibleNotesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(bool)arg2 context:(id)arg3;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(bool)arg2 context:(id)arg3 fetchLimit:(unsigned long long)arg4;
+ (void)clearTestsNotesRootPath;
+ (bool)databaseIsCorrupt:(id)arg1;
+ (id)defaultNotesSortDescriptors;
+ (id)fileProtectionOption;
+ (id)fileURLProtectionOption;
+ (id)generateGUID;
+ (id)managedObjectModel;
+ (id)newFetchRequestForNotes;
+ (id)newLegacyContext;
+ (id)newManagedObjectContext;
+ (id)newlyAddedAttachmentInContext:(id)arg1;
+ (id)pathForIndex;
+ (id)pathForPersistentStore;
+ (id)persistentStoreCoordinator;
+ (void)removeConflictingSqliteAndIdxFiles;
+ (void)removeSqliteAndIdxFiles;
+ (id)searchIndexerDataSource;
+ (void)setTestsNotesRootPath:(id)arg1;
+ (bool)shouldLogIndexing;
+ (id)storeOptions;
+ (id)urlForPersistentStore;
+ (id)visibleNotesPredicate;

- (void).cxx_destruct;
- (void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2;
- (id)_notePropertyObjectForKey:(id)arg1;
- (id)accountForAccountId:(id)arg1;
- (id)accountUtilities;
- (id)allAccounts;
- (id)allAccountsAsFaults:(bool)arg1 prefechedRelationshipKeyPaths:(id)arg2;
- (id)allNotes;
- (id)allNotesInCollection:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)allStores;
- (id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1;
- (id)allVisibleNotes;
- (id)allVisibleNotesForAccountWithObjectID:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1 sorted:(bool)arg2;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(bool)arg2;
- (void)batchFaultNotes:(id)arg1;
- (void)cleanUpLocks;
- (void)clearCaches;
- (id)collectionForInfo:(id)arg1;
- (id)collectionForObjectID:(id)arg1;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (unsigned long long)countOfNotes;
- (unsigned long long)countOfNotesInCollection:(id)arg1;
- (unsigned long long)countOfNotesMatchingPredicate:(id)arg1;
- (unsigned long long)countOfStores;
- (unsigned long long)countOfVisibleNotes;
- (unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
- (unsigned long long)countOfVisibleNotesInCollection:(id)arg1;
- (unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (void)dealloc;
- (id)defaultStoreForNewNote;
- (bool)deleteAccount:(id)arg1;
- (void)deleteChanges:(id)arg1;
- (void)deleteNote:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (bool)deleteStore:(id)arg1;
- (void)enableChangeLogging:(bool)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)faultedInStoresForAccounts:(id)arg1;
- (bool)forceDeleteAccount:(id)arg1;
- (void)forceSetUpUniqueObjects;
- (id)getNextIdObject;
- (void)handleMigration;
- (bool)hasMultipleEnabledStores;
- (id)init;
- (id)initForMainContext;
- (id)initForMigrator;
- (id)initWithAccountUtilities:(id)arg1;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(bool)arg2;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(bool)arg2 isMainContext:(bool)arg3 usePrivateQueue:(bool)arg4;
- (id)initWithPrivateQueue;
- (void)invalidate;
- (bool)isMainContext;
- (id)liveNotesNeedingBodiesPredicate;
- (id)localAccount;
- (id)localStore;
- (id)managedObjectContext;
- (void)managedObjectContextWillSaveNotification:(id)arg1;
- (id)mocUpdater;
- (id)mostRecentlyModifiedNoteInCollection:(id)arg1;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2 performFetch:(bool)arg3;
- (id)newFetchRequestForNotes;
- (id)newlyAddedAccount;
- (id)newlyAddedAttachment;
- (id)newlyAddedNote;
- (id)newlyAddedNoteWithGUID:(id)arg1;
- (id)newlyAddedStore;
- (id)nextIndex;
- (bool)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (id)noteForObjectID:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (id)propertyValueForKey:(id)arg1;
- (void)receiveDarwinNotificationWithChangeLogging:(bool)arg1;
- (void)reset;
- (void)resetNotificationCount;
- (bool)save:(id*)arg1;
- (bool)saveOutsideApp:(id*)arg1;
- (bool)saveSilently:(id*)arg1;
- (void)setAccountUtilities:(id)arg1;
- (void)setHasPriorityInSaveConflicts:(bool)arg1;
- (void)setIsMainContext:(bool)arg1;
- (void)setMocUpdater:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (bool)setUpCoreDataStack;
- (bool)setUpLastIndexTid;
- (bool)setUpLocalAccountAndStore;
- (void)setUpUniqueObjects;
- (void)setUsePrivateQueue:(bool)arg1;
- (bool)shouldDisableLocalStore;
- (bool)shouldObserveDarwinNotifications;
- (void)sortNotes:(id)arg1;
- (id)storeForObjectID:(id)arg1;
- (void)tearDownCoreDataStack;
- (void)trackChanges:(id)arg1;
- (void)updateForRecentChanges;
- (bool)usePrivateQueue;
- (id)visibleNoteForObjectID:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNotesPredicate;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)mainContextObjectFromObject:(id)arg1;
+ (id)sharedContext;

@end
