/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSyncManager : NSObject <SYStoreDelegate> {
    NSMutableArray *_bookmarks;
    NSMutableArray *_bookmarksForDisplay;
    NSMutableDictionary *_bookmarksMap;
    NSMutableArray *_history;
    NSMutableDictionary *_historyMap;
    BOOL _inUpdate;
    NSMutableArray *_pins;
    NSMutableDictionary *_pinsMap;
    NSObject<OS_dispatch_queue> *_saveQueue;
    SYStore *_store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_bookmarkIsDisplayable:(id)arg1;

- (void).cxx_destruct;
- (void)_addBookmark:(id)arg1;
- (void)_addHistoryItem:(id)arg1;
- (void)_addPin:(id)arg1;
- (void)_findDisplayableBookmarks;
- (void)_notifyObservers;
- (void)_removeBookmark:(id)arg1;
- (void)_removeHistoryItem:(id)arg1;
- (void)_removePin:(id)arg1;
- (void)_updateBookmark:(id)arg1;
- (void)_updateFromDisk;
- (void)_updateHistoryItem:(id)arg1;
- (void)_updatePin:(id)arg1;
- (id)_wrapBookmark:(id)arg1;
- (id)_wrapHistoryItem:(id)arg1;
- (id)_wrapPin:(id)arg1;
- (void)addBookmark:(id)arg1 transaction:(id)arg2;
- (void)addHistoryItem:(id)arg1 transaction:(id)arg2;
- (void)addPin:(id)arg1 transaction:(id)arg2;
- (id)bookmarks;
- (void)completedPreparingSync;
- (void)completedSync;
- (id)displayableBookmarks;
- (id)history;
- (id)init;
- (void)notifyObservers;
- (id)pins;
- (id)readBookmarks;
- (id)readHistory;
- (id)readPins;
- (void)removeBookmark:(id)arg1 transaction:(id)arg2;
- (void)removeHistoryItem:(id)arg1 transaction:(id)arg2;
- (void)removePin:(id)arg1 transaction:(id)arg2;
- (void)setNeedsFullSync;
- (void)syncStore:(id)arg1 objectAdded:(id)arg2;
- (void)syncStore:(id)arg1 objectDeleted:(id)arg2;
- (void)syncStore:(id)arg1 objectUpdated:(id)arg2;
- (id)syncStoreAllObjects:(id)arg1;
- (void)syncStoreAllObjectsDeleted:(id)arg1;
- (void)syncStoreDidCompleteFullSync:(id)arg1;
- (void)syncStoreDidUpdate:(id)arg1;
- (void)syncStoreEnqueuedAllFullSyncMessages:(id)arg1 context:(id)arg2;
- (void)syncStoreWillUpdate:(id)arg1;
- (void)syncStoreWillUpdate:(id)arg1 objectCount:(unsigned int)arg2;
- (void)transaction:(id /* block */)arg1;
- (void)updateBookmark:(id)arg1 transaction:(id)arg2;
- (void)updateHistoryItem:(id)arg1 transaction:(id)arg2;
- (void)updatePin:(id)arg1 transaction:(id)arg2;
- (void)updatedBookmark:(id)arg1;
- (void)updatedHistoryItem:(id)arg1;
- (void)updatedPin:(id)arg1;
- (void)writeBookmarks:(id)arg1;
- (void)writeHistory:(id)arg1;
- (void)writePins:(id)arg1;

@end
