/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableIndexSet : NSIndexSet {
    void * _reserved;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)_addRangeToArray:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_ensureRangeCapacity:(unsigned int)arg1;
- (void)_incrementBy:(unsigned int)arg1 startingAtIndex:(unsigned int)arg2;
- (void)_insertRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inArrayAtIndex:(unsigned int)arg2;
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned int)arg1;
- (void)_removeAndDecrementBy:(unsigned int)arg1 startingAtIndex:(unsigned int)arg2;
- (void)_removeRangeInArrayAtIndex:(unsigned int)arg1;
- (void)_replaceRangeInArrayAtIndex:(unsigned int)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addIndex:(unsigned int)arg1;
- (void)addIndexes:(id)arg1;
- (void)addIndexes:(const unsigned int*)arg1 count:(unsigned int)arg2;
- (void)addIndexesFromIndexSet:(id)arg1;
- (void)addIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (Class)classForCoder;
- (void)removeAllIndexes;
- (void)removeIndex:(unsigned int)arg1;
- (void)removeIndexes:(id)arg1;
- (void)removeIndexesFromIndexSet:(id)arg1;
- (void)removeIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 passingTest:(id /* block */)arg3;
- (void)removeIndexesPassingTest:(id /* block */)arg1;
- (void)removeIndexesWithOptions:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (void)shiftIndexesStartingAtIndex:(unsigned int)arg1 by:(int)arg2;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

- (void)cat_moveIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)cat_shiftAndAddIndex:(unsigned int)arg1;
- (void)cat_shiftAndAddIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)cat_shiftAndRemoveIndex:(unsigned int)arg1;
- (void)cat_shiftAndRemoveIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void)__ck_intersectIndexes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (void)mf_intersectIndexes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)tsu_intersectionWithIndexSet:(id)arg1;
- (void)tsu_moveIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toOffset:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void)pl_adjustIndexesForDeletions:(id)arg1;
- (void)pl_adjustIndexesForInsertions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)px_adjustIndexesForDeletions:(id)arg1;
- (void)px_adjustIndexesForInsertions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (void)tsu_intersectionWithIndexSet:(id)arg1;
- (void)tsu_moveIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toOffset:(unsigned int)arg2;

@end
