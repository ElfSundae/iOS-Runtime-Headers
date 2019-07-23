/* Generated by RuntimeBrowser.
 */

@protocol MFLibrarySearchableIndexDataSource <NSObject>

@required

- (NSArray *)searchableIndex:(MFLibrarySearchableIndex *)arg1 assignTransaction:(long long)arg2 updates:(MFLibrarySearchableIndexUpdates *)arg3;
- (void)searchableIndex:(MFLibrarySearchableIndex *)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (MFLibrarySearchableIndexUpdates *)updatesForSearchableIndex:(MFLibrarySearchableIndex *)arg1 count:(unsigned int)arg2;
- (unsigned int)verifyRepresentativeSampleForSearchableIndex:(MFLibrarySearchableIndex *)arg1;

@end
