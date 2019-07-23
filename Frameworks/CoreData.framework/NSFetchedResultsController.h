/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFetchedResultsController : NSObject {
    void * _cache;
    NSString * _cacheName;
    id  _delegate;
    NSFetchRequest * _fetchRequest;
    id  _fetchedObjects;
    struct _fetchResultsControllerFlags { 
        unsigned int _sendObjectChangeNotifications : 1; 
        unsigned int _sendSectionChangeNotifications : 1; 
        unsigned int _sendDidChangeContentNotifications : 1; 
        unsigned int _sendWillChangeContentNotifications : 1; 
        unsigned int _sendSectionIndexTitleForSectionName : 1; 
        unsigned int _changedResultsSinceLastSave : 1; 
        unsigned int _hasMutableFetchedResults : 1; 
        unsigned int _hasBatchedArrayResults : 1; 
        unsigned int _hasSections : 1; 
        unsigned int _usesNonpersistedProperties : 1; 
        unsigned int _includesSubentities : 1; 
        unsigned int _reservedFlags : 21; 
    }  _flags;
    NSManagedObjectContext * _managedObjectContext;
    id  _sectionIndexTitles;
    id  _sectionIndexTitlesSections;
    NSString * _sectionNameKey;
    NSString * _sectionNameKeyPath;
    id  _sections;
    id  _sectionsByName;
    id  _sortKeys;
}

@property (nonatomic, readonly) NSString *cacheName;
@property (nonatomic) <NSFetchedResultsControllerDelegate> *delegate;
@property (nonatomic, readonly) NSFetchRequest *fetchRequest;
@property (nonatomic, readonly) NSArray *fetchedObjects;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSArray *sectionIndexTitles;
@property (nonatomic, readonly) NSString *sectionNameKeyPath;
@property (nonatomic, readonly) NSArray *sections;

+ (id)_CoreDataSectionCachesPath;
+ (unsigned int)_insertIndexForObject:(id)arg1 inArray:(id)arg2 lowIdx:(int)arg3 highIdx:(int)arg4 sortDescriptors:(id)arg5;
+ (void)deleteCacheWithName:(id)arg1;
+ (void)initialize;

- (void)_appendAffectedStoreInfoToData:(id)arg1 adjustedOffset:(long long*)arg2;
- (BOOL)_computeSectionInfo:(id)arg1 error:(id*)arg2;
- (BOOL)_computeSectionInfoWithGroupBy:(id)arg1 error:(id*)arg2;
- (void)_core_managedObjectContextDidChange:(id)arg1;
- (id)_createNewSectionForObject:(id)arg1;
- (void)_dumpSectionInfo;
- (id)_fetchedObjects;
- (id)_fetchedObjectsArrayOfObjectIDs;
- (BOOL)_hasFetchedObjects;
- (unsigned int)_indexOfFetchedID:(id)arg1;
- (id)_indexPathForIndex:(unsigned int)arg1;
- (void)_insertObjectInFetchedObjects:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)_keyPathContainsNonPersistedProperties:(id)arg1;
- (void)_lowerMoveOperationsToUpdatesWithInsertedObjects:(id)arg1 deletedObjects:(id)arg2 updatedObjects:(id)arg3;
- (void)_makeMutableFetchedObjects;
- (void)_managedObjectContextDidChange:(id)arg1;
- (void)_managedObjectContextDidChangeObjectIDs:(id)arg1;
- (void)_managedObjectContextDidSave:(id)arg1;
- (BOOL)_objectInResults:(id)arg1;
- (void)_preprocessDeletedObjects:(id)arg1 deletesInfo:(id)arg2 sectionsWithDeletes:(id)arg3;
- (void)_preprocessInsertedObjects:(id)arg1 insertsInfo:(id)arg2 newSectionNames:(id)arg3;
- (void)_preprocessUpdatedObjects:(id)arg1 insertsInfo:(id)arg2 deletesInfo:(id)arg3 updatesInfo:(id)arg4 sectionsWithDeletes:(id)arg5 newSectionNames:(id)arg6 treatAsRefreshes:(id)arg7;
- (void)_recursivePerformBlockAndWait:(id /* block */)arg1 withContext:(id)arg2;
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned int)arg1;
- (id)_resolveSectionIndexTitleForSectionName:(id)arg1;
- (BOOL)_restoreCachedSectionInfo;
- (id)_sectionCachePath;
- (id)_sectionNameForObject:(id)arg1;
- (unsigned int)_sectionNumberForIndex:(unsigned int)arg1;
- (id)_sections;
- (void)_updateCachedStoreInfo;
- (BOOL)_updateFetchedObjectsWithDeleteChange:(id)arg1;
- (BOOL)_updateFetchedObjectsWithInsertChange:(id)arg1;
- (BOOL)_updateFetchedObjectsWithInsertedObjects:(id)arg1 deletedObjects:(id)arg2 updatedObjects:(id)arg3;
- (void)_updateSectionOffsetsStartingAtSection:(id)arg1;
- (id)cacheName;
- (void)dealloc;
- (id)delegate;
- (id)fetchRequest;
- (id)fetchedObjects;
- (id)indexPathForObject:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
- (id)managedObjectContext;
- (id)objectAtIndexPath:(id)arg1;
- (BOOL)performFetch:(id*)arg1;
- (int)sectionForSectionIndexTitle:(id)arg1 atIndex:(int)arg2;
- (id)sectionIndexTitleForSectionName:(id)arg1;
- (id)sectionIndexTitles;
- (id)sectionNameKeyPath;
- (id)sections;
- (void)setDelegate:(id)arg1;

@end
