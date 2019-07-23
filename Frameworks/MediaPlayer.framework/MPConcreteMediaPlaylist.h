/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    void *_clusterPlaylist;
    MPMediaQuery *_itemsQuery;
    NSMutableDictionary *_properties;
}

- (void).cxx_destruct;
- (BOOL)_allowsEditing;
- (void)_updateLibraryForPlaylistEdit:(id)arg1;
- (void)addItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)addItemWithProductID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addItems:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)addMediaItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingGeniusClusterItems;
- (BOOL)existsInLibrary;
- (id)geniusClusterItemsWithCount:(unsigned int)arg1 error:(id*)arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (id)itemsQuery;
- (id)mediaLibrary;
- (unsigned int)mediaTypes;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 completionBlock:(id /* block */)arg3;
- (id)multiverseIdentifier;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)removeAllItems;
- (void)removeFirstItem;
- (void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)representativeItem;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
